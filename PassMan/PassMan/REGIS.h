/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : To create registration page

**************************************************************************************************

*/



#include <msclr\marshal_cppstd.h>
#include "Content.h"
#include "IO.h"
#pragma once

namespace PassMan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class REGIS : public System::Windows::Forms::Form
	{
	public:
		REGIS(void)
		{
			InitializeComponent();
		}

	protected:
		~REGIS()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
	private: System::Windows::Forms::PictureBox^  picmain;
	protected:

	private: System::Windows::Forms::PictureBox^  picuser;
	protected:

	private: System::Windows::Forms::TextBox^  User;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::TextBox^  pass;
	private: System::Windows::Forms::PictureBox^  picpass;
	private: System::Windows::Forms::PictureBox^  close;
	private: System::Windows::Forms::Button^  sign;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::TextBox^  email;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::DateTimePicker^  DOB;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  passs;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::ComponentModel::IContainer^  components;



#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(REGIS::typeid));
			this->picmain = (gcnew System::Windows::Forms::PictureBox());
			this->picuser = (gcnew System::Windows::Forms::PictureBox());
			this->User = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pass = (gcnew System::Windows::Forms::TextBox());
			this->picpass = (gcnew System::Windows::Forms::PictureBox());
			this->close = (gcnew System::Windows::Forms::PictureBox());
			this->sign = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->email = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->DOB = (gcnew System::Windows::Forms::DateTimePicker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->passs = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picmain))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picuser))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picpass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->close))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			//
			// picmain
			//
			this->picmain->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picmain->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picmain->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picmain.Image")));
			this->picmain->Location = System::Drawing::Point(86, 4);
			this->picmain->Name = L"picmain";
			this->picmain->Size = System::Drawing::Size(105, 98);
			this->picmain->TabIndex = 0;
			this->picmain->TabStop = false;
			//
			// picuser
			//
			this->picuser->BackColor = System::Drawing::SystemColors::HotTrack;
			this->picuser->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picuser->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picuser->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picuser.Image")));
			this->picuser->Location = System::Drawing::Point(17, 113);
			this->picuser->Name = L"picuser";
			this->picuser->Size = System::Drawing::Size(28, 28);
			this->picuser->TabIndex = 1;
			this->picuser->TabStop = false;
			//
			// User
			//
			this->User->BackColor = System::Drawing::SystemColors::HotTrack;
			this->User->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->User->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->User->ForeColor = System::Drawing::Color::White;
			this->User->Location = System::Drawing::Point(55, 116);
			this->User->Name = L"User";
			this->User->Size = System::Drawing::Size(199, 23);
			this->User->TabIndex = 2;
			this->User->Text = L"User Name";
			this->User->Click += gcnew System::EventHandler(this, &REGIS::clicked);
			//
			// panel1
			//
			this->panel1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel1->Location = System::Drawing::Point(17, 147);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(250, 1);
			this->panel1->TabIndex = 3;
			//
			// panel2
			//
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel2->Location = System::Drawing::Point(17, 194);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(250, 1);
			this->panel2->TabIndex = 6;
			//
			// pass
			//
			this->pass->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->pass->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->pass->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pass->ForeColor = System::Drawing::Color::White;
			this->pass->Location = System::Drawing::Point(56, 149);
			this->pass->Name = L"pass";
			this->pass->Size = System::Drawing::Size(199, 23);
			this->pass->TabIndex = 5;
			this->pass->Text = L"Password";
			//
			// picpass
			//
			this->picpass->BackColor = System::Drawing::SystemColors::HotTrack;
			this->picpass->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->picpass->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->picpass->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picpass.Image")));
			this->picpass->Location = System::Drawing::Point(17, 160);
			this->picpass->Name = L"picpass";
			this->picpass->Size = System::Drawing::Size(28, 28);
			this->picpass->TabIndex = 4;
			this->picpass->TabStop = false;
			//
			// close
			//
			this->close->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->close->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->close->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"close.Image")));
			this->close->Location = System::Drawing::Point(249, 12);
			this->close->Name = L"close";
			this->close->Size = System::Drawing::Size(28, 28);
			this->close->TabIndex = 7;
			this->close->TabStop = false;
			this->close->Click += gcnew System::EventHandler(this, &REGIS::click_close);
			this->close->MouseHover += gcnew System::EventHandler(this, &REGIS::close_MouseHover);
			//
			// sign
			//
			this->sign->BackColor = System::Drawing::SystemColors::HotTrack;
			this->sign->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sign->Location = System::Drawing::Point(17, 323);
			this->sign->Name = L"sign";
			this->sign->Size = System::Drawing::Size(250, 39);
			this->sign->TabIndex = 8;
			this->sign->Text = L"Register and Enter";
			this->sign->UseVisualStyleBackColor = false;
			this->sign->Click += gcnew System::EventHandler(this, &REGIS::sign_Click);
			//
			// panel3
			//
			this->panel3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel3->Location = System::Drawing::Point(16, 295);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(250, 1);
			this->panel3->TabIndex = 17;
			//
			// pictureBox1
			//
			this->pictureBox1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(16, 261);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(28, 28);
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			//
			// panel4
			//
			this->panel4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel4->Location = System::Drawing::Point(16, 241);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(250, 1);
			this->panel4->TabIndex = 14;
			//
			// email
			//
			this->email->BackColor = System::Drawing::SystemColors::HotTrack;
			this->email->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->email->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->ForeColor = System::Drawing::Color::White;
			this->email->Location = System::Drawing::Point(54, 211);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(199, 23);
			this->email->TabIndex = 13;
			this->email->Text = L"Email Id";
			this->email->Click += gcnew System::EventHandler(this, &REGIS::email_Click);
			//
			// pictureBox2
			//
			this->pictureBox2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(16, 207);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(28, 28);
			this->pictureBox2->TabIndex = 12;
			this->pictureBox2->TabStop = false;
			//
			// DOB
			//
			this->DOB->CalendarForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->DOB->CalendarMonthBackground = System::Drawing::Color::Gray;
			this->DOB->CalendarTitleBackColor = System::Drawing::Color::DeepSkyBlue;
			this->DOB->CalendarTitleForeColor = System::Drawing::SystemColors::HotTrack;
			this->DOB->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F));
			this->DOB->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->DOB->Location = System::Drawing::Point(133, 261);
			this->DOB->MaxDate = System::DateTime(2100, 12, 31, 0, 0, 0, 0);
			this->DOB->MinDate = System::DateTime(1950, 1, 1, 0, 0, 0, 0);
			this->DOB->Name = L"DOB";
			this->DOB->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->DOB->Size = System::Drawing::Size(114, 30);
			this->DOB->TabIndex = 18;
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(52, 265);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(49, 24);
			this->label1->TabIndex = 19;
			this->label1->Text = L"DoB";
			//
			// passs
			//
			this->passs->BackColor = System::Drawing::SystemColors::HotTrack;
			this->passs->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->passs->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passs->ForeColor = System::Drawing::Color::White;
			this->passs->Location = System::Drawing::Point(55, 163);
			this->passs->Name = L"passs";
			this->passs->Size = System::Drawing::Size(199, 23);
			this->passs->TabIndex = 20;
			this->passs->Text = L"Password";
			this->passs->Click += gcnew System::EventHandler(this, &REGIS::textBox1_Click);
			//
			// REGIS
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->ClientSize = System::Drawing::Size(284, 399);
			this->Controls->Add(this->passs);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->DOB);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->email);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->sign);
			this->Controls->Add(this->close);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->picpass);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->User);
			this->Controls->Add(this->picuser);
			this->Controls->Add(this->picmain);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"REGIS";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"login";
			this->TopMost = true;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picmain))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picuser))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picpass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->close))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		private: System::Void clicked(System::Object^  sender, System::EventArgs^  e) {
			User->Clear();
		}

		private: System::Void textBox1_Click(System::Object^  sender, System::EventArgs^  e) {

			passs->Clear();
			passs->PasswordChar = '*';

		}

		private: System::Void email_Click(System::Object^  sender, System::EventArgs^  e) {

			email->Clear();

		}
				 //closing event
		private: System::Void click_close(System::Object^  sender, System::EventArgs^  e) {
			this->Hide();
		}
			 //show tool tip
		private: System::Void close_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			toolTip1->SetToolTip(close, "close");
		}


		private: System::Void sign_Click(System::Object^  sender, System::EventArgs^  e) {
			String ^ a = User->Text;
			String ^ b = passs->Text;
			String ^ c = email->Text;
			String ^ d = DOB->Text;

			std::string as = msclr::interop::marshal_as<std::string>(a);
			std::string bs = msclr::interop::marshal_as<std::string>(b);
			std::string cs = msclr::interop::marshal_as<std::string>(c);
			std::string ds = msclr::interop::marshal_as<std::string>(d);

			if (as != " " && bs != " ")
			{
				UserClass A;
				A.registeration(as, bs, cs, ds);
				usrs.push_back(A);
				WriteTOFileSec(usrs);

				MessageBox::Show("Thank You  " + a + " for registering   \n login with you credintials", "Database");
			}
			else {
				MessageBox::Show("Username and Password mandatory", "Password Manager");
			}

			this->Hide();

		}
#pragma endregion
	};
}
