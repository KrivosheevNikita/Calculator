#include "solving_expression.h"
#include <vector>
#include <string>
#include <stack>

std::vector<std::string> parsing(std::string s)
{
	std::vector<std::string> expression;

	if (s.size() != 0 && (s[0] == '*' || s[0] == '+' || s[0] == '/'))
		return { "Error" };
	for (int i = 0; i != s.size(); ++i)
	{

		// the input is unary minus
		if ((i == 0 && s[i] == '-') || (s[i] == '-' && s[i - 1] == '('))
		{
			expression.push_back("0");
			expression.push_back("-");
		}

		// the input is num
		else if (s[i] >= '0' && s[i] <= '9')
		{
			
			if (expression.size() != 0)
			{
				char ch = expression.back()[0];
				if (ch >= '0' && ch <= '9')
				{
					expression.back().push_back(s[i]);
				}

				else if (ch == ')')
				{
					expression.push_back("*");

					expression.push_back("");
					expression.back().push_back(s[i]);
				}

				else
				{
					if (i > 1 && i < expression.size() && (expression[i - 1] == "*" || expression[i - 1] == "-" || expression[i - 1] == "/" || expression[i - 1] == "+")
						&& (expression[i - 2] == "*" || expression[i - 2] == "-" || expression[i - 2] == "/" || expression[i - 2] == "+"))
					{
						return { "Error" };
					}
					expression.push_back("");
					expression.back().push_back(s[i]);
				}
			}

			else
			{
				expression.push_back("");
				expression.back().push_back(s[i]);
			}
		}

		// the input is point
		else if (s[i] == '.')
		{
			if (expression.size() != 0)
			{
				std::string last = expression.back();
				// check that the number has the right count of points
				if (std::count(last.begin(), last.end(), '.') > 0)
				{
					return { "Error" };
				}

				else if (last[0] < '0' || last[0] > '9')
				{
					return { "Error" };
				}

				else
				{
					expression.back().push_back(s[i]);
				}
			}

			else
			{
				return { "Error" };
			}
		}

		// the input is open parenthesis
		else if (s[i] == '(')
		{
			if (i != 0 && s[i - 1] == '.')
			{
				return { "Error" };
			}

			else if (i != 0 && s[i - 1] != '+' && s[i - 1] != '-' && s[i - 1] != '*' && s[i - 1] != '/' && s[i - 1] != '(')
			{
				expression.push_back("");
				expression.back().push_back('*');
			}

			expression.push_back("");
			expression.back().push_back(s[i]);
		}

		// the input is binary operation or closed parenthesis
		else
		{
			if (i != 0 && (s[i - 1] == '.' || s[i - 1] == '-' || s[i - 1] == '*' || s[i - 1] == '/' || s[i - 1] == '+' || s[i - 1] == '('))
			{
				return { "Error" };
			}

			expression.push_back("");
			expression.back().push_back(s[i]);
		}
	}

	// check that the expression doesn't end with an operation
	if (!expression.empty())
	{
		char lastCh = expression.back().back();
		if (lastCh == '.' || lastCh == '+' || lastCh == '*' || lastCh == '-' || lastCh == '/')
		{
			return { "Error" };
		}
	}

	// check the length of numbers
	for (auto& str : expression)
	{
		int count = 0;

	    for (char& ch : str)
		{
			if (ch == '.')
				break;
			++count;
		}

		if (count > 15)
			return { "Error" };
		count = 0;
	}
	return expression;
}

std::vector<std::string> postfix_transformation(std::vector<std::string> expression)
{
	// converting the expression to a postfix expression
	std::vector<std::string> postfix;
	std::stack<char> operations;

	for (auto& cur_obj : expression)
	{
		if (cur_obj == "+" || cur_obj == "-")
		{
			while (!operations.empty() && operations.top() != '(')
			{
				postfix.push_back(std::string(1, operations.top()));
				operations.pop();
			}
			operations.push(cur_obj[0]);
		}

		else if (cur_obj == "*" || cur_obj == "/")
		{
			while (!operations.empty() && operations.top() != '(' && operations.top() != '+' && operations.top() != '-')
			{
				postfix.push_back(std::string(1, operations.top()));
				operations.pop();
			}
			operations.push(cur_obj[0]);
		}

		else if (cur_obj == ")")
		{
			while (!operations.empty() && operations.top() != '(')
			{
				postfix.push_back(std::string(1, operations.top()));
				operations.pop();
			}
			operations.pop();
		}

		else if (cur_obj == "(")
		{
			operations.push(cur_obj[0]);
		}

		else
		{
			postfix.push_back(cur_obj);
		}
	}

	while (!operations.empty())
	{
		postfix.push_back(std::string(1, operations.top()));
		operations.pop();
	}
	return postfix;
}
bool check_parenthesis(std::string s)
{
	//check that the expression has a right count of parenthesis
	std::stack<char> st;
	for (char& ch : s)
	{
		if (ch == '(')
			st.push('(');

		else if (ch == ')')
		{
			if (!st.empty())
				st.pop();

			else
				return 0;
		}
	}
	return st.empty();
}

std::string solving_expression(std::string s)
{
	if (!check_parenthesis(s))
	{
		return "Error";
	}

	std::vector<std::string> expression = parsing(s);
	if (!expression.empty() && expression[0] == "Error")
		return "Error";
	std::vector<std::string> postfix = postfix_transformation(expression);
	std::stack<double> res;

	for (int i = 0; i != postfix.size(); ++i)
	{
		if (postfix[i] == "*")
		{
			double second_num = res.top();
			res.pop();
			double first_num = res.top();
			res.pop();
			res.push(second_num * first_num);
		}

		else if (postfix[i] == "+")
		{
			double second_num = res.top();
			res.pop();
			double first_num = res.top();
			res.pop();
			res.push(second_num + first_num);
		}

		else if (postfix[i] == "-")
		{
			double second_num = res.top();
			res.pop();
			double first_num = res.top();
			res.pop();
			res.push(first_num - second_num);
		}

		else if (postfix[i] == "/")
		{
			double second_num = res.top();
			res.pop();
			double first_num = res.top();
			res.pop();
			if (second_num == 0)
				return "Error";
			res.push(first_num / second_num);
		}

		else
		{
			res.push(std::stod(postfix[i]));
		}
	}
	std::string res_str = std::to_string(res.top());
	std::size_t decimalPointPos = res_str.find('.');

	if (decimalPointPos != std::string::npos)
	{
		res_str.erase(res_str.find_last_not_of('0') + 1, std::string::npos);
		if (res_str.back() == '.')
			res_str.pop_back();
	}

	if (res_str == "-0")
		res_str = "0";

	return res_str;
}