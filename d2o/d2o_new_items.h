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
	/// Summary for d2o_new_items
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public __gc class d2o_new_items : public System::Windows::Forms::Form
	{
	public: 
		d2o_new_items(void)
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
		System::Windows::Forms::Button *  btn_apply_new_item;
		System::Windows::Forms::Button *  btn_cancel_new_item;
		System::Windows::Forms::TabControl *  tabc_new_items;
		System::Windows::Forms::TabPage *  tabp_magic_items;
		System::Windows::Forms::TabPage *  tabp_intelligent_items;
		System::Windows::Forms::TabPage *  tabp_cursed_items;
		System::Windows::Forms::Button *  btn_magic_item_add;
		System::Windows::Forms::Button *  btn_magic_item_remove;
		System::Windows::Forms::ListView *  lstv_magic_item_magic;
		System::Windows::Forms::ListView *  lstv_magic_item_magic_added;
		System::Windows::Forms::Label *  label_magic_item_materials;
		System::Windows::Forms::Label *  label_magic_item_bonus;
		System::Windows::Forms::NumericUpDown *  nud_magic_item_bonus;
		System::Windows::Forms::ListBox *  lstb_magic_item_base;
		System::Windows::Forms::ComboBox *  comb_magic_item_material;
		System::Windows::Forms::ComboBox *  comb_magic_item_type;
		System::Windows::Forms::TextBox *  txtb_intelligent_cha_mod;
		System::Windows::Forms::TextBox *  txtb_intelligent_wis_mod;
		System::Windows::Forms::TextBox *  txtb_intelligent_int_mod;
		System::Windows::Forms::NumericUpDown *  nud_intelligent_cha;
		System::Windows::Forms::NumericUpDown *  nud_intelligent_wis;
		System::Windows::Forms::NumericUpDown *  nud_intelligent_int;
		System::Windows::Forms::CheckBox *  ckb_intelligent;
		System::Windows::Forms::Label *  label_intelligent_alignment;
		System::Windows::Forms::ComboBox *  comb_intelligent_alignment;
		System::Windows::Forms::Label *  label_intellignet_cha;
		System::Windows::Forms::Label *  label_intellignet_wis;
		System::Windows::Forms::Label *  label_intellignet_int;
		System::Windows::Forms::ComboBox *  combo_intelligent_special;
		System::Windows::Forms::Button *  btn_intelligent_remove_misc;
		System::Windows::Forms::Button *  btn_intelligent_add_misc;
		System::Windows::Forms::CheckBox *  ckb_intelligent_read_magic;
		System::Windows::Forms::CheckBox *  ckb_intelligent_read_language;
		System::Windows::Forms::ListBox *  lstb_intelligent_misc;
		System::Windows::Forms::ListBox *  lstb_intelligent;
		System::Windows::Forms::TextBox *  txtb_total_magic_item;
		System::Windows::Forms::Label *  label_total_price;
		System::Windows::Forms::Label *  label_total_gp;
		System::Windows::Forms::TextBox *  txtb_cursed_information;
		System::Windows::Forms::ComboBox *  comb_cursed_type;
		System::Windows::Forms::TreeView *  trev_magic_item;
		System::Windows::Forms::Label *  label_cursed_price;
		System::Windows::Forms::NumericUpDown *  nud_cursed_price;
		System::Windows::Forms::Label *  label_cursed_price_gp;
		System::Windows::Forms::CheckBox *  ckb_cursed;
		System::Windows::Forms::Label *  label_intelligent_ego;
		System::Windows::Forms::TextBox *  txtb_intelligent_ego;

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
			this->btn_apply_new_item = new System::Windows::Forms::Button();
			this->btn_cancel_new_item = new System::Windows::Forms::Button();
			this->tabc_new_items = new System::Windows::Forms::TabControl();
			this->tabp_magic_items = new System::Windows::Forms::TabPage();
			this->label_magic_item_bonus = new System::Windows::Forms::Label();
			this->label_magic_item_materials = new System::Windows::Forms::Label();
			this->lstv_magic_item_magic_added = new System::Windows::Forms::ListView();
			this->lstv_magic_item_magic = new System::Windows::Forms::ListView();
			this->comb_magic_item_material = new System::Windows::Forms::ComboBox();
			this->lstb_magic_item_base = new System::Windows::Forms::ListBox();
			this->btn_magic_item_remove = new System::Windows::Forms::Button();
			this->btn_magic_item_add = new System::Windows::Forms::Button();
			this->nud_magic_item_bonus = new System::Windows::Forms::NumericUpDown();
			this->comb_magic_item_type = new System::Windows::Forms::ComboBox();
			this->tabp_intelligent_items = new System::Windows::Forms::TabPage();
			this->lstb_intelligent = new System::Windows::Forms::ListBox();
			this->lstb_intelligent_misc = new System::Windows::Forms::ListBox();
			this->label_intelligent_ego = new System::Windows::Forms::Label();
			this->txtb_intelligent_ego = new System::Windows::Forms::TextBox();
			this->label_intelligent_alignment = new System::Windows::Forms::Label();
			this->comb_intelligent_alignment = new System::Windows::Forms::ComboBox();
			this->combo_intelligent_special = new System::Windows::Forms::ComboBox();
			this->txtb_intelligent_cha_mod = new System::Windows::Forms::TextBox();
			this->txtb_intelligent_wis_mod = new System::Windows::Forms::TextBox();
			this->txtb_intelligent_int_mod = new System::Windows::Forms::TextBox();
			this->label_intellignet_cha = new System::Windows::Forms::Label();
			this->nud_intelligent_cha = new System::Windows::Forms::NumericUpDown();
			this->label_intellignet_wis = new System::Windows::Forms::Label();
			this->nud_intelligent_wis = new System::Windows::Forms::NumericUpDown();
			this->label_intellignet_int = new System::Windows::Forms::Label();
			this->btn_intelligent_remove_misc = new System::Windows::Forms::Button();
			this->btn_intelligent_add_misc = new System::Windows::Forms::Button();
			this->nud_intelligent_int = new System::Windows::Forms::NumericUpDown();
			this->ckb_intelligent_read_magic = new System::Windows::Forms::CheckBox();
			this->ckb_intelligent_read_language = new System::Windows::Forms::CheckBox();
			this->ckb_intelligent = new System::Windows::Forms::CheckBox();
			this->tabp_cursed_items = new System::Windows::Forms::TabPage();
			this->label_cursed_price_gp = new System::Windows::Forms::Label();
			this->nud_cursed_price = new System::Windows::Forms::NumericUpDown();
			this->label_cursed_price = new System::Windows::Forms::Label();
			this->txtb_cursed_information = new System::Windows::Forms::TextBox();
			this->comb_cursed_type = new System::Windows::Forms::ComboBox();
			this->ckb_cursed = new System::Windows::Forms::CheckBox();
			this->trev_magic_item = new System::Windows::Forms::TreeView();
			this->txtb_total_magic_item = new System::Windows::Forms::TextBox();
			this->label_total_price = new System::Windows::Forms::Label();
			this->label_total_gp = new System::Windows::Forms::Label();
			this->tabc_new_items->SuspendLayout();
			this->tabp_magic_items->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_magic_item_bonus))->BeginInit();
			this->tabp_intelligent_items->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_intelligent_cha))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_intelligent_wis))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_intelligent_int))->BeginInit();
			this->tabp_cursed_items->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_cursed_price))->BeginInit();
			this->SuspendLayout();
			// 
			// btn_apply_new_item
			// 
			this->btn_apply_new_item->Location = System::Drawing::Point(380, 495);
			this->btn_apply_new_item->Name = S"btn_apply_new_item";
			this->btn_apply_new_item->Size = System::Drawing::Size(85, 25);
			this->btn_apply_new_item->TabIndex = 0;
			this->btn_apply_new_item->Text = S"Apply";
			this->btn_apply_new_item->Click += new System::EventHandler(this, btn_apply_new_item_Click);
			// 
			// btn_cancel_new_item
			// 
			this->btn_cancel_new_item->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btn_cancel_new_item->Location = System::Drawing::Point(285, 495);
			this->btn_cancel_new_item->Name = S"btn_cancel_new_item";
			this->btn_cancel_new_item->Size = System::Drawing::Size(83, 25);
			this->btn_cancel_new_item->TabIndex = 1;
			this->btn_cancel_new_item->Text = S"Cancel";
			this->btn_cancel_new_item->Click += new System::EventHandler(this, btn_cancel_new_item_Click);
			// 
			// tabc_new_items
			// 
			this->tabc_new_items->Controls->Add(this->tabp_magic_items);
			this->tabc_new_items->Controls->Add(this->tabp_intelligent_items);
			this->tabc_new_items->Controls->Add(this->tabp_cursed_items);
			this->tabc_new_items->Location = System::Drawing::Point(5, 5);
			this->tabc_new_items->Name = S"tabc_new_items";
			this->tabc_new_items->SelectedIndex = 0;
			this->tabc_new_items->Size = System::Drawing::Size(460, 370);
			this->tabc_new_items->TabIndex = 2;
			// 
			// tabp_magic_items
			// 
			this->tabp_magic_items->Controls->Add(this->label_magic_item_bonus);
			this->tabp_magic_items->Controls->Add(this->label_magic_item_materials);
			this->tabp_magic_items->Controls->Add(this->lstv_magic_item_magic_added);
			this->tabp_magic_items->Controls->Add(this->lstv_magic_item_magic);
			this->tabp_magic_items->Controls->Add(this->comb_magic_item_material);
			this->tabp_magic_items->Controls->Add(this->lstb_magic_item_base);
			this->tabp_magic_items->Controls->Add(this->btn_magic_item_remove);
			this->tabp_magic_items->Controls->Add(this->btn_magic_item_add);
			this->tabp_magic_items->Controls->Add(this->nud_magic_item_bonus);
			this->tabp_magic_items->Controls->Add(this->comb_magic_item_type);
			this->tabp_magic_items->Location = System::Drawing::Point(4, 22);
			this->tabp_magic_items->Name = S"tabp_magic_items";
			this->tabp_magic_items->Size = System::Drawing::Size(452, 344);
			this->tabp_magic_items->TabIndex = 0;
			this->tabp_magic_items->Text = S"Magic Items";
			// 
			// label_magic_item_bonus
			// 
			this->label_magic_item_bonus->Location = System::Drawing::Point(25, 130);
			this->label_magic_item_bonus->Name = S"label_magic_item_bonus";
			this->label_magic_item_bonus->Size = System::Drawing::Size(100, 15);
			this->label_magic_item_bonus->TabIndex = 12;
			this->label_magic_item_bonus->Text = S"Magic Bonus: +";
			this->label_magic_item_bonus->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_magic_item_materials
			// 
			this->label_magic_item_materials->Location = System::Drawing::Point(25, 50);
			this->label_magic_item_materials->Name = S"label_magic_item_materials";
			this->label_magic_item_materials->Size = System::Drawing::Size(100, 15);
			this->label_magic_item_materials->TabIndex = 11;
			this->label_magic_item_materials->Text = S"Item Material:";
			// 
			// lstv_magic_item_magic_added
			// 
			this->lstv_magic_item_magic_added->Location = System::Drawing::Point(270, 195);
			this->lstv_magic_item_magic_added->Name = S"lstv_magic_item_magic_added";
			this->lstv_magic_item_magic_added->Size = System::Drawing::Size(175, 145);
			this->lstv_magic_item_magic_added->TabIndex = 10;
			this->lstv_magic_item_magic_added->View = System::Windows::Forms::View::Details;
			// 
			// lstv_magic_item_magic
			// 
			this->lstv_magic_item_magic->Location = System::Drawing::Point(5, 195);
			this->lstv_magic_item_magic->Name = S"lstv_magic_item_magic";
			this->lstv_magic_item_magic->Size = System::Drawing::Size(175, 145);
			this->lstv_magic_item_magic->TabIndex = 9;
			this->lstv_magic_item_magic->View = System::Windows::Forms::View::Details;
			// 
			// comb_magic_item_material
			// 
			this->comb_magic_item_material->ItemHeight = 13;
			this->comb_magic_item_material->Location = System::Drawing::Point(25, 70);
			this->comb_magic_item_material->Name = S"comb_magic_item_material";
			this->comb_magic_item_material->Size = System::Drawing::Size(150, 21);
			this->comb_magic_item_material->TabIndex = 8;
			this->comb_magic_item_material->SelectedIndexChanged += new System::EventHandler(this, comb_magic_item_material_SelectedIndexChanged);
			// 
			// lstb_magic_item_base
			// 
			this->lstb_magic_item_base->Location = System::Drawing::Point(190, 15);
			this->lstb_magic_item_base->Name = S"lstb_magic_item_base";
			this->lstb_magic_item_base->Size = System::Drawing::Size(255, 160);
			this->lstb_magic_item_base->TabIndex = 7;
			this->lstb_magic_item_base->SelectedIndexChanged += new System::EventHandler(this, lstb_magic_item_base_SelectedIndexChanged);
			// 
			// btn_magic_item_remove
			// 
			this->btn_magic_item_remove->Location = System::Drawing::Point(190, 225);
			this->btn_magic_item_remove->Name = S"btn_magic_item_remove";
			this->btn_magic_item_remove->TabIndex = 6;
			this->btn_magic_item_remove->Text = S"Remove";
			this->btn_magic_item_remove->Click += new System::EventHandler(this, btn_magic_item_remove_Click);
			// 
			// btn_magic_item_add
			// 
			this->btn_magic_item_add->Location = System::Drawing::Point(190, 195);
			this->btn_magic_item_add->Name = S"btn_magic_item_add";
			this->btn_magic_item_add->TabIndex = 4;
			this->btn_magic_item_add->Text = S"Add";
			this->btn_magic_item_add->Click += new System::EventHandler(this, btn_magic_item_add_Click);
			// 
			// nud_magic_item_bonus
			// 
			this->nud_magic_item_bonus->Location = System::Drawing::Point(130, 125);
			System::Int32 __mcTemp__1[] = new System::Int32[4];
			__mcTemp__1[0] = 10;
			__mcTemp__1[1] = 0;
			__mcTemp__1[2] = 0;
			__mcTemp__1[3] = 0;
			this->nud_magic_item_bonus->Maximum = System::Decimal(__mcTemp__1);
			this->nud_magic_item_bonus->Name = S"nud_magic_item_bonus";
			this->nud_magic_item_bonus->Size = System::Drawing::Size(45, 20);
			this->nud_magic_item_bonus->TabIndex = 3;
			this->nud_magic_item_bonus->ValueChanged += new System::EventHandler(this, nud_magic_item_bonus_ValueChanged);
			// 
			// comb_magic_item_type
			// 
			this->comb_magic_item_type->ItemHeight = 13;
			this->comb_magic_item_type->Location = System::Drawing::Point(25, 15);
			this->comb_magic_item_type->Name = S"comb_magic_item_type";
			this->comb_magic_item_type->Size = System::Drawing::Size(150, 21);
			this->comb_magic_item_type->TabIndex = 2;
			this->comb_magic_item_type->SelectedIndexChanged += new System::EventHandler(this, comb_magic_item_type_SelectedIndexChanged);
			// 
			// tabp_intelligent_items
			// 
			this->tabp_intelligent_items->Controls->Add(this->lstb_intelligent);
			this->tabp_intelligent_items->Controls->Add(this->lstb_intelligent_misc);
			this->tabp_intelligent_items->Controls->Add(this->label_intelligent_ego);
			this->tabp_intelligent_items->Controls->Add(this->txtb_intelligent_ego);
			this->tabp_intelligent_items->Controls->Add(this->label_intelligent_alignment);
			this->tabp_intelligent_items->Controls->Add(this->comb_intelligent_alignment);
			this->tabp_intelligent_items->Controls->Add(this->combo_intelligent_special);
			this->tabp_intelligent_items->Controls->Add(this->txtb_intelligent_cha_mod);
			this->tabp_intelligent_items->Controls->Add(this->txtb_intelligent_wis_mod);
			this->tabp_intelligent_items->Controls->Add(this->txtb_intelligent_int_mod);
			this->tabp_intelligent_items->Controls->Add(this->label_intellignet_cha);
			this->tabp_intelligent_items->Controls->Add(this->nud_intelligent_cha);
			this->tabp_intelligent_items->Controls->Add(this->label_intellignet_wis);
			this->tabp_intelligent_items->Controls->Add(this->nud_intelligent_wis);
			this->tabp_intelligent_items->Controls->Add(this->label_intellignet_int);
			this->tabp_intelligent_items->Controls->Add(this->btn_intelligent_remove_misc);
			this->tabp_intelligent_items->Controls->Add(this->btn_intelligent_add_misc);
			this->tabp_intelligent_items->Controls->Add(this->nud_intelligent_int);
			this->tabp_intelligent_items->Controls->Add(this->ckb_intelligent_read_magic);
			this->tabp_intelligent_items->Controls->Add(this->ckb_intelligent_read_language);
			this->tabp_intelligent_items->Controls->Add(this->ckb_intelligent);
			this->tabp_intelligent_items->Location = System::Drawing::Point(4, 22);
			this->tabp_intelligent_items->Name = S"tabp_intelligent_items";
			this->tabp_intelligent_items->Size = System::Drawing::Size(452, 344);
			this->tabp_intelligent_items->TabIndex = 1;
			this->tabp_intelligent_items->Text = S"Intelligent Items";
			// 
			// lstb_intelligent
			// 
			this->lstb_intelligent->Enabled = false;
			this->lstb_intelligent->Location = System::Drawing::Point(275, 120);
			this->lstb_intelligent->Name = S"lstb_intelligent";
			this->lstb_intelligent->Size = System::Drawing::Size(175, 186);
			this->lstb_intelligent->TabIndex = 32;
			// 
			// lstb_intelligent_misc
			// 
			this->lstb_intelligent_misc->Enabled = false;
			this->lstb_intelligent_misc->Location = System::Drawing::Point(5, 120);
			this->lstb_intelligent_misc->Name = S"lstb_intelligent_misc";
			this->lstb_intelligent_misc->Size = System::Drawing::Size(175, 186);
			this->lstb_intelligent_misc->TabIndex = 31;
			// 
			// label_intelligent_ego
			// 
			this->label_intelligent_ego->Location = System::Drawing::Point(300, 45);
			this->label_intelligent_ego->Name = S"label_intelligent_ego";
			this->label_intelligent_ego->Size = System::Drawing::Size(35, 15);
			this->label_intelligent_ego->TabIndex = 30;
			this->label_intelligent_ego->Text = S"Ego:";
			this->label_intelligent_ego->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtb_intelligent_ego
			// 
			this->txtb_intelligent_ego->Enabled = false;
			this->txtb_intelligent_ego->Location = System::Drawing::Point(340, 40);
			this->txtb_intelligent_ego->Name = S"txtb_intelligent_ego";
			this->txtb_intelligent_ego->Size = System::Drawing::Size(35, 20);
			this->txtb_intelligent_ego->TabIndex = 29;
			this->txtb_intelligent_ego->Text = S"1";
			this->txtb_intelligent_ego->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_intelligent_alignment
			// 
			this->label_intelligent_alignment->Location = System::Drawing::Point(270, 15);
			this->label_intelligent_alignment->Name = S"label_intelligent_alignment";
			this->label_intelligent_alignment->Size = System::Drawing::Size(65, 15);
			this->label_intelligent_alignment->TabIndex = 28;
			this->label_intelligent_alignment->Text = S"Alignment:";
			this->label_intelligent_alignment->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// comb_intelligent_alignment
			// 
			this->comb_intelligent_alignment->Enabled = false;
			this->comb_intelligent_alignment->Location = System::Drawing::Point(340, 10);
			this->comb_intelligent_alignment->Name = S"comb_intelligent_alignment";
			this->comb_intelligent_alignment->Size = System::Drawing::Size(105, 21);
			this->comb_intelligent_alignment->TabIndex = 27;
			// 
			// combo_intelligent_special
			// 
			this->combo_intelligent_special->Enabled = false;
			this->combo_intelligent_special->Location = System::Drawing::Point(5, 90);
			this->combo_intelligent_special->Name = S"combo_intelligent_special";
			this->combo_intelligent_special->Size = System::Drawing::Size(175, 21);
			this->combo_intelligent_special->TabIndex = 26;
			this->combo_intelligent_special->SelectedIndexChanged += new System::EventHandler(this, combo_intelligent_special_SelectedIndexChanged);
			// 
			// txtb_intelligent_cha_mod
			// 
			this->txtb_intelligent_cha_mod->Enabled = false;
			this->txtb_intelligent_cha_mod->Location = System::Drawing::Point(225, 60);
			this->txtb_intelligent_cha_mod->Name = S"txtb_intelligent_cha_mod";
			this->txtb_intelligent_cha_mod->Size = System::Drawing::Size(35, 20);
			this->txtb_intelligent_cha_mod->TabIndex = 25;
			this->txtb_intelligent_cha_mod->Text = S"-1";
			this->txtb_intelligent_cha_mod->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_intelligent_wis_mod
			// 
			this->txtb_intelligent_wis_mod->Enabled = false;
			this->txtb_intelligent_wis_mod->Location = System::Drawing::Point(225, 35);
			this->txtb_intelligent_wis_mod->Name = S"txtb_intelligent_wis_mod";
			this->txtb_intelligent_wis_mod->Size = System::Drawing::Size(35, 20);
			this->txtb_intelligent_wis_mod->TabIndex = 24;
			this->txtb_intelligent_wis_mod->Text = S"-1";
			this->txtb_intelligent_wis_mod->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_intelligent_int_mod
			// 
			this->txtb_intelligent_int_mod->Enabled = false;
			this->txtb_intelligent_int_mod->Location = System::Drawing::Point(225, 10);
			this->txtb_intelligent_int_mod->Name = S"txtb_intelligent_int_mod";
			this->txtb_intelligent_int_mod->Size = System::Drawing::Size(35, 20);
			this->txtb_intelligent_int_mod->TabIndex = 23;
			this->txtb_intelligent_int_mod->Text = S"-1";
			this->txtb_intelligent_int_mod->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_intellignet_cha
			// 
			this->label_intellignet_cha->Location = System::Drawing::Point(135, 65);
			this->label_intellignet_cha->Name = S"label_intellignet_cha";
			this->label_intellignet_cha->Size = System::Drawing::Size(35, 15);
			this->label_intellignet_cha->TabIndex = 22;
			this->label_intellignet_cha->Text = S"CHA:";
			this->label_intellignet_cha->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// nud_intelligent_cha
			// 
			this->nud_intelligent_cha->Enabled = false;
			this->nud_intelligent_cha->Location = System::Drawing::Point(175, 60);
			System::Int32 __mcTemp__2[] = new System::Int32[4];
			__mcTemp__2[0] = 50;
			__mcTemp__2[1] = 0;
			__mcTemp__2[2] = 0;
			__mcTemp__2[3] = 0;
			this->nud_intelligent_cha->Maximum = System::Decimal(__mcTemp__2);
			System::Int32 __mcTemp__3[] = new System::Int32[4];
			__mcTemp__3[0] = 1;
			__mcTemp__3[1] = 0;
			__mcTemp__3[2] = 0;
			__mcTemp__3[3] = 0;
			this->nud_intelligent_cha->Minimum = System::Decimal(__mcTemp__3);
			this->nud_intelligent_cha->Name = S"nud_intelligent_cha";
			this->nud_intelligent_cha->Size = System::Drawing::Size(45, 20);
			this->nud_intelligent_cha->TabIndex = 21;
			this->nud_intelligent_cha->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			System::Int32 __mcTemp__4[] = new System::Int32[4];
			__mcTemp__4[0] = 8;
			__mcTemp__4[1] = 0;
			__mcTemp__4[2] = 0;
			__mcTemp__4[3] = 0;
			this->nud_intelligent_cha->Value = System::Decimal(__mcTemp__4);
			this->nud_intelligent_cha->ValueChanged += new System::EventHandler(this, nud_intelligent_cha_ValueChanged);
			// 
			// label_intellignet_wis
			// 
			this->label_intellignet_wis->Location = System::Drawing::Point(135, 40);
			this->label_intellignet_wis->Name = S"label_intellignet_wis";
			this->label_intellignet_wis->Size = System::Drawing::Size(35, 15);
			this->label_intellignet_wis->TabIndex = 20;
			this->label_intellignet_wis->Text = S"WIS:";
			this->label_intellignet_wis->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// nud_intelligent_wis
			// 
			this->nud_intelligent_wis->Enabled = false;
			this->nud_intelligent_wis->Location = System::Drawing::Point(175, 35);
			System::Int32 __mcTemp__5[] = new System::Int32[4];
			__mcTemp__5[0] = 50;
			__mcTemp__5[1] = 0;
			__mcTemp__5[2] = 0;
			__mcTemp__5[3] = 0;
			this->nud_intelligent_wis->Maximum = System::Decimal(__mcTemp__5);
			System::Int32 __mcTemp__6[] = new System::Int32[4];
			__mcTemp__6[0] = 1;
			__mcTemp__6[1] = 0;
			__mcTemp__6[2] = 0;
			__mcTemp__6[3] = 0;
			this->nud_intelligent_wis->Minimum = System::Decimal(__mcTemp__6);
			this->nud_intelligent_wis->Name = S"nud_intelligent_wis";
			this->nud_intelligent_wis->Size = System::Drawing::Size(45, 20);
			this->nud_intelligent_wis->TabIndex = 19;
			this->nud_intelligent_wis->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			System::Int32 __mcTemp__7[] = new System::Int32[4];
			__mcTemp__7[0] = 8;
			__mcTemp__7[1] = 0;
			__mcTemp__7[2] = 0;
			__mcTemp__7[3] = 0;
			this->nud_intelligent_wis->Value = System::Decimal(__mcTemp__7);
			this->nud_intelligent_wis->ValueChanged += new System::EventHandler(this, nud_intelligent_wis_ValueChanged);
			// 
			// label_intellignet_int
			// 
			this->label_intellignet_int->Location = System::Drawing::Point(135, 15);
			this->label_intellignet_int->Name = S"label_intellignet_int";
			this->label_intellignet_int->Size = System::Drawing::Size(35, 15);
			this->label_intellignet_int->TabIndex = 18;
			this->label_intellignet_int->Text = S"INT:";
			this->label_intellignet_int->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// btn_intelligent_remove_misc
			// 
			this->btn_intelligent_remove_misc->Enabled = false;
			this->btn_intelligent_remove_misc->Location = System::Drawing::Point(190, 150);
			this->btn_intelligent_remove_misc->Name = S"btn_intelligent_remove_misc";
			this->btn_intelligent_remove_misc->TabIndex = 15;
			this->btn_intelligent_remove_misc->Text = S"Remove";
			this->btn_intelligent_remove_misc->Click += new System::EventHandler(this, btn_intelligent_remove_misc_Click);
			// 
			// btn_intelligent_add_misc
			// 
			this->btn_intelligent_add_misc->Enabled = false;
			this->btn_intelligent_add_misc->Location = System::Drawing::Point(190, 120);
			this->btn_intelligent_add_misc->Name = S"btn_intelligent_add_misc";
			this->btn_intelligent_add_misc->TabIndex = 14;
			this->btn_intelligent_add_misc->Text = S"Add";
			this->btn_intelligent_add_misc->Click += new System::EventHandler(this, btn_intelligent_add_misc_Click);
			// 
			// nud_intelligent_int
			// 
			this->nud_intelligent_int->Enabled = false;
			this->nud_intelligent_int->Location = System::Drawing::Point(175, 10);
			System::Int32 __mcTemp__8[] = new System::Int32[4];
			__mcTemp__8[0] = 50;
			__mcTemp__8[1] = 0;
			__mcTemp__8[2] = 0;
			__mcTemp__8[3] = 0;
			this->nud_intelligent_int->Maximum = System::Decimal(__mcTemp__8);
			System::Int32 __mcTemp__9[] = new System::Int32[4];
			__mcTemp__9[0] = 1;
			__mcTemp__9[1] = 0;
			__mcTemp__9[2] = 0;
			__mcTemp__9[3] = 0;
			this->nud_intelligent_int->Minimum = System::Decimal(__mcTemp__9);
			this->nud_intelligent_int->Name = S"nud_intelligent_int";
			this->nud_intelligent_int->Size = System::Drawing::Size(45, 20);
			this->nud_intelligent_int->TabIndex = 13;
			this->nud_intelligent_int->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			System::Int32 __mcTemp__10[] = new System::Int32[4];
			__mcTemp__10[0] = 8;
			__mcTemp__10[1] = 0;
			__mcTemp__10[2] = 0;
			__mcTemp__10[3] = 0;
			this->nud_intelligent_int->Value = System::Decimal(__mcTemp__10);
			this->nud_intelligent_int->ValueChanged += new System::EventHandler(this, nud_intelligent_int_ValueChanged);
			// 
			// ckb_intelligent_read_magic
			// 
			this->ckb_intelligent_read_magic->Enabled = false;
			this->ckb_intelligent_read_magic->Location = System::Drawing::Point(115, 320);
			this->ckb_intelligent_read_magic->Name = S"ckb_intelligent_read_magic";
			this->ckb_intelligent_read_magic->Size = System::Drawing::Size(104, 20);
			this->ckb_intelligent_read_magic->TabIndex = 2;
			this->ckb_intelligent_read_magic->Text = S"Read Magic";
			// 
			// ckb_intelligent_read_language
			// 
			this->ckb_intelligent_read_language->Enabled = false;
			this->ckb_intelligent_read_language->Location = System::Drawing::Point(5, 320);
			this->ckb_intelligent_read_language->Name = S"ckb_intelligent_read_language";
			this->ckb_intelligent_read_language->Size = System::Drawing::Size(104, 20);
			this->ckb_intelligent_read_language->TabIndex = 1;
			this->ckb_intelligent_read_language->Text = S"Read Language";
			// 
			// ckb_intelligent
			// 
			this->ckb_intelligent->Location = System::Drawing::Point(10, 10);
			this->ckb_intelligent->Name = S"ckb_intelligent";
			this->ckb_intelligent->Size = System::Drawing::Size(104, 20);
			this->ckb_intelligent->TabIndex = 0;
			this->ckb_intelligent->Text = S"Intelligent Item";
			this->ckb_intelligent->CheckedChanged += new System::EventHandler(this, ckb_intelligent_CheckedChanged);
			// 
			// tabp_cursed_items
			// 
			this->tabp_cursed_items->Controls->Add(this->label_cursed_price_gp);
			this->tabp_cursed_items->Controls->Add(this->nud_cursed_price);
			this->tabp_cursed_items->Controls->Add(this->label_cursed_price);
			this->tabp_cursed_items->Controls->Add(this->txtb_cursed_information);
			this->tabp_cursed_items->Controls->Add(this->comb_cursed_type);
			this->tabp_cursed_items->Controls->Add(this->ckb_cursed);
			this->tabp_cursed_items->Location = System::Drawing::Point(4, 22);
			this->tabp_cursed_items->Name = S"tabp_cursed_items";
			this->tabp_cursed_items->Size = System::Drawing::Size(452, 344);
			this->tabp_cursed_items->TabIndex = 2;
			this->tabp_cursed_items->Text = S"Cursed Items";
			// 
			// label_cursed_price_gp
			// 
			this->label_cursed_price_gp->Location = System::Drawing::Point(210, 100);
			this->label_cursed_price_gp->Name = S"label_cursed_price_gp";
			this->label_cursed_price_gp->Size = System::Drawing::Size(65, 20);
			this->label_cursed_price_gp->TabIndex = 10;
			this->label_cursed_price_gp->Text = S"gp";
			this->label_cursed_price_gp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// nud_cursed_price
			// 
			this->nud_cursed_price->Enabled = false;
			this->nud_cursed_price->Location = System::Drawing::Point(90, 100);
			System::Int32 __mcTemp__11[] = new System::Int32[4];
			__mcTemp__11[0] = 100000;
			__mcTemp__11[1] = 0;
			__mcTemp__11[2] = 0;
			__mcTemp__11[3] = 0;
			this->nud_cursed_price->Maximum = System::Decimal(__mcTemp__11);
			System::Int32 __mcTemp__12[] = new System::Int32[4];
			__mcTemp__12[0] = 100000;
			__mcTemp__12[1] = 0;
			__mcTemp__12[2] = 0;
			__mcTemp__12[3] = -2147483648;
			this->nud_cursed_price->Minimum = System::Decimal(__mcTemp__12);
			this->nud_cursed_price->Name = S"nud_cursed_price";
			this->nud_cursed_price->TabIndex = 9;
			this->nud_cursed_price->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->nud_cursed_price->ValueChanged += new System::EventHandler(this, nud_cursed_price_ValueChanged);
			// 
			// label_cursed_price
			// 
			this->label_cursed_price->Location = System::Drawing::Point(10, 100);
			this->label_cursed_price->Name = S"label_cursed_price";
			this->label_cursed_price->Size = System::Drawing::Size(75, 20);
			this->label_cursed_price->TabIndex = 8;
			this->label_cursed_price->Text = S"Price Modifer:";
			this->label_cursed_price->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_cursed_information
			// 
			this->txtb_cursed_information->Enabled = false;
			this->txtb_cursed_information->Location = System::Drawing::Point(10, 70);
			this->txtb_cursed_information->Name = S"txtb_cursed_information";
			this->txtb_cursed_information->Size = System::Drawing::Size(300, 20);
			this->txtb_cursed_information->TabIndex = 3;
			this->txtb_cursed_information->Text = S"";
			// 
			// comb_cursed_type
			// 
			this->comb_cursed_type->Enabled = false;
			this->comb_cursed_type->Location = System::Drawing::Point(10, 40);
			this->comb_cursed_type->Name = S"comb_cursed_type";
			this->comb_cursed_type->Size = System::Drawing::Size(300, 21);
			this->comb_cursed_type->TabIndex = 2;
			// 
			// ckb_cursed
			// 
			this->ckb_cursed->Location = System::Drawing::Point(10, 10);
			this->ckb_cursed->Name = S"ckb_cursed";
			this->ckb_cursed->Size = System::Drawing::Size(104, 20);
			this->ckb_cursed->TabIndex = 1;
			this->ckb_cursed->Text = S"Cursed Item";
			this->ckb_cursed->CheckedChanged += new System::EventHandler(this, ckb_cursed_CheckedChanged);
			// 
			// trev_magic_item
			// 
			this->trev_magic_item->ImageIndex = -1;
			this->trev_magic_item->Location = System::Drawing::Point(15, 380);
			this->trev_magic_item->Name = S"trev_magic_item";
			this->trev_magic_item->SelectedImageIndex = -1;
			this->trev_magic_item->Size = System::Drawing::Size(440, 105);
			this->trev_magic_item->TabIndex = 3;
			// 
			// txtb_total_magic_item
			// 
			this->txtb_total_magic_item->Location = System::Drawing::Point(80, 495);
			this->txtb_total_magic_item->Name = S"txtb_total_magic_item";
			this->txtb_total_magic_item->Size = System::Drawing::Size(115, 20);
			this->txtb_total_magic_item->TabIndex = 4;
			this->txtb_total_magic_item->Text = S"0";
			this->txtb_total_magic_item->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_total_price
			// 
			this->label_total_price->Location = System::Drawing::Point(10, 495);
			this->label_total_price->Name = S"label_total_price";
			this->label_total_price->Size = System::Drawing::Size(65, 20);
			this->label_total_price->TabIndex = 5;
			this->label_total_price->Text = S"Total Price:";
			this->label_total_price->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_total_gp
			// 
			this->label_total_gp->Location = System::Drawing::Point(195, 495);
			this->label_total_gp->Name = S"label_total_gp";
			this->label_total_gp->Size = System::Drawing::Size(65, 20);
			this->label_total_gp->TabIndex = 6;
			this->label_total_gp->Text = S"gp";
			this->label_total_gp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// d2o_new_items
			// 
			this->AcceptButton = this->btn_apply_new_item;
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->CancelButton = this->btn_cancel_new_item;
			this->ClientSize = System::Drawing::Size(472, 528);
			this->Controls->Add(this->label_total_gp);
			this->Controls->Add(this->label_total_price);
			this->Controls->Add(this->txtb_total_magic_item);
			this->Controls->Add(this->trev_magic_item);
			this->Controls->Add(this->tabc_new_items);
			this->Controls->Add(this->btn_cancel_new_item);
			this->Controls->Add(this->btn_apply_new_item);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = S"d2o_new_items";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = S"d2o New Magic Items";
			this->tabc_new_items->ResumeLayout(false);
			this->tabp_magic_items->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_magic_item_bonus))->EndInit();
			this->tabp_intelligent_items->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_intelligent_cha))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_intelligent_wis))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_intelligent_int))->EndInit();
			this->tabp_cursed_items->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_cursed_price))->EndInit();
			this->ResumeLayout(false);

		}		

		System::Void btn_apply_new_item_Click(System::Object *  sender, System::EventArgs *  e)
				{
					//  Close the current form
				this->Close();
				}

		System::Void btn_cancel_new_item_Click(System::Object *  sender, System::EventArgs *  e)
				{
					//  Close the current form
				this->Close();
				}

		System::Void btn_magic_item_remove_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_magic_item_add_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void lstb_magic_item_base_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_magic_item_bonus_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void comb_magic_item_type_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void comb_magic_item_material_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_intelligent_add_misc_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_intelligent_remove_misc_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void ckb_intelligent_CheckedChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_intelligent_int_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_intelligent_wis_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_intelligent_cha_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void combo_intelligent_special_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_cursed_price_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void ckb_cursed_CheckedChanged(System::Object *  sender, System::EventArgs *  e)
				{
				
				}

};
}