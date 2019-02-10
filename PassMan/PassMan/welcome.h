/*

**************************************************************************************************
						Author : Rajendra Prajapat
						Aim : To show a welcome massage with 5 second delay

**************************************************************************************************

*/

#include "Login.h"
#pragma once

namespace PassMan {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for welcome
	/// </summary>
	public ref class welcome : public System::Windows::Forms::Form
	{
	public:
		welcome(void)
		{
			InitializeComponent();
		}

	protected:

		~welcome()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	protected:
	private: System::ComponentModel::IContainer^  components;

	private:

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(welcome::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			//
			// timer1
			//
			this->timer1->Interval = 5000;
			this->timer1->Tick += gcnew System::EventHandler(this, &welcome::timer1_Tick);
			//
			// welcome
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Highlight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(516, 282);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"welcome";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"welcome";
			this->Load += gcnew System::EventHandler(this, &welcome::welcome_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void welcome_Load(System::Object^  sender, System::EventArgs^  e) {
		timer1->Start();
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		timer1->Stop();
		this->Hide();
		Login ^ abc = gcnew Login;
		abc->Show();

	}
	};
}
