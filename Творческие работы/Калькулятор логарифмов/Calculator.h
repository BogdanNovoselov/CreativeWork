#include <math.h>
#include <iostream>
#pragma once


namespace Callculator20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;


	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;





	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Calculator::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(184, 85);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(30, 28);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::textBox1_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"log";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 125);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(63, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"log";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(71, 52);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(74, 26);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox2_TextChanged);
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(71, 143);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(74, 26);
			this->textBox3->TabIndex = 4;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox3_TextChanged);
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::textBox3_KeyPress);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(151, 35);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 31);
			this->textBox4->TabIndex = 5;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox4_TextChanged);
			this->textBox4->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::textBox4_KeyPress);
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(151, 131);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 31);
			this->textBox5->TabIndex = 6;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Calculator::textBox5_TextChanged);
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Calculator::textBox5_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(260, 89);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 29);
			this->label3->TabIndex = 7;
			this->label3->Text = L"=";
			this->label3->Click += gcnew System::EventHandler(this, &Calculator::label3_Click);
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(308, 89);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 28);
			this->textBox6->TabIndex = 8;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(316, 208);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 64);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Очитстить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(316, 356);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 64);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Результат";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(10, 208);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(51, 51);
			this->button2->TabIndex = 12;
			this->button2->Text = L"7";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(66, 208);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(51, 51);
			this->button4->TabIndex = 13;
			this->button4->Text = L"8";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(122, 208);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(51, 51);
			this->button5->TabIndex = 14;
			this->button5->Text = L"9";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(10, 264);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(51, 51);
			this->button6->TabIndex = 15;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(66, 264);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(51, 51);
			this->button7->TabIndex = 16;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(122, 264);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(51, 51);
			this->button8->TabIndex = 17;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(10, 320);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(51, 51);
			this->button9->TabIndex = 18;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(66, 320);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(51, 51);
			this->button10->TabIndex = 19;
			this->button10->Text = L"2";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Calculator::button10_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(122, 320);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(51, 51);
			this->button11->TabIndex = 20;
			this->button11->Text = L"3";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Calculator::button11_Click);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(66, 379);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(51, 51);
			this->button14->TabIndex = 23;
			this->button14->Text = L"0";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Calculator::button14_Click);
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->Location = System::Drawing::Point(191, 208);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(51, 51);
			this->button12->TabIndex = 24;
			this->button12->Text = L"+";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Calculator::button12_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(248, 208);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(51, 51);
			this->button15->TabIndex = 25;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Calculator::button15_Click);
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(191, 265);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(51, 51);
			this->button16->TabIndex = 26;
			this->button16->Text = L"*";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Calculator::button16_Click);
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button17->Location = System::Drawing::Point(248, 265);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(51, 51);
			this->button17->TabIndex = 27;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Calculator::button17_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(270, 349);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(29, 39);
			this->button18->TabIndex = 28;
			this->button18->Text = L"→";
			this->button18->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Calculator::button18_Click_1);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(199, 349);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(29, 39);
			this->button19->TabIndex = 29;
			this->button19->Text = L"←";
			this->button19->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Calculator::button19_Click_1);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button20->Location = System::Drawing::Point(234, 322);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(34, 32);
			this->button20->TabIndex = 30;
			this->button20->Text = L"↑";
			this->button20->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Calculator::button20_Click_1);
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->Location = System::Drawing::Point(234, 388);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(34, 32);
			this->button21->TabIndex = 31;
			this->button21->Text = L"↓";
			this->button21->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Calculator::button21_Click_1);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(415, 434);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Calculator";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
		
		double a, b, a1, b1;
		char znak;
		int i = 0, j = 1;

		// Функции калькулятора
		double Logarithm(double a, double b) // Нахождение логарифма
		{
			return double (log(b) / log(a));
		}

		double Minus(double first, double second) //Вычитание
		{
			if (textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "") return double(first - second);
			else MessageBox::Show("Все поля должны быть заполнены!");
		}

		double Plus(double first, double second) //Сумма
		{
			if (textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "") return double (first + second);
			else MessageBox::Show("Все поля должны быть заполнены!");
		}

		double Multiply(double first, double second) //Умножение
		{
			if (textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "") return double(first * second);
			else MessageBox::Show("Все поля должны быть заполнены!");
		}

		double Delenie(double first, double second) //Деление
		{
			if (textBox2->Text != "" && textBox3->Text != "" && textBox4->Text != "" && textBox5->Text != "")
			{
				if (second != 0) return double(first / second);
				else MessageBox::Show("Нельзя делить на ноль!");
			}
			else MessageBox::Show("Все поля должны быть заполнены!");
			
		}

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}
		   int k = 0; bool dotPressed1 = false;
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!(Char::IsDigit(e->KeyChar)) || (e->KeyChar == ',' && !dotPressed1 && k!=0))
	{
		k += 1;
		if (e->KeyChar == ',')
		{
			dotPressed1 = true;
		}
		e->Handled = true;
	}
}
	   int l = 0; bool dotPressed2 = false;
