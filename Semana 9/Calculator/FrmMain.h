#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FrmMain
	/// </summary>
	// class Person // std
	// public ref class FrmMain // administrada
	// Person *p = new Person(); //std
	// Bitmap ^b = gcnew Bitmap(); // administrada

	public ref class FrmMain : public System::Windows::Forms::Form
	{
	public:
		FrmMain(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FrmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	protected:
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btnMinus;




	private: System::Windows::Forms::Button^ btn6;

	private: System::Windows::Forms::Button^ btn5;

	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btnMultiplication;


	private: System::Windows::Forms::Button^ btn9;

	private: System::Windows::Forms::Button^ btn8;

	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btnDivision;


	private: System::Windows::Forms::Button^ btnEqual;

	private: System::Windows::Forms::Button^ btn0;
	private: System::Windows::Forms::Button^ btnCE;
	private: System::Windows::Forms::TextBox^ txb1;
	private: System::Windows::Forms::TextBox^ txb2;





	private:
		double num1, num2;
		char symbol = ' ';
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnMinus = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btnMultiplication = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnDivision = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnCE = (gcnew System::Windows::Forms::Button());
			this->txb1 = (gcnew System::Windows::Forms::TextBox());
			this->txb2 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Times New Roman", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->ForeColor = System::Drawing::Color::DarkRed;
			this->lblTitle->Location = System::Drawing::Point(91, 32);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(200, 45);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"Calculator";
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(64, 232);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(54, 49);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &FrmMain::btn1_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(133, 232);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(54, 49);
			this->btn2->TabIndex = 2;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &FrmMain::btn2_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(203, 232);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(54, 49);
			this->btn3->TabIndex = 3;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &FrmMain::btn3_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->Location = System::Drawing::Point(271, 232);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(54, 49);
			this->btnPlus->TabIndex = 4;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			this->btnPlus->Click += gcnew System::EventHandler(this, &FrmMain::btnPlus_Click);
			// 
			// btnMinus
			// 
			this->btnMinus->Location = System::Drawing::Point(271, 297);
			this->btnMinus->Name = L"btnMinus";
			this->btnMinus->Size = System::Drawing::Size(54, 49);
			this->btnMinus->TabIndex = 8;
			this->btnMinus->Text = L"-";
			this->btnMinus->UseVisualStyleBackColor = true;
			this->btnMinus->Click += gcnew System::EventHandler(this, &FrmMain::btnMinus_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(203, 297);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(54, 49);
			this->btn6->TabIndex = 7;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &FrmMain::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(133, 297);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(54, 49);
			this->btn5->TabIndex = 6;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &FrmMain::btn5_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(64, 297);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(54, 49);
			this->btn4->TabIndex = 5;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &FrmMain::btn4_Click);
			// 
			// btnMultiplication
			// 
			this->btnMultiplication->Location = System::Drawing::Point(271, 362);
			this->btnMultiplication->Name = L"btnMultiplication";
			this->btnMultiplication->Size = System::Drawing::Size(54, 49);
			this->btnMultiplication->TabIndex = 12;
			this->btnMultiplication->Text = L"*";
			this->btnMultiplication->UseVisualStyleBackColor = true;
			this->btnMultiplication->Click += gcnew System::EventHandler(this, &FrmMain::btnMultiplication_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(203, 362);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(54, 49);
			this->btn9->TabIndex = 11;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &FrmMain::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(133, 362);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(54, 49);
			this->btn8->TabIndex = 10;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &FrmMain::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(64, 362);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(54, 49);
			this->btn7->TabIndex = 9;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &FrmMain::btn7_Click);
			// 
			// btnDivision
			// 
			this->btnDivision->Location = System::Drawing::Point(271, 427);
			this->btnDivision->Name = L"btnDivision";
			this->btnDivision->Size = System::Drawing::Size(54, 49);
			this->btnDivision->TabIndex = 16;
			this->btnDivision->Text = L"/";
			this->btnDivision->UseVisualStyleBackColor = true;
			this->btnDivision->Click += gcnew System::EventHandler(this, &FrmMain::btnDivision_Click);
			// 
			// btnEqual
			// 
			this->btnEqual->Location = System::Drawing::Point(203, 427);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(54, 49);
			this->btnEqual->TabIndex = 15;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = true;
			this->btnEqual->Click += gcnew System::EventHandler(this, &FrmMain::btnEqual_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(133, 427);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(54, 49);
			this->btn0->TabIndex = 14;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &FrmMain::btn0_Click);
			// 
			// btnCE
			// 
			this->btnCE->Location = System::Drawing::Point(64, 427);
			this->btnCE->Name = L"btnCE";
			this->btnCE->Size = System::Drawing::Size(54, 49);
			this->btnCE->TabIndex = 13;
			this->btnCE->Text = L"CE";
			this->btnCE->UseVisualStyleBackColor = true;
			this->btnCE->Click += gcnew System::EventHandler(this, &FrmMain::btnCE_Click);
			// 
			// txb1
			// 
			this->txb1->Location = System::Drawing::Point(64, 115);
			this->txb1->Name = L"txb1";
			this->txb1->Size = System::Drawing::Size(261, 22);
			this->txb1->TabIndex = 17;
			// 
			// txb2
			// 
			this->txb2->Location = System::Drawing::Point(64, 153);
			this->txb2->Name = L"txb2";
			this->txb2->Size = System::Drawing::Size(261, 22);
			this->txb2->TabIndex = 18;
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(394, 527);
			this->Controls->Add(this->txb2);
			this->Controls->Add(this->txb1);
			this->Controls->Add(this->btnDivision);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnCE);
			this->Controls->Add(this->btnMultiplication);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnMinus);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->lblTitle);
			this->Name = L"FrmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FrmMain";
			this->Load += gcnew System::EventHandler(this, &FrmMain::FrmMain_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btn1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (symbol == ' ')txb1->Text += 1;
	else txb2->Text += 1;
}
private: System::Void btn2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (symbol == ' ')txb1->Text += 2;
	else txb2->Text += 2;
}
private: System::Void btn3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (symbol == ' ')txb1->Text += 3;
	else txb2->Text += 3;
}
private: System::Void btn4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (symbol == ' ')txb1->Text += 4;
	else txb2->Text += 4;
}
private: System::Void btn5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (symbol == ' ')txb1->Text += 5;
	else txb2->Text += 5;
}
private: System::Void btn6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (symbol == ' ')txb1->Text += 6;
	else txb2->Text += 6;
}
private: System::Void btn7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (symbol == ' ')txb1->Text += 7;
	else txb2->Text += 7;
}
private: System::Void btn8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (symbol == ' ')txb1->Text += 8;
	else txb2->Text += 8;
}
private: System::Void btn9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (symbol == ' ')txb1->Text += 9;
	else txb2->Text += 9;
}
private: System::Void btn0_Click(System::Object^ sender, System::EventArgs^ e) {
	if (symbol == ' ')txb1->Text += 0;
	else txb2->Text += 0;
}
private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	symbol = '+';
}
private: System::Void btnMinus_Click(System::Object^ sender, System::EventArgs^ e) {
	symbol = '-';
}
private: System::Void btnMultiplication_Click(System::Object^ sender, System::EventArgs^ e) {
	symbol = '*';
}
private: System::Void btnDivision_Click(System::Object^ sender, System::EventArgs^ e) {
	symbol = '/';
}
private: System::Void btnEqual_Click(System::Object^ sender, System::EventArgs^ e) {
	if (txb1->Text != "")num1 = Convert::ToDouble(txb1->Text);
	if (txb2->Text != "")num2 = Convert::ToDouble(txb2->Text);
	txb1->Clear();
	txb2->Clear();

	if (symbol == '+') {
		num1 += num2;
	}
	if (symbol == '-') {
		num1 -= num2;
	}
	if (symbol == '*') {
		num1 *= num2;
	}
	if (symbol == '/' && num2 != 0) {
		num1 /= num2;
	}

	symbol = ' ';
	txb1->Text = Convert::ToString(num1);

}
private: System::Void btnCE_Click(System::Object^ sender, System::EventArgs^ e) {
	num1 = 0;
	num2 = 0;
	symbol = ' ';
	txb1->Clear();
	txb2->Clear();
	txb1->Select();
}
private: System::Void FrmMain_Load(System::Object^ sender, System::EventArgs^ e) {
	txb1->Select();
}
};
}
