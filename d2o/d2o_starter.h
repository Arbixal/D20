#pragma once
#include "d20_house_rules.h"
#include "d2o_characters.h"
#include "d2o_class_maker.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace d2o
{
	/// <summary> 
	/// Summary for d2o_starter
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public __gc class d2o_starter : public System::Windows::Forms::Form
	{
	public: 
		d2o_starter(void)
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
		System::Windows::Forms::Button *  btn_new_character;
		System::Windows::Forms::Button *  btn_load_caharcter;
		System::Windows::Forms::Button *  btn_house_rules;
		System::Windows::Forms::MainMenu *  mnu_file;
		System::Windows::Forms::MenuItem *  mnui_file_title;
		System::Windows::Forms::MenuItem *  mnui_new;
		System::Windows::Forms::MenuItem *  mnui_load;
		System::Windows::Forms::MenuItem *  mnui_house_rules;
		System::Windows::Forms::OpenFileDialog *  ofd_load;
		System::Windows::Forms::MenuItem *  mnui_exit;

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
			System::Resources::ResourceManager *  resources = new System::Resources::ResourceManager(__typeof(d2o::d2o_starter));
			this->btn_new_character = new System::Windows::Forms::Button();
			this->btn_load_caharcter = new System::Windows::Forms::Button();
			this->btn_house_rules = new System::Windows::Forms::Button();
			this->mnu_file = new System::Windows::Forms::MainMenu();
			this->mnui_file_title = new System::Windows::Forms::MenuItem();
			this->mnui_new = new System::Windows::Forms::MenuItem();
			this->mnui_load = new System::Windows::Forms::MenuItem();
			this->mnui_house_rules = new System::Windows::Forms::MenuItem();
			this->mnui_exit = new System::Windows::Forms::MenuItem();
			this->ofd_load = new System::Windows::Forms::OpenFileDialog();
			this->SuspendLayout();
			// 
			// btn_new_character
			// 
			this->btn_new_character->BackColor = System::Drawing::Color::White;
			this->btn_new_character->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_new_character->Location = System::Drawing::Point(15, 105);
			this->btn_new_character->Name = S"btn_new_character";
			this->btn_new_character->Size = System::Drawing::Size(110, 23);
			this->btn_new_character->TabIndex = 0;
			this->btn_new_character->Text = S"New";
			this->btn_new_character->Click += new System::EventHandler(this, btn_new_character_Click);
			// 
			// btn_load_caharcter
			// 
			this->btn_load_caharcter->BackColor = System::Drawing::Color::White;
			this->btn_load_caharcter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_load_caharcter->Location = System::Drawing::Point(15, 150);
			this->btn_load_caharcter->Name = S"btn_load_caharcter";
			this->btn_load_caharcter->Size = System::Drawing::Size(110, 23);
			this->btn_load_caharcter->TabIndex = 1;
			this->btn_load_caharcter->Text = S"Load";
			this->btn_load_caharcter->Click += new System::EventHandler(this, mnui_load_Click);
			// 
			// btn_house_rules
			// 
			this->btn_house_rules->BackColor = System::Drawing::Color::White;
			this->btn_house_rules->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_house_rules->Location = System::Drawing::Point(15, 225);
			this->btn_house_rules->Name = S"btn_house_rules";
			this->btn_house_rules->Size = System::Drawing::Size(110, 23);
			this->btn_house_rules->TabIndex = 4;
			this->btn_house_rules->Text = S"House Rules";
			this->btn_house_rules->Click += new System::EventHandler(this, btn_house_rules_Click);
			// 
			// mnu_file
			// 
			System::Windows::Forms::MenuItem* __mcTemp__1[] = new System::Windows::Forms::MenuItem*[1];
			__mcTemp__1[0] = this->mnui_file_title;
			this->mnu_file->MenuItems->AddRange(__mcTemp__1);
			// 
			// mnui_file_title
			// 
			this->mnui_file_title->Index = 0;
			System::Windows::Forms::MenuItem* __mcTemp__2[] = new System::Windows::Forms::MenuItem*[4];
			__mcTemp__2[0] = this->mnui_new;
			__mcTemp__2[1] = this->mnui_load;
			__mcTemp__2[2] = this->mnui_house_rules;
			__mcTemp__2[3] = this->mnui_exit;
			this->mnui_file_title->MenuItems->AddRange(__mcTemp__2);
			this->mnui_file_title->Text = S"File";
			// 
			// mnui_new
			// 
			this->mnui_new->Index = 0;
			this->mnui_new->Text = S"New";
			this->mnui_new->Click += new System::EventHandler(this, mnui_new_Click);
			// 
			// mnui_load
			// 
			this->mnui_load->Index = 1;
			this->mnui_load->Text = S"Load";
			this->mnui_load->Click += new System::EventHandler(this, mnui_load_Click);
			// 
			// mnui_house_rules
			// 
			this->mnui_house_rules->Index = 2;
			this->mnui_house_rules->Text = S"House Rules";
			this->mnui_house_rules->Click += new System::EventHandler(this, mnui_house_rules_Click);
			// 
			// mnui_exit
			// 
			this->mnui_exit->Index = 3;
			this->mnui_exit->Text = S"Exit";
			this->mnui_exit->Click += new System::EventHandler(this, mnui_exit_Click);
			// 
			// ofd_load
			// 
			this->ofd_load->HelpRequest += new System::EventHandler(this, ofd_load_HelpRequest);
			this->ofd_load->FileOk += new System::ComponentModel::CancelEventHandler(this, ofd_load_FileOk);
			// 
			// d2o_starter
			// 
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->BackgroundImage = (__try_cast<System::Drawing::Image *  >(resources->GetObject(S"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(374, 372);
			this->Controls->Add(this->btn_house_rules);
			this->Controls->Add(this->btn_load_caharcter);
			this->Controls->Add(this->btn_new_character);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Menu = this->mnu_file;
			this->Name = S"d2o_starter";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = S"d2o";
			this->ResumeLayout(false);

		}		


		System::Void btn_new_character_Click(System::Object *  sender, System::EventArgs *  e)
			{
			 		//  Open the New Items form in Dialog Mode
					d2o_characters* frm = new d2o_characters();
					frm->ShowDialog(this);
			}



		System::Void btn_house_rules_Click(System::Object *  sender, System::EventArgs *  e)
			{
				 	//  Open the New Items form in Dialog Mode
					d20_house_rules* frm = new d20_house_rules();
					frm->ShowDialog(this);
			}

		System::Void mnui_house_rules_Click(System::Object *  sender, System::EventArgs *  e)
			{
			 		//  Open the New Items form in Dialog Mode
					d20_house_rules* frm = new d20_house_rules();
					frm->ShowDialog(this);
			}

		System::Void mnui_load_Click(System::Object *  sender, System::EventArgs *  e)
			{
				//StreamReader* ts;

				try
				{

					//  Check to ensure that the selected file exists.  Dialog box displays 
					//  a warning otherwise.
					ofd_load->CheckFileExists = true;

					//  Check to ensure that the selected path exists.  Dialog box displays 
					//  a warning otherwise.
					ofd_load->CheckPathExists = true;

					//  Get or set default extension. Doesn't include the leading ".".
					ofd_load->DefaultExt = S"xml";

					//  Return the file referenced by a link? If false, simply returns the selected link
					//  file. If true, returns the file linked to the LNK file.
					ofd_load->DereferenceLinks = true;

					ofd_load->Filter = S"XML files (*.xml)|*.xml|All files (*.*)|*.*";

					ofd_load->Multiselect = false;

					//  Restore the original directory when done selecting a file? If false, the current directory changes
					//  to the directory in which you selected the file. Set this to true to put the current folder back
					//  where it was when you started. The default is false.
					ofd_load->RestoreDirectory = true;

					//  Show the Help button and Read-Only checkbox?
					ofd_load->ShowHelp = true;
					ofd_load->ShowReadOnly = false;

					ofd_load->Title = S"Select a file to open";

					ofd_load->ValidateNames = true;

					if (ofd_load->ShowDialog() == DialogResult::OK) 
					{
						//FileName = ofd_load->FileName;
						//ts = new StreamReader(ofd_load->OpenFile());
						//txtFileContents->Text = ts->ReadToEnd();
					}
				}
				catch (Exception* exp)
				{
					MessageBox::Show(exp->Message, this->Text, MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				/*__finally
				{
					if (ts) 
						ts->Close();
				}*/
			}

		System::Void mnui_new_Click(System::Object *  sender, System::EventArgs *  e)
			{
				//  Open the New Items form in Dialog Mode
				d2o_characters* frm = new d2o_characters();
				frm->ShowDialog(this);
			}

		System::Void mnui_exit_Click(System::Object *  sender, System::EventArgs *  e)
			{
				//  Close the current form
				this->Close();

			}

		System::Void ofd_load_FileOk(System::Object *  sender, System::ComponentModel::CancelEventArgs *  e)
			{
				if (MessageBox::Show(S"Do you want to open a new file?", this->Text, MessageBoxButtons::YesNo, MessageBoxIcon::Question) != DialogResult::Yes) 
					e->Cancel = true;
			}

		System::Void ofd_load_HelpRequest(System::Object *  sender, System::EventArgs *  e)
			{
				MessageBox::Show(S"Please select your character file (*.xml)", this->Text, MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

};
}