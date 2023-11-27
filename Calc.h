#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <vector>
#include "solving_expression.h"
namespace Calc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace System::Runtime::InteropServices;
	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::Button^ btn_8;
	private: System::Windows::Forms::Button^ btn_9;
	private: System::Windows::Forms::Button^ btn_mult;
	private: System::Windows::Forms::Button^ btn_minus;
	private: System::Windows::Forms::Button^ btn_6;
	private: System::Windows::Forms::Button^ btn_5;
	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_sum;
	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Button^ btn_equal;
	private: System::Windows::Forms::Button^ btn_point;
	private: System::Windows::Forms::Button^ btn_0;
	private: System::Windows::Forms::Button^ btn_div;
	private: System::Windows::Forms::Button^ btn_closed_par;
	private: System::Windows::Forms::Button^ btn_open_par;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::TextBox^ input;


	private: System::Windows::Forms::Button^ btn_del_one;
	private: System::Windows::Forms::TextBox^ res_expression;






	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_mult = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_sum = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->btn_point = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_div = (gcnew System::Windows::Forms::Button());
			this->btn_closed_par = (gcnew System::Windows::Forms::Button());
			this->btn_open_par = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->input = (gcnew System::Windows::Forms::TextBox());
			this->btn_del_one = (gcnew System::Windows::Forms::Button());
			this->res_expression = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(18)),
				static_cast<System::Int32>(static_cast<System::Byte>(18)));
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(358, 12);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(32, 32);
			this->button_exit->TabIndex = 0;
			this->button_exit->Text = L"X";
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &MyForm::button_exit_Click);
			// 
			// btn_7
			// 
			this->btn_7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_7->FlatAppearance->BorderSize = 0;
			this->btn_7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_7->ForeColor = System::Drawing::Color::Snow;
			this->btn_7->Location = System::Drawing::Point(12, 244);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(90, 66);
			this->btn_7->TabIndex = 7;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = false;
			this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::btn_7_Click);
			// 
			// btn_8
			// 
			this->btn_8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_8->FlatAppearance->BorderSize = 0;
			this->btn_8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_8->ForeColor = System::Drawing::Color::Snow;
			this->btn_8->Location = System::Drawing::Point(108, 244);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(90, 66);
			this->btn_8->TabIndex = 8;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = false;
			this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::btn_8_Click);
			// 
			// btn_9
			// 
			this->btn_9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_9->FlatAppearance->BorderSize = 0;
			this->btn_9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_9->ForeColor = System::Drawing::Color::Snow;
			this->btn_9->Location = System::Drawing::Point(204, 244);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(90, 66);
			this->btn_9->TabIndex = 9;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = false;
			this->btn_9->Click += gcnew System::EventHandler(this, &MyForm::btn_9_Click);
			// 
			// btn_mult
			// 
			this->btn_mult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btn_mult->FlatAppearance->BorderSize = 0;
			this->btn_mult->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_mult->ForeColor = System::Drawing::Color::Black;
			this->btn_mult->Location = System::Drawing::Point(300, 244);
			this->btn_mult->Name = L"btn_mult";
			this->btn_mult->Size = System::Drawing::Size(90, 66);
			this->btn_mult->TabIndex = 10;
			this->btn_mult->Text = L"x";
			this->btn_mult->UseVisualStyleBackColor = false;
			this->btn_mult->Click += gcnew System::EventHandler(this, &MyForm::btn_mult_Click);
			// 
			// btn_minus
			// 
			this->btn_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btn_minus->FlatAppearance->BorderSize = 0;
			this->btn_minus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->ForeColor = System::Drawing::Color::Black;
			this->btn_minus->Location = System::Drawing::Point(300, 316);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(90, 66);
			this->btn_minus->TabIndex = 14;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = false;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			// btn_6
			// 
			this->btn_6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_6->FlatAppearance->BorderSize = 0;
			this->btn_6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_6->ForeColor = System::Drawing::Color::Snow;
			this->btn_6->Location = System::Drawing::Point(204, 316);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(90, 66);
			this->btn_6->TabIndex = 13;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = false;
			this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::btn_6_Click);
			// 
			// btn_5
			// 
			this->btn_5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_5->FlatAppearance->BorderSize = 0;
			this->btn_5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_5->ForeColor = System::Drawing::Color::Snow;
			this->btn_5->Location = System::Drawing::Point(108, 316);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(90, 66);
			this->btn_5->TabIndex = 12;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = false;
			this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::btn_5_Click);
			// 
			// btn_4
			// 
			this->btn_4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_4->FlatAppearance->BorderSize = 0;
			this->btn_4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_4->ForeColor = System::Drawing::Color::Snow;
			this->btn_4->Location = System::Drawing::Point(12, 316);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(90, 66);
			this->btn_4->TabIndex = 11;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = false;
			this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::btn_4_Click);
			// 
			// btn_sum
			// 
			this->btn_sum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btn_sum->FlatAppearance->BorderSize = 0;
			this->btn_sum->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_sum->ForeColor = System::Drawing::Color::Black;
			this->btn_sum->Location = System::Drawing::Point(300, 388);
			this->btn_sum->Name = L"btn_sum";
			this->btn_sum->Size = System::Drawing::Size(90, 66);
			this->btn_sum->TabIndex = 18;
			this->btn_sum->Text = L"+";
			this->btn_sum->UseVisualStyleBackColor = false;
			this->btn_sum->Click += gcnew System::EventHandler(this, &MyForm::btn_sum_Click);
			// 
			// btn_3
			// 
			this->btn_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_3->FlatAppearance->BorderSize = 0;
			this->btn_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_3->ForeColor = System::Drawing::Color::Snow;
			this->btn_3->Location = System::Drawing::Point(204, 388);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(90, 66);
			this->btn_3->TabIndex = 17;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = false;
			this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::btn_3_Click);
			// 
			// btn_2
			// 
			this->btn_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_2->FlatAppearance->BorderSize = 0;
			this->btn_2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_2->ForeColor = System::Drawing::Color::Snow;
			this->btn_2->Location = System::Drawing::Point(108, 388);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(90, 66);
			this->btn_2->TabIndex = 16;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = false;
			this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::btn_2_Click);
			// 
			// btn_1
			// 
			this->btn_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_1->FlatAppearance->BorderSize = 0;
			this->btn_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_1->ForeColor = System::Drawing::Color::Snow;
			this->btn_1->Location = System::Drawing::Point(12, 388);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(90, 66);
			this->btn_1->TabIndex = 15;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = false;
			this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::btn_1_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btn_equal->FlatAppearance->BorderSize = 0;
			this->btn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_equal->ForeColor = System::Drawing::Color::Black;
			this->btn_equal->Location = System::Drawing::Point(300, 460);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(90, 66);
			this->btn_equal->TabIndex = 22;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &MyForm::btn_equal_Click);
			// 
			// btn_point
			// 
			this->btn_point->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_point->FlatAppearance->BorderSize = 0;
			this->btn_point->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_point->ForeColor = System::Drawing::Color::Snow;
			this->btn_point->Location = System::Drawing::Point(108, 460);
			this->btn_point->Name = L"btn_point";
			this->btn_point->Size = System::Drawing::Size(90, 66);
			this->btn_point->TabIndex = 21;
			this->btn_point->Text = L",";
			this->btn_point->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btn_point->UseVisualStyleBackColor = false;
			this->btn_point->Click += gcnew System::EventHandler(this, &MyForm::btn_point_Click);
			// 
			// btn_0
			// 
			this->btn_0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_0->FlatAppearance->BorderSize = 0;
			this->btn_0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_0->ForeColor = System::Drawing::Color::Snow;
			this->btn_0->Location = System::Drawing::Point(12, 460);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(90, 66);
			this->btn_0->TabIndex = 20;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = false;
			this->btn_0->Click += gcnew System::EventHandler(this, &MyForm::btn_0_Click);
			// 
			// btn_div
			// 
			this->btn_div->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btn_div->FlatAppearance->BorderSize = 0;
			this->btn_div->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_div->ForeColor = System::Drawing::Color::Black;
			this->btn_div->Location = System::Drawing::Point(300, 172);
			this->btn_div->Name = L"btn_div";
			this->btn_div->Size = System::Drawing::Size(90, 66);
			this->btn_div->TabIndex = 26;
			this->btn_div->Text = L"/";
			this->btn_div->UseVisualStyleBackColor = false;
			this->btn_div->Click += gcnew System::EventHandler(this, &MyForm::btn_div_Click);
			// 
			// btn_closed_par
			// 
			this->btn_closed_par->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_closed_par->FlatAppearance->BorderSize = 0;
			this->btn_closed_par->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_closed_par->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_closed_par->ForeColor = System::Drawing::Color::Snow;
			this->btn_closed_par->Location = System::Drawing::Point(204, 172);
			this->btn_closed_par->Name = L"btn_closed_par";
			this->btn_closed_par->Size = System::Drawing::Size(90, 66);
			this->btn_closed_par->TabIndex = 25;
			this->btn_closed_par->Text = L")";
			this->btn_closed_par->UseVisualStyleBackColor = false;
			this->btn_closed_par->Click += gcnew System::EventHandler(this, &MyForm::btn_closed_par_Click);
			// 
			// btn_open_par
			// 
			this->btn_open_par->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_open_par->FlatAppearance->BorderSize = 0;
			this->btn_open_par->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_open_par->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_open_par->ForeColor = System::Drawing::Color::Snow;
			this->btn_open_par->Location = System::Drawing::Point(108, 172);
			this->btn_open_par->Name = L"btn_open_par";
			this->btn_open_par->Size = System::Drawing::Size(90, 66);
			this->btn_open_par->TabIndex = 24;
			this->btn_open_par->Text = L"(";
			this->btn_open_par->UseVisualStyleBackColor = false;
			this->btn_open_par->Click += gcnew System::EventHandler(this, &MyForm::btn_open_par_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(98)), static_cast<System::Int32>(static_cast<System::Byte>(98)),
				static_cast<System::Int32>(static_cast<System::Byte>(98)));
			this->btn_delete->FlatAppearance->BorderSize = 0;
			this->btn_delete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_delete->ForeColor = System::Drawing::Color::Snow;
			this->btn_delete->Location = System::Drawing::Point(12, 172);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(90, 66);
			this->btn_delete->TabIndex = 23;
			this->btn_delete->Text = L"—";
			this->btn_delete->UseVisualStyleBackColor = false;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// input
			// 
			this->input->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->input->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->ForeColor = System::Drawing::SystemColors::Window;
			this->input->Location = System::Drawing::Point(12, 79);
			this->input->Name = L"input";
			this->input->Size = System::Drawing::Size(381, 68);
			this->input->TabIndex = 27;
			this->input->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->input->TextChanged += gcnew System::EventHandler(this, &MyForm::input_TextChanged);
			// 
			// btn_del_one
			// 
			this->btn_del_one->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(253)), static_cast<System::Int32>(static_cast<System::Byte>(187)),
				static_cast<System::Int32>(static_cast<System::Byte>(11)));
			this->btn_del_one->FlatAppearance->BorderSize = 0;
			this->btn_del_one->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_del_one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_del_one->ForeColor = System::Drawing::Color::Black;
			this->btn_del_one->Location = System::Drawing::Point(204, 460);
			this->btn_del_one->Name = L"btn_del_one";
			this->btn_del_one->Size = System::Drawing::Size(90, 66);
			this->btn_del_one->TabIndex = 28;
			this->btn_del_one->Text = L"DEL";
			this->btn_del_one->UseVisualStyleBackColor = false;
			this->btn_del_one->Click += gcnew System::EventHandler(this, &MyForm::btn_del_one_Click);
			// 
			// res_expression
			// 
			this->res_expression->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->res_expression->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->res_expression->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->res_expression->ForeColor = System::Drawing::SystemColors::Window;
			this->res_expression->Location = System::Drawing::Point(9, 61);
			this->res_expression->Name = L"res_expression";
			this->res_expression->Size = System::Drawing::Size(381, 25);
			this->res_expression->TabIndex = 29;
			this->res_expression->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->res_expression->TextChanged += gcnew System::EventHandler(this, &MyForm::res_expression_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(46)));
			this->ClientSize = System::Drawing::Size(405, 548);
			this->Controls->Add(this->res_expression);
			this->Controls->Add(this->btn_del_one);
			this->Controls->Add(this->btn_div);
			this->Controls->Add(this->btn_closed_par);
			this->Controls->Add(this->btn_open_par);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->btn_point);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_sum);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_mult);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->input);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calc";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {}


