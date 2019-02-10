/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : Main page of application to show all the containt

**************************************************************************************************

*/


#pragma once

#include "Login.h"
#include "Content.h"
#include "IO.h"
#include "operation.h"
#include  <string>
#include <msclr\marshal_cppstd.h>
#include <sstream>

#include  <vector>
namespace PassMan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Operation;

	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
		{
			InitializeComponent();
		}

	protected:
		~Main()
		{
			if (components)
			{
				delete components;
			}

			Application::Exit();

		}

		//auto generated
	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::FlowLayoutPanel^  fl;
	private: System::Windows::Forms::GroupBox^  First;
	private: System::Windows::Forms::GroupBox^  sec;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  del;

	private: System::Windows::Forms::PictureBox^  edit;

	private: System::Windows::Forms::PictureBox^  link;

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  Logout;
	private: System::Windows::Forms::Button^  About;
	private: System::Windows::Forms::Button^  Add;

	protected:

	private:
		//  auto generated
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::GroupBox^  AddNew;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  SiteName;
	private: System::Windows::Forms::TextBox^  site_link;

	private: System::Windows::Forms::TextBox^  Sec_Ans;

	private: System::Windows::Forms::TextBox^  Sec_Ques;

	private: System::Windows::Forms::TextBox^  Pass_word;
	private: System::Windows::Forms::TextBox^  e_mail;
	private: System::Windows::Forms::TextBox^  Mob_Num;



	private: System::Windows::Forms::TextBox^  user_name;

	private: System::Windows::Forms::TextBox^  site_name;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label15;



		System::ComponentModel::ComponentResourceManager^  resources = (gcnew
			System::ComponentModel::ComponentResourceManager(Main::typeid));

#pragma region Windows Form Designer generated code

//**********************************************************************************************
/**********************************************************************************************
          TO add dynamic content
/*/
	//add PictureBox
		PictureBox^ linkTo(String^ P) {
			PictureBox^ Link = gcnew PictureBox();
			Link->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"link.Image")));
			Link->Location = System::Drawing::Point(497, 69);
			Link->Name = P;
			Link->Size = System::Drawing::Size(25, 25);
			Link->TabIndex = 7;
			Link->TabStop = false;
			Link->Click += gcnew System::EventHandler(this, &Main::Goto_site);
			return Link;
		}

		private: System::Void Goto_site(System::Object^ sender, System::EventArgs^ e) {
			//LinkLabel ip = sender;
			PictureBox^ obj = ((PictureBox^)sender);
			String^ idd = obj->Name;
			std::string xs = msclr::interop::marshal_as<std::string>(idd);
			int k = findIndex(xs);

			String^ str = gcnew String(ppl[k].GLink().c_str());
			System::Diagnostics::Process::Start(str);
		}
//edit box
		PictureBox^ editBox(String^ P) {

			PictureBox^ Edit = gcnew PictureBox();

			Edit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edit.Image")));
			Edit->Location = System::Drawing::Point(538, 69);
			Edit->Name = P;
			Edit->Size = System::Drawing::Size(25, 25);
			Edit->TabIndex = 8;
			Edit->Click += gcnew System::EventHandler(this, &Main::Edit_me);
			Edit->TabStop = false;
			return Edit;
		}