private: System::Void textBox4_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!(Char::IsDigit(e->KeyChar)) || (e->KeyChar == ',' && !dotPressed2 && l != 0))
	{
		l += 1;
		if (e->KeyChar == ',')
		{
			dotPressed2 = true;
		}
		e->Handled = true;
	}
}
	   int m = 0; bool dotPressed3 = false;
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!(Char::IsDigit(e->KeyChar)) || (e->KeyChar == ',' && !dotPressed3 && n != 0))
	{
		m += 1;
		if (e->KeyChar == ',')
		{
			dotPressed3 = true;
		}
		e->Handled = true;
	}
}
	   int n = 0; bool dotPressed4 = false;
private: System::Void textBox5_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!(Char::IsDigit(e->KeyChar)) || (e->KeyChar == ',' && !dotPressed4 && n != 0))
	{
		n += 1;
		if (e->KeyChar == ',')
		{
			dotPressed4 = true;
		}
		e->Handled = true;
	}
}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if (!((e->KeyChar == '+' || e->KeyChar == '-' || e->KeyChar == '*' || e->KeyChar == '/') && i == 0))
	{
		e->Handled = true;

	}
	else i += 1;
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if(textBox2->Text!="") a = Convert::ToDouble(textBox2->Text);

}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text != "") b = Convert::ToDouble(textBox4->Text);
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text != "") a1 = Convert::ToDouble(textBox3->Text);
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text != "") b1 = Convert::ToDouble(textBox5->Text);
}
	   //Очистка всех полей
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	i = 0;
	k = 0;
	l = 0;
	m = 0;
	n = 0;
	dotPressed1 = false;
	dotPressed2 = false;
	dotPressed3 = false;
	dotPressed4 = false;
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text != "") znak = Convert::ToChar(textBox1->Text);
}
	   //Кнопка результата
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (znak) //Проверка на знак
	{
	case '+':
		textBox6->Text = Convert::ToString(Plus(Logarithm(a, b), Logarithm(a1, b1)));
		break;
	case '-':
		textBox6->Text = Convert::ToString(Minus(Logarithm(a, b), Logarithm(a1, b1)));
		break;
	case '*':
		textBox6->Text = Convert::ToString(Multiply(Logarithm(a, b), Logarithm(a1, b1)));
		break;
	case '/':
		textBox6->Text = Convert::ToString(Delenie(Logarithm(a, b), Logarithm(a1, b1)));
		break;
	default:
		MessageBox::Show("Введите знак!");
	}
	
}

private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e) {
}


	   //Перемещение стрелками

