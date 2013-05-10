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
	/// Summary for d2o_class_maker
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public __gc class d2o_class_maker : public System::Windows::Forms::Form
	{
	public: 
		d2o_class_maker(void)
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
	private: System::Windows::Forms::Button *  btn_close;
	private: System::Windows::Forms::TabControl *  tabc_house_rules;
	private: System::Windows::Forms::TabPage *  tabp_items;





































































































































	private: System::Windows::Forms::TabPage *  tabp_race;
	private: System::Windows::Forms::TabControl *  tabc_race;
	private: System::Windows::Forms::TabPage *  tabPage1;
	private: System::Windows::Forms::TabControl *  tabc_traits;
	private: System::Windows::Forms::TabPage *  tabPage7;
	private: System::Windows::Forms::TabPage *  tabPage8;
	private: System::Windows::Forms::TabPage *  tabPage9;
	private: System::Windows::Forms::TabPage *  tabPage10;
	private: System::Windows::Forms::TabPage *  tabPage2;
	private: System::Windows::Forms::TabPage *  tabPage4;
	private: System::Windows::Forms::TabPage *  tabPage5;
	private: System::Windows::Forms::TabPage *  tabPage6;
	private: System::Windows::Forms::TabControl *  tabControl1;
	private: System::Windows::Forms::TabPage *  tabPage11;
	private: System::Windows::Forms::TabPage *  tabPage12;
	private: System::Windows::Forms::TabPage *  Proficiency;
	private: System::Windows::Forms::TabPage *  tabPage3;
	private: System::Windows::Forms::Button *  button37;
	private: System::Windows::Forms::Button *  button38;
	private: System::Windows::Forms::Button *  button39;
	private: System::Windows::Forms::ListView *  listView15;
	private: System::Windows::Forms::TabPage *  tabp_skills;
	private: System::Windows::Forms::Label *  label4;
	private: System::Windows::Forms::TextBox *  textBox10;
	private: System::Windows::Forms::CheckBox *  checkBox4;
	private: System::Windows::Forms::CheckBox *  checkBox2;
	private: System::Windows::Forms::ComboBox *  comboBox11;
	private: System::Windows::Forms::Label *  label2;
	private: System::Windows::Forms::Label *  label3;
	private: System::Windows::Forms::TextBox *  textBox9;
	private: System::Windows::Forms::Button *  button13;
	private: System::Windows::Forms::Button *  button14;
	private: System::Windows::Forms::Button *  button15;
	private: System::Windows::Forms::ListView *  listView5;
	private: System::Windows::Forms::TabPage *  tabp_feats;
	private: System::Windows::Forms::ListView *  listView7;
	private: System::Windows::Forms::Button *  button24;
	private: System::Windows::Forms::Button *  button23;
	private: System::Windows::Forms::NumericUpDown *  numericUpDown7;
	private: System::Windows::Forms::ComboBox *  comboBox15;
	private: System::Windows::Forms::Label *  label52;
	private: System::Windows::Forms::ComboBox *  comboBox16;
	private: System::Windows::Forms::Label *  label53;
	private: System::Windows::Forms::ComboBox *  comboBox14;
	private: System::Windows::Forms::Label *  label51;
	private: System::Windows::Forms::ComboBox *  comboBox13;
	private: System::Windows::Forms::Label *  label50;
	private: System::Windows::Forms::Label *  label6;
	private: System::Windows::Forms::TextBox *  textBox11;
	private: System::Windows::Forms::ComboBox *  comboBox12;
	private: System::Windows::Forms::Label *  label29;
	private: System::Windows::Forms::Label *  label49;
	private: System::Windows::Forms::TextBox *  textBox12;
	private: System::Windows::Forms::Button *  button21;
	private: System::Windows::Forms::Button *  button22;
	private: System::Windows::Forms::ListView *  listView6;
	private: System::Windows::Forms::Button *  button16;
	private: System::Windows::Forms::TabPage *  tabp_spells;
	private: System::Windows::Forms::ComboBox *  comboBox29;
	private: System::Windows::Forms::NumericUpDown *  numericUpDown18;
	private: System::Windows::Forms::TextBox *  textBox18;
	private: System::Windows::Forms::Label *  label61;
	private: System::Windows::Forms::ComboBox *  comboBox39;
	private: System::Windows::Forms::Label *  label75;
	private: System::Windows::Forms::ComboBox *  comboBox38;
	private: System::Windows::Forms::Label *  label74;
	private: System::Windows::Forms::ComboBox *  comboBox31;
	private: System::Windows::Forms::Label *  label73;
	private: System::Windows::Forms::TextBox *  textBox17;
	private: System::Windows::Forms::Label *  label66;
	private: System::Windows::Forms::ComboBox *  comboBox37;
	private: System::Windows::Forms::Label *  label72;
	private: System::Windows::Forms::ComboBox *  comboBox32;
	private: System::Windows::Forms::Label *  label67;
	private: System::Windows::Forms::ComboBox *  comboBox33;
	private: System::Windows::Forms::Label *  label68;
	private: System::Windows::Forms::Label *  label69;
	private: System::Windows::Forms::TextBox *  textBox15;
	private: System::Windows::Forms::Label *  label70;
	private: System::Windows::Forms::Label *  label71;
	private: System::Windows::Forms::TextBox *  textBox16;
	private: System::Windows::Forms::Button *  button29;
	private: System::Windows::Forms::Button *  button30;
	private: System::Windows::Forms::ListView *  listView9;
	private: System::Windows::Forms::Button *  button17;
	private: System::Windows::Forms::TabPage *  tabp_gods;
	private: System::Windows::Forms::Label *  label76;
	private: System::Windows::Forms::ListView *  listView12;
	private: System::Windows::Forms::Label *  label80;
	private: System::Windows::Forms::Label *  label81;
	private: System::Windows::Forms::Label *  label82;
	private: System::Windows::Forms::ListView *  listView10;
	private: System::Windows::Forms::Button *  button27;
	private: System::Windows::Forms::Button *  button28;
	private: System::Windows::Forms::TextBox *  textBox19;
	private: System::Windows::Forms::ComboBox *  comboBox43;
	private: System::Windows::Forms::TextBox *  textBox20;
	private: System::Windows::Forms::Button *  button31;
	private: System::Windows::Forms::Button *  button32;
	private: System::Windows::Forms::ListView *  listView11;
	private: System::Windows::Forms::Button *  button18;
	private: System::Windows::Forms::TabPage *  tabp_domains;
	private: System::Windows::Forms::ComboBox *  comboBox42;
	private: System::Windows::Forms::Label *  label84;
	private: System::Windows::Forms::ComboBox *  comboBox41;
	private: System::Windows::Forms::Label *  label85;
	private: System::Windows::Forms::Label *  label79;
	private: System::Windows::Forms::Label *  label83;
	private: System::Windows::Forms::TextBox *  textBox21;
	private: System::Windows::Forms::TextBox *  textBox22;
	private: System::Windows::Forms::Button *  button35;
	private: System::Windows::Forms::Button *  button36;
	private: System::Windows::Forms::ListView *  listView14;
	private: System::Windows::Forms::ListView *  listView13;
	private: System::Windows::Forms::Button *  button33;
	private: System::Windows::Forms::Button *  button34;
	private: System::Windows::Forms::NumericUpDown *  numericUpDown17;
	private: System::Windows::Forms::ComboBox *  comboBox34;
	private: System::Windows::Forms::Label *  label77;
	private: System::Windows::Forms::ComboBox *  comboBox40;
	private: System::Windows::Forms::Label *  label78;
	private: System::Windows::Forms::Button *  button19;
	private: System::Windows::Forms::TabPage *  tabp_languages;
	private: System::Windows::Forms::Label *  label54;
	private: System::Windows::Forms::TextBox *  textBox13;
	private: System::Windows::Forms::Label *  label55;
	private: System::Windows::Forms::TextBox *  textBox14;
	private: System::Windows::Forms::Button *  button25;
	private: System::Windows::Forms::Button *  button26;
	private: System::Windows::Forms::ListView *  listView8;
	private: System::Windows::Forms::Button *  button20;
private: System::Windows::Forms::Button *  button40;

	private:
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
			this->btn_close = new System::Windows::Forms::Button();
			this->tabc_house_rules = new System::Windows::Forms::TabControl();
			this->tabp_items = new System::Windows::Forms::TabPage();
			this->tabp_race = new System::Windows::Forms::TabPage();
			this->tabc_race = new System::Windows::Forms::TabControl();
			this->tabPage1 = new System::Windows::Forms::TabPage();
			this->tabc_traits = new System::Windows::Forms::TabControl();
			this->tabPage7 = new System::Windows::Forms::TabPage();
			this->tabPage8 = new System::Windows::Forms::TabPage();
			this->tabPage9 = new System::Windows::Forms::TabPage();
			this->tabPage10 = new System::Windows::Forms::TabPage();
			this->tabPage2 = new System::Windows::Forms::TabPage();
			this->tabPage4 = new System::Windows::Forms::TabPage();
			this->tabPage5 = new System::Windows::Forms::TabPage();
			this->tabPage6 = new System::Windows::Forms::TabPage();
			this->tabControl1 = new System::Windows::Forms::TabControl();
			this->tabPage11 = new System::Windows::Forms::TabPage();
			this->tabPage12 = new System::Windows::Forms::TabPage();
			this->Proficiency = new System::Windows::Forms::TabPage();
			this->tabPage3 = new System::Windows::Forms::TabPage();
			this->button37 = new System::Windows::Forms::Button();
			this->button38 = new System::Windows::Forms::Button();
			this->button39 = new System::Windows::Forms::Button();
			this->listView15 = new System::Windows::Forms::ListView();
			this->tabp_skills = new System::Windows::Forms::TabPage();
			this->label4 = new System::Windows::Forms::Label();
			this->textBox10 = new System::Windows::Forms::TextBox();
			this->checkBox4 = new System::Windows::Forms::CheckBox();
			this->checkBox2 = new System::Windows::Forms::CheckBox();
			this->comboBox11 = new System::Windows::Forms::ComboBox();
			this->label2 = new System::Windows::Forms::Label();
			this->label3 = new System::Windows::Forms::Label();
			this->textBox9 = new System::Windows::Forms::TextBox();
			this->button13 = new System::Windows::Forms::Button();
			this->button14 = new System::Windows::Forms::Button();
			this->button15 = new System::Windows::Forms::Button();
			this->listView5 = new System::Windows::Forms::ListView();
			this->tabp_feats = new System::Windows::Forms::TabPage();
			this->listView7 = new System::Windows::Forms::ListView();
			this->button24 = new System::Windows::Forms::Button();
			this->button23 = new System::Windows::Forms::Button();
			this->numericUpDown7 = new System::Windows::Forms::NumericUpDown();
			this->comboBox15 = new System::Windows::Forms::ComboBox();
			this->label52 = new System::Windows::Forms::Label();
			this->comboBox16 = new System::Windows::Forms::ComboBox();
			this->label53 = new System::Windows::Forms::Label();
			this->comboBox14 = new System::Windows::Forms::ComboBox();
			this->label51 = new System::Windows::Forms::Label();
			this->comboBox13 = new System::Windows::Forms::ComboBox();
			this->label50 = new System::Windows::Forms::Label();
			this->label6 = new System::Windows::Forms::Label();
			this->textBox11 = new System::Windows::Forms::TextBox();
			this->comboBox12 = new System::Windows::Forms::ComboBox();
			this->label29 = new System::Windows::Forms::Label();
			this->label49 = new System::Windows::Forms::Label();
			this->textBox12 = new System::Windows::Forms::TextBox();
			this->button21 = new System::Windows::Forms::Button();
			this->button22 = new System::Windows::Forms::Button();
			this->listView6 = new System::Windows::Forms::ListView();
			this->button16 = new System::Windows::Forms::Button();
			this->tabp_spells = new System::Windows::Forms::TabPage();
			this->comboBox29 = new System::Windows::Forms::ComboBox();
			this->numericUpDown18 = new System::Windows::Forms::NumericUpDown();
			this->textBox18 = new System::Windows::Forms::TextBox();
			this->label61 = new System::Windows::Forms::Label();
			this->comboBox39 = new System::Windows::Forms::ComboBox();
			this->label75 = new System::Windows::Forms::Label();
			this->comboBox38 = new System::Windows::Forms::ComboBox();
			this->label74 = new System::Windows::Forms::Label();
			this->comboBox31 = new System::Windows::Forms::ComboBox();
			this->label73 = new System::Windows::Forms::Label();
			this->textBox17 = new System::Windows::Forms::TextBox();
			this->label66 = new System::Windows::Forms::Label();
			this->comboBox37 = new System::Windows::Forms::ComboBox();
			this->label72 = new System::Windows::Forms::Label();
			this->comboBox32 = new System::Windows::Forms::ComboBox();
			this->label67 = new System::Windows::Forms::Label();
			this->comboBox33 = new System::Windows::Forms::ComboBox();
			this->label68 = new System::Windows::Forms::Label();
			this->label69 = new System::Windows::Forms::Label();
			this->textBox15 = new System::Windows::Forms::TextBox();
			this->label70 = new System::Windows::Forms::Label();
			this->label71 = new System::Windows::Forms::Label();
			this->textBox16 = new System::Windows::Forms::TextBox();
			this->button29 = new System::Windows::Forms::Button();
			this->button30 = new System::Windows::Forms::Button();
			this->listView9 = new System::Windows::Forms::ListView();
			this->button17 = new System::Windows::Forms::Button();
			this->tabp_gods = new System::Windows::Forms::TabPage();
			this->label76 = new System::Windows::Forms::Label();
			this->listView12 = new System::Windows::Forms::ListView();
			this->label80 = new System::Windows::Forms::Label();
			this->label81 = new System::Windows::Forms::Label();
			this->label82 = new System::Windows::Forms::Label();
			this->listView10 = new System::Windows::Forms::ListView();
			this->button27 = new System::Windows::Forms::Button();
			this->button28 = new System::Windows::Forms::Button();
			this->textBox19 = new System::Windows::Forms::TextBox();
			this->comboBox43 = new System::Windows::Forms::ComboBox();
			this->textBox20 = new System::Windows::Forms::TextBox();
			this->button31 = new System::Windows::Forms::Button();
			this->button32 = new System::Windows::Forms::Button();
			this->listView11 = new System::Windows::Forms::ListView();
			this->button18 = new System::Windows::Forms::Button();
			this->tabp_domains = new System::Windows::Forms::TabPage();
			this->comboBox42 = new System::Windows::Forms::ComboBox();
			this->label84 = new System::Windows::Forms::Label();
			this->comboBox41 = new System::Windows::Forms::ComboBox();
			this->label85 = new System::Windows::Forms::Label();
			this->label79 = new System::Windows::Forms::Label();
			this->label83 = new System::Windows::Forms::Label();
			this->textBox21 = new System::Windows::Forms::TextBox();
			this->textBox22 = new System::Windows::Forms::TextBox();
			this->button35 = new System::Windows::Forms::Button();
			this->button36 = new System::Windows::Forms::Button();
			this->listView14 = new System::Windows::Forms::ListView();
			this->listView13 = new System::Windows::Forms::ListView();
			this->button33 = new System::Windows::Forms::Button();
			this->button34 = new System::Windows::Forms::Button();
			this->numericUpDown17 = new System::Windows::Forms::NumericUpDown();
			this->comboBox34 = new System::Windows::Forms::ComboBox();
			this->label77 = new System::Windows::Forms::Label();
			this->comboBox40 = new System::Windows::Forms::ComboBox();
			this->label78 = new System::Windows::Forms::Label();
			this->button19 = new System::Windows::Forms::Button();
			this->tabp_languages = new System::Windows::Forms::TabPage();
			this->label54 = new System::Windows::Forms::Label();
			this->textBox13 = new System::Windows::Forms::TextBox();
			this->label55 = new System::Windows::Forms::Label();
			this->textBox14 = new System::Windows::Forms::TextBox();
			this->button25 = new System::Windows::Forms::Button();
			this->button26 = new System::Windows::Forms::Button();
			this->listView8 = new System::Windows::Forms::ListView();
			this->button20 = new System::Windows::Forms::Button();
			this->button40 = new System::Windows::Forms::Button();
			this->tabc_house_rules->SuspendLayout();
			this->tabp_race->SuspendLayout();
			this->tabc_race->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabc_traits->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabp_skills->SuspendLayout();
			this->tabp_feats->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->numericUpDown7))->BeginInit();
			this->tabp_spells->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->numericUpDown18))->BeginInit();
			this->tabp_gods->SuspendLayout();
			this->tabp_domains->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->numericUpDown17))->BeginInit();
			this->tabp_languages->SuspendLayout();
			this->SuspendLayout();
			// 
			// btn_close
			// 
			this->btn_close->Location = System::Drawing::Point(590, 560);
			this->btn_close->Name = S"btn_close";
			this->btn_close->TabIndex = 3;
			this->btn_close->Text = S"Apply";
			// 
			// tabc_house_rules
			// 
			this->tabc_house_rules->Controls->Add(this->tabp_items);
			this->tabc_house_rules->Controls->Add(this->tabp_race);
			this->tabc_house_rules->Controls->Add(this->tabp_skills);
			this->tabc_house_rules->Controls->Add(this->tabp_feats);
			this->tabc_house_rules->Controls->Add(this->tabp_spells);
			this->tabc_house_rules->Controls->Add(this->tabp_gods);
			this->tabc_house_rules->Controls->Add(this->tabp_domains);
			this->tabc_house_rules->Controls->Add(this->tabp_languages);
			this->tabc_house_rules->Location = System::Drawing::Point(5, 5);
			this->tabc_house_rules->Name = S"tabc_house_rules";
			this->tabc_house_rules->SelectedIndex = 0;
			this->tabc_house_rules->Size = System::Drawing::Size(670, 540);
			this->tabc_house_rules->TabIndex = 2;
			// 
			// tabp_items
			// 
			this->tabp_items->Location = System::Drawing::Point(4, 22);
			this->tabp_items->Name = S"tabp_items";
			this->tabp_items->Size = System::Drawing::Size(662, 514);
			this->tabp_items->TabIndex = 0;
			this->tabp_items->Text = S"Items";
			// 
			// tabp_race
			// 
			this->tabp_race->Controls->Add(this->tabc_race);
			this->tabp_race->Controls->Add(this->button37);
			this->tabp_race->Controls->Add(this->button38);
			this->tabp_race->Controls->Add(this->button39);
			this->tabp_race->Controls->Add(this->listView15);
			this->tabp_race->Location = System::Drawing::Point(4, 22);
			this->tabp_race->Name = S"tabp_race";
			this->tabp_race->Size = System::Drawing::Size(662, 514);
			this->tabp_race->TabIndex = 7;
			this->tabp_race->Text = S"Race";
			this->tabp_race->Visible = false;
			// 
			// tabc_race
			// 
			this->tabc_race->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabc_race->Controls->Add(this->tabPage1);
			this->tabc_race->Controls->Add(this->tabPage2);
			this->tabc_race->Controls->Add(this->tabPage4);
			this->tabc_race->Controls->Add(this->tabPage5);
			this->tabc_race->Controls->Add(this->tabPage6);
			this->tabc_race->Controls->Add(this->Proficiency);
			this->tabc_race->Controls->Add(this->tabPage3);
			this->tabc_race->Location = System::Drawing::Point(10, 260);
			this->tabc_race->Name = S"tabc_race";
			this->tabc_race->SelectedIndex = 0;
			this->tabc_race->Size = System::Drawing::Size(645, 215);
			this->tabc_race->TabIndex = 15;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tabc_traits);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = S"tabPage1";
			this->tabPage1->Size = System::Drawing::Size(637, 186);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = S"Racial Traits";
			// 
			// tabc_traits
			// 
			this->tabc_traits->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabc_traits->Controls->Add(this->tabPage7);
			this->tabc_traits->Controls->Add(this->tabPage8);
			this->tabc_traits->Controls->Add(this->tabPage9);
			this->tabc_traits->Controls->Add(this->tabPage10);
			this->tabc_traits->Location = System::Drawing::Point(0, 0);
			this->tabc_traits->Name = S"tabc_traits";
			this->tabc_traits->SelectedIndex = 0;
			this->tabc_traits->Size = System::Drawing::Size(640, 190);
			this->tabc_traits->TabIndex = 0;
			// 
			// tabPage7
			// 
			this->tabPage7->Location = System::Drawing::Point(4, 25);
			this->tabPage7->Name = S"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(632, 161);
			this->tabPage7->TabIndex = 0;
			this->tabPage7->Text = S"Physical";
			// 
			// tabPage8
			// 
			this->tabPage8->Location = System::Drawing::Point(4, 25);
			this->tabPage8->Name = S"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(632, 161);
			this->tabPage8->TabIndex = 1;
			this->tabPage8->Text = S"Abilities";
			this->tabPage8->Visible = false;
			// 
			// tabPage9
			// 
			this->tabPage9->Location = System::Drawing::Point(4, 25);
			this->tabPage9->Name = S"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(632, 161);
			this->tabPage9->TabIndex = 2;
			this->tabPage9->Text = S"Stats";
			this->tabPage9->Visible = false;
			// 
			// tabPage10
			// 
			this->tabPage10->Location = System::Drawing::Point(4, 25);
			this->tabPage10->Name = S"tabPage10";
			this->tabPage10->Size = System::Drawing::Size(632, 161);
			this->tabPage10->TabIndex = 3;
			this->tabPage10->Text = S"Notes";
			this->tabPage10->Visible = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = S"tabPage2";
			this->tabPage2->Size = System::Drawing::Size(637, 186);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = S"Ability Adjustments";
			this->tabPage2->Visible = false;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = S"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(637, 186);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = S"Skills";
			this->tabPage4->Visible = false;
			// 
			// tabPage5
			// 
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = S"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(637, 186);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = S"Feats";
			this->tabPage5->Visible = false;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->tabControl1);
			this->tabPage6->Location = System::Drawing::Point(4, 25);
			this->tabPage6->Name = S"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(637, 186);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = S"Attacks";
			this->tabPage6->Visible = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Appearance = System::Windows::Forms::TabAppearance::FlatButtons;
			this->tabControl1->Controls->Add(this->tabPage11);
			this->tabControl1->Controls->Add(this->tabPage12);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = S"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(640, 190);
			this->tabControl1->TabIndex = 1;
			// 
			// tabPage11
			// 
			this->tabPage11->Location = System::Drawing::Point(4, 25);
			this->tabPage11->Name = S"tabPage11";
			this->tabPage11->Size = System::Drawing::Size(632, 161);
			this->tabPage11->TabIndex = 0;
			this->tabPage11->Text = S"Base";
			// 
			// tabPage12
			// 
			this->tabPage12->Location = System::Drawing::Point(4, 25);
			this->tabPage12->Name = S"tabPage12";
			this->tabPage12->Size = System::Drawing::Size(632, 161);
			this->tabPage12->TabIndex = 1;
			this->tabPage12->Text = S"Special";
			this->tabPage12->Visible = false;
			// 
			// Proficiency
			// 
			this->Proficiency->Location = System::Drawing::Point(4, 25);
			this->Proficiency->Name = S"Proficiency";
			this->Proficiency->Size = System::Drawing::Size(637, 186);
			this->Proficiency->TabIndex = 6;
			this->Proficiency->Text = S"Proficiency";
			this->Proficiency->Visible = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = S"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(637, 186);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = S"Languages";
			this->tabPage3->Visible = false;
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(580, 225);
			this->button37->Name = S"button37";
			this->button37->TabIndex = 14;
			this->button37->Text = S"New";
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(495, 225);
			this->button38->Name = S"button38";
			this->button38->TabIndex = 13;
			this->button38->Text = S"Remove";
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(580, 485);
			this->button39->Name = S"button39";
			this->button39->TabIndex = 12;
			this->button39->Text = S"Apply";
			// 
			// listView15
			// 
			this->listView15->Location = System::Drawing::Point(10, 10);
			this->listView15->Name = S"listView15";
			this->listView15->Size = System::Drawing::Size(645, 205);
			this->listView15->TabIndex = 10;
			this->listView15->View = System::Windows::Forms::View::Details;
			// 
			// tabp_skills
			// 
			this->tabp_skills->Controls->Add(this->label4);
			this->tabp_skills->Controls->Add(this->textBox10);
			this->tabp_skills->Controls->Add(this->checkBox4);
			this->tabp_skills->Controls->Add(this->checkBox2);
			this->tabp_skills->Controls->Add(this->comboBox11);
			this->tabp_skills->Controls->Add(this->label2);
			this->tabp_skills->Controls->Add(this->label3);
			this->tabp_skills->Controls->Add(this->textBox9);
			this->tabp_skills->Controls->Add(this->button13);
			this->tabp_skills->Controls->Add(this->button14);
			this->tabp_skills->Controls->Add(this->button15);
			this->tabp_skills->Controls->Add(this->listView5);
			this->tabp_skills->Location = System::Drawing::Point(4, 22);
			this->tabp_skills->Name = S"tabp_skills";
			this->tabp_skills->Size = System::Drawing::Size(662, 514);
			this->tabp_skills->TabIndex = 2;
			this->tabp_skills->Text = S"Skills";
			this->tabp_skills->Visible = false;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(15, 450);
			this->label4->Name = S"label4";
			this->label4->Size = System::Drawing::Size(85, 20);
			this->label4->TabIndex = 84;
			this->label4->Text = S"Information:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(105, 450);
			this->textBox10->Multiline = true;
			this->textBox10->Name = S"textBox10";
			this->textBox10->Size = System::Drawing::Size(445, 50);
			this->textBox10->TabIndex = 83;
			this->textBox10->Text = S"textBox10";
			// 
			// checkBox4
			// 
			this->checkBox4->Location = System::Drawing::Point(370, 425);
			this->checkBox4->Name = S"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(175, 20);
			this->checkBox4->TabIndex = 82;
			this->checkBox4->Text = S"Armor Check Penalty";
			// 
			// checkBox2
			// 
			this->checkBox2->Location = System::Drawing::Point(225, 425);
			this->checkBox2->Name = S"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(125, 20);
			this->checkBox2->TabIndex = 81;
			this->checkBox2->Text = S"Use Untranied";
			// 
			// comboBox11
			// 
			this->comboBox11->Location = System::Drawing::Point(105, 425);
			this->comboBox11->Name = S"comboBox11";
			this->comboBox11->Size = System::Drawing::Size(105, 21);
			this->comboBox11->TabIndex = 80;
			this->comboBox11->Text = S"comboBox11";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(15, 425);
			this->label2->Name = S"label2";
			this->label2->Size = System::Drawing::Size(85, 20);
			this->label2->TabIndex = 79;
			this->label2->Text = S"Ability:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(15, 400);
			this->label3->Name = S"label3";
			this->label3->Size = System::Drawing::Size(85, 20);
			this->label3->TabIndex = 78;
			this->label3->Text = S"Name:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(105, 400);
			this->textBox9->Name = S"textBox9";
			this->textBox9->Size = System::Drawing::Size(545, 20);
			this->textBox9->TabIndex = 77;
			this->textBox9->Text = S"textBox9";
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(580, 485);
			this->button13->Name = S"button13";
			this->button13->TabIndex = 7;
			this->button13->Text = S"Apply";
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(580, 365);
			this->button14->Name = S"button14";
			this->button14->TabIndex = 6;
			this->button14->Text = S"New";
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(495, 365);
			this->button15->Name = S"button15";
			this->button15->TabIndex = 5;
			this->button15->Text = S"Remove";
			// 
			// listView5
			// 
			this->listView5->Location = System::Drawing::Point(10, 10);
			this->listView5->Name = S"listView5";
			this->listView5->Size = System::Drawing::Size(645, 345);
			this->listView5->TabIndex = 4;
			this->listView5->View = System::Windows::Forms::View::Details;
			// 
			// tabp_feats
			// 
			this->tabp_feats->Controls->Add(this->listView7);
			this->tabp_feats->Controls->Add(this->button24);
			this->tabp_feats->Controls->Add(this->button23);
			this->tabp_feats->Controls->Add(this->numericUpDown7);
			this->tabp_feats->Controls->Add(this->comboBox15);
			this->tabp_feats->Controls->Add(this->label52);
			this->tabp_feats->Controls->Add(this->comboBox16);
			this->tabp_feats->Controls->Add(this->label53);
			this->tabp_feats->Controls->Add(this->comboBox14);
			this->tabp_feats->Controls->Add(this->label51);
			this->tabp_feats->Controls->Add(this->comboBox13);
			this->tabp_feats->Controls->Add(this->label50);
			this->tabp_feats->Controls->Add(this->label6);
			this->tabp_feats->Controls->Add(this->textBox11);
			this->tabp_feats->Controls->Add(this->comboBox12);
			this->tabp_feats->Controls->Add(this->label29);
			this->tabp_feats->Controls->Add(this->label49);
			this->tabp_feats->Controls->Add(this->textBox12);
			this->tabp_feats->Controls->Add(this->button21);
			this->tabp_feats->Controls->Add(this->button22);
			this->tabp_feats->Controls->Add(this->listView6);
			this->tabp_feats->Controls->Add(this->button16);
			this->tabp_feats->Location = System::Drawing::Point(4, 22);
			this->tabp_feats->Name = S"tabp_feats";
			this->tabp_feats->Size = System::Drawing::Size(662, 514);
			this->tabp_feats->TabIndex = 3;
			this->tabp_feats->Text = S"Feats";
			this->tabp_feats->Visible = false;
			// 
			// listView7
			// 
			this->listView7->Location = System::Drawing::Point(380, 335);
			this->listView7->Name = S"listView7";
			this->listView7->Size = System::Drawing::Size(270, 97);
			this->listView7->TabIndex = 104;
			this->listView7->View = System::Windows::Forms::View::Details;
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(295, 365);
			this->button24->Name = S"button24";
			this->button24->TabIndex = 103;
			this->button24->Text = S"Remove";
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(295, 335);
			this->button23->Name = S"button23";
			this->button23->TabIndex = 102;
			this->button23->Text = S"Add";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->Location = System::Drawing::Point(230, 395);
			this->numericUpDown7->Name = S"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(55, 20);
			this->numericUpDown7->TabIndex = 101;
			this->numericUpDown7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// comboBox15
			// 
			this->comboBox15->Location = System::Drawing::Point(105, 365);
			this->comboBox15->Name = S"comboBox15";
			this->comboBox15->Size = System::Drawing::Size(180, 21);
			this->comboBox15->TabIndex = 100;
			this->comboBox15->Text = S"comboBox15";
			// 
			// label52
			// 
			this->label52->Location = System::Drawing::Point(15, 365);
			this->label52->Name = S"label52";
			this->label52->Size = System::Drawing::Size(85, 20);
			this->label52->TabIndex = 99;
			this->label52->Text = S"Data:";
			this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox16
			// 
			this->comboBox16->Location = System::Drawing::Point(105, 335);
			this->comboBox16->Name = S"comboBox16";
			this->comboBox16->Size = System::Drawing::Size(180, 21);
			this->comboBox16->TabIndex = 98;
			this->comboBox16->Text = S"comboBox16";
			// 
			// label53
			// 
			this->label53->Location = System::Drawing::Point(15, 335);
			this->label53->Name = S"label53";
			this->label53->Size = System::Drawing::Size(85, 20);
			this->label53->TabIndex = 97;
			this->label53->Text = S"Prerequisite:";
			this->label53->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox14
			// 
			this->comboBox14->Location = System::Drawing::Point(545, 285);
			this->comboBox14->Name = S"comboBox14";
			this->comboBox14->Size = System::Drawing::Size(105, 21);
			this->comboBox14->TabIndex = 94;
			this->comboBox14->Text = S"comboBox14";
			// 
			// label51
			// 
			this->label51->Location = System::Drawing::Point(455, 285);
			this->label51->Name = S"label51";
			this->label51->Size = System::Drawing::Size(85, 20);
			this->label51->TabIndex = 93;
			this->label51->Text = S"Target:";
			this->label51->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox13
			// 
			this->comboBox13->Location = System::Drawing::Point(325, 285);
			this->comboBox13->Name = S"comboBox13";
			this->comboBox13->Size = System::Drawing::Size(105, 21);
			this->comboBox13->TabIndex = 92;
			this->comboBox13->Text = S"comboBox13";
			// 
			// label50
			// 
			this->label50->Location = System::Drawing::Point(235, 285);
			this->label50->Name = S"label50";
			this->label50->Size = System::Drawing::Size(85, 20);
			this->label50->TabIndex = 91;
			this->label50->Text = S"Stacking:";
			this->label50->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(15, 450);
			this->label6->Name = S"label6";
			this->label6->Size = System::Drawing::Size(85, 20);
			this->label6->TabIndex = 90;
			this->label6->Text = S"Information:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(105, 450);
			this->textBox11->Multiline = true;
			this->textBox11->Name = S"textBox11";
			this->textBox11->Size = System::Drawing::Size(445, 50);
			this->textBox11->TabIndex = 89;
			this->textBox11->Text = S"textBox11";
			// 
			// comboBox12
			// 
			this->comboBox12->Location = System::Drawing::Point(105, 285);
			this->comboBox12->Name = S"comboBox12";
			this->comboBox12->Size = System::Drawing::Size(105, 21);
			this->comboBox12->TabIndex = 88;
			this->comboBox12->Text = S"comboBox12";
			// 
			// label29
			// 
			this->label29->Location = System::Drawing::Point(15, 285);
			this->label29->Name = S"label29";
			this->label29->Size = System::Drawing::Size(85, 20);
			this->label29->TabIndex = 87;
			this->label29->Text = S"Type:";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label49
			// 
			this->label49->Location = System::Drawing::Point(15, 260);
			this->label49->Name = S"label49";
			this->label49->Size = System::Drawing::Size(85, 20);
			this->label49->TabIndex = 86;
			this->label49->Text = S"Name:";
			this->label49->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(105, 260);
			this->textBox12->Name = S"textBox12";
			this->textBox12->Size = System::Drawing::Size(545, 20);
			this->textBox12->TabIndex = 85;
			this->textBox12->Text = S"textBox12";
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(580, 225);
			this->button21->Name = S"button21";
			this->button21->TabIndex = 11;
			this->button21->Text = S"New";
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(495, 225);
			this->button22->Name = S"button22";
			this->button22->TabIndex = 10;
			this->button22->Text = S"Remove";
			// 
			// listView6
			// 
			this->listView6->Location = System::Drawing::Point(10, 10);
			this->listView6->Name = S"listView6";
			this->listView6->Size = System::Drawing::Size(645, 205);
			this->listView6->TabIndex = 9;
			this->listView6->View = System::Windows::Forms::View::Details;
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(580, 485);
			this->button16->Name = S"button16";
			this->button16->TabIndex = 8;
			this->button16->Text = S"Apply";
			// 
			// tabp_spells
			// 
			this->tabp_spells->Controls->Add(this->comboBox29);
			this->tabp_spells->Controls->Add(this->numericUpDown18);
			this->tabp_spells->Controls->Add(this->textBox18);
			this->tabp_spells->Controls->Add(this->label61);
			this->tabp_spells->Controls->Add(this->comboBox39);
			this->tabp_spells->Controls->Add(this->label75);
			this->tabp_spells->Controls->Add(this->comboBox38);
			this->tabp_spells->Controls->Add(this->label74);
			this->tabp_spells->Controls->Add(this->comboBox31);
			this->tabp_spells->Controls->Add(this->label73);
			this->tabp_spells->Controls->Add(this->textBox17);
			this->tabp_spells->Controls->Add(this->label66);
			this->tabp_spells->Controls->Add(this->comboBox37);
			this->tabp_spells->Controls->Add(this->label72);
			this->tabp_spells->Controls->Add(this->comboBox32);
			this->tabp_spells->Controls->Add(this->label67);
			this->tabp_spells->Controls->Add(this->comboBox33);
			this->tabp_spells->Controls->Add(this->label68);
			this->tabp_spells->Controls->Add(this->label69);
			this->tabp_spells->Controls->Add(this->textBox15);
			this->tabp_spells->Controls->Add(this->label70);
			this->tabp_spells->Controls->Add(this->label71);
			this->tabp_spells->Controls->Add(this->textBox16);
			this->tabp_spells->Controls->Add(this->button29);
			this->tabp_spells->Controls->Add(this->button30);
			this->tabp_spells->Controls->Add(this->listView9);
			this->tabp_spells->Controls->Add(this->button17);
			this->tabp_spells->Location = System::Drawing::Point(4, 22);
			this->tabp_spells->Name = S"tabp_spells";
			this->tabp_spells->Size = System::Drawing::Size(662, 514);
			this->tabp_spells->TabIndex = 1;
			this->tabp_spells->Text = S"Spells";
			this->tabp_spells->Visible = false;
			// 
			// comboBox29
			// 
			this->comboBox29->Location = System::Drawing::Point(160, 425);
			this->comboBox29->Name = S"comboBox29";
			this->comboBox29->Size = System::Drawing::Size(50, 21);
			this->comboBox29->TabIndex = 136;
			this->comboBox29->Text = S"comboBox29";
			// 
			// numericUpDown18
			// 
			System::Int32 __mcTemp__1[] = new System::Int32[4];
			__mcTemp__1[0] = 1;
			__mcTemp__1[1] = 0;
			__mcTemp__1[2] = 0;
			__mcTemp__1[3] = 65536;
			this->numericUpDown18->Increment = System::Decimal(__mcTemp__1);
			this->numericUpDown18->Location = System::Drawing::Point(105, 425);
			System::Int32 __mcTemp__2[] = new System::Int32[4];
			__mcTemp__2[0] = 10000;
			__mcTemp__2[1] = 0;
			__mcTemp__2[2] = 0;
			__mcTemp__2[3] = 0;
			this->numericUpDown18->Maximum = System::Decimal(__mcTemp__2);
			this->numericUpDown18->Name = S"numericUpDown18";
			this->numericUpDown18->Size = System::Drawing::Size(55, 20);
			this->numericUpDown18->TabIndex = 135;
			this->numericUpDown18->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(105, 400);
			this->textBox18->Name = S"textBox18";
			this->textBox18->Size = System::Drawing::Size(205, 20);
			this->textBox18->TabIndex = 134;
			this->textBox18->Text = S"textBox18";
			// 
			// label61
			// 
			this->label61->Location = System::Drawing::Point(15, 400);
			this->label61->Name = S"label61";
			this->label61->Size = System::Drawing::Size(85, 20);
			this->label61->TabIndex = 133;
			this->label61->Text = S"Target/Area:";
			this->label61->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox39
			// 
			this->comboBox39->Location = System::Drawing::Point(105, 375);
			this->comboBox39->Name = S"comboBox39";
			this->comboBox39->Size = System::Drawing::Size(205, 21);
			this->comboBox39->TabIndex = 132;
			this->comboBox39->Text = S"comboBox39";
			// 
			// label75
			// 
			this->label75->Location = System::Drawing::Point(15, 375);
			this->label75->Name = S"label75";
			this->label75->Size = System::Drawing::Size(85, 20);
			this->label75->TabIndex = 131;
			this->label75->Text = S"Range:";
			this->label75->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox38
			// 
			this->comboBox38->Location = System::Drawing::Point(445, 350);
			this->comboBox38->Name = S"comboBox38";
			this->comboBox38->Size = System::Drawing::Size(205, 21);
			this->comboBox38->TabIndex = 130;
			this->comboBox38->Text = S"comboBox38";
			// 
			// label74
			// 
			this->label74->Location = System::Drawing::Point(355, 350);
			this->label74->Name = S"label74";
			this->label74->Size = System::Drawing::Size(85, 20);
			this->label74->TabIndex = 129;
			this->label74->Text = S"Duration:";
			this->label74->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox31
			// 
			this->comboBox31->Location = System::Drawing::Point(105, 350);
			this->comboBox31->Name = S"comboBox31";
			this->comboBox31->Size = System::Drawing::Size(205, 21);
			this->comboBox31->TabIndex = 128;
			this->comboBox31->Text = S"comboBox31";
			// 
			// label73
			// 
			this->label73->Location = System::Drawing::Point(15, 350);
			this->label73->Name = S"label73";
			this->label73->Size = System::Drawing::Size(85, 20);
			this->label73->TabIndex = 127;
			this->label73->Text = S"Description:";
			this->label73->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(445, 325);
			this->textBox17->Name = S"textBox17";
			this->textBox17->Size = System::Drawing::Size(205, 20);
			this->textBox17->TabIndex = 126;
			this->textBox17->Text = S"textBox17";
			// 
			// label66
			// 
			this->label66->Location = System::Drawing::Point(355, 325);
			this->label66->Name = S"label66";
			this->label66->Size = System::Drawing::Size(85, 20);
			this->label66->TabIndex = 124;
			this->label66->Text = S"Components:";
			this->label66->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox37
			// 
			this->comboBox37->Location = System::Drawing::Point(105, 325);
			this->comboBox37->Name = S"comboBox37";
			this->comboBox37->Size = System::Drawing::Size(205, 21);
			this->comboBox37->TabIndex = 123;
			this->comboBox37->Text = S"comboBox37";
			// 
			// label72
			// 
			this->label72->Location = System::Drawing::Point(15, 325);
			this->label72->Name = S"label72";
			this->label72->Size = System::Drawing::Size(85, 20);
			this->label72->TabIndex = 122;
			this->label72->Text = S"School:";
			this->label72->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox32
			// 
			this->comboBox32->Location = System::Drawing::Point(445, 400);
			this->comboBox32->Name = S"comboBox32";
			this->comboBox32->Size = System::Drawing::Size(105, 21);
			this->comboBox32->TabIndex = 116;
			this->comboBox32->Text = S"comboBox32";
			// 
			// label67
			// 
			this->label67->Location = System::Drawing::Point(355, 400);
			this->label67->Name = S"label67";
			this->label67->Size = System::Drawing::Size(85, 20);
			this->label67->TabIndex = 115;
			this->label67->Text = S"Save:";
			this->label67->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox33
			// 
			this->comboBox33->Location = System::Drawing::Point(445, 375);
			this->comboBox33->Name = S"comboBox33";
			this->comboBox33->Size = System::Drawing::Size(105, 21);
			this->comboBox33->TabIndex = 114;
			this->comboBox33->Text = S"comboBox33";
			// 
			// label68
			// 
			this->label68->Location = System::Drawing::Point(355, 375);
			this->label68->Name = S"label68";
			this->label68->Size = System::Drawing::Size(85, 20);
			this->label68->TabIndex = 113;
			this->label68->Text = S"Resistance:";
			this->label68->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label69
			// 
			this->label69->Location = System::Drawing::Point(15, 450);
			this->label69->Name = S"label69";
			this->label69->Size = System::Drawing::Size(85, 20);
			this->label69->TabIndex = 112;
			this->label69->Text = S"Information:";
			this->label69->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(105, 450);
			this->textBox15->Multiline = true;
			this->textBox15->Name = S"textBox15";
			this->textBox15->Size = System::Drawing::Size(445, 50);
			this->textBox15->TabIndex = 111;
			this->textBox15->Text = S"textBox15";
			// 
			// label70
			// 
			this->label70->Location = System::Drawing::Point(15, 425);
			this->label70->Name = S"label70";
			this->label70->Size = System::Drawing::Size(85, 20);
			this->label70->TabIndex = 109;
			this->label70->Text = S"Casting Time:";
			this->label70->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label71
			// 
			this->label71->Location = System::Drawing::Point(15, 300);
			this->label71->Name = S"label71";
			this->label71->Size = System::Drawing::Size(85, 20);
			this->label71->TabIndex = 108;
			this->label71->Text = S"Name:";
			this->label71->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(105, 300);
			this->textBox16->Name = S"textBox16";
			this->textBox16->Size = System::Drawing::Size(545, 20);
			this->textBox16->TabIndex = 107;
			this->textBox16->Text = S"textBox16";
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(580, 265);
			this->button29->Name = S"button29";
			this->button29->TabIndex = 106;
			this->button29->Text = S"New";
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(495, 265);
			this->button30->Name = S"button30";
			this->button30->TabIndex = 105;
			this->button30->Text = S"Remove";
			// 
			// listView9
			// 
			this->listView9->Location = System::Drawing::Point(10, 10);
			this->listView9->Name = S"listView9";
			this->listView9->Size = System::Drawing::Size(645, 245);
			this->listView9->TabIndex = 9;
			this->listView9->View = System::Windows::Forms::View::Details;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(580, 485);
			this->button17->Name = S"button17";
			this->button17->TabIndex = 8;
			this->button17->Text = S"Apply";
			// 
			// tabp_gods
			// 
			this->tabp_gods->Controls->Add(this->label76);
			this->tabp_gods->Controls->Add(this->listView12);
			this->tabp_gods->Controls->Add(this->label80);
			this->tabp_gods->Controls->Add(this->label81);
			this->tabp_gods->Controls->Add(this->label82);
			this->tabp_gods->Controls->Add(this->listView10);
			this->tabp_gods->Controls->Add(this->button27);
			this->tabp_gods->Controls->Add(this->button28);
			this->tabp_gods->Controls->Add(this->textBox19);
			this->tabp_gods->Controls->Add(this->comboBox43);
			this->tabp_gods->Controls->Add(this->textBox20);
			this->tabp_gods->Controls->Add(this->button31);
			this->tabp_gods->Controls->Add(this->button32);
			this->tabp_gods->Controls->Add(this->listView11);
			this->tabp_gods->Controls->Add(this->button18);
			this->tabp_gods->Location = System::Drawing::Point(4, 22);
			this->tabp_gods->Name = S"tabp_gods";
			this->tabp_gods->Size = System::Drawing::Size(662, 514);
			this->tabp_gods->TabIndex = 4;
			this->tabp_gods->Text = S"Gods";
			this->tabp_gods->Visible = false;
			// 
			// label76
			// 
			this->label76->Location = System::Drawing::Point(15, 345);
			this->label76->Name = S"label76";
			this->label76->Size = System::Drawing::Size(85, 20);
			this->label76->TabIndex = 125;
			this->label76->Text = S"Domains:";
			this->label76->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// listView12
			// 
			this->listView12->Location = System::Drawing::Point(105, 345);
			this->listView12->Name = S"listView12";
			this->listView12->Size = System::Drawing::Size(270, 97);
			this->listView12->TabIndex = 124;
			this->listView12->View = System::Windows::Forms::View::Details;
			// 
			// label80
			// 
			this->label80->Location = System::Drawing::Point(15, 450);
			this->label80->Name = S"label80";
			this->label80->Size = System::Drawing::Size(85, 20);
			this->label80->TabIndex = 123;
			this->label80->Text = S"Information:";
			this->label80->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label81
			// 
			this->label81->Location = System::Drawing::Point(15, 315);
			this->label81->Name = S"label81";
			this->label81->Size = System::Drawing::Size(85, 20);
			this->label81->TabIndex = 122;
			this->label81->Text = S"Alignment:";
			this->label81->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label82
			// 
			this->label82->Location = System::Drawing::Point(15, 290);
			this->label82->Name = S"label82";
			this->label82->Size = System::Drawing::Size(85, 20);
			this->label82->TabIndex = 121;
			this->label82->Text = S"Name:";
			this->label82->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// listView10
			// 
			this->listView10->Location = System::Drawing::Point(470, 345);
			this->listView10->Name = S"listView10";
			this->listView10->Size = System::Drawing::Size(175, 97);
			this->listView10->TabIndex = 120;
			this->listView10->View = System::Windows::Forms::View::Details;
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(385, 375);
			this->button27->Name = S"button27";
			this->button27->TabIndex = 119;
			this->button27->Text = S"Remove";
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(385, 345);
			this->button28->Name = S"button28";
			this->button28->TabIndex = 118;
			this->button28->Text = S"Add";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(105, 450);
			this->textBox19->Multiline = true;
			this->textBox19->Name = S"textBox19";
			this->textBox19->Size = System::Drawing::Size(445, 50);
			this->textBox19->TabIndex = 110;
			this->textBox19->Text = S"textBox19";
			// 
			// comboBox43
			// 
			this->comboBox43->Location = System::Drawing::Point(105, 315);
			this->comboBox43->Name = S"comboBox43";
			this->comboBox43->Size = System::Drawing::Size(105, 21);
			this->comboBox43->TabIndex = 109;
			this->comboBox43->Text = S"comboBox43";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(105, 290);
			this->textBox20->Name = S"textBox20";
			this->textBox20->Size = System::Drawing::Size(545, 20);
			this->textBox20->TabIndex = 108;
			this->textBox20->Text = S"textBox20";
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(580, 255);
			this->button31->Name = S"button31";
			this->button31->TabIndex = 107;
			this->button31->Text = S"New";
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(495, 255);
			this->button32->Name = S"button32";
			this->button32->TabIndex = 106;
			this->button32->Text = S"Remove";
			// 
			// listView11
			// 
			this->listView11->Location = System::Drawing::Point(10, 10);
			this->listView11->Name = S"listView11";
			this->listView11->Size = System::Drawing::Size(645, 235);
			this->listView11->TabIndex = 105;
			this->listView11->View = System::Windows::Forms::View::Details;
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(580, 485);
			this->button18->Name = S"button18";
			this->button18->TabIndex = 8;
			this->button18->Text = S"Apply";
			// 
			// tabp_domains
			// 
			this->tabp_domains->Controls->Add(this->comboBox42);
			this->tabp_domains->Controls->Add(this->label84);
			this->tabp_domains->Controls->Add(this->comboBox41);
			this->tabp_domains->Controls->Add(this->label85);
			this->tabp_domains->Controls->Add(this->label79);
			this->tabp_domains->Controls->Add(this->label83);
			this->tabp_domains->Controls->Add(this->textBox21);
			this->tabp_domains->Controls->Add(this->textBox22);
			this->tabp_domains->Controls->Add(this->button35);
			this->tabp_domains->Controls->Add(this->button36);
			this->tabp_domains->Controls->Add(this->listView14);
			this->tabp_domains->Controls->Add(this->listView13);
			this->tabp_domains->Controls->Add(this->button33);
			this->tabp_domains->Controls->Add(this->button34);
			this->tabp_domains->Controls->Add(this->numericUpDown17);
			this->tabp_domains->Controls->Add(this->comboBox34);
			this->tabp_domains->Controls->Add(this->label77);
			this->tabp_domains->Controls->Add(this->comboBox40);
			this->tabp_domains->Controls->Add(this->label78);
			this->tabp_domains->Controls->Add(this->button19);
			this->tabp_domains->Location = System::Drawing::Point(4, 22);
			this->tabp_domains->Name = S"tabp_domains";
			this->tabp_domains->Size = System::Drawing::Size(662, 514);
			this->tabp_domains->TabIndex = 5;
			this->tabp_domains->Text = S"Domains";
			this->tabp_domains->Visible = false;
			// 
			// comboBox42
			// 
			this->comboBox42->Location = System::Drawing::Point(445, 315);
			this->comboBox42->Name = S"comboBox42";
			this->comboBox42->Size = System::Drawing::Size(205, 21);
			this->comboBox42->TabIndex = 134;
			this->comboBox42->Text = S"comboBox42";
			// 
			// label84
			// 
			this->label84->Location = System::Drawing::Point(320, 315);
			this->label84->Name = S"label84";
			this->label84->Size = System::Drawing::Size(120, 20);
			this->label84->TabIndex = 133;
			this->label84->Text = S"Opposing Domain:";
			this->label84->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox41
			// 
			this->comboBox41->Location = System::Drawing::Point(105, 315);
			this->comboBox41->Name = S"comboBox41";
			this->comboBox41->Size = System::Drawing::Size(205, 21);
			this->comboBox41->TabIndex = 132;
			this->comboBox41->Text = S"comboBox41";
			// 
			// label85
			// 
			this->label85->Location = System::Drawing::Point(15, 315);
			this->label85->Name = S"label85";
			this->label85->Size = System::Drawing::Size(85, 20);
			this->label85->TabIndex = 131;
			this->label85->Text = S"Req. Alignment:";
			this->label85->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label79
			// 
			this->label79->Location = System::Drawing::Point(15, 450);
			this->label79->Name = S"label79";
			this->label79->Size = System::Drawing::Size(85, 20);
			this->label79->TabIndex = 130;
			this->label79->Text = S"Information:";
			this->label79->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label83
			// 
			this->label83->Location = System::Drawing::Point(15, 290);
			this->label83->Name = S"label83";
			this->label83->Size = System::Drawing::Size(85, 20);
			this->label83->TabIndex = 129;
			this->label83->Text = S"Name:";
			this->label83->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(105, 450);
			this->textBox21->Multiline = true;
			this->textBox21->Name = S"textBox21";
			this->textBox21->Size = System::Drawing::Size(445, 50);
			this->textBox21->TabIndex = 128;
			this->textBox21->Text = S"textBox21";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(105, 290);
			this->textBox22->Name = S"textBox22";
			this->textBox22->Size = System::Drawing::Size(545, 20);
			this->textBox22->TabIndex = 127;
			this->textBox22->Text = S"textBox22";
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(580, 255);
			this->button35->Name = S"button35";
			this->button35->TabIndex = 126;
			this->button35->Text = S"New";
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(495, 255);
			this->button36->Name = S"button36";
			this->button36->TabIndex = 125;
			this->button36->Text = S"Remove";
			// 
			// listView14
			// 
			this->listView14->Location = System::Drawing::Point(10, 10);
			this->listView14->Name = S"listView14";
			this->listView14->Size = System::Drawing::Size(645, 235);
			this->listView14->TabIndex = 124;
			this->listView14->View = System::Windows::Forms::View::Details;
			// 
			// listView13
			// 
			this->listView13->Location = System::Drawing::Point(380, 345);
			this->listView13->Name = S"listView13";
			this->listView13->Size = System::Drawing::Size(270, 97);
			this->listView13->TabIndex = 112;
			this->listView13->View = System::Windows::Forms::View::Details;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(295, 375);
			this->button33->Name = S"button33";
			this->button33->TabIndex = 111;
			this->button33->Text = S"Remove";
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(295, 345);
			this->button34->Name = S"button34";
			this->button34->TabIndex = 110;
			this->button34->Text = S"Add";
			// 
			// numericUpDown17
			// 
			this->numericUpDown17->Location = System::Drawing::Point(230, 405);
			this->numericUpDown17->Name = S"numericUpDown17";
			this->numericUpDown17->Size = System::Drawing::Size(55, 20);
			this->numericUpDown17->TabIndex = 109;
			this->numericUpDown17->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// comboBox34
			// 
			this->comboBox34->Location = System::Drawing::Point(105, 375);
			this->comboBox34->Name = S"comboBox34";
			this->comboBox34->Size = System::Drawing::Size(180, 21);
			this->comboBox34->TabIndex = 108;
			this->comboBox34->Text = S"comboBox34";
			// 
			// label77
			// 
			this->label77->Location = System::Drawing::Point(15, 375);
			this->label77->Name = S"label77";
			this->label77->Size = System::Drawing::Size(85, 20);
			this->label77->TabIndex = 107;
			this->label77->Text = S"Data:";
			this->label77->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox40
			// 
			this->comboBox40->Location = System::Drawing::Point(105, 345);
			this->comboBox40->Name = S"comboBox40";
			this->comboBox40->Size = System::Drawing::Size(180, 21);
			this->comboBox40->TabIndex = 106;
			this->comboBox40->Text = S"comboBox40";
			// 
			// label78
			// 
			this->label78->Location = System::Drawing::Point(15, 345);
			this->label78->Name = S"label78";
			this->label78->Size = System::Drawing::Size(85, 20);
			this->label78->TabIndex = 105;
			this->label78->Text = S"Ability:";
			this->label78->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(580, 485);
			this->button19->Name = S"button19";
			this->button19->TabIndex = 8;
			this->button19->Text = S"Apply";
			// 
			// tabp_languages
			// 
			this->tabp_languages->Controls->Add(this->label54);
			this->tabp_languages->Controls->Add(this->textBox13);
			this->tabp_languages->Controls->Add(this->label55);
			this->tabp_languages->Controls->Add(this->textBox14);
			this->tabp_languages->Controls->Add(this->button25);
			this->tabp_languages->Controls->Add(this->button26);
			this->tabp_languages->Controls->Add(this->listView8);
			this->tabp_languages->Controls->Add(this->button20);
			this->tabp_languages->Location = System::Drawing::Point(4, 22);
			this->tabp_languages->Name = S"tabp_languages";
			this->tabp_languages->Size = System::Drawing::Size(662, 514);
			this->tabp_languages->TabIndex = 6;
			this->tabp_languages->Text = S"Languages";
			this->tabp_languages->Visible = false;
			// 
			// label54
			// 
			this->label54->Location = System::Drawing::Point(14, 450);
			this->label54->Name = S"label54";
			this->label54->Size = System::Drawing::Size(85, 20);
			this->label54->TabIndex = 91;
			this->label54->Text = S"Information:";
			this->label54->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(105, 450);
			this->textBox13->Multiline = true;
			this->textBox13->Name = S"textBox13";
			this->textBox13->Size = System::Drawing::Size(445, 50);
			this->textBox13->TabIndex = 90;
			this->textBox13->Text = S"textBox13";
			// 
			// label55
			// 
			this->label55->Location = System::Drawing::Point(14, 425);
			this->label55->Name = S"label55";
			this->label55->Size = System::Drawing::Size(85, 20);
			this->label55->TabIndex = 89;
			this->label55->Text = S"Name:";
			this->label55->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(105, 425);
			this->textBox14->Name = S"textBox14";
			this->textBox14->Size = System::Drawing::Size(545, 20);
			this->textBox14->TabIndex = 88;
			this->textBox14->Text = S"textBox14";
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(580, 390);
			this->button25->Name = S"button25";
			this->button25->TabIndex = 87;
			this->button25->Text = S"New";
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(495, 390);
			this->button26->Name = S"button26";
			this->button26->TabIndex = 86;
			this->button26->Text = S"Remove";
			// 
			// listView8
			// 
			this->listView8->Location = System::Drawing::Point(10, 10);
			this->listView8->Name = S"listView8";
			this->listView8->Size = System::Drawing::Size(645, 370);
			this->listView8->TabIndex = 85;
			this->listView8->View = System::Windows::Forms::View::Details;
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(580, 485);
			this->button20->Name = S"button20";
			this->button20->TabIndex = 8;
			this->button20->Text = S"Apply";
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(505, 560);
			this->button40->Name = S"button40";
			this->button40->TabIndex = 4;
			this->button40->Text = S"Cancel";
			// 
			// d2o_class_maker
			// 
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->ClientSize = System::Drawing::Size(677, 596);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->tabc_house_rules);
			this->Name = S"d2o_class_maker";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = S"d2o_class_maker";
			this->tabc_house_rules->ResumeLayout(false);
			this->tabp_race->ResumeLayout(false);
			this->tabc_race->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabc_traits->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			this->tabControl1->ResumeLayout(false);
			this->tabp_skills->ResumeLayout(false);
			this->tabp_feats->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->numericUpDown7))->EndInit();
			this->tabp_spells->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->numericUpDown18))->EndInit();
			this->tabp_gods->ResumeLayout(false);
			this->tabp_domains->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->numericUpDown17))->EndInit();
			this->tabp_languages->ResumeLayout(false);
			this->ResumeLayout(false);

		}		
	};
}