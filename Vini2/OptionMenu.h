#pragma once
#include "AddInformation.h"
#include <vector>
#include "Projects.h"
namespace Vini2 {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for OptionMenu
	/// </summary>
	
	public ref class OptionMenu : public System::Windows::Forms::Form
	{
	public:
		OptionMenu(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		int check = 0;
		void Restart(OptionMenu^ opt)
		{
			opt->Close();
			opt->~OptionMenu();
			Vini2::OptionMenu^ NewOpt = gcnew Vini2::OptionMenu();
			NewOpt->Show();
		}
		void CreateProject(int ID)
		{
			String^ connString = "Data Source=DESKTOP-OE7LBBP;Initial Catalog=VINIVolunteer;Integrated Security=True";
			SqlConnection sqlConn(connString);
			try
			{
				
				sqlConn.Open();
				String^ sqlQuery = "SELECT * FROM Project WHERE ID = @ID;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@ID", ID);
				SqlDataReader^ reader = command.ExecuteReader();
				if (reader->Read())
				{
					pj->ID = ID;
					pj->ProjectName = reader->GetString(1);
					pj->ProjectDesc = reader->GetString(2);
					pj->ProjectType = reader->GetString(3);
					pj->DateStart = reader->GetString(4);
					pj->ProjectStatus = reader->GetInt32(5);
					pj->Region = reader->GetString(6);
				}

			}
			catch (Exception^ ex)
			{
				MessageBox::Show("Error, try again later", "VINI Volunteer", MessageBoxButtons::OK);
			}
		}
	private: System::Windows::Forms::Panel^ panel5;
	public:
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Button^ button12;
		   Projects^ pj = gcnew Projects();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~OptionMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button2;



	private: System::Windows::Forms::Panel^ panel6;

	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(OptionMenu::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->flowLayoutPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->panel7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Location = System::Drawing::Point(-14, -4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1191, 116);
			this->panel1->TabIndex = 0;
			this->panel1->UseWaitCursor = true;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox6->Location = System::Drawing::Point(291, 3);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(587, 110);
			this->pictureBox6->TabIndex = 1;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->UseWaitCursor = true;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(26, 16);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(135, 51);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->UseWaitCursor = true;
			this->button5->Click += gcnew System::EventHandler(this, &OptionMenu::button5_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->AutoScroll = true;
			this->flowLayoutPanel1->Controls->Add(this->panel2);
			this->flowLayoutPanel1->Controls->Add(this->panel3);
			this->flowLayoutPanel1->Controls->Add(this->panel4);
			this->flowLayoutPanel1->Controls->Add(this->panel5);
			this->flowLayoutPanel1->Controls->Add(this->panel7);
			this->flowLayoutPanel1->Location = System::Drawing::Point(3, 115);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1240, 528);
			this->flowLayoutPanel1->TabIndex = 1;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &OptionMenu::flowLayoutPanel1_Paint_1);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Location = System::Drawing::Point(9, 9);
			this->panel2->Margin = System::Windows::Forms::Padding(9);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(377, 256);
			this->panel2->TabIndex = 0;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->button7->ForeColor = System::Drawing::SystemColors::Control;
			this->button7->Location = System::Drawing::Point(208, 95);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(136, 48);
			this->button7->TabIndex = 8;
			this->button7->Text = L"Help";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &OptionMenu::button7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(12, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 37);
			this->label1->TabIndex = 7;
			this->label1->Text = L"7-поверхівка";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(14, 72);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(170, 169);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->button4->ForeColor = System::Drawing::SystemColors::Control;
			this->button4->Location = System::Drawing::Point(208, 159);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(136, 48);
			this->button4->TabIndex = 3;
			this->button4->Text = L"More";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &OptionMenu::button4_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel3->Controls->Add(this->button8);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Controls->Add(this->button3);
			this->panel3->Location = System::Drawing::Point(404, 9);
			this->panel3->Margin = System::Windows::Forms::Padding(9);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(377, 256);
			this->panel3->TabIndex = 1;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->button8->ForeColor = System::Drawing::SystemColors::Control;
			this->button8->Location = System::Drawing::Point(220, 95);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(136, 48);
			this->button8->TabIndex = 9;
			this->button8->Text = L"Help";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &OptionMenu::button8_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(9, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(184, 37);
			this->label2->TabIndex = 6;
			this->label2->Text = L"9-поверхівка";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(18, 73);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(170, 169);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->button3->ForeColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(221, 162);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(136, 48);
			this->button3->TabIndex = 2;
			this->button3->Text = L"More";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &OptionMenu::button3_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel4->Controls->Add(this->button9);
			this->panel4->Controls->Add(this->label3);
			this->panel4->Controls->Add(this->pictureBox3);
			this->panel4->Controls->Add(this->button2);
			this->panel4->Location = System::Drawing::Point(799, 9);
			this->panel4->Margin = System::Windows::Forms::Padding(9);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(377, 256);
			this->panel4->TabIndex = 2;
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->button9->ForeColor = System::Drawing::SystemColors::Control;
			this->button9->Location = System::Drawing::Point(220, 95);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(136, 48);
			this->button9->TabIndex = 10;
			this->button9->Text = L"Help";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &OptionMenu::button9_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(17, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 37);
			this->label3->TabIndex = 7;
			this->label3->Text = L"2-поверхівка";
			this->label3->Click += gcnew System::EventHandler(this, &OptionMenu::label3_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(24, 74);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(170, 169);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(220, 163);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(136, 48);
			this->button2->TabIndex = 1;
			this->button2->Text = L"More";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &OptionMenu::button2_Click);
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel5->Controls->Add(this->button10);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->pictureBox4);
			this->panel5->Controls->Add(this->button1);
			this->panel5->Location = System::Drawing::Point(9, 283);
			this->panel5->Margin = System::Windows::Forms::Padding(9);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(377, 256);
			this->panel5->TabIndex = 3;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Location = System::Drawing::Point(208, 108);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(136, 48);
			this->button10->TabIndex = 11;
			this->button10->Text = L"Help";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &OptionMenu::button10_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->label4->ForeColor = System::Drawing::SystemColors::Control;
			this->label4->Location = System::Drawing::Point(34, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(124, 37);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Будинок";
			this->label4->Click += gcnew System::EventHandler(this, &OptionMenu::label4_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(14, 76);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(170, 169);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::SystemColors::Control;
			this->button1->Location = System::Drawing::Point(208, 173);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 48);
			this->button1->TabIndex = 2;
			this->button1->Text = L"More";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &OptionMenu::button1_Click_1);
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(65)),
				static_cast<System::Int32>(static_cast<System::Byte>(87)));
			this->panel7->Controls->Add(this->button11);
			this->panel7->Controls->Add(this->label5);
			this->panel7->Controls->Add(this->pictureBox5);
			this->panel7->Controls->Add(this->button6);
			this->panel7->Location = System::Drawing::Point(404, 283);
			this->panel7->Margin = System::Windows::Forms::Padding(9);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(377, 256);
			this->panel7->TabIndex = 4;
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->button11->ForeColor = System::Drawing::SystemColors::Control;
			this->button11->Location = System::Drawing::Point(220, 108);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(136, 48);
			this->button11->TabIndex = 12;
			this->button11->Text = L"Help";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &OptionMenu::button11_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 16, System::Drawing::FontStyle::Bold));
			this->label5->ForeColor = System::Drawing::SystemColors::Control;
			this->label5->Location = System::Drawing::Point(43, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(124, 37);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Будинок";
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(18, 73);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(170, 169);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->button6->ForeColor = System::Drawing::SystemColors::Control;
			this->button6->Location = System::Drawing::Point(219, 170);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(136, 48);
			this->button6->TabIndex = 2;
			this->button6->Text = L"More";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &OptionMenu::button6_Click);
			// 
			// panel6
			// 
			this->panel6->Location = System::Drawing::Point(14, 115);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(1177, 528);
			this->panel6->TabIndex = 4;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold));
			this->button12->ForeColor = System::Drawing::SystemColors::Control;
			this->button12->Location = System::Drawing::Point(996, 649);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(166, 48);
			this->button12->TabIndex = 10;
			this->button12->Text = L"Refresh";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &OptionMenu::button12_Click);
			// 
			// OptionMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->ClientSize = System::Drawing::Size(1174, 706);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel6);
			this->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"OptionMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"OptionMenu";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->flowLayoutPanel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
	private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		CreateProject(2);
		AddInformation^ info = gcnew AddInformation();
		info->label1->Text = pj->Region;
		info->label5->Text = pj->ProjectName;
		info->label3->Text = pj->ProjectDesc;
		info->label7->Text = pj->DateStart;
		info->label6->Text = pj->ProjectType;
		info->Show();
	}
