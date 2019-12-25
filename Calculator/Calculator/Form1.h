#pragma once
#include<msclr/marshal_cppstd.h>
#include <math.h>
#include "tcalculator.h"
namespace CppCLR_WinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  Enter;
	private: System::Windows::Forms::Label^  Result;
	private: System::Windows::Forms::Button^  Delete;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button0;
	private: System::Windows::Forms::Button^  minus;

	private: System::Windows::Forms::Button^  plus;
	private: System::Windows::Forms::Button^  div;


	private: System::Windows::Forms::Button^  mult;
	private: System::Windows::Forms::Button^  eq;


	private: System::Windows::Forms::Button^  pow;
	private: System::Windows::Forms::Button^  lbrac;

	private: System::Windows::Forms::Button^  rbrac;




	protected:



	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Enter = (gcnew System::Windows::Forms::TextBox());
			this->Result = (gcnew System::Windows::Forms::Label());
			this->Delete = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->div = (gcnew System::Windows::Forms::Button());
			this->mult = (gcnew System::Windows::Forms::Button());
			this->eq = (gcnew System::Windows::Forms::Button());
			this->pow = (gcnew System::Windows::Forms::Button());
			this->lbrac = (gcnew System::Windows::Forms::Button());
			this->rbrac = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Enter
			// 
			this->Enter->AccessibleRole = System::Windows::Forms::AccessibleRole::None;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Enter->Location = System::Drawing::Point(4, 12);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(503, 49);
			this->Enter->TabIndex = 0;
			this->Enter->TextChanged += gcnew System::EventHandler(this, &Form1::Enter_TextChanged);
			// 
			// Result
			// 
			this->Result->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Result->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Result->Location = System::Drawing::Point(4, 66);
			this->Result->Name = L"Result";
			this->Result->Size = System::Drawing::Size(503, 58);
			this->Result->TabIndex = 1;
			this->Result->Text = L"0";
			this->Result->Click += gcnew System::EventHandler(this, &Form1::Result_Click);
			// 
			// Delete
			// 
			this->Delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Delete->Location = System::Drawing::Point(516, 12);
			this->Delete->Name = L"Delete";
			this->Delete->Size = System::Drawing::Size(80, 112);
			this->Delete->TabIndex = 2;
			this->Delete->Text = L"C";
			this->Delete->UseVisualStyleBackColor = true;
			this->Delete->Click += gcnew System::EventHandler(this, &Form1::Delete_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(7, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 97);
			this->button1->TabIndex = 3;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(110, 152);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 97);
			this->button2->TabIndex = 4;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(213, 152);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(97, 97);
			this->button3->TabIndex = 5;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(7, 255);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(97, 97);
			this->button4->TabIndex = 6;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(110, 255);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(97, 97);
			this->button5->TabIndex = 7;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(213, 255);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(97, 97);
			this->button6->TabIndex = 8;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(7, 358);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(97, 97);
			this->button7->TabIndex = 9;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(110, 358);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(97, 97);
			this->button8->TabIndex = 10;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(213, 358);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(97, 97);
			this->button9->TabIndex = 11;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(7, 461);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(303, 97);
			this->button0->TabIndex = 12;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &Form1::button0_Click);
			// 
			// minus
			// 
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->Location = System::Drawing::Point(465, 152);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(131, 97);
			this->minus->TabIndex = 13;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &Form1::minus_Click);
			// 
			// plus
			// 
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->Location = System::Drawing::Point(328, 152);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(131, 97);
			this->plus->TabIndex = 14;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &Form1::plus_Click);
			// 
			// div
			// 
			this->div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->div->Location = System::Drawing::Point(465, 255);
			this->div->Name = L"div";
			this->div->Size = System::Drawing::Size(131, 97);
			this->div->TabIndex = 15;
			this->div->Text = L"/";
			this->div->UseVisualStyleBackColor = true;
			this->div->Click += gcnew System::EventHandler(this, &Form1::div_Click);
			// 
			// mult
			// 
			this->mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mult->Location = System::Drawing::Point(328, 255);
			this->mult->Name = L"mult";
			this->mult->Size = System::Drawing::Size(131, 97);
			this->mult->TabIndex = 16;
			this->mult->Text = L"*";
			this->mult->UseVisualStyleBackColor = true;
			this->mult->Click += gcnew System::EventHandler(this, &Form1::mult_Click);
			// 
			// eq
			// 
			this->eq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->eq->Location = System::Drawing::Point(328, 461);
			this->eq->Name = L"eq";
			this->eq->Size = System::Drawing::Size(268, 97);
			this->eq->TabIndex = 17;
			this->eq->Text = L"=";
			this->eq->UseVisualStyleBackColor = true;
			this->eq->Click += gcnew System::EventHandler(this, &Form1::eq_Click);
			// 
			// pow
			// 
			this->pow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pow->Location = System::Drawing::Point(328, 358);
			this->pow->Name = L"pow";
			this->pow->Size = System::Drawing::Size(131, 97);
			this->pow->TabIndex = 18;
			this->pow->Text = L"^";
			this->pow->UseVisualStyleBackColor = true;
			this->pow->Click += gcnew System::EventHandler(this, &Form1::pow_Click);
			// 
			// lbrac
			// 
			this->lbrac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lbrac->Location = System::Drawing::Point(465, 358);
			this->lbrac->Name = L"lbrac";
			this->lbrac->Size = System::Drawing::Size(61, 97);
			this->lbrac->TabIndex = 19;
			this->lbrac->Text = L"(";
			this->lbrac->UseVisualStyleBackColor = true;
			this->lbrac->Click += gcnew System::EventHandler(this, &Form1::lbrac_Click);
			// 
			// rbrac
			// 
			this->rbrac->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rbrac->Location = System::Drawing::Point(532, 358);
			this->rbrac->Name = L"rbrac";
			this->rbrac->Size = System::Drawing::Size(61, 97);
			this->rbrac->TabIndex = 20;
			this->rbrac->Text = L")";
			this->rbrac->UseVisualStyleBackColor = true;
			this->rbrac->Click += gcnew System::EventHandler(this, &Form1::rbrac_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(609, 565);
			this->Controls->Add(this->rbrac);
			this->Controls->Add(this->lbrac);
			this->Controls->Add(this->pow);
			this->Controls->Add(this->eq);
			this->Controls->Add(this->mult);
			this->Controls->Add(this->div);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Delete);
			this->Controls->Add(this->Result);
			this->Controls->Add(this->Enter);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Enter_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			std::string Infix;
			Infix = msclr::interop::marshal_as<std::string>(Enter->Text);
			TCalculator<double> calcul;
			calcul.SetExpr(Infix);
			calcul.ToPostfix();
			if (calcul.Check())
			{

				double rez = calcul.calc();
				Result->Text = Convert::ToString(rez);
			}
		}
		catch (...)
		{
			std::string tmp;
			tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
			Result->Text = gcnew System::String(tmp.c_str());
		}
	}
	private: System::Void Result_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void Delete_Click(System::Object^  sender, System::EventArgs^  e) {
		Enter->Text = "";
		Result->Text = "0";
	}
	private: System::Void mult_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "*";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "2";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "8";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "1";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "3";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "4";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "5";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "6";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "7";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "9";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void button0_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "0";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void plus_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "+";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void minus_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "-";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void div_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "/";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void pow_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "^";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void lbrac_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += "(";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void rbrac_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Enter->Text);
		tmp += ")";
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	private: System::Void eq_Click(System::Object^  sender, System::EventArgs^  e) {
		std::string tmp;
		tmp = msclr::interop::marshal_as<std::string>(Result->Text);
		for (int i = 0; i < tmp.size(); i++)
		{
			if (tmp[i] == ',')
			{
				tmp[i] = '.';
			}
		}
		Enter->Text = gcnew System::String(tmp.c_str());
	}
	};
}
