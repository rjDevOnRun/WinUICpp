#pragma once

namespace MainForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for frmMain
	/// </summary>
	public ref class frmMain : public System::Windows::Forms::Form
	{
	public:
		frmMain(void)
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
		~frmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::Button^ btnShowName;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->btnShowName = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(13, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(106, 21);
			this->label1->TabIndex = 0;
			this->label1->Text = L"You Name:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(141, 32);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(133, 20);
			this->txtName->TabIndex = 1;
			// 
			// btnShowName
			// 
			this->btnShowName->Location = System::Drawing::Point(56, 97);
			this->btnShowName->Name = L"btnShowName";
			this->btnShowName->Size = System::Drawing::Size(137, 28);
			this->btnShowName->TabIndex = 2;
			this->btnShowName->Text = L"Show Name";
			this->btnShowName->UseVisualStyleBackColor = true;
			this->btnShowName->Click += gcnew System::EventHandler(this, &frmMain::btnShowName_Click);
			// 
			// frmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->btnShowName);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label1);
			this->Name = L"frmMain";
			this->Text = L"frmMain";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnShowName_Click(System::Object^ sender, System::EventArgs^ e) {

		MessageBox::Show(txtName->Text);

	}
	};
}
