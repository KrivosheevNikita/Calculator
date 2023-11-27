#ifndef SOLVING_EXPRESSION_H
#define SOLVING_EXPRESSION_H
#include <vector>
#include <string>

std::vector<std::string> parsing(std::string s);

std::vector<std::string> postfix_transformation(std::vector<std::string> expression);

bool check_parenthesis(std::string s);

std::string solving_expression(std::string s);

#endif
