#pragma once

namespace Vini2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for SignUP
	/// </summary>
	public ref class SignUP : public System::Windows::Forms::Form
	{
	public:
		SignUP(void)
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
		~SignUP()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(819, 693);
			this->panel1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(420, 127);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 25);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Skills";
			this->label2->Click += gcnew System::EventHandler(this, &SignUP::label2_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Plumber", L"Electrician", L"Painter", L"Handyman" });
			this->comboBox2->Location = System::Drawing::Point(477, 128);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(284, 24);
			this->comboBox2->TabIndex = 8;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::LightGray;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(26, 639);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(355, 42);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Sign up";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &SignUP::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::LightGray;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(575, 639);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(232, 42);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SignUP::button1_Click);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->panel7->Controls->Add(this->textBox6);
			this->panel7->Location = System::Drawing::Point(26, 530);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(355, 53);
			this->panel7->TabIndex = 3;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox6->ForeColor = System::Drawing::Color::Transparent;
			this->textBox6->Location = System::Drawing::Point(8, 10);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(268, 27);
			this->textBox6->TabIndex = 0;
			this->textBox6->Text = L"Confirm Password";
			this->textBox6->UseSystemPasswordChar = true;
			this->textBox6->Click += gcnew System::EventHandler(this, &SignUP::textBox6_Click);
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->panel6->Controls->Add(this->textBox5);
			this->panel6->Location = System::Drawing::Point(26, 450);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(355, 53);
			this->panel6->TabIndex = 2;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->ForeColor = System::Drawing::Color::Transparent;
			this->textBox5->Location = System::Drawing::Point(8, 10);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(268, 27);
			this->textBox5->TabIndex = 0;
			this->textBox5->Text = L"Password";
			this->textBox5->UseSystemPasswordChar = true;
			this->textBox5->Click += gcnew System::EventHandler(this, &SignUP::textBox5_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Location = System::Drawing::Point(26, 362);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(355, 53);
			this->panel5->TabIndex = 2;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox4->ForeColor = System::Drawing::Color::Transparent;
			this->textBox4->Location = System::Drawing::Point(8, 10);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(268, 27);
			this->textBox4->TabIndex = 0;
			this->textBox4->Text = L"Email";
			this->textBox4->Click += gcnew System::EventHandler(this, &SignUP::textBox4_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Location = System::Drawing::Point(26, 276);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(355, 53);
			this->panel4->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->ForeColor = System::Drawing::Color::Transparent;
			this->textBox3->Location = System::Drawing::Point(8, 10);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(268, 27);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = L"PhoneNumber";
			this->textBox3->Click += gcnew System::EventHandler(this, &SignUP::textBox3_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Location = System::Drawing::Point(26, 195);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(355, 53);
			this->panel2->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->ForeColor = System::Drawing::Color::Transparent;
			this->textBox2->Location = System::Drawing::Point(8, 10);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(268, 27);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"LastName";
			this->textBox2->Click += gcnew System::EventHandler(this, &SignUP::textBox2_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->panel3->Controls->Add(this->textBox1);
			this->panel3->Location = System::Drawing::Point(26, 111);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(355, 53);
			this->panel3->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::Color::Transparent;
			this->textBox1->Location = System::Drawing::Point(8, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(268, 27);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"FirstName";
			this->textBox1->Click += gcnew System::EventHandler(this, &SignUP::textBox1_Click);
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SignUP::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(12, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(249, 81);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Sign up";
			// 
			// SignUP
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(819, 693);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"SignUP";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SignUP";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ firstName = textBox1->Text;
	String^ lastName = textBox2->Text;
	String^ PhoneNumber = textBox3->Text;
	String^ Email = textBox4->Text;
	String^ Password = textBox5->Text;
	String^ Password2 = textBox6->Text;
	String^ Profession = comboBox2->Text;
	int a = 0;
	if (firstName->Length == 0 || lastName->Length == 0 || PhoneNumber->Length == 0 || Email->Length == 0 || Password->Length == 0 || Password2->Length == 0)
	{
		MessageBox::Show("Please, enter the necessary information!", "Some fields are empty", MessageBoxButtons::OK);
		return;
	}

	if (String::Compare(Password, Password2) != 0)
	{
		MessageBox::Show("The Passwords doesn't match up", "Password Error", MessageBoxButtons::OK);
		return;
	}

	String^ connString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=VINIVolunteer;Integrated Security=True";

	SqlConnection sqlConn(connString);
	try
	{
		sqlConn.Open();
		String^ sqlQuery = "INSERT INTO Volunteers" + "(FirstName,LastName,PhoneNumber,Rate,Email,Password,Profession) VALUES" + "(@FirstName,@LastName,@PhoneNumber,@Rate,@Email,@Password,@Profession)";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@FirstName", firstName);
		command.Parameters->AddWithValue("@LastName", lastName);
		command.Parameters->AddWithValue("@PhoneNumber", PhoneNumber);
		command.Parameters->AddWithValue("@Rate", a);
		command.Parameters->AddWithValue("@Email", Email);
		command.Parameters->AddWithValue("@Password", Password);
		command.Parameters->AddWithValue("@Profession", Profession);
		command.ExecuteNonQuery();
		this->Close();
	}
	catch(Exception^ ex)
	{
		MessageBox::Show("Happened an error while creating account, try again later", "VINI Volunteer", MessageBoxButtons::OK);
	}

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void textBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "FirstName")
	{
		textBox1->Text = "";
	}
}
private: System::Void textBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox2->Text == "LastName")
	{
		textBox2->Text = "";
	}
}
private: System::Void textBox3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox3->Text == "PhoneNumber")
	{
		textBox3->Text = "";
	}
}
private: System::Void textBox4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox4->Text == "Email")
	{
		textBox4->Text = "";
	}
}
private: System::Void textBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox5->Text == "Password")
	{
		textBox5->Text = "";
	}
}
private: System::Void textBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox6->Text == "Confirm Password")
	{
		textBox6->Text = "";
	}
	
}
};
}