//event handlers
		private: System::Void Edit_me(System::Object^ sender, System::EventArgs^ e) {
			//LinkLabel ip = sender;
			PictureBox^ obj = ((PictureBox^)sender);
			String^ idd = obj->Name;
			std::string xs = msclr::interop::marshal_as<std::string>(idd);
			int k = findIndex(xs);
			Pass_Man Sresult = ppl[k];

			AddNew->Show();
			//convert all values of  the site to system strings
			button3->Hide();
			String^ str1 = gcnew String(Sresult.GName().c_str());
			String^ str2 = gcnew String(Sresult.GPass().c_str());
			String^ str3 = gcnew String(Sresult.GLink().c_str());
			String^ str4 = gcnew String(Sresult.GSite().c_str());
			String^ str5 = gcnew String(Sresult.GQues().c_str());
			String^ str6 = gcnew String(Sresult.GAns().c_str());
			String^ str7 = gcnew String(Sresult.GMail().c_str());
			String^ str8 = gcnew String(Sresult.GMob().c_str());

			site_name->Text=str4;
			user_name->Text=str1;
			Pass_word->Text=str2;
			e_mail->Text=str7;
			Mob_Num->Text=str8;
			Sec_Ques->Text=str5;
			Sec_Ans->Text=str6;
			site_link->Text=str3;
			ppl.erase(ppl.begin() + k);
		}


		PictureBox^ DeleteBox(String^ P)
		{
			PictureBox^ Del = gcnew PictureBox();

			Del->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del.Image")));
			Del->Location = System::Drawing::Point(577, 69);
			Del->Name = P;
			Del->Size = System::Drawing::Size(25, 25);
			Del->TabIndex = 9;
			Del ->Click += gcnew System::EventHandler(this, &Main::Delete_me);
			Del->TabStop = false;
			return Del;
		}

		private: System::Void Delete_me(System::Object^ sender, System::EventArgs^ e) {
			//LinkLabel ip = sender;
			PictureBox^ obj = ((PictureBox^)sender);
			String^ idd = obj->Name;
			std::string xs = msclr::interop::marshal_as<std::string>(idd);
			int k = findIndex(xs);

			if (MessageBox::Show("Do you want to Exit?", "Database", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
			{
				ppl.erase(ppl.begin() + k);
				std::string fi = adm + ".txt";
				WriteTOFile(ppl, fi);
				ppl.clear();
				LoadData(ppl, fi);
				show_bar();
			}

		}
		//create a name label

		Label^ createName2(String^ P, int start, int end,int x1,int x2)
		{
			Label^ l = gcnew Label();
			l->Name = P;
			l->Text = P;
			//l->BackColor = Color::White;
			l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.00F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			l->Size = System::Drawing::Size(x1,x2);
			l->Location = System::Drawing::Point(start, end);
			return l;
		}

		TextBox^ createtxt(String^ P, int start, int end, int x1, int x2)
		{
			TextBox^ l = gcnew TextBox();
			l->Name = P;
			l->Text = P;
			//l->BackColor = Color::White;
			l->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.00F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			l->BackColor = System::Drawing::SystemColors::Highlight;

			l->Size = System::Drawing::Size(x1, x2);
			l->Location = System::Drawing::Point(start, end);
			return l;
		}
		GroupBox^ CreateGroup(int i )
		{
			//sec = gcnew GroupBox();
			sec = (gcnew System::Windows::Forms::GroupBox());
			Pass_Man Sresult = ppl[i];

			String^ str1 = gcnew String(Sresult.GName().c_str());
			String^ str2 = gcnew String(Sresult.GPass().c_str());
			String^ str3 = gcnew String(Sresult.GLink().c_str());
			String^ str4 = gcnew String(Sresult.GSite().c_str());
			String^ str5 = gcnew String(Sresult.GQues().c_str());
			String^ str6 = gcnew String(Sresult.GAns().c_str());
			String^ str7 = gcnew String(Sresult.GMail().c_str());
			String^ str8 = gcnew String(Sresult.GMob().c_str());
			String^ str9 = gcnew String(Sresult.GId().c_str());

			Label^ l = createName2(str7, 58, 73, 200, 18);//mail
			this->sec->Controls->Add(l);


			l = createName2(str6, 284, 33, 218, 18);//sequrity ans
			this->sec->Controls->Add(l);


			l = createName2(str5, 285, 16, 220, 18);//security question
			this->sec->Controls->Add(l);


			l = createName2(str8, 288, 54, 110, 18);// mobile
			this->sec->Controls->Add(l);

			l = createName2(str1, 58, 34, 150, 18);//user name
			this->sec->Controls->Add(l);

			PictureBox^x = linkTo(str9);
			this->sec->Controls->Add(x);

			x=DeleteBox(str9);
			this->sec->Controls->Add(x);

			x=editBox(str9);
			this->sec->Controls->Add(x);

			l = createName2(str2, 58, 54, 83, 18);//str2
			this->sec->Controls->Add(l);


			l = createName2(str4, 58, 15, 118, 18);//str2
			this->sec->Controls->Add(l);

			sec->Name = i.ToString();
			sec->Text = i.ToString();


			sec->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));

			sec->Size = System::Drawing::Size(619, 100);

			return sec;

		}


		void show_bar()
		{

			while (fl->Controls->Count > 0) {
				fl->Controls->RemoveAt(0);
			}


			for (unsigned int i = 0; i < ppl.size(); i++)
			{
				GroupBox^ sec = CreateGroup(i);
				this->fl->Controls->Add(sec);
			}

		}


		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->Logout = (gcnew System::Windows::Forms::Button());
			this->About = (gcnew System::Windows::Forms::Button());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->AddNew = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->site_link = (gcnew System::Windows::Forms::TextBox());
			this->Sec_Ans = (gcnew System::Windows::Forms::TextBox());
			this->Sec_Ques = (gcnew System::Windows::Forms::TextBox());
			this->Pass_word = (gcnew System::Windows::Forms::TextBox());
			this->e_mail = (gcnew System::Windows::Forms::TextBox());
			this->Mob_Num = (gcnew System::Windows::Forms::TextBox());
			this->user_name = (gcnew System::Windows::Forms::TextBox());
			this->site_name = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SiteName = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->fl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->First = (gcnew System::Windows::Forms::GroupBox());
			this->del = (gcnew System::Windows::Forms::PictureBox());
			this->edit = (gcnew System::Windows::Forms::PictureBox());
			this->link = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->AddNew->SuspendLayout();
			this->First->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->del))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->link))->BeginInit();
			this->SuspendLayout();
			//
			// splitContainer1
			//
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 0);
			this->splitContainer1->Name = L"splitContainer1";
			//
			// splitContainer1.Panel1
			//
			this->splitContainer1->Panel1->Controls->Add(this->Logout);
			this->splitContainer1->Panel1->Controls->Add(this->About);
			this->splitContainer1->Panel1->Controls->Add(this->Add);
			this->splitContainer1->Panel1->Controls->Add(this->pictureBox4);
			//
			// splitContainer1.Panel2
			//
			this->splitContainer1->Panel2->Controls->Add(this->AddNew);
			this->splitContainer1->Panel2->Controls->Add(this->fl);
			this->splitContainer1->Panel2->Controls->Add(this->First);
			this->splitContainer1->Size = System::Drawing::Size(846, 434);
			this->splitContainer1->SplitterDistance = 195;
			this->splitContainer1->TabIndex = 0;
			//
			// Logout
			//
			this->Logout->AutoEllipsis = true;
			this->Logout->BackColor = System::Drawing::SystemColors::HotTrack;
			this->Logout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Logout->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Logout->Location = System::Drawing::Point(10, 330);
			this->Logout->Name = L"Logout";
			this->Logout->Size = System::Drawing::Size(146, 44);
			this->Logout->TabIndex = 3;
			this->Logout->Text = L"LogOut";
			this->Logout->UseVisualStyleBackColor = false;
			this->Logout->Click += gcnew System::EventHandler(this, &Main::Logout_Click);
			//
			// About
			//
			this->About->AutoEllipsis = true;
			this->About->BackColor = System::Drawing::SystemColors::HotTrack;
			this->About->Cursor = System::Windows::Forms::Cursors::Hand;
			this->About->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->About->Location = System::Drawing::Point(11, 264);
			this->About->Name = L"About";
			this->About->Size = System::Drawing::Size(146, 44);
			this->About->TabIndex = 2;
			this->About->Text = L"About";
			this->About->UseVisualStyleBackColor = false;
			this->About->Click += gcnew System::EventHandler(this, &Main::About_Click);
			//
			// Add
			//
			this->Add->AutoEllipsis = true;
			this->Add->BackColor = System::Drawing::SystemColors::HotTrack;
			this->Add->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Add->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Add->Location = System::Drawing::Point(12, 198);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(146, 44);
			this->Add->TabIndex = 1;
			this->Add->Text = L"New";
			this->Add->UseVisualStyleBackColor = false;
			this->Add->Click += gcnew System::EventHandler(this, &Main::Add_Click);
			//
			// pictureBox4
			//
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(42, 15);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 100);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			//
			// AddNew
			//
			this->AddNew->Controls->Add(this->label15);
			this->AddNew->Controls->Add(this->checkBox1);
			this->AddNew->Controls->Add(this->site_link);
			this->AddNew->Controls->Add(this->Sec_Ans);
			this->AddNew->Controls->Add(this->Sec_Ques);
			this->AddNew->Controls->Add(this->Pass_word);
			this->AddNew->Controls->Add(this->e_mail);
			this->AddNew->Controls->Add(this->Mob_Num);
			this->AddNew->Controls->Add(this->user_name);
			this->AddNew->Controls->Add(this->site_name);
			this->AddNew->Controls->Add(this->label14);
			this->AddNew->Controls->Add(this->label13);
			this->AddNew->Controls->Add(this->label12);
			this->AddNew->Controls->Add(this->label11);
			this->AddNew->Controls->Add(this->label10);
			this->AddNew->Controls->Add(this->label9);
			this->AddNew->Controls->Add(this->label8);
			this->AddNew->Controls->Add(this->SiteName);
			this->AddNew->Controls->Add(this->button3);
			this->AddNew->Controls->Add(this->button2);
			this->AddNew->Controls->Add(this->button1);
			this->AddNew->Location = System::Drawing::Point(3, 3);
			this->AddNew->Name = L"AddNew";
			this->AddNew->Size = System::Drawing::Size(641, 428);
			this->AddNew->TabIndex = 2;
			this->AddNew->TabStop = false;
			//
			// label15
			//
			this->label15->AutoSize = true;
			this->label15->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(255, 23);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(150, 24);
			this->label15->TabIndex = 23;
			this->label15->Text = L"Add New Entry";
			//
			// checkBox1
			//
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(562, 128);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(56, 22);
			this->checkBox1->TabIndex = 22;
			this->checkBox1->Text = L"See";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Main::checkBox1_CheckedChanged);
			//
			// site_link
			//
			this->site_link->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->site_link->Location = System::Drawing::Point(274, 283);
			this->site_link->Name = L"site_link";
			this->site_link->Size = System::Drawing::Size(275, 26);
			this->site_link->TabIndex = 21;
			//
			// Sec_Ans
			//
			this->Sec_Ans->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->Sec_Ans->Location = System::Drawing::Point(274, 251);
			this->Sec_Ans->Name = L"Sec_Ans";
			this->Sec_Ans->Size = System::Drawing::Size(275, 26);
			this->Sec_Ans->TabIndex = 20;
			//
			// Sec_Ques
			//
			this->Sec_Ques->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->Sec_Ques->Location = System::Drawing::Point(274, 219);
			this->Sec_Ques->Name = L"Sec_Ques";
			this->Sec_Ques->Size = System::Drawing::Size(275, 26);
			this->Sec_Ques->TabIndex = 19;
			//
			// Pass_word
			//
			this->Pass_word->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->Pass_word->Location = System::Drawing::Point(274, 123);
			this->Pass_word->Name = L"Pass_word";
			this->Pass_word->PasswordChar = '*';
			this->Pass_word->Size = System::Drawing::Size(275, 26);
			this->Pass_word->TabIndex = 18;
			//
			// e_mail
			//
			this->e_mail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->e_mail->Location = System::Drawing::Point(274, 155);
			this->e_mail->Name = L"e_mail";
			this->e_mail->Size = System::Drawing::Size(275, 26);
			this->e_mail->TabIndex = 17;
			//
			// Mob_Num
			//
			this->Mob_Num->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->Mob_Num->Location = System::Drawing::Point(274, 187);
			this->Mob_Num->Name = L"Mob_Num";
			this->Mob_Num->Size = System::Drawing::Size(275, 26);
			this->Mob_Num->TabIndex = 16;
			//
			// user_name
			//
			this->user_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->user_name->Location = System::Drawing::Point(274, 91);
			this->user_name->Name = L"user_name";
			this->user_name->Size = System::Drawing::Size(275, 26);
			this->user_name->TabIndex = 15;
			//
			// site_name
			//
			this->site_name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->site_name->Location = System::Drawing::Point(274, 59);
			this->site_name->Name = L"site_name";
			this->site_name->Size = System::Drawing::Size(275, 26);
			this->site_name->TabIndex = 14;
			//
			// label14
			//
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::Highlight;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(84, 286);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(79, 20);
			this->label14->TabIndex = 13;
			this->label14->Text = L"Site Link";
			//
			// label13
			//
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::Highlight;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(84, 126);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(86, 20);
			this->label13->TabIndex = 12;
			this->label13->Text = L"Password";
			//
			// label12
			//
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::Highlight;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(84, 94);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(98, 20);
			this->label12->TabIndex = 11;
			this->label12->Text = L"User Name";
			//
			// label11
			//
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::Highlight;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(84, 254);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(138, 20);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Security Answer";
			//
			// label10
			//
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Highlight;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(84, 222);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(151, 20);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Security Question";
			//
			// label9
			//
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Highlight;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(84, 190);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(128, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Mobile Number";
			//
			// label8
			//
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Highlight;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(84, 158);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 20);
			this->label8->TabIndex = 7;
			this->label8->Text = L"EMail";
			//
			// SiteName
			//
			this->SiteName->AutoSize = true;
			this->SiteName->BackColor = System::Drawing::SystemColors::Highlight;
			this->SiteName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SiteName->Location = System::Drawing::Point(84, 62);
			this->SiteName->Name = L"SiteName";
			this->SiteName->Size = System::Drawing::Size(92, 20);
			this->SiteName->TabIndex = 6;
			this->SiteName->Text = L"Site Name";
			//
			// button3
			//
			this->button3->AutoEllipsis = true;
			this->button3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(431, 336);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 44);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Cancel";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			//
			// button2
			//
			this->button2->AutoEllipsis = true;
			this->button2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(247, 336);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(146, 44);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Clear";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			//
			// button1
			//
			this->button1->AutoEllipsis = true;
			this->button1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Imprint MT Shadow", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(61, 336);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(146, 44);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			//
			// fl
			//
			this->fl->AutoScroll = true;
			this->fl->Location = System::Drawing::Point(3, 111);
			this->fl->Name = L"fl";
			this->fl->Size = System::Drawing::Size(641, 317);
			this->fl->TabIndex = 0;
			//
			// First
			//
			this->First->BackColor = System::Drawing::SystemColors::Highlight;
			this->First->Controls->Add(this->del);
			this->First->Controls->Add(this->edit);
			this->First->Controls->Add(this->link);
			this->First->Controls->Add(this->label7);
			this->First->Controls->Add(this->label6);
			this->First->Controls->Add(this->label5);
			this->First->Controls->Add(this->label4);
			this->First->Controls->Add(this->label3);
			this->First->Controls->Add(this->label2);
			this->First->Controls->Add(this->label1);
			this->First->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->First->Location = System::Drawing::Point(3, 5);
			this->First->Name = L"First";
			this->First->Size = System::Drawing::Size(619, 100);
			this->First->TabIndex = 1;
			this->First->TabStop = false;
			this->First->Text = L"ID";
			//
			// del
			//
			this->del->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"del.Image")));
			this->del->Location = System::Drawing::Point(577, 69);
			this->del->Name = L"del";
			this->del->Size = System::Drawing::Size(25, 25);
			this->del->TabIndex = 9;
			this->del->TabStop = false;
			//
			// edit
			//
			this->edit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"edit.Image")));
			this->edit->Location = System::Drawing::Point(538, 69);
			this->edit->Name = L"edit";
			this->edit->Size = System::Drawing::Size(25, 25);
			this->edit->TabIndex = 8;
			this->edit->TabStop = false;
			//
			// link
			//
			this->link->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"link.Image")));
			this->link->Location = System::Drawing::Point(497, 69);
			this->link->Name = L"link";
			this->link->Size = System::Drawing::Size(25, 25);
			this->link->TabIndex = 7;
			this->link->TabStop = false;
			//
			// label7
			//
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(58, 73);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 18);
			this->label7->TabIndex = 6;
			this->label7->Text = L"E-Mail Id";
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(284, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(218, 18);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Answer of Security question";
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(285, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(142, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Security Question";
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(284, 54);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(85, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Mobile No";
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(58, 34);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(88, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"UserName";
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(58, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(58, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Account Name";
			//
			// Main
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(846, 434);
			this->Controls->Add(this->splitContainer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->AddNew->ResumeLayout(false);
			this->AddNew->PerformLayout();
			this->First->ResumeLayout(false);
			this->First->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->del))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->link))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


//when the pages loads
	private: System::Void Main_Load(System::Object^  sender, System::EventArgs^  e) {
		AddNew->Hide();
		show_bar();
	}
//about clcked
	private: System::Void About_Click(System::Object^  sender, System::EventArgs^  e) {
		System::Diagnostics::Process::Start("https://www.linkedin.com/in/rajendra-prajapat-b45764160/");
	}

//check box
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		if (checkBox1->Checked == TRUE)
		{
			Pass_word->PasswordChar = NULL;
		}
		else
		{
			Pass_word->PasswordChar = '*';
		}
	}
		// New is clicked
	private: System::Void Add_Click(System::Object^  sender, System::EventArgs^  e) {
		AddNew->Show();
	}
			 //cancel clicked
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		AddNew->Hide();
	}
			 //submit is clicked
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//system strings
		button3->Show();
		String^ sn1 = site_name->Text;
		String^ sn2 = user_name->Text;
		String^ sn3 = Pass_word->Text;
		String^ sn4 = e_mail->Text;
		String^ sn5 = Mob_Num->Text;
		String^ sn6 = Sec_Ques->Text;
		String^ sn7 = Sec_Ans->Text;
		String^ sn8 = site_link->Text;

		// to convert in simple string
		std::string s1 = msclr::interop::marshal_as<std::string>(sn1);
		std::string s2 = msclr::interop::marshal_as<std::string>(sn2);
		std::string s3 = msclr::interop::marshal_as<std::string>(sn3);
		std::string s4 = msclr::interop::marshal_as<std::string>(sn4);
		std::string s5 = msclr::interop::marshal_as<std::string>(sn5);
		std::string s6 = msclr::interop::marshal_as<std::string>(sn6);
		std::string s7 = msclr::interop::marshal_as<std::string>(sn7);
		std::string s8 = msclr::interop::marshal_as<std::string>(sn8);

		//create a object of class Pass_Man
		std::string ii=std::to_string(GenId());//id

		Pass_Man A;
		A.Enter(ii,s2, s3, s8, s1, s6, s7, s4, s5);
		ppl.push_back(A);
		std::string fi = adm + ".txt";
		WriteTOFile(ppl, fi);
		ppl.clear();
		int k = LoadData(ppl, fi);
		if (k == 123)
		{
			MessageBox::Show("Something Went Wrong", "Password Manager");
		}
		else {
			MessageBox::Show("Operation completed", "Password Manager");

		}
		show_bar();

		AddNew->Hide();
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		site_name->Clear();
		user_name->Clear();
		Pass_word->Clear();
		e_mail->Clear();
		Mob_Num->Clear();
		Sec_Ques->Clear();
		Sec_Ans->Clear();
		site_link->Clear();

	}
	private: System::Void Logout_Click(System::Object^  sender, System::EventArgs^  e) {
		if (MessageBox::Show("Are you sure, you want to log out?", "Password Manager", MessageBoxButtons::YesNo) == System::Windows::Forms::DialogResult::Yes)
		{
			this->Close();
		}


	}
};
}