private: System::Void button19_Click_1(System::Object^ sender, System::EventArgs^ e) { //Стрелка влево

	switch (j)
	{
	case 2:
		j = 1;
		textBox1->BackColor = SystemColors::Window;
		textBox2->BackColor = SystemColors::ActiveBorder;
		textBox3->BackColor = SystemColors::Window;
		textBox4->BackColor = SystemColors::Window;
		textBox5->BackColor = SystemColors::Window;
		break;
	case 4:
		j = 3;
		textBox1->BackColor = SystemColors::Window;
		textBox2->BackColor = SystemColors::Window;
		textBox3->BackColor = SystemColors::ActiveBorder;
		textBox4->BackColor = SystemColors::Window;
		textBox5->BackColor = SystemColors::Window;
		break;
	}
	

}
private: System::Void button18_Click_1(System::Object^ sender, System::EventArgs^ e) { // Стрелка вправо
	switch (j)
	{
	case 1:
		j = 2;
		textBox1->BackColor = SystemColors::Window;
		textBox2->BackColor = SystemColors::Window;
		textBox3->BackColor = SystemColors::Window;
		textBox4->BackColor = SystemColors::ActiveBorder;
		textBox5->BackColor = SystemColors::Window;
		break;
	case 3:
		j = 4;
		textBox1->BackColor = SystemColors::Window;
		textBox2->BackColor = SystemColors::Window;
		textBox3->BackColor = SystemColors::Window;
		textBox4->BackColor = SystemColors::Window;
		textBox5->BackColor = SystemColors::ActiveBorder;
		break;
	}
}
private: System::Void button20_Click_1(System::Object^ sender, System::EventArgs^ e) { // Стрелка вверх

	switch (j)
	{
	case 3:
		j = 1;
		textBox1->BackColor = SystemColors::Window;
		textBox2->BackColor = SystemColors::ActiveBorder;
		textBox3->BackColor = SystemColors::Window;
		textBox4->BackColor = SystemColors::Window;
		textBox5->BackColor = SystemColors::Window;
		break;
	case 4:
		j = 5;
		textBox1->BackColor = SystemColors::ActiveBorder;
		textBox2->BackColor = SystemColors::Window;
		textBox3->BackColor = SystemColors::Window;
		textBox4->BackColor = SystemColors::Window;
		textBox5->BackColor = SystemColors::Window;
		break;
	case 5:
		j = 2;
		textBox1->BackColor = SystemColors::Window;
		textBox2->BackColor = SystemColors::Window;
		textBox3->BackColor = SystemColors::Window;
		textBox4->BackColor = SystemColors::ActiveBorder;
		textBox5->BackColor = SystemColors::Window;
		break;
	}

}
private: System::Void button21_Click_1(System::Object^ sender, System::EventArgs^ e) { // Стрелка вниз

	switch (j)
	{
	case 1:
		j = 3;
		textBox1->BackColor = SystemColors::Window;
		textBox2->BackColor = SystemColors::Window;
		textBox3->BackColor = SystemColors::ActiveBorder;
		textBox4->BackColor = SystemColors::Window;
		textBox5->BackColor = SystemColors::Window;
		break;
	case 2:
		j = 5;
		textBox1->BackColor = SystemColors::ActiveBorder;
		textBox2->BackColor = SystemColors::Window;
		textBox3->BackColor = SystemColors::Window;
		textBox4->BackColor = SystemColors::Window;
		textBox5->BackColor = SystemColors::Window;
		break;
	case 5:
		j = 4;
		textBox1->BackColor = SystemColors::Window;
		textBox2->BackColor = SystemColors::Window;
		textBox3->BackColor = SystemColors::Window;
		textBox4->BackColor = SystemColors::Window;
		textBox5->BackColor = SystemColors::ActiveBorder;
		break;
	}
}
	   //Кнопки цифр и знаков
	   // Цифра 1
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 1:
		textBox2->Text = textBox2->Text + "1";
		break;
	case 2:
		textBox4->Text = textBox4->Text + "1";
		break;
	case 3:
		textBox3->Text = textBox3->Text + "1";
		break;
	case 4:
		textBox5->Text = textBox5->Text + "1";
		break;
	case 5:
		textBox1->Text = textBox1->Text + "1";
		break;
	}

}
	   // Цифра 2
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {

	switch (j)
	{
	case 1:
		textBox2->Text = textBox2->Text + "2";
		break;
	case 2:
		textBox4->Text = textBox4->Text + "2";
		break;
	case 3:
		textBox3->Text = textBox3->Text + "2";
		break;
	case 4:
		textBox5->Text = textBox5->Text + "2";
		break;
	case 5:
		textBox1->Text = textBox1->Text + "2";
		break;
	}

}

	   //Цифра 3
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {

	switch (j)
	{
	case 1:
		textBox2->Text = textBox2->Text + "3";
		break;
	case 2:
		textBox4->Text = textBox4->Text + "3";
		break;
	case 3:
		textBox3->Text = textBox3->Text + "3";
		break;
	case 4:
		textBox5->Text = textBox5->Text + "3";
		break;
	case 5:
		textBox1->Text = textBox1->Text + "3";
		break;
	}
}

	   //Цифра 4
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 1:
		textBox2->Text = textBox2->Text + "4";
		break;
	case 2:
		textBox4->Text = textBox4->Text + "4";
		break;
	case 3:
		textBox3->Text = textBox3->Text + "4";
		break;
	case 4:
		textBox5->Text = textBox5->Text + "4";
		break;
	case 5:
		textBox1->Text = textBox1->Text + "4";
		break;
	}
}

	   //5
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 1:
		textBox2->Text = textBox2->Text + "5";
		break;
	case 2:
		textBox4->Text = textBox4->Text + "5";
		break;
	case 3:
		textBox3->Text = textBox3->Text + "5";
		break;
	case 4:
		textBox5->Text = textBox5->Text + "5";
		break;
	case 5:
		textBox1->Text = textBox1->Text + "5";
		break;
	}
}

	   //6
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 1:
		textBox2->Text = textBox2->Text + "6";
		break;
	case 2:
		textBox4->Text = textBox4->Text + "6";
		break;
	case 3:
		textBox3->Text = textBox3->Text + "6";
		break;
	case 4:
		textBox5->Text = textBox5->Text + "6";
		break;
	case 5:
		textBox1->Text = textBox1->Text + "6";
		break;
	}
}

	   //7
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 1:
		textBox2->Text = textBox2->Text + "7";
		break;
	case 2:
		textBox4->Text = textBox4->Text + "7";
		break;
	case 3:
		textBox3->Text = textBox3->Text + "7";
		break;
	case 4:
		textBox5->Text = textBox5->Text + "7";
		break;
	case 5:
		textBox1->Text = textBox1->Text + "7";
		break;
	}
}

	   //8
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 1:
		textBox2->Text = textBox2->Text + "8";
		break;
	case 2:
		textBox4->Text = textBox4->Text + "8";
		break;
	case 3:
		textBox3->Text = textBox3->Text + "8";
		break;
	case 4:
		textBox5->Text = textBox5->Text + "8";
		break;
	case 5:
		textBox1->Text = textBox1->Text + "8";
		break;
	}
}
	   //9
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 1:
		textBox2->Text = textBox2->Text + "9";
		break;
	case 2:
		textBox4->Text = textBox4->Text + "9";
		break;
	case 3:
		textBox3->Text = textBox3->Text + "9";
		break;
	case 4:
		textBox5->Text = textBox5->Text + "9";
		break;
	case 5:
		textBox1->Text = textBox1->Text + "9";
		break;
	}
}
	   //0
private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 1:
		textBox2->Text = textBox2->Text + "0";
		break;
	case 2:
		textBox4->Text = textBox4->Text + "0";
		break;
	case 3:
		textBox3->Text = textBox3->Text + "0";
		break;
	case 4:
		textBox5->Text = textBox5->Text + "0";
		break;
	case 5:
		textBox1->Text = textBox1->Text + "0";
		break;
	}
}

	   //","
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 1:
		textBox2->Text = textBox2->Text + ",";
		break;
	case 2:
		textBox4->Text = textBox4->Text + ",";
		break;
	case 3:
		textBox3->Text = textBox3->Text + ",";
		break;
	case 4:
		textBox5->Text = textBox5->Text + ",";
		break;

	}
}

	   //+
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 5:
		textBox1->Text = textBox1->Text + "+";
		break;
	}
}

	   //-
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 5:
		textBox1->Text = textBox1->Text + "-";
		break;
	}
}

	   //*
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 5:
		textBox1->Text = textBox1->Text + "*";
		break;
	}
}

	   // "/"1
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (j)
	{
	case 5:
		textBox1->Text = textBox1->Text + "/";
		break;
	}
}
};
}