private: System::Void flowLayoutPanel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateProject(1);
	AddInformation^ info = gcnew AddInformation();
	info->label1->Text = pj->Region;
	info->label5->Text = pj->ProjectName;
	info->label3->Text = pj->ProjectDesc;
	info->label7->Text = pj->DateStart;
	info->label6->Text = pj->ProjectType;
	info->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateProject(3);
	AddInformation^ info = gcnew AddInformation();
	info->label1->Text = pj->Region;
	info->label5->Text = pj->ProjectName;
	info->label3->Text = pj->ProjectDesc;
	info->label7->Text = pj->DateStart;
	info->label6->Text = pj->ProjectType;
	info->Show();
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	CreateProject(4);
	AddInformation^ info = gcnew AddInformation();
	info->label1->Text = pj->Region;
	info->label5->Text = pj->ProjectName;
	info->label3->Text = pj->ProjectDesc;
	info->label7->Text = pj->DateStart;
	info->label6->Text = pj->ProjectType;
	info->Show();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	CreateProject(5);
	AddInformation^ info = gcnew AddInformation();
	info->label1->Text = pj->Region;
	info->label5->Text = pj->ProjectName;
	info->label3->Text = pj->ProjectDesc;
	info->label7->Text = pj->DateStart;
	info->label6->Text = pj->ProjectType;
	info->Show();
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check >= 1)
	{
		MessageBox::Show("You canont take more than one project at once", "VINI Volunteer", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Thans for taking this project", "VINI Volunteer", MessageBoxButtons::OK);
		check++;
	}
	
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check >= 1)
	{
		MessageBox::Show("You canont take more than one project at once", "VINI Volunteer", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Thans for taking this project", "VINI Volunteer", MessageBoxButtons::OK);
		check++;
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check >= 1)
	{
		MessageBox::Show("You canont take more than one project at once", "VINI Volunteer", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Thans for taking this project", "VINI Volunteer", MessageBoxButtons::OK);
		check++;
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check >= 1)
	{
		MessageBox::Show("You canont take more than one project at once", "VINI Volunteer", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Thans for taking this project", "VINI Volunteer", MessageBoxButtons::OK);
		check++;
	}
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	if (check >= 1)
	{
		MessageBox::Show("You canont take more than one project at once", "VINI Volunteer", MessageBoxButtons::OK);
	}
	else {
		MessageBox::Show("Thans for taking this project", "VINI Volunteer", MessageBoxButtons::OK);
		check++;
	}
}
};
}