private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
}
private: System::Void btn_0_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "0";
}
private: System::Void btn_1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "1";
}
private: System::Void btn_2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "2";
}
private: System::Void btn_3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "3";
}
private: System::Void btn_4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "4";
}
private: System::Void btn_5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "5";
}
private: System::Void btn_6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "6";
}
private: System::Void btn_7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "7";
}
private: System::Void btn_8_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "8";
}
private: System::Void btn_9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "9";
}
private: System::Void btn_sum_Click(System::Object^ sender, System::EventArgs^ e) 
{

	this->input->Text += "+";
}
private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "-";
}
private: System::Void btn_mult_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "*";
}
private: System::Void btn_div_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "/";
}
private: System::Void btn_open_par_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += "(";
}
private: System::Void btn_closed_par_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += ")";
}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text = "";
	this->res_expression->Text = "";
}
private: System::Void btn_point_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->input->Text += ".";
}
	private: System::Void input_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		int n = this->input->Text->Length;

		if (n > 0)
		{
			System::Text::StringBuilder^ sb = gcnew System::Text::StringBuilder();
			for (int i = 0; i < n; ++i)
			{
				wchar_t c = this->input->Text[i];
				if (System::Char::IsDigit(c) || c == L'.' || c == L'*' || c == L'-' || c == L'+' || c == L'/' || c == L'(' || c == L')')
				{
					sb->Append(c);
				}
			}

			this->input->Text = sb->ToString();

			if (this->input->Text == "")
				this->res_expression->Text = "";
			else
			{
				System::String^ res = solve(this->input->Text);
				if (res != "Error" && res != this->input->Text)
					this->res_expression->Text = this->input->Text + " = " + res;
				else
					this->res_expression->Text = "";
			}
		}
		else
		{
			this->res_expression->Text = "";
		}

		if (this->input->Text->Length <= 10)
		{
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->Location = System::Drawing::Point(12, 79);
		}

		else if (this->input->Text->Length >= 31)
		{
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->Location = System::Drawing::Point(12, 120);
		}

		else if (this->input->Text->Length >= 17)
		{
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->Location = System::Drawing::Point(12, 112);
		}

		else if (this->input->Text->Length >= 11)
		{
			this->input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->input->Location = System::Drawing::Point(12, 100);
		}
	}

	private: System::Void btn_del_one_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (this->input->Text->Length != 0)
		{
			this->input->Text = this->input->Text->Substring(0, this->input->Text->Length - 1);
		}

		if (this->input->Text->Length == 1 || this->input->Text->Length == 0)
		{
			this->res_expression->Text = "";
		}
	}

	private: System::String^ solve(System::String^ input_s)
	{
		if (input_s->Length != 0)
		{
			std::string s = marshal_as<std::string>(input_s);
			s = solving_expression(s);
			return marshal_as<String^>(s);
		}
		else
			return "";
	}

	private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e)
	{
		System::String^ res = solve(this->input->Text);
		if (res != "Error")
		{
			this->input->Text = res;
		}
		else
		{
			MessageBox::Show(this, "INPUT ERROR");
		}
		this->res_expression->Text = "";
	}

	private: System::Void res_expression_TextChanged(System::Object^ sender, System::EventArgs^ e) 
	{
		if (this->input->Text->Length != 0)
		{
			if (this->res_expression->Text->Length >= 33) 
			{
				this->res_expression->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
			}
			else
			{
				this->res_expression->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
			}
		}
	}
};
}
