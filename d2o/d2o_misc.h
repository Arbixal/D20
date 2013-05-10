#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace d2o
{
	/// <summary> 
	/// Summary for d2o_misc
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public __gc class d2o_misc : public System::Windows::Forms::Form
	{
	public: 
		d2o_misc(void)
		{
			InitializeComponent();
		}
        
	protected: 
		void Dispose(Boolean disposing)
		{
			if (disposing && components)
			{
				components->Dispose();
			}
			__super::Dispose(disposing);
		}

	private: 
		System::Windows::Forms::Button *  btn_cancel;
		System::Windows::Forms::ListView *  lstv_misc;
		System::Windows::Forms::Button *  btn_add;

		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container* components;

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btn_add = new System::Windows::Forms::Button();
			this->btn_cancel = new System::Windows::Forms::Button();
			this->lstv_misc = new System::Windows::Forms::ListView();
			this->SuspendLayout();
			// 
			// btn_add
			// 
			this->btn_add->BackColor = System::Drawing::Color::White;
			this->btn_add->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_add->Location = System::Drawing::Point(210, 325);
			this->btn_add->Name = S"btn_add";
			this->btn_add->TabIndex = 0;
			this->btn_add->Text = S"Add";
			this->btn_add->Click += new System::EventHandler(this, btn_add_Click);
			// 
			// btn_cancel
			// 
			this->btn_cancel->BackColor = System::Drawing::Color::White;
			this->btn_cancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btn_cancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_cancel->Location = System::Drawing::Point(125, 325);
			this->btn_cancel->Name = S"btn_cancel";
			this->btn_cancel->TabIndex = 1;
			this->btn_cancel->Text = S"Cancel";
			this->btn_cancel->Click += new System::EventHandler(this, btn_cancel_Click);
			// 
			// lstv_misc
			// 
			this->lstv_misc->BackColor = System::Drawing::Color::White;
			this->lstv_misc->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lstv_misc->Location = System::Drawing::Point(10, 10);
			this->lstv_misc->Name = S"lstv_misc";
			this->lstv_misc->Size = System::Drawing::Size(275, 305);
			this->lstv_misc->TabIndex = 2;
			this->lstv_misc->View = System::Windows::Forms::View::Details;
			// 
			// d2o_misc
			// 
			this->AcceptButton = this->btn_add;
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->BackColor = System::Drawing::SystemColors::Control;
			this->CancelButton = this->btn_cancel;
			this->ClientSize = System::Drawing::Size(292, 356);
			this->Controls->Add(this->lstv_misc);
			this->Controls->Add(this->btn_cancel);
			this->Controls->Add(this->btn_add);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = S"d2o_misc";
			this->Text = S"d2o";
			this->ResumeLayout(false);

		}		
		
		System::Void btn_add_Click(System::Object *  sender, System::EventArgs *  e)
			 {
				//  Close the current form
				this->Close();
			 }

		System::Void btn_cancel_Click(System::Object *  sender, System::EventArgs *  e)
			 {
				//  Close the current form
				this->Close();
			 }

	};
}