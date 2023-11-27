#include "Calc.h"
using namespace System;
using namespace System::Windows::Forms;

int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles;
	Calc::MyForm calculator;
	Application::Run(% calculator);
}