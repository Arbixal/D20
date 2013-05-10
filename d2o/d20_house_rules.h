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
	/// Summary for d20_house_rules
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public __gc class d20_house_rules : public System::Windows::Forms::Form
	{
	public: 
		d20_house_rules(void)
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

		System::Windows::Forms::TabControl *  tabc_house_rules;
		System::Windows::Forms::TabPage *  tabp_items;
		System::Windows::Forms::TabPage *  tabp_spells;
		System::Windows::Forms::TabPage *  tabp_skills;
		System::Windows::Forms::TabPage *  tabp_feats;
		System::Windows::Forms::TabPage *  tabp_gods;
		System::Windows::Forms::TabPage *  tabp_domains;
		System::Windows::Forms::TabPage *  tabp_languages;
		System::Windows::Forms::TabControl *  tabc_items;
		System::Windows::Forms::TabPage *  tabp_weapons;
		System::Windows::Forms::TabPage *  tabp_Armor;
		System::Windows::Forms::TabPage *  tabp_magic;
		System::Windows::Forms::Button *  btn_close;
		System::Windows::Forms::TabPage *  tabp_goods;
		System::Windows::Forms::TabPage *  tabp_race;
		System::Windows::Forms::ComboBox *  comb_secondary_damage;
		System::Windows::Forms::ComboBox *  comb_strength_bonus;
		System::Windows::Forms::Label *  label_strength_bonus;
		System::Windows::Forms::Label *  label_ranged;
		System::Windows::Forms::ComboBox *  comb_weapon_use;
		System::Windows::Forms::Label *  label_weapon_use;
		System::Windows::Forms::DomainUpDown *  dup_secondary_critical;
		System::Windows::Forms::Label *  label_secondary_critical;
		System::Windows::Forms::ComboBox *  comb_weapon_type;
		System::Windows::Forms::Label *  label_weapon_type;
		System::Windows::Forms::Label *  label_name_weapon;
		System::Windows::Forms::TextBox *  txtb_name_weapon;
		System::Windows::Forms::Button *  btn_new_weapon;
		System::Windows::Forms::Button *  btn_remove_weapon;
		System::Windows::Forms::ComboBox *  comb_base_price_weapon;
		System::Windows::Forms::ComboBox *  comb_damage2_weapon;
		System::Windows::Forms::NumericUpDown *  nud_base_price_weapon;
		System::Windows::Forms::CheckBox *  chk_two_hand_bonus_weapon;
		System::Windows::Forms::NumericUpDown *  nup_inrements_weapon;
		System::Windows::Forms::Label *  label_increments_weapon;
		System::Windows::Forms::ComboBox *  comb_ranged_weapon;
		System::Windows::Forms::ComboBox *  comb_size_weapon;
		System::Windows::Forms::Label *  label_size_weapon;
		System::Windows::Forms::DomainUpDown *  dup_critical2_weapon;
		System::Windows::Forms::DomainUpDown *  dup_critical1_weapon;
		System::Windows::Forms::NumericUpDown *  nup_damage2_weapon;
		System::Windows::Forms::Label *  label_damage_type_weapon;
		System::Windows::Forms::Label *  label_base_price_weapon;
		System::Windows::Forms::Label *  label_information_weapon;
		System::Windows::Forms::Label *  label_critical_weapon;
		System::Windows::Forms::Label *  label_damage_weapon;
		System::Windows::Forms::TextBox *  txtb_information_weapon;
		System::Windows::Forms::Button *  btn_apply_weapon;
		System::Windows::Forms::Label *  label_secondary_damage_weapon;
		System::Windows::Forms::NumericUpDown *  nup_secondary_damage_weapon;
		System::Windows::Forms::Label *  label_weight_weapon;
		System::Windows::Forms::Button *  btn_remove_armor;
		System::Windows::Forms::ListView *  lstv_weapons;
		System::Windows::Forms::NumericUpDown *  nup_spell_failure_armor;
		System::Windows::Forms::Label *  label_spell_failure_armor;
		System::Windows::Forms::NumericUpDown *  nup_max_dex_armor;
		System::Windows::Forms::Label *  label_max_dex_armor;
		System::Windows::Forms::ComboBox *  comb_base_price_armor;
		System::Windows::Forms::NumericUpDown *  nup_base_price_armor;
		System::Windows::Forms::Label *  label_check_penalty_armor;
		System::Windows::Forms::NumericUpDown *  nup_check_penalty;
		System::Windows::Forms::NumericUpDown *  dup_armor_bonus;
		System::Windows::Forms::NumericUpDown *  nup_weight_armor;
		System::Windows::Forms::Label *  label_weight_armor;
		System::Windows::Forms::Label *  label_comb_size_armor;
		System::Windows::Forms::ComboBox *  comb_armor_type;
		System::Windows::Forms::Label *  label_base_price_armor;
		System::Windows::Forms::Label *  label_information_armor;
		System::Windows::Forms::Label *  label_armor_bonus;
		System::Windows::Forms::Label *  label_armor_type;
		System::Windows::Forms::Label *  label_name_armor;
		System::Windows::Forms::TextBox *  txtb_information_armor;
		System::Windows::Forms::TextBox *  txtb_name_armor;
		System::Windows::Forms::Button *  btn_apply_armor;
		System::Windows::Forms::Button *  btn_new_armor;
		System::Windows::Forms::ListView *  lstv_armor;
		System::Windows::Forms::Label *  label_name_magic;
		System::Windows::Forms::Button *  btn_new_magic;
		System::Windows::Forms::Button *  btn_remove_magic;
		System::Windows::Forms::Label *  label_weight_magic;
		System::Windows::Forms::Button *  btn_apply_magic;
		System::Windows::Forms::ListView *  lstv_magic;
		System::Windows::Forms::Label *  label_type_goods;
		System::Windows::Forms::Label *  label_name_goods;
		System::Windows::Forms::TextBox *  txtb_name_goods;
		System::Windows::Forms::Button *  btn_new_goods;
		System::Windows::Forms::Button *  btn_remove_goods;
		System::Windows::Forms::ListView *  lstv_goods;
		System::Windows::Forms::ComboBox *  comb_base_price_goods;
		System::Windows::Forms::ComboBox *  comb_capacity_goods;
		System::Windows::Forms::NumericUpDown *  dup_base_price_goods;
		System::Windows::Forms::NumericUpDown *  nup_capacity_goods;
		System::Windows::Forms::NumericUpDown *  nup_weight_goods;
		System::Windows::Forms::Label *  label_weight_goods;
		System::Windows::Forms::ComboBox *  comb_masterwork_goods;
		System::Windows::Forms::Label *  label_masterwork_goods;
		System::Windows::Forms::ComboBox *  comb_type_goods;
		System::Windows::Forms::Label *  label_base_price_goods;
		System::Windows::Forms::Label *  label_information_goods;
		System::Windows::Forms::Label *  label_capacity_goods;
		System::Windows::Forms::TextBox *  txtb_information_goods;
		System::Windows::Forms::Button *  btn_apply_goods;
		System::Windows::Forms::Label *  label_information_skills;
		System::Windows::Forms::TextBox *  txtb_information;
		System::Windows::Forms::CheckBox *  chk_armor_check_penalty;
		System::Windows::Forms::CheckBox *  ckb_use_untrained_skills;
		System::Windows::Forms::ComboBox *  comb_ability_skills;
		System::Windows::Forms::Label *  label_ability_skills;
		System::Windows::Forms::Label *  label_name_skills;
		System::Windows::Forms::TextBox *  txtb_name_skills;
		System::Windows::Forms::Button *  btn_apply_skills;
		System::Windows::Forms::Button *  btn_new_skills;
		System::Windows::Forms::Button *  btn_remove_skills;
		System::Windows::Forms::ListView *  lstv_skills;
		System::Windows::Forms::ListView *  lstv_prerequisite_feats;
		System::Windows::Forms::Button *  btn_prerequisite_remove_feats;
		System::Windows::Forms::Button *  btn_add_feats;
		System::Windows::Forms::NumericUpDown *  nup_feats;
		System::Windows::Forms::ComboBox *  comb_data_feats;
		System::Windows::Forms::Label *  label_data_feats;
		System::Windows::Forms::ComboBox *  comb_prerequisite_feats;
		System::Windows::Forms::Label *  label_prerequisite_feats;
		System::Windows::Forms::ComboBox *  comb_target_feats;
		System::Windows::Forms::Label *  label_target_feats;
		System::Windows::Forms::ComboBox *  comb_stacking_feats;
		System::Windows::Forms::Label *  label_stacking_feats;
		System::Windows::Forms::Label *  label_information_feats;
		System::Windows::Forms::TextBox *  txtb_information_feats;
		System::Windows::Forms::ComboBox *  comb_type_feats;
		System::Windows::Forms::Label *  label_type_feats;
		System::Windows::Forms::Label *  label_name_feats;
		System::Windows::Forms::TextBox *  txtb_name_feats;
		System::Windows::Forms::Button *  btn_new_feats;
		System::Windows::Forms::Button *  btn_remove_feats;
		System::Windows::Forms::ListView *  lstv_feats;
		System::Windows::Forms::Button *  btn_apply_feats;
		System::Windows::Forms::Button *  btn_new_spells;
		System::Windows::Forms::Button *  btn_remove_spells;
		System::Windows::Forms::ListView *  lstv_spells;
		System::Windows::Forms::Label *  label_range_spells;
		System::Windows::Forms::Label *  label_description_spells;
		System::Windows::Forms::Label *  label_school_spells;
		System::Windows::Forms::Label *  label_name_spells;
		System::Windows::Forms::Label *  label_target_spells;
		System::Windows::Forms::ComboBox *  comb_duration_spells;
		System::Windows::Forms::Label *  label_duration_spells;
		System::Windows::Forms::TextBox *  txtb_components_spells;
		System::Windows::Forms::Label *  label_components_spells;
		System::Windows::Forms::ComboBox *  comb_save_spells;
		System::Windows::Forms::Label *  label_save_spells;
		System::Windows::Forms::ComboBox *  comb_resistance_spells;
		System::Windows::Forms::Label *  label_resistance_spells;
		System::Windows::Forms::Label *  label_information_spells;
		System::Windows::Forms::Label *  label_casting_time_spells;
		System::Windows::Forms::Button *  btn_save_spells;
		System::Windows::Forms::Label *  label_alignment_gods;
		System::Windows::Forms::Label *  label_name_gods;
		System::Windows::Forms::ComboBox *  comb_alignment_gods;
		System::Windows::Forms::TextBox *  txtb_name_gods;
		System::Windows::Forms::Button *  btn_new_gods;
		System::Windows::Forms::Button *  btn_remove_gods;
		System::Windows::Forms::ListView *  lstv_gods;
		System::Windows::Forms::Label *  label_domains_gods;
		System::Windows::Forms::ListView *  lstv_domains_gods;
		System::Windows::Forms::Label *  label_information_gods;
		System::Windows::Forms::ListView *  lstv_domains2_gods;
		System::Windows::Forms::Button *  btn_remove_domains_gods;
		System::Windows::Forms::Button *  btn_add_domains_gods;
		System::Windows::Forms::TextBox *  txtb_information_gods;
		System::Windows::Forms::Button *  btn_apply_gods;
		System::Windows::Forms::ComboBox *  comb_opposing_domain_domains;
		System::Windows::Forms::Label *  label_opposing_domain_domains;
		System::Windows::Forms::ComboBox *  comb_req_alignment_domains;
		System::Windows::Forms::Label *  label_req_alignment_domains;
		System::Windows::Forms::Label *  label_name_domains;
		System::Windows::Forms::TextBox *  txtb_name_domains;
		System::Windows::Forms::Button *  btn_new_domains;
		System::Windows::Forms::Button *  btn_remove_domains;
		System::Windows::Forms::ListView *  lstv_domains;
		System::Windows::Forms::NumericUpDown *  dup_data_domains;
		System::Windows::Forms::Label *  label_information_domains;
		System::Windows::Forms::ComboBox *  comb_ability_domains;
		System::Windows::Forms::Label *  label_ability_domains;
		System::Windows::Forms::TextBox *  txtb_information_domains;
		System::Windows::Forms::ListView *  lstv_ability_domains;
		System::Windows::Forms::Button *  btn_remove_ability_domains;
		System::Windows::Forms::Button *  btn_add_domains;
		System::Windows::Forms::Button *  btn_apply_domains;
		System::Windows::Forms::Label *  label_languages_information;
		System::Windows::Forms::TextBox *  txtb_languages_information;
		System::Windows::Forms::Label *  label_languages_name;
		System::Windows::Forms::TextBox *  txtb_languages_name;
		System::Windows::Forms::Button *  btn_languages_new;
		System::Windows::Forms::Button *  btn_languages_remove;
		System::Windows::Forms::ListView *  lstv_languages;
		System::Windows::Forms::Button *  btn_languages_apply;
		System::Windows::Forms::ComboBox *  comb_languages_type;
		System::Windows::Forms::Button *  btn_race_new;
		System::Windows::Forms::Button *  btn_race_remove;
		System::Windows::Forms::Button *  btn_race_apply;
		System::Windows::Forms::ListBox *  lstb_races;
		System::Windows::Forms::TabControl *  tabc_race;
		System::Windows::Forms::TabControl *  tabc_racial_traits;
		System::Windows::Forms::TabPage *  tabp_racial_traits_physical;
		System::Windows::Forms::TabPage *  tabp_racial_traits_stats;
		System::Windows::Forms::TextBox *  txtb_racial_traits_name;
		System::Windows::Forms::Label *  label_racial_traits_name;
		System::Windows::Forms::TabPage *  tabp_race_racial_traits;
		System::Windows::Forms::TabPage *  tabp_race_skills;
		System::Windows::Forms::TabPage *  tabp_race_feats;
		System::Windows::Forms::TabPage *  tabp_race_special;
		System::Windows::Forms::TabPage *  tabp_racial_traits_languages;
		System::Windows::Forms::TabPage *  tabp_class;
		System::Windows::Forms::Label *  label_racial_traits_alignment;
		System::Windows::Forms::ComboBox *  comb_racial_traits_alignment_type;
		System::Windows::Forms::ComboBox *  comb_racial_traits_alignment;
		System::Windows::Forms::Label *  label_racial_traits_notes;
		System::Windows::Forms::TextBox *  txtb_racial_traits_notes;
		System::Windows::Forms::GroupBox *  grpb_racial_traits_ability;
		System::Windows::Forms::GroupBox *  grpb_racial_traits_saves;
		System::Windows::Forms::GroupBox *  grpb_racial_traits_natrual_armor;
		System::Windows::Forms::GroupBox *  grpb_racial_traits_speed;
		System::Windows::Forms::Label *  label_racial_traits_ability_score;
		System::Windows::Forms::NumericUpDown *  nud_racial_traits_ability_str;
		System::Windows::Forms::NumericUpDown *  nud_racial_traits_ability_dex;
		System::Windows::Forms::NumericUpDown *  nud_racial_traits_ability_con;
		System::Windows::Forms::NumericUpDown *  nud_racial_traits_ability_int;
		System::Windows::Forms::NumericUpDown *  nud_racial_traits_ability_wis;
		System::Windows::Forms::NumericUpDown *  nud_racial_traits_ability_cha;
		System::Windows::Forms::Label *  label_racial_traits_str;
		System::Windows::Forms::Label *  label_racial_traits_dex;
		System::Windows::Forms::Label *  label_racial_traits_con;
		System::Windows::Forms::Label *  label_racial_traits_int;
		System::Windows::Forms::Label *  label_racial_traits_wis;
		System::Windows::Forms::Label *  label_racial_traits_cha;
		System::Windows::Forms::CheckBox *  ckb_racial_traits_ability_str;
		System::Windows::Forms::CheckBox *  ckb_racial_traits_ability_dex;
		System::Windows::Forms::CheckBox *  ckb_racial_traits_ability_con;
		System::Windows::Forms::CheckBox *  ckb_racial_traits_ability_int;
		System::Windows::Forms::CheckBox *  ckb_racial_traits_ability_wis;
		System::Windows::Forms::CheckBox *  ckb_racial_traits_ability_cha;
		System::Windows::Forms::Label *  label_racial_traits_ability_adjustments;
		System::Windows::Forms::Label *  label_racial_traits_saves_will;
		System::Windows::Forms::Label *  label_racial_traits_saves_ref;
		System::Windows::Forms::Label *  label_racial_traits_saves_fort;
		System::Windows::Forms::Label *  label_racial_traits_saves_good;
		System::Windows::Forms::CheckBox *  ckb_racial_traits_saves_fort;
		System::Windows::Forms::NumericUpDown *  nud_racial_traits_saves_will;
		System::Windows::Forms::NumericUpDown *  nud_racial_traits_saves_ref;
		System::Windows::Forms::Label *  label_racial_traits_save_scores;
		System::Windows::Forms::NumericUpDown *  nud_racial_traits_saves_fort;
		System::Windows::Forms::CheckBox *  ckb_racial_traits_saves_ref;
		System::Windows::Forms::CheckBox *  ckb_racial_traits_saves_will;
		System::Windows::Forms::Label *  label_racial_traits_natrual_bonus;
		System::Windows::Forms::NumericUpDown *  nud_racial_traits_natrual_bonus;
		System::Windows::Forms::Label *  label_racial_traits_speed_feet;
		System::Windows::Forms::Label *  label_racial_traits_speed_maneuver;
		System::Windows::Forms::Label *  label_racial_traits_speed_type;
		System::Windows::Forms::ComboBox *  comb_racial_traits_speed_maneuver;
		System::Windows::Forms::NumericUpDown *  nud_racial_traits_speed_feet;
		System::Windows::Forms::Button *  btn_racial_traits_speed_remove;
		System::Windows::Forms::ComboBox *  comb_racial_traits_speed_type;
		System::Windows::Forms::Button *  btn_racial_traits_speed_add;
		System::Windows::Forms::ListView *  lstv_racial_traits_speed;
		System::Windows::Forms::Button *  btn_racial_traits_langauages_remove;
		System::Windows::Forms::Button *  btn_racial_traits_langauages_add;
		System::Windows::Forms::ListBox *  lstb_racial_traits_langauages_known;
		System::Windows::Forms::ListBox *  lstb_racial_traits_langauages;
		System::Windows::Forms::Label *  label_racial_traits_languages_known;
		System::Windows::Forms::Button *  btn_racial_traits_langauages_bonus_remove;
		System::Windows::Forms::Button *  btn_racial_traits_langauages_bonus_add;
		System::Windows::Forms::ListBox *  lstb_racial_traits_langauages_bonus_known;
		System::Windows::Forms::ListBox *  lstb_racial_traits_langauages_bonus;
		System::Windows::Forms::Label *  label_racial_traits_langauages_bonus;
		System::Windows::Forms::TabPage *  tabp_race_proficiency;
		System::Windows::Forms::Button *  btn_race_special_remove;
		System::Windows::Forms::Button *  btn_race_special_add;
		System::Windows::Forms::ListBox *  lstb_race_special_known;
		System::Windows::Forms::ListBox *  lstb_race_special;
		System::Windows::Forms::Button *  btn_race_proficiency_remove;
		System::Windows::Forms::Button *  btn_race_proficiency_add;
		System::Windows::Forms::ListBox *  lstb_race_proficiency_known;
		System::Windows::Forms::ListBox *  lstb_race_proficiency;
		System::Windows::Forms::ListBox *  lstb_race_skills;
		System::Windows::Forms::ListBox *  lstb_race_skills_known;
		System::Windows::Forms::Button *  btn_race_skills_add;
		System::Windows::Forms::Button *  btn_race_skills_remove;
		System::Windows::Forms::NumericUpDown *  nud_race_skills_first;
		System::Windows::Forms::NumericUpDown *  nud_race_skills_every;
		System::Windows::Forms::Label *  label_race_skills_first;
		System::Windows::Forms::Label *  label_race_skills_every;
		System::Windows::Forms::Label *  label_race_feats_every;
		System::Windows::Forms::Label *  label_race_feats_first;
		System::Windows::Forms::NumericUpDown *  nud_race_feats_every;
		System::Windows::Forms::NumericUpDown *  nud_race_feats_first;
		System::Windows::Forms::Button *  btn_race_feats_remove;
		System::Windows::Forms::Button *  btn_race_feats_add;
		System::Windows::Forms::ListBox *  lstb_race_feats_known;
		System::Windows::Forms::ListBox *  lstb_race_feats;
		System::Windows::Forms::ComboBox *  comb_magic_base_price;
		System::Windows::Forms::NumericUpDown *  nup_magic_base_price;
		System::Windows::Forms::Label *  label_magic_lbs;
		System::Windows::Forms::NumericUpDown *  nup_magic_weight;
		System::Windows::Forms::ComboBox *  comb_magic_subtype;
		System::Windows::Forms::Label *  label_magic_subtype;
		System::Windows::Forms::ComboBox *  comb_magic_item_base;
		System::Windows::Forms::Label *  label_magic_base_price;
		System::Windows::Forms::Label *  label_magic_information;
		System::Windows::Forms::Label *  label_magic_item_based_on;
		System::Windows::Forms::TextBox *  txtb_magic_information;
		System::Windows::Forms::TextBox *  txtb_magic_name;
		System::Windows::Forms::ListView *  lstv_magic_type;
		System::Windows::Forms::Button *  btn_magic_type_remove;
		System::Windows::Forms::Button *  btn_magic_type_add;
		System::Windows::Forms::NumericUpDown *  nud_magic_type;
		System::Windows::Forms::ComboBox *  comb_magic_data;
		System::Windows::Forms::Label *  label_magic_data;
		System::Windows::Forms::ComboBox *  combo_magic_type;
		System::Windows::Forms::Label *  label_magic_type;
		System::Windows::Forms::ListBox *  lstb_classes;
		System::Windows::Forms::Button *  btn_class_new;
		System::Windows::Forms::Button *  btn_class_remove;
		System::Windows::Forms::Button *  btn_class_apply;
		System::Windows::Forms::TabControl *  tabc_class;
		System::Windows::Forms::TabPage *  tabp_class_bio;
		System::Windows::Forms::Label *  label_class_bio_name;
		System::Windows::Forms::NumericUpDown *  nud_class_bio_hit_die;
		System::Windows::Forms::ComboBox *  comb_class_bio_hit_die;
		System::Windows::Forms::Label *  label_class_bio_hit_die;
		System::Windows::Forms::TabPage *  tabp_class_skills;
		System::Windows::Forms::TabPage *  tabp_class_feats;
		System::Windows::Forms::TabPage *  tabp_class_spells;
		System::Windows::Forms::TabPage *  tabp_class_specials;
		System::Windows::Forms::Button *  btn_class_specials_remove;
		System::Windows::Forms::Button *  btn_class_specials_add;
		System::Windows::Forms::ListBox *  lstb_class_specials;
		System::Windows::Forms::Label *  label_class_specials;
		System::Windows::Forms::Label *  label_class_specials_level;
		System::Windows::Forms::NumericUpDown *  nud_class_specials_level;
		System::Windows::Forms::ListView *  lstv_class_specials;
		System::Windows::Forms::ListView *  lstv_class_spells;
		System::Windows::Forms::Label *  label_class_spells;
		System::Windows::Forms::Label *  label_class_spells_type;
		System::Windows::Forms::ComboBox *  comb_class_spells_type;
		System::Windows::Forms::Button *  btn_class_skills_remove;
		System::Windows::Forms::Button *  btn_class_skills_add;
		System::Windows::Forms::ListBox *  lstb_class_skills_known;
		System::Windows::Forms::ListBox *  lstb_class_skills;
		System::Windows::Forms::Label *  label_class_skills;
		System::Windows::Forms::Button *  btn_class_feats_remove;
		System::Windows::Forms::Button *  btn_class_feats_add;
		System::Windows::Forms::ListBox *  lstb_class_feats_known;
		System::Windows::Forms::ListBox *  lstb_class_feats;
		System::Windows::Forms::Label *  label_class_feats;
		System::Windows::Forms::Label *  label_class_skills_first;
		System::Windows::Forms::NumericUpDown *  nud_class_skills_first;
		System::Windows::Forms::Label *  label_class_skills_first_right;
		System::Windows::Forms::Label *  label_class_skills_first_left;
		System::Windows::Forms::Label *  label_class_skills_every_right;
		System::Windows::Forms::Label *  label_class_skills_every;
		System::Windows::Forms::NumericUpDown *  nud_class_skills_every;
		System::Windows::Forms::Label *  label_class_bio_type;
		System::Windows::Forms::Label *  label_class_bio_alignment;
		System::Windows::Forms::Label *  label_class_bio_description;
		System::Windows::Forms::TextBox *  txtb_class_bio_name;
		System::Windows::Forms::TextBox *  txtb_class_bio_description;
		System::Windows::Forms::ComboBox *  comb_class_bio_type;
		System::Windows::Forms::ComboBox *  comb_class_bio_alignment_type;
		System::Windows::Forms::ComboBox *  comb_class_bio_alignment;
		System::Windows::Forms::GroupBox *  grpb_class_bio_abilities;
		System::Windows::Forms::Button *  btn_class_bio_abilities_remove;
		System::Windows::Forms::Button *  btn_class_bio_abilities_add;
		System::Windows::Forms::ComboBox *  comb_class_bio_abilities;
		System::Windows::Forms::ListBox *  lstb_class_bio_abilities;
		System::Windows::Forms::GroupBox *  grpb_class_bio_attacks;
		System::Windows::Forms::Label *  label_class_bio_attacks;
		System::Windows::Forms::ComboBox *  comb_class_bio_attacks;
		System::Windows::Forms::GroupBox *  grpb_class_bio_saves;
		System::Windows::Forms::Label *  label_class_bio_saves;
		System::Windows::Forms::Label *  label_class_bio_saves_will;
		System::Windows::Forms::CheckBox *  ckb_class_bio_saves_will;
		System::Windows::Forms::Label *  label_class_bio_svaes_ref;
		System::Windows::Forms::CheckBox *  ckb_class_bio_saves_fort;
		System::Windows::Forms::Label *  label_class_bio_saves_fort;
		System::Windows::Forms::CheckBox *  ckb_class_bio_saves_ref;
		System::Windows::Forms::ColumnHeader *  cloh_class_spells_0;
		System::Windows::Forms::ColumnHeader *  cloh_class_spells_1;
		System::Windows::Forms::ColumnHeader *  cloh_class_spells_2;
		System::Windows::Forms::ColumnHeader *  cloh_class_spells_3;
		System::Windows::Forms::ColumnHeader *  cloh_class_spells_4;
		System::Windows::Forms::ColumnHeader *  cloh_class_spells_5;
		System::Windows::Forms::ColumnHeader *  cloh_class_spells_6;
		System::Windows::Forms::ColumnHeader *  cloh_class_spells_7;
		System::Windows::Forms::ColumnHeader *  cloh_class_spells_8;
		System::Windows::Forms::ColumnHeader *  cloh_class_spells_9;
		System::Windows::Forms::ComboBox *  comb_class_spells_magic_base;
		System::Windows::Forms::Label *  label_class_spells_magic_base;
		System::Windows::Forms::Label *  label_languages_type;
		System::Windows::Forms::Label *  label_item_weapons_lbs;
		System::Windows::Forms::ComboBox *  comb_item_weapons_damage_type;
		System::Windows::Forms::Label *  label_items_armor_spell_percent;
		System::Windows::Forms::Label *  label_items_armor_lbs;
		System::Windows::Forms::ComboBox *  comb_item_armor_size;
		System::Windows::Forms::Label *  label_items_goods_lbs;
		System::Windows::Forms::ComboBox *  comb_spells_casting;
		System::Windows::Forms::NumericUpDown *  nud_spells_casting;
		System::Windows::Forms::TextBox *  txtb_spells_target;
		System::Windows::Forms::ComboBox *  comb_spells_range;
		System::Windows::Forms::ComboBox *  comb_spells_description;
		System::Windows::Forms::ComboBox *  comb_spells_school;
		System::Windows::Forms::TextBox *  txtb_spells_information;
		System::Windows::Forms::TextBox *  txtb_spells_name;
		System::Windows::Forms::Label *  label_domains_information;
		System::Windows::Forms::ComboBox *  comb_domains_data;
		System::Windows::Forms::NumericUpDown *  nud_items_weapons_weight;

	
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
			this->tabc_house_rules = new System::Windows::Forms::TabControl();
			this->tabp_items = new System::Windows::Forms::TabPage();
			this->tabc_items = new System::Windows::Forms::TabControl();
			this->tabp_weapons = new System::Windows::Forms::TabPage();
			this->comb_base_price_weapon = new System::Windows::Forms::ComboBox();
			this->comb_secondary_damage = new System::Windows::Forms::ComboBox();
			this->comb_damage2_weapon = new System::Windows::Forms::ComboBox();
			this->nud_base_price_weapon = new System::Windows::Forms::NumericUpDown();
			this->chk_two_hand_bonus_weapon = new System::Windows::Forms::CheckBox();
			this->nup_inrements_weapon = new System::Windows::Forms::NumericUpDown();
			this->label_increments_weapon = new System::Windows::Forms::Label();
			this->comb_strength_bonus = new System::Windows::Forms::ComboBox();
			this->label_strength_bonus = new System::Windows::Forms::Label();
			this->comb_ranged_weapon = new System::Windows::Forms::ComboBox();
			this->label_ranged = new System::Windows::Forms::Label();
			this->comb_size_weapon = new System::Windows::Forms::ComboBox();
			this->label_size_weapon = new System::Windows::Forms::Label();
			this->comb_weapon_use = new System::Windows::Forms::ComboBox();
			this->label_weapon_use = new System::Windows::Forms::Label();
			this->dup_secondary_critical = new System::Windows::Forms::DomainUpDown();
			this->label_secondary_critical = new System::Windows::Forms::Label();
			this->dup_critical2_weapon = new System::Windows::Forms::DomainUpDown();
			this->dup_critical1_weapon = new System::Windows::Forms::DomainUpDown();
			this->label_secondary_damage_weapon = new System::Windows::Forms::Label();
			this->nup_secondary_damage_weapon = new System::Windows::Forms::NumericUpDown();
			this->nup_damage2_weapon = new System::Windows::Forms::NumericUpDown();
			this->label_item_weapons_lbs = new System::Windows::Forms::Label();
			this->nud_items_weapons_weight = new System::Windows::Forms::NumericUpDown();
			this->label_weight_weapon = new System::Windows::Forms::Label();
			this->comb_item_weapons_damage_type = new System::Windows::Forms::ComboBox();
			this->label_damage_type_weapon = new System::Windows::Forms::Label();
			this->comb_weapon_type = new System::Windows::Forms::ComboBox();
			this->label_base_price_weapon = new System::Windows::Forms::Label();
			this->label_information_weapon = new System::Windows::Forms::Label();
			this->label_critical_weapon = new System::Windows::Forms::Label();
			this->label_damage_weapon = new System::Windows::Forms::Label();
			this->label_weapon_type = new System::Windows::Forms::Label();
			this->label_name_weapon = new System::Windows::Forms::Label();
			this->txtb_information_weapon = new System::Windows::Forms::TextBox();
			this->txtb_name_weapon = new System::Windows::Forms::TextBox();
			this->btn_apply_weapon = new System::Windows::Forms::Button();
			this->btn_new_weapon = new System::Windows::Forms::Button();
			this->btn_remove_weapon = new System::Windows::Forms::Button();
			this->lstv_weapons = new System::Windows::Forms::ListView();
			this->tabp_magic = new System::Windows::Forms::TabPage();
			this->lstv_magic_type = new System::Windows::Forms::ListView();
			this->btn_magic_type_remove = new System::Windows::Forms::Button();
			this->btn_magic_type_add = new System::Windows::Forms::Button();
			this->nud_magic_type = new System::Windows::Forms::NumericUpDown();
			this->comb_magic_data = new System::Windows::Forms::ComboBox();
			this->label_magic_data = new System::Windows::Forms::Label();
			this->combo_magic_type = new System::Windows::Forms::ComboBox();
			this->label_magic_type = new System::Windows::Forms::Label();
			this->comb_magic_base_price = new System::Windows::Forms::ComboBox();
			this->nup_magic_base_price = new System::Windows::Forms::NumericUpDown();
			this->label_magic_lbs = new System::Windows::Forms::Label();
			this->nup_magic_weight = new System::Windows::Forms::NumericUpDown();
			this->label_weight_magic = new System::Windows::Forms::Label();
			this->comb_magic_subtype = new System::Windows::Forms::ComboBox();
			this->label_magic_subtype = new System::Windows::Forms::Label();
			this->comb_magic_item_base = new System::Windows::Forms::ComboBox();
			this->label_magic_base_price = new System::Windows::Forms::Label();
			this->label_magic_information = new System::Windows::Forms::Label();
			this->label_magic_item_based_on = new System::Windows::Forms::Label();
			this->label_name_magic = new System::Windows::Forms::Label();
			this->txtb_magic_information = new System::Windows::Forms::TextBox();
			this->txtb_magic_name = new System::Windows::Forms::TextBox();
			this->btn_apply_magic = new System::Windows::Forms::Button();
			this->btn_new_magic = new System::Windows::Forms::Button();
			this->btn_remove_magic = new System::Windows::Forms::Button();
			this->lstv_magic = new System::Windows::Forms::ListView();
			this->tabp_Armor = new System::Windows::Forms::TabPage();
			this->label_items_armor_spell_percent = new System::Windows::Forms::Label();
			this->nup_spell_failure_armor = new System::Windows::Forms::NumericUpDown();
			this->label_spell_failure_armor = new System::Windows::Forms::Label();
			this->nup_max_dex_armor = new System::Windows::Forms::NumericUpDown();
			this->label_max_dex_armor = new System::Windows::Forms::Label();
			this->comb_base_price_armor = new System::Windows::Forms::ComboBox();
			this->nup_base_price_armor = new System::Windows::Forms::NumericUpDown();
			this->label_check_penalty_armor = new System::Windows::Forms::Label();
			this->nup_check_penalty = new System::Windows::Forms::NumericUpDown();
			this->dup_armor_bonus = new System::Windows::Forms::NumericUpDown();
			this->label_items_armor_lbs = new System::Windows::Forms::Label();
			this->nup_weight_armor = new System::Windows::Forms::NumericUpDown();
			this->label_weight_armor = new System::Windows::Forms::Label();
			this->comb_item_armor_size = new System::Windows::Forms::ComboBox();
			this->label_comb_size_armor = new System::Windows::Forms::Label();
			this->comb_armor_type = new System::Windows::Forms::ComboBox();
			this->label_base_price_armor = new System::Windows::Forms::Label();
			this->label_information_armor = new System::Windows::Forms::Label();
			this->label_armor_bonus = new System::Windows::Forms::Label();
			this->label_armor_type = new System::Windows::Forms::Label();
			this->label_name_armor = new System::Windows::Forms::Label();
			this->txtb_information_armor = new System::Windows::Forms::TextBox();
			this->txtb_name_armor = new System::Windows::Forms::TextBox();
			this->btn_apply_armor = new System::Windows::Forms::Button();
			this->btn_new_armor = new System::Windows::Forms::Button();
			this->btn_remove_armor = new System::Windows::Forms::Button();
			this->lstv_armor = new System::Windows::Forms::ListView();
			this->tabp_goods = new System::Windows::Forms::TabPage();
			this->comb_base_price_goods = new System::Windows::Forms::ComboBox();
			this->comb_capacity_goods = new System::Windows::Forms::ComboBox();
			this->dup_base_price_goods = new System::Windows::Forms::NumericUpDown();
			this->nup_capacity_goods = new System::Windows::Forms::NumericUpDown();
			this->label_items_goods_lbs = new System::Windows::Forms::Label();
			this->nup_weight_goods = new System::Windows::Forms::NumericUpDown();
			this->label_weight_goods = new System::Windows::Forms::Label();
			this->comb_masterwork_goods = new System::Windows::Forms::ComboBox();
			this->label_masterwork_goods = new System::Windows::Forms::Label();
			this->comb_type_goods = new System::Windows::Forms::ComboBox();
			this->label_base_price_goods = new System::Windows::Forms::Label();
			this->label_information_goods = new System::Windows::Forms::Label();
			this->label_capacity_goods = new System::Windows::Forms::Label();
			this->label_type_goods = new System::Windows::Forms::Label();
			this->label_name_goods = new System::Windows::Forms::Label();
			this->txtb_information_goods = new System::Windows::Forms::TextBox();
			this->txtb_name_goods = new System::Windows::Forms::TextBox();
			this->btn_apply_goods = new System::Windows::Forms::Button();
			this->btn_new_goods = new System::Windows::Forms::Button();
			this->btn_remove_goods = new System::Windows::Forms::Button();
			this->lstv_goods = new System::Windows::Forms::ListView();
			this->tabp_race = new System::Windows::Forms::TabPage();
			this->tabc_race = new System::Windows::Forms::TabControl();
			this->tabp_race_racial_traits = new System::Windows::Forms::TabPage();
			this->tabc_racial_traits = new System::Windows::Forms::TabControl();
			this->tabp_racial_traits_physical = new System::Windows::Forms::TabPage();
			this->txtb_racial_traits_notes = new System::Windows::Forms::TextBox();
			this->label_racial_traits_notes = new System::Windows::Forms::Label();
			this->comb_racial_traits_alignment = new System::Windows::Forms::ComboBox();
			this->comb_racial_traits_alignment_type = new System::Windows::Forms::ComboBox();
			this->label_racial_traits_alignment = new System::Windows::Forms::Label();
			this->label_racial_traits_name = new System::Windows::Forms::Label();
			this->txtb_racial_traits_name = new System::Windows::Forms::TextBox();
			this->tabp_racial_traits_stats = new System::Windows::Forms::TabPage();
			this->grpb_racial_traits_speed = new System::Windows::Forms::GroupBox();
			this->label_racial_traits_speed_feet = new System::Windows::Forms::Label();
			this->label_racial_traits_speed_maneuver = new System::Windows::Forms::Label();
			this->label_racial_traits_speed_type = new System::Windows::Forms::Label();
			this->comb_racial_traits_speed_maneuver = new System::Windows::Forms::ComboBox();
			this->nud_racial_traits_speed_feet = new System::Windows::Forms::NumericUpDown();
			this->btn_racial_traits_speed_remove = new System::Windows::Forms::Button();
			this->comb_racial_traits_speed_type = new System::Windows::Forms::ComboBox();
			this->btn_racial_traits_speed_add = new System::Windows::Forms::Button();
			this->lstv_racial_traits_speed = new System::Windows::Forms::ListView();
			this->grpb_racial_traits_natrual_armor = new System::Windows::Forms::GroupBox();
			this->label_racial_traits_natrual_bonus = new System::Windows::Forms::Label();
			this->nud_racial_traits_natrual_bonus = new System::Windows::Forms::NumericUpDown();
			this->grpb_racial_traits_saves = new System::Windows::Forms::GroupBox();
			this->label_racial_traits_saves_will = new System::Windows::Forms::Label();
			this->label_racial_traits_saves_ref = new System::Windows::Forms::Label();
			this->label_racial_traits_saves_fort = new System::Windows::Forms::Label();
			this->label_racial_traits_saves_good = new System::Windows::Forms::Label();
			this->ckb_racial_traits_saves_fort = new System::Windows::Forms::CheckBox();
			this->nud_racial_traits_saves_will = new System::Windows::Forms::NumericUpDown();
			this->nud_racial_traits_saves_ref = new System::Windows::Forms::NumericUpDown();
			this->label_racial_traits_save_scores = new System::Windows::Forms::Label();
			this->nud_racial_traits_saves_fort = new System::Windows::Forms::NumericUpDown();
			this->ckb_racial_traits_saves_ref = new System::Windows::Forms::CheckBox();
			this->ckb_racial_traits_saves_will = new System::Windows::Forms::CheckBox();
			this->grpb_racial_traits_ability = new System::Windows::Forms::GroupBox();
			this->label_racial_traits_cha = new System::Windows::Forms::Label();
			this->label_racial_traits_wis = new System::Windows::Forms::Label();
			this->label_racial_traits_int = new System::Windows::Forms::Label();
			this->label_racial_traits_con = new System::Windows::Forms::Label();
			this->label_racial_traits_dex = new System::Windows::Forms::Label();
			this->label_racial_traits_str = new System::Windows::Forms::Label();
			this->label_racial_traits_ability_adjustments = new System::Windows::Forms::Label();
			this->ckb_racial_traits_ability_str = new System::Windows::Forms::CheckBox();
			this->nud_racial_traits_ability_cha = new System::Windows::Forms::NumericUpDown();
			this->nud_racial_traits_ability_wis = new System::Windows::Forms::NumericUpDown();
			this->nud_racial_traits_ability_int = new System::Windows::Forms::NumericUpDown();
			this->nud_racial_traits_ability_con = new System::Windows::Forms::NumericUpDown();
			this->nud_racial_traits_ability_dex = new System::Windows::Forms::NumericUpDown();
			this->label_racial_traits_ability_score = new System::Windows::Forms::Label();
			this->nud_racial_traits_ability_str = new System::Windows::Forms::NumericUpDown();
			this->ckb_racial_traits_ability_dex = new System::Windows::Forms::CheckBox();
			this->ckb_racial_traits_ability_con = new System::Windows::Forms::CheckBox();
			this->ckb_racial_traits_ability_int = new System::Windows::Forms::CheckBox();
			this->ckb_racial_traits_ability_wis = new System::Windows::Forms::CheckBox();
			this->ckb_racial_traits_ability_cha = new System::Windows::Forms::CheckBox();
			this->tabp_racial_traits_languages = new System::Windows::Forms::TabPage();
			this->label_racial_traits_langauages_bonus = new System::Windows::Forms::Label();
			this->label_racial_traits_languages_known = new System::Windows::Forms::Label();
			this->btn_racial_traits_langauages_bonus_remove = new System::Windows::Forms::Button();
			this->btn_racial_traits_langauages_bonus_add = new System::Windows::Forms::Button();
			this->lstb_racial_traits_langauages_bonus_known = new System::Windows::Forms::ListBox();
			this->lstb_racial_traits_langauages_bonus = new System::Windows::Forms::ListBox();
			this->btn_racial_traits_langauages_remove = new System::Windows::Forms::Button();
			this->btn_racial_traits_langauages_add = new System::Windows::Forms::Button();
			this->lstb_racial_traits_langauages_known = new System::Windows::Forms::ListBox();
			this->lstb_racial_traits_langauages = new System::Windows::Forms::ListBox();
			this->tabp_race_skills = new System::Windows::Forms::TabPage();
			this->label_race_skills_every = new System::Windows::Forms::Label();
			this->label_race_skills_first = new System::Windows::Forms::Label();
			this->nud_race_skills_every = new System::Windows::Forms::NumericUpDown();
			this->nud_race_skills_first = new System::Windows::Forms::NumericUpDown();
			this->btn_race_skills_remove = new System::Windows::Forms::Button();
			this->btn_race_skills_add = new System::Windows::Forms::Button();
			this->lstb_race_skills_known = new System::Windows::Forms::ListBox();
			this->lstb_race_skills = new System::Windows::Forms::ListBox();
			this->tabp_race_feats = new System::Windows::Forms::TabPage();
			this->label_race_feats_every = new System::Windows::Forms::Label();
			this->label_race_feats_first = new System::Windows::Forms::Label();
			this->nud_race_feats_every = new System::Windows::Forms::NumericUpDown();
			this->nud_race_feats_first = new System::Windows::Forms::NumericUpDown();
			this->btn_race_feats_remove = new System::Windows::Forms::Button();
			this->btn_race_feats_add = new System::Windows::Forms::Button();
			this->lstb_race_feats_known = new System::Windows::Forms::ListBox();
			this->lstb_race_feats = new System::Windows::Forms::ListBox();
			this->tabp_race_special = new System::Windows::Forms::TabPage();
			this->btn_race_special_remove = new System::Windows::Forms::Button();
			this->btn_race_special_add = new System::Windows::Forms::Button();
			this->lstb_race_special_known = new System::Windows::Forms::ListBox();
			this->lstb_race_special = new System::Windows::Forms::ListBox();
			this->tabp_race_proficiency = new System::Windows::Forms::TabPage();
			this->btn_race_proficiency_remove = new System::Windows::Forms::Button();
			this->btn_race_proficiency_add = new System::Windows::Forms::Button();
			this->lstb_race_proficiency_known = new System::Windows::Forms::ListBox();
			this->lstb_race_proficiency = new System::Windows::Forms::ListBox();
			this->lstb_races = new System::Windows::Forms::ListBox();
			this->btn_race_new = new System::Windows::Forms::Button();
			this->btn_race_remove = new System::Windows::Forms::Button();
			this->btn_race_apply = new System::Windows::Forms::Button();
			this->tabp_spells = new System::Windows::Forms::TabPage();
			this->comb_spells_casting = new System::Windows::Forms::ComboBox();
			this->nud_spells_casting = new System::Windows::Forms::NumericUpDown();
			this->txtb_spells_target = new System::Windows::Forms::TextBox();
			this->label_target_spells = new System::Windows::Forms::Label();
			this->comb_spells_range = new System::Windows::Forms::ComboBox();
			this->label_range_spells = new System::Windows::Forms::Label();
			this->comb_duration_spells = new System::Windows::Forms::ComboBox();
			this->label_duration_spells = new System::Windows::Forms::Label();
			this->comb_spells_description = new System::Windows::Forms::ComboBox();
			this->label_description_spells = new System::Windows::Forms::Label();
			this->txtb_components_spells = new System::Windows::Forms::TextBox();
			this->label_components_spells = new System::Windows::Forms::Label();
			this->comb_spells_school = new System::Windows::Forms::ComboBox();
			this->label_school_spells = new System::Windows::Forms::Label();
			this->comb_save_spells = new System::Windows::Forms::ComboBox();
			this->label_save_spells = new System::Windows::Forms::Label();
			this->comb_resistance_spells = new System::Windows::Forms::ComboBox();
			this->label_resistance_spells = new System::Windows::Forms::Label();
			this->label_information_spells = new System::Windows::Forms::Label();
			this->txtb_spells_information = new System::Windows::Forms::TextBox();
			this->label_casting_time_spells = new System::Windows::Forms::Label();
			this->label_name_spells = new System::Windows::Forms::Label();
			this->txtb_spells_name = new System::Windows::Forms::TextBox();
			this->btn_new_spells = new System::Windows::Forms::Button();
			this->btn_remove_spells = new System::Windows::Forms::Button();
			this->lstv_spells = new System::Windows::Forms::ListView();
			this->btn_save_spells = new System::Windows::Forms::Button();
			this->tabp_gods = new System::Windows::Forms::TabPage();
			this->label_domains_gods = new System::Windows::Forms::Label();
			this->lstv_domains_gods = new System::Windows::Forms::ListView();
			this->label_information_gods = new System::Windows::Forms::Label();
			this->label_alignment_gods = new System::Windows::Forms::Label();
			this->label_name_gods = new System::Windows::Forms::Label();
			this->lstv_domains2_gods = new System::Windows::Forms::ListView();
			this->btn_remove_domains_gods = new System::Windows::Forms::Button();
			this->btn_add_domains_gods = new System::Windows::Forms::Button();
			this->txtb_information_gods = new System::Windows::Forms::TextBox();
			this->comb_alignment_gods = new System::Windows::Forms::ComboBox();
			this->txtb_name_gods = new System::Windows::Forms::TextBox();
			this->btn_new_gods = new System::Windows::Forms::Button();
			this->btn_remove_gods = new System::Windows::Forms::Button();
			this->lstv_gods = new System::Windows::Forms::ListView();
			this->btn_apply_gods = new System::Windows::Forms::Button();
			this->tabp_domains = new System::Windows::Forms::TabPage();
			this->comb_opposing_domain_domains = new System::Windows::Forms::ComboBox();
			this->label_opposing_domain_domains = new System::Windows::Forms::Label();
			this->comb_req_alignment_domains = new System::Windows::Forms::ComboBox();
			this->label_req_alignment_domains = new System::Windows::Forms::Label();
			this->label_domains_information = new System::Windows::Forms::Label();
			this->label_name_domains = new System::Windows::Forms::Label();
			this->txtb_information_domains = new System::Windows::Forms::TextBox();
			this->txtb_name_domains = new System::Windows::Forms::TextBox();
			this->btn_new_domains = new System::Windows::Forms::Button();
			this->btn_remove_domains = new System::Windows::Forms::Button();
			this->lstv_domains = new System::Windows::Forms::ListView();
			this->lstv_ability_domains = new System::Windows::Forms::ListView();
			this->btn_remove_ability_domains = new System::Windows::Forms::Button();
			this->btn_add_domains = new System::Windows::Forms::Button();
			this->dup_data_domains = new System::Windows::Forms::NumericUpDown();
			this->comb_domains_data = new System::Windows::Forms::ComboBox();
			this->label_information_domains = new System::Windows::Forms::Label();
			this->comb_ability_domains = new System::Windows::Forms::ComboBox();
			this->label_ability_domains = new System::Windows::Forms::Label();
			this->btn_apply_domains = new System::Windows::Forms::Button();
			this->tabp_feats = new System::Windows::Forms::TabPage();
			this->lstv_prerequisite_feats = new System::Windows::Forms::ListView();
			this->btn_prerequisite_remove_feats = new System::Windows::Forms::Button();
			this->btn_add_feats = new System::Windows::Forms::Button();
			this->nup_feats = new System::Windows::Forms::NumericUpDown();
			this->comb_data_feats = new System::Windows::Forms::ComboBox();
			this->label_data_feats = new System::Windows::Forms::Label();
			this->comb_prerequisite_feats = new System::Windows::Forms::ComboBox();
			this->label_prerequisite_feats = new System::Windows::Forms::Label();
			this->comb_target_feats = new System::Windows::Forms::ComboBox();
			this->label_target_feats = new System::Windows::Forms::Label();
			this->comb_stacking_feats = new System::Windows::Forms::ComboBox();
			this->label_stacking_feats = new System::Windows::Forms::Label();
			this->label_information_feats = new System::Windows::Forms::Label();
			this->txtb_information_feats = new System::Windows::Forms::TextBox();
			this->comb_type_feats = new System::Windows::Forms::ComboBox();
			this->label_type_feats = new System::Windows::Forms::Label();
			this->label_name_feats = new System::Windows::Forms::Label();
			this->txtb_name_feats = new System::Windows::Forms::TextBox();
			this->btn_new_feats = new System::Windows::Forms::Button();
			this->btn_remove_feats = new System::Windows::Forms::Button();
			this->lstv_feats = new System::Windows::Forms::ListView();
			this->btn_apply_feats = new System::Windows::Forms::Button();
			this->tabp_skills = new System::Windows::Forms::TabPage();
			this->label_information_skills = new System::Windows::Forms::Label();
			this->txtb_information = new System::Windows::Forms::TextBox();
			this->chk_armor_check_penalty = new System::Windows::Forms::CheckBox();
			this->ckb_use_untrained_skills = new System::Windows::Forms::CheckBox();
			this->comb_ability_skills = new System::Windows::Forms::ComboBox();
			this->label_ability_skills = new System::Windows::Forms::Label();
			this->label_name_skills = new System::Windows::Forms::Label();
			this->txtb_name_skills = new System::Windows::Forms::TextBox();
			this->btn_apply_skills = new System::Windows::Forms::Button();
			this->btn_new_skills = new System::Windows::Forms::Button();
			this->btn_remove_skills = new System::Windows::Forms::Button();
			this->lstv_skills = new System::Windows::Forms::ListView();
			this->tabp_languages = new System::Windows::Forms::TabPage();
			this->comb_languages_type = new System::Windows::Forms::ComboBox();
			this->label_languages_type = new System::Windows::Forms::Label();
			this->label_languages_information = new System::Windows::Forms::Label();
			this->txtb_languages_information = new System::Windows::Forms::TextBox();
			this->label_languages_name = new System::Windows::Forms::Label();
			this->txtb_languages_name = new System::Windows::Forms::TextBox();
			this->btn_languages_new = new System::Windows::Forms::Button();
			this->btn_languages_remove = new System::Windows::Forms::Button();
			this->lstv_languages = new System::Windows::Forms::ListView();
			this->btn_languages_apply = new System::Windows::Forms::Button();
			this->tabp_class = new System::Windows::Forms::TabPage();
			this->tabc_class = new System::Windows::Forms::TabControl();
			this->tabp_class_bio = new System::Windows::Forms::TabPage();
			this->grpb_class_bio_abilities = new System::Windows::Forms::GroupBox();
			this->btn_class_bio_abilities_remove = new System::Windows::Forms::Button();
			this->btn_class_bio_abilities_add = new System::Windows::Forms::Button();
			this->lstb_class_bio_abilities = new System::Windows::Forms::ListBox();
			this->comb_class_bio_abilities = new System::Windows::Forms::ComboBox();
			this->grpb_class_bio_attacks = new System::Windows::Forms::GroupBox();
			this->label_class_bio_attacks = new System::Windows::Forms::Label();
			this->comb_class_bio_attacks = new System::Windows::Forms::ComboBox();
			this->grpb_class_bio_saves = new System::Windows::Forms::GroupBox();
			this->label_class_bio_saves = new System::Windows::Forms::Label();
			this->label_class_bio_saves_will = new System::Windows::Forms::Label();
			this->ckb_class_bio_saves_will = new System::Windows::Forms::CheckBox();
			this->label_class_bio_svaes_ref = new System::Windows::Forms::Label();
			this->ckb_class_bio_saves_fort = new System::Windows::Forms::CheckBox();
			this->label_class_bio_saves_fort = new System::Windows::Forms::Label();
			this->ckb_class_bio_saves_ref = new System::Windows::Forms::CheckBox();
			this->comb_class_bio_alignment = new System::Windows::Forms::ComboBox();
			this->comb_class_bio_alignment_type = new System::Windows::Forms::ComboBox();
			this->comb_class_bio_type = new System::Windows::Forms::ComboBox();
			this->nud_class_bio_hit_die = new System::Windows::Forms::NumericUpDown();
			this->comb_class_bio_hit_die = new System::Windows::Forms::ComboBox();
			this->label_class_bio_hit_die = new System::Windows::Forms::Label();
			this->txtb_class_bio_name = new System::Windows::Forms::TextBox();
			this->label_class_bio_description = new System::Windows::Forms::Label();
			this->label_class_bio_alignment = new System::Windows::Forms::Label();
			this->label_class_bio_type = new System::Windows::Forms::Label();
			this->label_class_bio_name = new System::Windows::Forms::Label();
			this->txtb_class_bio_description = new System::Windows::Forms::TextBox();
			this->tabp_class_skills = new System::Windows::Forms::TabPage();
			this->label_class_skills = new System::Windows::Forms::Label();
			this->label_class_skills_every_right = new System::Windows::Forms::Label();
			this->label_class_skills_every = new System::Windows::Forms::Label();
			this->nud_class_skills_every = new System::Windows::Forms::NumericUpDown();
			this->label_class_skills_first_left = new System::Windows::Forms::Label();
			this->label_class_skills_first_right = new System::Windows::Forms::Label();
			this->label_class_skills_first = new System::Windows::Forms::Label();
			this->nud_class_skills_first = new System::Windows::Forms::NumericUpDown();
			this->btn_class_skills_remove = new System::Windows::Forms::Button();
			this->btn_class_skills_add = new System::Windows::Forms::Button();
			this->lstb_class_skills_known = new System::Windows::Forms::ListBox();
			this->lstb_class_skills = new System::Windows::Forms::ListBox();
			this->tabp_class_feats = new System::Windows::Forms::TabPage();
			this->label_class_feats = new System::Windows::Forms::Label();
			this->btn_class_feats_remove = new System::Windows::Forms::Button();
			this->btn_class_feats_add = new System::Windows::Forms::Button();
			this->lstb_class_feats_known = new System::Windows::Forms::ListBox();
			this->lstb_class_feats = new System::Windows::Forms::ListBox();
			this->tabp_class_spells = new System::Windows::Forms::TabPage();
			this->comb_class_spells_magic_base = new System::Windows::Forms::ComboBox();
			this->label_class_spells_magic_base = new System::Windows::Forms::Label();
			this->comb_class_spells_type = new System::Windows::Forms::ComboBox();
			this->label_class_spells_type = new System::Windows::Forms::Label();
			this->label_class_spells = new System::Windows::Forms::Label();
			this->lstv_class_spells = new System::Windows::Forms::ListView();
			this->cloh_class_spells_0 = new System::Windows::Forms::ColumnHeader();
			this->cloh_class_spells_1 = new System::Windows::Forms::ColumnHeader();
			this->cloh_class_spells_2 = new System::Windows::Forms::ColumnHeader();
			this->cloh_class_spells_3 = new System::Windows::Forms::ColumnHeader();
			this->cloh_class_spells_4 = new System::Windows::Forms::ColumnHeader();
			this->cloh_class_spells_5 = new System::Windows::Forms::ColumnHeader();
			this->cloh_class_spells_6 = new System::Windows::Forms::ColumnHeader();
			this->cloh_class_spells_7 = new System::Windows::Forms::ColumnHeader();
			this->cloh_class_spells_8 = new System::Windows::Forms::ColumnHeader();
			this->cloh_class_spells_9 = new System::Windows::Forms::ColumnHeader();
			this->tabp_class_specials = new System::Windows::Forms::TabPage();
			this->lstv_class_specials = new System::Windows::Forms::ListView();
			this->nud_class_specials_level = new System::Windows::Forms::NumericUpDown();
			this->label_class_specials_level = new System::Windows::Forms::Label();
			this->label_class_specials = new System::Windows::Forms::Label();
			this->btn_class_specials_remove = new System::Windows::Forms::Button();
			this->btn_class_specials_add = new System::Windows::Forms::Button();
			this->lstb_class_specials = new System::Windows::Forms::ListBox();
			this->lstb_classes = new System::Windows::Forms::ListBox();
			this->btn_class_new = new System::Windows::Forms::Button();
			this->btn_class_remove = new System::Windows::Forms::Button();
			this->btn_class_apply = new System::Windows::Forms::Button();
			this->btn_close = new System::Windows::Forms::Button();
			this->tabc_house_rules->SuspendLayout();
			this->tabp_items->SuspendLayout();
			this->tabc_items->SuspendLayout();
			this->tabp_weapons->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_base_price_weapon))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_inrements_weapon))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_secondary_damage_weapon))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_damage2_weapon))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_items_weapons_weight))->BeginInit();
			this->tabp_magic->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_magic_type))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_magic_base_price))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_magic_weight))->BeginInit();
			this->tabp_Armor->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_spell_failure_armor))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_max_dex_armor))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_base_price_armor))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_check_penalty))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->dup_armor_bonus))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_weight_armor))->BeginInit();
			this->tabp_goods->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->dup_base_price_goods))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_capacity_goods))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_weight_goods))->BeginInit();
			this->tabp_race->SuspendLayout();
			this->tabc_race->SuspendLayout();
			this->tabp_race_racial_traits->SuspendLayout();
			this->tabc_racial_traits->SuspendLayout();
			this->tabp_racial_traits_physical->SuspendLayout();
			this->tabp_racial_traits_stats->SuspendLayout();
			this->grpb_racial_traits_speed->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_speed_feet))->BeginInit();
			this->grpb_racial_traits_natrual_armor->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_natrual_bonus))->BeginInit();
			this->grpb_racial_traits_saves->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_saves_will))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_saves_ref))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_saves_fort))->BeginInit();
			this->grpb_racial_traits_ability->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_ability_cha))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_ability_wis))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_ability_int))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_ability_con))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_ability_dex))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_ability_str))->BeginInit();
			this->tabp_racial_traits_languages->SuspendLayout();
			this->tabp_race_skills->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_race_skills_every))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_race_skills_first))->BeginInit();
			this->tabp_race_feats->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_race_feats_every))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_race_feats_first))->BeginInit();
			this->tabp_race_special->SuspendLayout();
			this->tabp_race_proficiency->SuspendLayout();
			this->tabp_spells->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_spells_casting))->BeginInit();
			this->tabp_gods->SuspendLayout();
			this->tabp_domains->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->dup_data_domains))->BeginInit();
			this->tabp_feats->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_feats))->BeginInit();
			this->tabp_skills->SuspendLayout();
			this->tabp_languages->SuspendLayout();
			this->tabp_class->SuspendLayout();
			this->tabc_class->SuspendLayout();
			this->tabp_class_bio->SuspendLayout();
			this->grpb_class_bio_abilities->SuspendLayout();
			this->grpb_class_bio_attacks->SuspendLayout();
			this->grpb_class_bio_saves->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_class_bio_hit_die))->BeginInit();
			this->tabp_class_skills->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_class_skills_every))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_class_skills_first))->BeginInit();
			this->tabp_class_feats->SuspendLayout();
			this->tabp_class_spells->SuspendLayout();
			this->tabp_class_specials->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_class_specials_level))->BeginInit();
			this->SuspendLayout();
			// 
			// tabc_house_rules
			// 
			this->tabc_house_rules->Controls->Add(this->tabp_race);
			this->tabc_house_rules->Controls->Add(this->tabp_class);
			this->tabc_house_rules->Controls->Add(this->tabp_items);
			this->tabc_house_rules->Controls->Add(this->tabp_spells);
			this->tabc_house_rules->Controls->Add(this->tabp_gods);
			this->tabc_house_rules->Controls->Add(this->tabp_domains);
			this->tabc_house_rules->Controls->Add(this->tabp_feats);
			this->tabc_house_rules->Controls->Add(this->tabp_skills);
			this->tabc_house_rules->Controls->Add(this->tabp_languages);
			this->tabc_house_rules->Location = System::Drawing::Point(5, 5);
			this->tabc_house_rules->Name = S"tabc_house_rules";
			this->tabc_house_rules->SelectedIndex = 0;
			this->tabc_house_rules->Size = System::Drawing::Size(670, 540);
			this->tabc_house_rules->TabIndex = 0;
			this->tabc_house_rules->SelectedIndexChanged += new System::EventHandler(this, tabc_house_rules_SelectedIndexChanged);
			// 
			// tabp_items
			// 
			this->tabp_items->Controls->Add(this->tabc_items);
			this->tabp_items->Location = System::Drawing::Point(4, 22);
			this->tabp_items->Name = S"tabp_items";
			this->tabp_items->Size = System::Drawing::Size(662, 514);
			this->tabp_items->TabIndex = 0;
			this->tabp_items->Text = S"Items";
			// 
			// tabc_items
			// 
			this->tabc_items->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabc_items->Controls->Add(this->tabp_weapons);
			this->tabc_items->Controls->Add(this->tabp_magic);
			this->tabc_items->Controls->Add(this->tabp_Armor);
			this->tabc_items->Controls->Add(this->tabp_goods);
			this->tabc_items->Location = System::Drawing::Point(5, 5);
			this->tabc_items->Name = S"tabc_items";
			this->tabc_items->SelectedIndex = 0;
			this->tabc_items->Size = System::Drawing::Size(655, 505);
			this->tabc_items->TabIndex = 0;
			// 
			// tabp_weapons
			// 
			this->tabp_weapons->BackColor = System::Drawing::SystemColors::Control;
			this->tabp_weapons->Controls->Add(this->comb_base_price_weapon);
			this->tabp_weapons->Controls->Add(this->comb_secondary_damage);
			this->tabp_weapons->Controls->Add(this->comb_damage2_weapon);
			this->tabp_weapons->Controls->Add(this->nud_base_price_weapon);
			this->tabp_weapons->Controls->Add(this->chk_two_hand_bonus_weapon);
			this->tabp_weapons->Controls->Add(this->nup_inrements_weapon);
			this->tabp_weapons->Controls->Add(this->label_increments_weapon);
			this->tabp_weapons->Controls->Add(this->comb_strength_bonus);
			this->tabp_weapons->Controls->Add(this->label_strength_bonus);
			this->tabp_weapons->Controls->Add(this->comb_ranged_weapon);
			this->tabp_weapons->Controls->Add(this->label_ranged);
			this->tabp_weapons->Controls->Add(this->comb_size_weapon);
			this->tabp_weapons->Controls->Add(this->label_size_weapon);
			this->tabp_weapons->Controls->Add(this->comb_weapon_use);
			this->tabp_weapons->Controls->Add(this->label_weapon_use);
			this->tabp_weapons->Controls->Add(this->dup_secondary_critical);
			this->tabp_weapons->Controls->Add(this->label_secondary_critical);
			this->tabp_weapons->Controls->Add(this->dup_critical2_weapon);
			this->tabp_weapons->Controls->Add(this->dup_critical1_weapon);
			this->tabp_weapons->Controls->Add(this->label_secondary_damage_weapon);
			this->tabp_weapons->Controls->Add(this->nup_secondary_damage_weapon);
			this->tabp_weapons->Controls->Add(this->nup_damage2_weapon);
			this->tabp_weapons->Controls->Add(this->label_item_weapons_lbs);
			this->tabp_weapons->Controls->Add(this->nud_items_weapons_weight);
			this->tabp_weapons->Controls->Add(this->label_weight_weapon);
			this->tabp_weapons->Controls->Add(this->comb_item_weapons_damage_type);
			this->tabp_weapons->Controls->Add(this->label_damage_type_weapon);
			this->tabp_weapons->Controls->Add(this->comb_weapon_type);
			this->tabp_weapons->Controls->Add(this->label_base_price_weapon);
			this->tabp_weapons->Controls->Add(this->label_information_weapon);
			this->tabp_weapons->Controls->Add(this->label_critical_weapon);
			this->tabp_weapons->Controls->Add(this->label_damage_weapon);
			this->tabp_weapons->Controls->Add(this->label_weapon_type);
			this->tabp_weapons->Controls->Add(this->label_name_weapon);
			this->tabp_weapons->Controls->Add(this->txtb_information_weapon);
			this->tabp_weapons->Controls->Add(this->txtb_name_weapon);
			this->tabp_weapons->Controls->Add(this->btn_apply_weapon);
			this->tabp_weapons->Controls->Add(this->btn_new_weapon);
			this->tabp_weapons->Controls->Add(this->btn_remove_weapon);
			this->tabp_weapons->Controls->Add(this->lstv_weapons);
			this->tabp_weapons->Location = System::Drawing::Point(4, 25);
			this->tabp_weapons->Name = S"tabp_weapons";
			this->tabp_weapons->Size = System::Drawing::Size(647, 476);
			this->tabp_weapons->TabIndex = 0;
			this->tabp_weapons->Text = S"Weapons";
			// 
			// comb_base_price_weapon
			// 
			System::Object* __mcTemp__1[] = new System::Object*[4];
			__mcTemp__1[0] = S"pp";
			__mcTemp__1[1] = S"gp";
			__mcTemp__1[2] = S"sp";
			__mcTemp__1[3] = S"bp";
			this->comb_base_price_weapon->Items->AddRange(__mcTemp__1);
			this->comb_base_price_weapon->Location = System::Drawing::Point(210, 395);
			this->comb_base_price_weapon->Name = S"comb_base_price_weapon";
			this->comb_base_price_weapon->Size = System::Drawing::Size(50, 21);
			this->comb_base_price_weapon->TabIndex = 67;
			// 
			// comb_secondary_damage
			// 
			this->comb_secondary_damage->Location = System::Drawing::Point(590, 295);
			this->comb_secondary_damage->Name = S"comb_secondary_damage";
			this->comb_secondary_damage->Size = System::Drawing::Size(50, 21);
			this->comb_secondary_damage->TabIndex = 66;
			// 
			// comb_damage2_weapon
			// 
			this->comb_damage2_weapon->Location = System::Drawing::Point(360, 295);
			this->comb_damage2_weapon->Name = S"comb_damage2_weapon";
			this->comb_damage2_weapon->Size = System::Drawing::Size(50, 21);
			this->comb_damage2_weapon->TabIndex = 65;
			// 
			// nud_base_price_weapon
			// 
			System::Int32 __mcTemp__2[] = new System::Int32[4];
			__mcTemp__2[0] = 1;
			__mcTemp__2[1] = 0;
			__mcTemp__2[2] = 0;
			__mcTemp__2[3] = 65536;
			this->nud_base_price_weapon->Increment = System::Decimal(__mcTemp__2);
			this->nud_base_price_weapon->Location = System::Drawing::Point(100, 395);
			System::Int32 __mcTemp__3[] = new System::Int32[4];
			__mcTemp__3[0] = 10000;
			__mcTemp__3[1] = 0;
			__mcTemp__3[2] = 0;
			__mcTemp__3[3] = 0;
			this->nud_base_price_weapon->Maximum = System::Decimal(__mcTemp__3);
			this->nud_base_price_weapon->Name = S"nud_base_price_weapon";
			this->nud_base_price_weapon->Size = System::Drawing::Size(105, 20);
			this->nud_base_price_weapon->TabIndex = 63;
			this->nud_base_price_weapon->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// chk_two_hand_bonus_weapon
			// 
			this->chk_two_hand_bonus_weapon->Location = System::Drawing::Point(535, 370);
			this->chk_two_hand_bonus_weapon->Name = S"chk_two_hand_bonus_weapon";
			this->chk_two_hand_bonus_weapon->Size = System::Drawing::Size(110, 24);
			this->chk_two_hand_bonus_weapon->TabIndex = 62;
			this->chk_two_hand_bonus_weapon->Text = S"Two Hand Bonus";
			// 
			// nup_inrements_weapon
			// 
			System::Int32 __mcTemp__4[] = new System::Int32[4];
			__mcTemp__4[0] = 10;
			__mcTemp__4[1] = 0;
			__mcTemp__4[2] = 0;
			__mcTemp__4[3] = 0;
			this->nup_inrements_weapon->Increment = System::Decimal(__mcTemp__4);
			this->nup_inrements_weapon->Location = System::Drawing::Point(305, 370);
			System::Int32 __mcTemp__5[] = new System::Int32[4];
			__mcTemp__5[0] = 300;
			__mcTemp__5[1] = 0;
			__mcTemp__5[2] = 0;
			__mcTemp__5[3] = 0;
			this->nup_inrements_weapon->Maximum = System::Decimal(__mcTemp__5);
			this->nup_inrements_weapon->Name = S"nup_inrements_weapon";
			this->nup_inrements_weapon->Size = System::Drawing::Size(50, 20);
			this->nup_inrements_weapon->TabIndex = 61;
			this->nup_inrements_weapon->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_increments_weapon
			// 
			this->label_increments_weapon->Location = System::Drawing::Point(215, 370);
			this->label_increments_weapon->Name = S"label_increments_weapon";
			this->label_increments_weapon->Size = System::Drawing::Size(85, 20);
			this->label_increments_weapon->TabIndex = 60;
			this->label_increments_weapon->Text = S"Increments:";
			this->label_increments_weapon->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_strength_bonus
			// 
			this->comb_strength_bonus->Location = System::Drawing::Point(535, 345);
			this->comb_strength_bonus->Name = S"comb_strength_bonus";
			this->comb_strength_bonus->Size = System::Drawing::Size(105, 21);
			this->comb_strength_bonus->TabIndex = 59;
			// 
			// label_strength_bonus
			// 
			this->label_strength_bonus->Location = System::Drawing::Point(420, 345);
			this->label_strength_bonus->Name = S"label_strength_bonus";
			this->label_strength_bonus->Size = System::Drawing::Size(110, 20);
			this->label_strength_bonus->TabIndex = 58;
			this->label_strength_bonus->Text = S"Strength Bonus:";
			this->label_strength_bonus->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label_strength_bonus->Click += new System::EventHandler(this, label_strength_bonus_Click);
			// 
			// comb_ranged_weapon
			// 
			this->comb_ranged_weapon->Location = System::Drawing::Point(305, 345);
			this->comb_ranged_weapon->Name = S"comb_ranged_weapon";
			this->comb_ranged_weapon->Size = System::Drawing::Size(105, 21);
			this->comb_ranged_weapon->TabIndex = 57;
			// 
			// label_ranged
			// 
			this->label_ranged->Location = System::Drawing::Point(215, 345);
			this->label_ranged->Name = S"label_ranged";
			this->label_ranged->Size = System::Drawing::Size(85, 20);
			this->label_ranged->TabIndex = 56;
			this->label_ranged->Text = S"Ranged:";
			this->label_ranged->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_size_weapon
			// 
			this->comb_size_weapon->Location = System::Drawing::Point(100, 345);
			this->comb_size_weapon->Name = S"comb_size_weapon";
			this->comb_size_weapon->Size = System::Drawing::Size(105, 21);
			this->comb_size_weapon->TabIndex = 55;
			// 
			// label_size_weapon
			// 
			this->label_size_weapon->Location = System::Drawing::Point(10, 345);
			this->label_size_weapon->Name = S"label_size_weapon";
			this->label_size_weapon->Size = System::Drawing::Size(85, 20);
			this->label_size_weapon->TabIndex = 54;
			this->label_size_weapon->Text = S"Size:";
			this->label_size_weapon->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_weapon_use
			// 
			this->comb_weapon_use->Location = System::Drawing::Point(100, 295);
			this->comb_weapon_use->Name = S"comb_weapon_use";
			this->comb_weapon_use->Size = System::Drawing::Size(105, 21);
			this->comb_weapon_use->TabIndex = 53;
			this->comb_weapon_use->SelectedIndexChanged += new System::EventHandler(this, comb_weapon_use_SelectedIndexChanged);
			// 
			// label_weapon_use
			// 
			this->label_weapon_use->Location = System::Drawing::Point(10, 295);
			this->label_weapon_use->Name = S"label_weapon_use";
			this->label_weapon_use->Size = System::Drawing::Size(85, 20);
			this->label_weapon_use->TabIndex = 52;
			this->label_weapon_use->Text = S"Weapon Use:";
			this->label_weapon_use->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dup_secondary_critical
			// 
			this->dup_secondary_critical->Items->Add(S"x2");
			this->dup_secondary_critical->Items->Add(S"x3");
			this->dup_secondary_critical->Items->Add(S"x4");
			this->dup_secondary_critical->Items->Add(S"x5");
			this->dup_secondary_critical->Items->Add(S"x6");
			this->dup_secondary_critical->Items->Add(S"x7");
			this->dup_secondary_critical->Items->Add(S"x8");
			this->dup_secondary_critical->Items->Add(S"x9");
			this->dup_secondary_critical->Items->Add(S"x10");
			this->dup_secondary_critical->Location = System::Drawing::Point(535, 320);
			this->dup_secondary_critical->Name = S"dup_secondary_critical";
			this->dup_secondary_critical->Size = System::Drawing::Size(50, 20);
			this->dup_secondary_critical->TabIndex = 51;
			this->dup_secondary_critical->Text = S"x2";
			this->dup_secondary_critical->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_secondary_critical
			// 
			this->label_secondary_critical->Location = System::Drawing::Point(420, 320);
			this->label_secondary_critical->Name = S"label_secondary_critical";
			this->label_secondary_critical->Size = System::Drawing::Size(110, 20);
			this->label_secondary_critical->TabIndex = 50;
			this->label_secondary_critical->Text = S"Secondary Critical:";
			this->label_secondary_critical->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// dup_critical2_weapon
			// 
			this->dup_critical2_weapon->Items->Add(S"x2");
			this->dup_critical2_weapon->Items->Add(S"x3");
			this->dup_critical2_weapon->Items->Add(S"x4");
			this->dup_critical2_weapon->Items->Add(S"x5");
			this->dup_critical2_weapon->Items->Add(S"x6");
			this->dup_critical2_weapon->Items->Add(S"x7");
			this->dup_critical2_weapon->Items->Add(S"x8");
			this->dup_critical2_weapon->Items->Add(S"x9");
			this->dup_critical2_weapon->Items->Add(S"x10");
			this->dup_critical2_weapon->Location = System::Drawing::Point(360, 320);
			this->dup_critical2_weapon->Name = S"dup_critical2_weapon";
			this->dup_critical2_weapon->Size = System::Drawing::Size(50, 20);
			this->dup_critical2_weapon->TabIndex = 49;
			this->dup_critical2_weapon->Text = S"x2";
			// 
			// dup_critical1_weapon
			// 
			this->dup_critical1_weapon->Items->Add(S"1-20");
			this->dup_critical1_weapon->Items->Add(S"2-20");
			this->dup_critical1_weapon->Items->Add(S"3-20");
			this->dup_critical1_weapon->Items->Add(S"4-20");
			this->dup_critical1_weapon->Items->Add(S"5-20");
			this->dup_critical1_weapon->Items->Add(S"6-20");
			this->dup_critical1_weapon->Items->Add(S"7-20");
			this->dup_critical1_weapon->Items->Add(S"8-20");
			this->dup_critical1_weapon->Items->Add(S"9-20");
			this->dup_critical1_weapon->Items->Add(S"10-20");
			this->dup_critical1_weapon->Items->Add(S"11-20");
			this->dup_critical1_weapon->Items->Add(S"13-20");
			this->dup_critical1_weapon->Items->Add(S"14-20");
			this->dup_critical1_weapon->Items->Add(S"15-20");
			this->dup_critical1_weapon->Items->Add(S"16-20");
			this->dup_critical1_weapon->Items->Add(S"17-20");
			this->dup_critical1_weapon->Items->Add(S"18-20");
			this->dup_critical1_weapon->Items->Add(S"19-20");
			this->dup_critical1_weapon->Items->Add(S"20");
			this->dup_critical1_weapon->Location = System::Drawing::Point(305, 320);
			this->dup_critical1_weapon->Name = S"dup_critical1_weapon";
			this->dup_critical1_weapon->Size = System::Drawing::Size(50, 20);
			this->dup_critical1_weapon->TabIndex = 48;
			this->dup_critical1_weapon->Text = S"20";
			this->dup_critical1_weapon->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_secondary_damage_weapon
			// 
			this->label_secondary_damage_weapon->Location = System::Drawing::Point(420, 295);
			this->label_secondary_damage_weapon->Name = S"label_secondary_damage_weapon";
			this->label_secondary_damage_weapon->Size = System::Drawing::Size(110, 20);
			this->label_secondary_damage_weapon->TabIndex = 47;
			this->label_secondary_damage_weapon->Text = S"Secondary Damage:";
			this->label_secondary_damage_weapon->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// nup_secondary_damage_weapon
			// 
			this->nup_secondary_damage_weapon->Location = System::Drawing::Point(535, 295);
			System::Int32 __mcTemp__6[] = new System::Int32[4];
			__mcTemp__6[0] = 1;
			__mcTemp__6[1] = 0;
			__mcTemp__6[2] = 0;
			__mcTemp__6[3] = 0;
			this->nup_secondary_damage_weapon->Minimum = System::Decimal(__mcTemp__6);
			this->nup_secondary_damage_weapon->Name = S"nup_secondary_damage_weapon";
			this->nup_secondary_damage_weapon->Size = System::Drawing::Size(50, 20);
			this->nup_secondary_damage_weapon->TabIndex = 45;
			this->nup_secondary_damage_weapon->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			System::Int32 __mcTemp__7[] = new System::Int32[4];
			__mcTemp__7[0] = 1;
			__mcTemp__7[1] = 0;
			__mcTemp__7[2] = 0;
			__mcTemp__7[3] = 0;
			this->nup_secondary_damage_weapon->Value = System::Decimal(__mcTemp__7);
			// 
			// nup_damage2_weapon
			// 
			this->nup_damage2_weapon->Location = System::Drawing::Point(305, 295);
			System::Int32 __mcTemp__8[] = new System::Int32[4];
			__mcTemp__8[0] = 1;
			__mcTemp__8[1] = 0;
			__mcTemp__8[2] = 0;
			__mcTemp__8[3] = 0;
			this->nup_damage2_weapon->Minimum = System::Decimal(__mcTemp__8);
			this->nup_damage2_weapon->Name = S"nup_damage2_weapon";
			this->nup_damage2_weapon->Size = System::Drawing::Size(50, 20);
			this->nup_damage2_weapon->TabIndex = 43;
			this->nup_damage2_weapon->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			System::Int32 __mcTemp__9[] = new System::Int32[4];
			__mcTemp__9[0] = 1;
			__mcTemp__9[1] = 0;
			__mcTemp__9[2] = 0;
			__mcTemp__9[3] = 0;
			this->nup_damage2_weapon->Value = System::Decimal(__mcTemp__9);
			// 
			// label_item_weapons_lbs
			// 
			this->label_item_weapons_lbs->Location = System::Drawing::Point(610, 270);
			this->label_item_weapons_lbs->Name = S"label_item_weapons_lbs";
			this->label_item_weapons_lbs->Size = System::Drawing::Size(30, 20);
			this->label_item_weapons_lbs->TabIndex = 42;
			this->label_item_weapons_lbs->Text = S"lb(s)";
			this->label_item_weapons_lbs->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// nud_items_weapons_weight
			// 
			System::Int32 __mcTemp__10[] = new System::Int32[4];
			__mcTemp__10[0] = 1;
			__mcTemp__10[1] = 0;
			__mcTemp__10[2] = 0;
			__mcTemp__10[3] = 65536;
			this->nud_items_weapons_weight->Increment = System::Decimal(__mcTemp__10);
			this->nud_items_weapons_weight->Location = System::Drawing::Point(535, 270);
			System::Int32 __mcTemp__11[] = new System::Int32[4];
			__mcTemp__11[0] = 10000;
			__mcTemp__11[1] = 0;
			__mcTemp__11[2] = 0;
			__mcTemp__11[3] = 0;
			this->nud_items_weapons_weight->Maximum = System::Decimal(__mcTemp__11);
			this->nud_items_weapons_weight->Name = S"nud_items_weapons_weight";
			this->nud_items_weapons_weight->Size = System::Drawing::Size(75, 20);
			this->nud_items_weapons_weight->TabIndex = 41;
			this->nud_items_weapons_weight->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_weight_weapon
			// 
			this->label_weight_weapon->Location = System::Drawing::Point(420, 270);
			this->label_weight_weapon->Name = S"label_weight_weapon";
			this->label_weight_weapon->Size = System::Drawing::Size(110, 20);
			this->label_weight_weapon->TabIndex = 40;
			this->label_weight_weapon->Text = S"Weight:";
			this->label_weight_weapon->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_item_weapons_damage_type
			// 
			this->comb_item_weapons_damage_type->Location = System::Drawing::Point(305, 270);
			this->comb_item_weapons_damage_type->Name = S"comb_item_weapons_damage_type";
			this->comb_item_weapons_damage_type->Size = System::Drawing::Size(105, 21);
			this->comb_item_weapons_damage_type->TabIndex = 39;
			// 
			// label_damage_type_weapon
			// 
			this->label_damage_type_weapon->Location = System::Drawing::Point(215, 270);
			this->label_damage_type_weapon->Name = S"label_damage_type_weapon";
			this->label_damage_type_weapon->Size = System::Drawing::Size(85, 20);
			this->label_damage_type_weapon->TabIndex = 38;
			this->label_damage_type_weapon->Text = S"Damage Type:";
			this->label_damage_type_weapon->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_weapon_type
			// 
			this->comb_weapon_type->Location = System::Drawing::Point(100, 270);
			this->comb_weapon_type->Name = S"comb_weapon_type";
			this->comb_weapon_type->Size = System::Drawing::Size(105, 21);
			this->comb_weapon_type->TabIndex = 37;
			// 
			// label_base_price_weapon
			// 
			this->label_base_price_weapon->Location = System::Drawing::Point(10, 395);
			this->label_base_price_weapon->Name = S"label_base_price_weapon";
			this->label_base_price_weapon->Size = System::Drawing::Size(85, 20);
			this->label_base_price_weapon->TabIndex = 35;
			this->label_base_price_weapon->Text = S"Base Price:";
			this->label_base_price_weapon->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_information_weapon
			// 
			this->label_information_weapon->Location = System::Drawing::Point(10, 420);
			this->label_information_weapon->Name = S"label_information_weapon";
			this->label_information_weapon->Size = System::Drawing::Size(85, 20);
			this->label_information_weapon->TabIndex = 34;
			this->label_information_weapon->Text = S"Information:";
			this->label_information_weapon->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_critical_weapon
			// 
			this->label_critical_weapon->Location = System::Drawing::Point(215, 320);
			this->label_critical_weapon->Name = S"label_critical_weapon";
			this->label_critical_weapon->Size = System::Drawing::Size(85, 20);
			this->label_critical_weapon->TabIndex = 31;
			this->label_critical_weapon->Text = S"Critical:";
			this->label_critical_weapon->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_damage_weapon
			// 
			this->label_damage_weapon->Location = System::Drawing::Point(215, 295);
			this->label_damage_weapon->Name = S"label_damage_weapon";
			this->label_damage_weapon->Size = System::Drawing::Size(85, 20);
			this->label_damage_weapon->TabIndex = 30;
			this->label_damage_weapon->Text = S"Damage:";
			this->label_damage_weapon->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_weapon_type
			// 
			this->label_weapon_type->Location = System::Drawing::Point(10, 270);
			this->label_weapon_type->Name = S"label_weapon_type";
			this->label_weapon_type->Size = System::Drawing::Size(85, 20);
			this->label_weapon_type->TabIndex = 29;
			this->label_weapon_type->Text = S"Weapon Type:";
			this->label_weapon_type->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_name_weapon
			// 
			this->label_name_weapon->Location = System::Drawing::Point(10, 245);
			this->label_name_weapon->Name = S"label_name_weapon";
			this->label_name_weapon->Size = System::Drawing::Size(85, 20);
			this->label_name_weapon->TabIndex = 28;
			this->label_name_weapon->Text = S"Name:";
			this->label_name_weapon->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_information_weapon
			// 
			this->txtb_information_weapon->Location = System::Drawing::Point(100, 420);
			this->txtb_information_weapon->Multiline = true;
			this->txtb_information_weapon->Name = S"txtb_information_weapon";
			this->txtb_information_weapon->Size = System::Drawing::Size(430, 50);
			this->txtb_information_weapon->TabIndex = 27;
			this->txtb_information_weapon->Text = S"";
			// 
			// txtb_name_weapon
			// 
			this->txtb_name_weapon->Location = System::Drawing::Point(100, 245);
			this->txtb_name_weapon->Name = S"txtb_name_weapon";
			this->txtb_name_weapon->Size = System::Drawing::Size(535, 20);
			this->txtb_name_weapon->TabIndex = 20;
			this->txtb_name_weapon->Text = S"";
			// 
			// btn_apply_weapon
			// 
			this->btn_apply_weapon->Location = System::Drawing::Point(560, 445);
			this->btn_apply_weapon->Name = S"btn_apply_weapon";
			this->btn_apply_weapon->TabIndex = 3;
			this->btn_apply_weapon->Text = S"Apply";
			// 
			// btn_new_weapon
			// 
			this->btn_new_weapon->Location = System::Drawing::Point(560, 210);
			this->btn_new_weapon->Name = S"btn_new_weapon";
			this->btn_new_weapon->TabIndex = 2;
			this->btn_new_weapon->Text = S"New";
			// 
			// btn_remove_weapon
			// 
			this->btn_remove_weapon->Location = System::Drawing::Point(475, 210);
			this->btn_remove_weapon->Name = S"btn_remove_weapon";
			this->btn_remove_weapon->TabIndex = 1;
			this->btn_remove_weapon->Text = S"Remove";
			// 
			// lstv_weapons
			// 
			this->lstv_weapons->Location = System::Drawing::Point(10, 10);
			this->lstv_weapons->Name = S"lstv_weapons";
			this->lstv_weapons->Size = System::Drawing::Size(625, 190);
			this->lstv_weapons->TabIndex = 0;
			this->lstv_weapons->View = System::Windows::Forms::View::Details;
			// 
			// tabp_magic
			// 
			this->tabp_magic->Controls->Add(this->lstv_magic_type);
			this->tabp_magic->Controls->Add(this->btn_magic_type_remove);
			this->tabp_magic->Controls->Add(this->btn_magic_type_add);
			this->tabp_magic->Controls->Add(this->nud_magic_type);
			this->tabp_magic->Controls->Add(this->comb_magic_data);
			this->tabp_magic->Controls->Add(this->label_magic_data);
			this->tabp_magic->Controls->Add(this->combo_magic_type);
			this->tabp_magic->Controls->Add(this->label_magic_type);
			this->tabp_magic->Controls->Add(this->comb_magic_base_price);
			this->tabp_magic->Controls->Add(this->nup_magic_base_price);
			this->tabp_magic->Controls->Add(this->label_magic_lbs);
			this->tabp_magic->Controls->Add(this->nup_magic_weight);
			this->tabp_magic->Controls->Add(this->label_weight_magic);
			this->tabp_magic->Controls->Add(this->comb_magic_subtype);
			this->tabp_magic->Controls->Add(this->label_magic_subtype);
			this->tabp_magic->Controls->Add(this->comb_magic_item_base);
			this->tabp_magic->Controls->Add(this->label_magic_base_price);
			this->tabp_magic->Controls->Add(this->label_magic_information);
			this->tabp_magic->Controls->Add(this->label_magic_item_based_on);
			this->tabp_magic->Controls->Add(this->label_name_magic);
			this->tabp_magic->Controls->Add(this->txtb_magic_information);
			this->tabp_magic->Controls->Add(this->txtb_magic_name);
			this->tabp_magic->Controls->Add(this->btn_apply_magic);
			this->tabp_magic->Controls->Add(this->btn_new_magic);
			this->tabp_magic->Controls->Add(this->btn_remove_magic);
			this->tabp_magic->Controls->Add(this->lstv_magic);
			this->tabp_magic->Location = System::Drawing::Point(4, 25);
			this->tabp_magic->Name = S"tabp_magic";
			this->tabp_magic->Size = System::Drawing::Size(647, 476);
			this->tabp_magic->TabIndex = 2;
			this->tabp_magic->Text = S"Magic";
			// 
			// lstv_magic_type
			// 
			this->lstv_magic_type->Location = System::Drawing::Point(375, 300);
			this->lstv_magic_type->Name = S"lstv_magic_type";
			this->lstv_magic_type->Size = System::Drawing::Size(260, 97);
			this->lstv_magic_type->TabIndex = 112;
			this->lstv_magic_type->View = System::Windows::Forms::View::Details;
			// 
			// btn_magic_type_remove
			// 
			this->btn_magic_type_remove->Location = System::Drawing::Point(290, 330);
			this->btn_magic_type_remove->Name = S"btn_magic_type_remove";
			this->btn_magic_type_remove->TabIndex = 111;
			this->btn_magic_type_remove->Text = S"Remove";
			// 
			// btn_magic_type_add
			// 
			this->btn_magic_type_add->Location = System::Drawing::Point(290, 300);
			this->btn_magic_type_add->Name = S"btn_magic_type_add";
			this->btn_magic_type_add->TabIndex = 110;
			this->btn_magic_type_add->Text = S"Add";
			// 
			// nud_magic_type
			// 
			this->nud_magic_type->Location = System::Drawing::Point(225, 360);
			this->nud_magic_type->Name = S"nud_magic_type";
			this->nud_magic_type->Size = System::Drawing::Size(55, 20);
			this->nud_magic_type->TabIndex = 109;
			this->nud_magic_type->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// comb_magic_data
			// 
			this->comb_magic_data->Location = System::Drawing::Point(100, 330);
			this->comb_magic_data->Name = S"comb_magic_data";
			this->comb_magic_data->Size = System::Drawing::Size(180, 21);
			this->comb_magic_data->TabIndex = 108;
			// 
			// label_magic_data
			// 
			this->label_magic_data->Location = System::Drawing::Point(10, 330);
			this->label_magic_data->Name = S"label_magic_data";
			this->label_magic_data->Size = System::Drawing::Size(85, 20);
			this->label_magic_data->TabIndex = 107;
			this->label_magic_data->Text = S"Data:";
			this->label_magic_data->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// combo_magic_type
			// 
			this->combo_magic_type->Location = System::Drawing::Point(100, 300);
			this->combo_magic_type->Name = S"combo_magic_type";
			this->combo_magic_type->Size = System::Drawing::Size(180, 21);
			this->combo_magic_type->TabIndex = 106;
			// 
			// label_magic_type
			// 
			this->label_magic_type->Location = System::Drawing::Point(10, 300);
			this->label_magic_type->Name = S"label_magic_type";
			this->label_magic_type->Size = System::Drawing::Size(85, 20);
			this->label_magic_type->TabIndex = 105;
			this->label_magic_type->Text = S"Magic Type:";
			this->label_magic_type->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_magic_base_price
			// 
			this->comb_magic_base_price->Location = System::Drawing::Point(210, 395);
			this->comb_magic_base_price->Name = S"comb_magic_base_price";
			this->comb_magic_base_price->Size = System::Drawing::Size(50, 21);
			this->comb_magic_base_price->TabIndex = 103;
			this->comb_magic_base_price->Text = S"gp";
			// 
			// nup_magic_base_price
			// 
			System::Int32 __mcTemp__12[] = new System::Int32[4];
			__mcTemp__12[0] = 1;
			__mcTemp__12[1] = 0;
			__mcTemp__12[2] = 0;
			__mcTemp__12[3] = 65536;
			this->nup_magic_base_price->Increment = System::Decimal(__mcTemp__12);
			this->nup_magic_base_price->Location = System::Drawing::Point(100, 395);
			System::Int32 __mcTemp__13[] = new System::Int32[4];
			__mcTemp__13[0] = 10000;
			__mcTemp__13[1] = 0;
			__mcTemp__13[2] = 0;
			__mcTemp__13[3] = 0;
			this->nup_magic_base_price->Maximum = System::Decimal(__mcTemp__13);
			this->nup_magic_base_price->Name = S"nup_magic_base_price";
			this->nup_magic_base_price->Size = System::Drawing::Size(105, 20);
			this->nup_magic_base_price->TabIndex = 100;
			this->nup_magic_base_price->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_magic_lbs
			// 
			this->label_magic_lbs->Location = System::Drawing::Point(610, 245);
			this->label_magic_lbs->Name = S"label_magic_lbs";
			this->label_magic_lbs->Size = System::Drawing::Size(30, 20);
			this->label_magic_lbs->TabIndex = 81;
			this->label_magic_lbs->Text = S"lb(s)";
			this->label_magic_lbs->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// nup_magic_weight
			// 
			System::Int32 __mcTemp__14[] = new System::Int32[4];
			__mcTemp__14[0] = 1;
			__mcTemp__14[1] = 0;
			__mcTemp__14[2] = 0;
			__mcTemp__14[3] = 65536;
			this->nup_magic_weight->Increment = System::Decimal(__mcTemp__14);
			this->nup_magic_weight->Location = System::Drawing::Point(535, 245);
			System::Int32 __mcTemp__15[] = new System::Int32[4];
			__mcTemp__15[0] = 10000;
			__mcTemp__15[1] = 0;
			__mcTemp__15[2] = 0;
			__mcTemp__15[3] = 0;
			this->nup_magic_weight->Maximum = System::Decimal(__mcTemp__15);
			this->nup_magic_weight->Name = S"nup_magic_weight";
			this->nup_magic_weight->Size = System::Drawing::Size(75, 20);
			this->nup_magic_weight->TabIndex = 80;
			this->nup_magic_weight->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_weight_magic
			// 
			this->label_weight_magic->Location = System::Drawing::Point(485, 245);
			this->label_weight_magic->Name = S"label_weight_magic";
			this->label_weight_magic->Size = System::Drawing::Size(45, 20);
			this->label_weight_magic->TabIndex = 79;
			this->label_weight_magic->Text = S"Weight:";
			this->label_weight_magic->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_magic_subtype
			// 
			this->comb_magic_subtype->Location = System::Drawing::Point(535, 270);
			this->comb_magic_subtype->Name = S"comb_magic_subtype";
			this->comb_magic_subtype->Size = System::Drawing::Size(105, 21);
			this->comb_magic_subtype->TabIndex = 78;
			// 
			// label_magic_subtype
			// 
			this->label_magic_subtype->Location = System::Drawing::Point(445, 270);
			this->label_magic_subtype->Name = S"label_magic_subtype";
			this->label_magic_subtype->Size = System::Drawing::Size(85, 20);
			this->label_magic_subtype->TabIndex = 77;
			this->label_magic_subtype->Text = S"Subtype:";
			this->label_magic_subtype->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_magic_item_base
			// 
			this->comb_magic_item_base->Location = System::Drawing::Point(100, 270);
			this->comb_magic_item_base->Name = S"comb_magic_item_base";
			this->comb_magic_item_base->Size = System::Drawing::Size(180, 21);
			this->comb_magic_item_base->TabIndex = 76;
			// 
			// label_magic_base_price
			// 
			this->label_magic_base_price->Location = System::Drawing::Point(10, 395);
			this->label_magic_base_price->Name = S"label_magic_base_price";
			this->label_magic_base_price->Size = System::Drawing::Size(85, 20);
			this->label_magic_base_price->TabIndex = 75;
			this->label_magic_base_price->Text = S"Base Price:";
			this->label_magic_base_price->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_magic_information
			// 
			this->label_magic_information->Location = System::Drawing::Point(10, 420);
			this->label_magic_information->Name = S"label_magic_information";
			this->label_magic_information->Size = System::Drawing::Size(85, 20);
			this->label_magic_information->TabIndex = 74;
			this->label_magic_information->Text = S"Information:";
			this->label_magic_information->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_magic_item_based_on
			// 
			this->label_magic_item_based_on->Location = System::Drawing::Point(10, 270);
			this->label_magic_item_based_on->Name = S"label_magic_item_based_on";
			this->label_magic_item_based_on->Size = System::Drawing::Size(85, 20);
			this->label_magic_item_based_on->TabIndex = 71;
			this->label_magic_item_based_on->Text = S"Item Based On:";
			this->label_magic_item_based_on->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_name_magic
			// 
			this->label_name_magic->Location = System::Drawing::Point(10, 245);
			this->label_name_magic->Name = S"label_name_magic";
			this->label_name_magic->Size = System::Drawing::Size(85, 20);
			this->label_name_magic->TabIndex = 70;
			this->label_name_magic->Text = S"Name:";
			this->label_name_magic->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_magic_information
			// 
			this->txtb_magic_information->Location = System::Drawing::Point(100, 420);
			this->txtb_magic_information->Multiline = true;
			this->txtb_magic_information->Name = S"txtb_magic_information";
			this->txtb_magic_information->Size = System::Drawing::Size(430, 50);
			this->txtb_magic_information->TabIndex = 69;
			this->txtb_magic_information->Text = S"";
			// 
			// txtb_magic_name
			// 
			this->txtb_magic_name->Location = System::Drawing::Point(100, 245);
			this->txtb_magic_name->Name = S"txtb_magic_name";
			this->txtb_magic_name->Size = System::Drawing::Size(380, 20);
			this->txtb_magic_name->TabIndex = 68;
			this->txtb_magic_name->Text = S"";
			// 
			// btn_apply_magic
			// 
			this->btn_apply_magic->Location = System::Drawing::Point(560, 445);
			this->btn_apply_magic->Name = S"btn_apply_magic";
			this->btn_apply_magic->TabIndex = 7;
			this->btn_apply_magic->Text = S"Apply";
			// 
			// btn_new_magic
			// 
			this->btn_new_magic->Location = System::Drawing::Point(560, 210);
			this->btn_new_magic->Name = S"btn_new_magic";
			this->btn_new_magic->TabIndex = 6;
			this->btn_new_magic->Text = S"New";
			// 
			// btn_remove_magic
			// 
			this->btn_remove_magic->Location = System::Drawing::Point(475, 210);
			this->btn_remove_magic->Name = S"btn_remove_magic";
			this->btn_remove_magic->TabIndex = 5;
			this->btn_remove_magic->Text = S"Remove";
			// 
			// lstv_magic
			// 
			this->lstv_magic->Location = System::Drawing::Point(10, 10);
			this->lstv_magic->Name = S"lstv_magic";
			this->lstv_magic->Size = System::Drawing::Size(625, 190);
			this->lstv_magic->TabIndex = 4;
			this->lstv_magic->View = System::Windows::Forms::View::Details;
			// 
			// tabp_Armor
			// 
			this->tabp_Armor->Controls->Add(this->label_items_armor_spell_percent);
			this->tabp_Armor->Controls->Add(this->nup_spell_failure_armor);
			this->tabp_Armor->Controls->Add(this->label_spell_failure_armor);
			this->tabp_Armor->Controls->Add(this->nup_max_dex_armor);
			this->tabp_Armor->Controls->Add(this->label_max_dex_armor);
			this->tabp_Armor->Controls->Add(this->comb_base_price_armor);
			this->tabp_Armor->Controls->Add(this->nup_base_price_armor);
			this->tabp_Armor->Controls->Add(this->label_check_penalty_armor);
			this->tabp_Armor->Controls->Add(this->nup_check_penalty);
			this->tabp_Armor->Controls->Add(this->dup_armor_bonus);
			this->tabp_Armor->Controls->Add(this->label_items_armor_lbs);
			this->tabp_Armor->Controls->Add(this->nup_weight_armor);
			this->tabp_Armor->Controls->Add(this->label_weight_armor);
			this->tabp_Armor->Controls->Add(this->comb_item_armor_size);
			this->tabp_Armor->Controls->Add(this->label_comb_size_armor);
			this->tabp_Armor->Controls->Add(this->comb_armor_type);
			this->tabp_Armor->Controls->Add(this->label_base_price_armor);
			this->tabp_Armor->Controls->Add(this->label_information_armor);
			this->tabp_Armor->Controls->Add(this->label_armor_bonus);
			this->tabp_Armor->Controls->Add(this->label_armor_type);
			this->tabp_Armor->Controls->Add(this->label_name_armor);
			this->tabp_Armor->Controls->Add(this->txtb_information_armor);
			this->tabp_Armor->Controls->Add(this->txtb_name_armor);
			this->tabp_Armor->Controls->Add(this->btn_apply_armor);
			this->tabp_Armor->Controls->Add(this->btn_new_armor);
			this->tabp_Armor->Controls->Add(this->btn_remove_armor);
			this->tabp_Armor->Controls->Add(this->lstv_armor);
			this->tabp_Armor->Location = System::Drawing::Point(4, 25);
			this->tabp_Armor->Name = S"tabp_Armor";
			this->tabp_Armor->Size = System::Drawing::Size(647, 476);
			this->tabp_Armor->TabIndex = 1;
			this->tabp_Armor->Text = S"Armor";
			// 
			// label_items_armor_spell_percent
			// 
			this->label_items_armor_spell_percent->Location = System::Drawing::Point(150, 370);
			this->label_items_armor_spell_percent->Name = S"label_items_armor_spell_percent";
			this->label_items_armor_spell_percent->Size = System::Drawing::Size(30, 20);
			this->label_items_armor_spell_percent->TabIndex = 108;
			this->label_items_armor_spell_percent->Text = S"%";
			this->label_items_armor_spell_percent->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// nup_spell_failure_armor
			// 
			this->nup_spell_failure_armor->Location = System::Drawing::Point(100, 370);
			System::Int32 __mcTemp__16[] = new System::Int32[4];
			__mcTemp__16[0] = 99;
			__mcTemp__16[1] = 0;
			__mcTemp__16[2] = 0;
			__mcTemp__16[3] = 0;
			this->nup_spell_failure_armor->Maximum = System::Decimal(__mcTemp__16);
			this->nup_spell_failure_armor->Name = S"nup_spell_failure_armor";
			this->nup_spell_failure_armor->Size = System::Drawing::Size(50, 20);
			this->nup_spell_failure_armor->TabIndex = 107;
			this->nup_spell_failure_armor->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_spell_failure_armor
			// 
			this->label_spell_failure_armor->Location = System::Drawing::Point(10, 370);
			this->label_spell_failure_armor->Name = S"label_spell_failure_armor";
			this->label_spell_failure_armor->Size = System::Drawing::Size(85, 20);
			this->label_spell_failure_armor->TabIndex = 106;
			this->label_spell_failure_armor->Text = S"Spell Failure:";
			this->label_spell_failure_armor->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// nup_max_dex_armor
			// 
			this->nup_max_dex_armor->Location = System::Drawing::Point(305, 345);
			this->nup_max_dex_armor->Name = S"nup_max_dex_armor";
			this->nup_max_dex_armor->Size = System::Drawing::Size(50, 20);
			this->nup_max_dex_armor->TabIndex = 105;
			this->nup_max_dex_armor->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_max_dex_armor
			// 
			this->label_max_dex_armor->Location = System::Drawing::Point(215, 345);
			this->label_max_dex_armor->Name = S"label_max_dex_armor";
			this->label_max_dex_armor->Size = System::Drawing::Size(85, 20);
			this->label_max_dex_armor->TabIndex = 104;
			this->label_max_dex_armor->Text = S"Max Dex:";
			this->label_max_dex_armor->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_base_price_armor
			// 
			this->comb_base_price_armor->Location = System::Drawing::Point(210, 395);
			this->comb_base_price_armor->Name = S"comb_base_price_armor";
			this->comb_base_price_armor->Size = System::Drawing::Size(50, 21);
			this->comb_base_price_armor->TabIndex = 103;
			// 
			// nup_base_price_armor
			// 
			System::Int32 __mcTemp__17[] = new System::Int32[4];
			__mcTemp__17[0] = 1;
			__mcTemp__17[1] = 0;
			__mcTemp__17[2] = 0;
			__mcTemp__17[3] = 65536;
			this->nup_base_price_armor->Increment = System::Decimal(__mcTemp__17);
			this->nup_base_price_armor->Location = System::Drawing::Point(100, 395);
			System::Int32 __mcTemp__18[] = new System::Int32[4];
			__mcTemp__18[0] = 10000;
			__mcTemp__18[1] = 0;
			__mcTemp__18[2] = 0;
			__mcTemp__18[3] = 0;
			this->nup_base_price_armor->Maximum = System::Decimal(__mcTemp__18);
			this->nup_base_price_armor->Name = S"nup_base_price_armor";
			this->nup_base_price_armor->Size = System::Drawing::Size(105, 20);
			this->nup_base_price_armor->TabIndex = 100;
			this->nup_base_price_armor->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_check_penalty_armor
			// 
			this->label_check_penalty_armor->Location = System::Drawing::Point(420, 345);
			this->label_check_penalty_armor->Name = S"label_check_penalty_armor";
			this->label_check_penalty_armor->Size = System::Drawing::Size(110, 20);
			this->label_check_penalty_armor->TabIndex = 84;
			this->label_check_penalty_armor->Text = S"Check Penalty:";
			this->label_check_penalty_armor->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// nup_check_penalty
			// 
			this->nup_check_penalty->Location = System::Drawing::Point(535, 345);
			System::Int32 __mcTemp__19[] = new System::Int32[4];
			__mcTemp__19[0] = 0;
			__mcTemp__19[1] = 0;
			__mcTemp__19[2] = 0;
			__mcTemp__19[3] = 0;
			this->nup_check_penalty->Maximum = System::Decimal(__mcTemp__19);
			System::Int32 __mcTemp__20[] = new System::Int32[4];
			__mcTemp__20[0] = 10;
			__mcTemp__20[1] = 0;
			__mcTemp__20[2] = 0;
			__mcTemp__20[3] = -2147483648;
			this->nup_check_penalty->Minimum = System::Decimal(__mcTemp__20);
			this->nup_check_penalty->Name = S"nup_check_penalty";
			this->nup_check_penalty->Size = System::Drawing::Size(50, 20);
			this->nup_check_penalty->TabIndex = 83;
			this->nup_check_penalty->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// dup_armor_bonus
			// 
			this->dup_armor_bonus->Location = System::Drawing::Point(100, 345);
			this->dup_armor_bonus->Name = S"dup_armor_bonus";
			this->dup_armor_bonus->Size = System::Drawing::Size(50, 20);
			this->dup_armor_bonus->TabIndex = 82;
			this->dup_armor_bonus->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_items_armor_lbs
			// 
			this->label_items_armor_lbs->Location = System::Drawing::Point(610, 320);
			this->label_items_armor_lbs->Name = S"label_items_armor_lbs";
			this->label_items_armor_lbs->Size = System::Drawing::Size(30, 20);
			this->label_items_armor_lbs->TabIndex = 81;
			this->label_items_armor_lbs->Text = S"lb(s)";
			this->label_items_armor_lbs->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// nup_weight_armor
			// 
			System::Int32 __mcTemp__21[] = new System::Int32[4];
			__mcTemp__21[0] = 1;
			__mcTemp__21[1] = 0;
			__mcTemp__21[2] = 0;
			__mcTemp__21[3] = 65536;
			this->nup_weight_armor->Increment = System::Decimal(__mcTemp__21);
			this->nup_weight_armor->Location = System::Drawing::Point(535, 320);
			System::Int32 __mcTemp__22[] = new System::Int32[4];
			__mcTemp__22[0] = 10000;
			__mcTemp__22[1] = 0;
			__mcTemp__22[2] = 0;
			__mcTemp__22[3] = 0;
			this->nup_weight_armor->Maximum = System::Decimal(__mcTemp__22);
			this->nup_weight_armor->Name = S"nup_weight_armor";
			this->nup_weight_armor->Size = System::Drawing::Size(75, 20);
			this->nup_weight_armor->TabIndex = 80;
			this->nup_weight_armor->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_weight_armor
			// 
			this->label_weight_armor->Location = System::Drawing::Point(420, 320);
			this->label_weight_armor->Name = S"label_weight_armor";
			this->label_weight_armor->Size = System::Drawing::Size(110, 20);
			this->label_weight_armor->TabIndex = 79;
			this->label_weight_armor->Text = S"Weight:";
			this->label_weight_armor->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_item_armor_size
			// 
			this->comb_item_armor_size->Location = System::Drawing::Point(305, 320);
			this->comb_item_armor_size->Name = S"comb_item_armor_size";
			this->comb_item_armor_size->Size = System::Drawing::Size(105, 21);
			this->comb_item_armor_size->TabIndex = 78;
			// 
			// label_comb_size_armor
			// 
			this->label_comb_size_armor->Location = System::Drawing::Point(215, 320);
			this->label_comb_size_armor->Name = S"label_comb_size_armor";
			this->label_comb_size_armor->Size = System::Drawing::Size(85, 20);
			this->label_comb_size_armor->TabIndex = 77;
			this->label_comb_size_armor->Text = S"Size:";
			this->label_comb_size_armor->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_armor_type
			// 
			this->comb_armor_type->Location = System::Drawing::Point(100, 320);
			this->comb_armor_type->Name = S"comb_armor_type";
			this->comb_armor_type->Size = System::Drawing::Size(105, 21);
			this->comb_armor_type->TabIndex = 76;
			// 
			// label_base_price_armor
			// 
			this->label_base_price_armor->Location = System::Drawing::Point(10, 395);
			this->label_base_price_armor->Name = S"label_base_price_armor";
			this->label_base_price_armor->Size = System::Drawing::Size(85, 20);
			this->label_base_price_armor->TabIndex = 75;
			this->label_base_price_armor->Text = S"Base Price:";
			this->label_base_price_armor->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_information_armor
			// 
			this->label_information_armor->Location = System::Drawing::Point(10, 420);
			this->label_information_armor->Name = S"label_information_armor";
			this->label_information_armor->Size = System::Drawing::Size(85, 20);
			this->label_information_armor->TabIndex = 74;
			this->label_information_armor->Text = S"Information:";
			this->label_information_armor->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_armor_bonus
			// 
			this->label_armor_bonus->Location = System::Drawing::Point(10, 345);
			this->label_armor_bonus->Name = S"label_armor_bonus";
			this->label_armor_bonus->Size = System::Drawing::Size(85, 20);
			this->label_armor_bonus->TabIndex = 72;
			this->label_armor_bonus->Text = S"Armor Bonus:";
			this->label_armor_bonus->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_armor_type
			// 
			this->label_armor_type->Location = System::Drawing::Point(10, 320);
			this->label_armor_type->Name = S"label_armor_type";
			this->label_armor_type->Size = System::Drawing::Size(85, 20);
			this->label_armor_type->TabIndex = 71;
			this->label_armor_type->Text = S"Armor Type:";
			this->label_armor_type->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_name_armor
			// 
			this->label_name_armor->Location = System::Drawing::Point(10, 295);
			this->label_name_armor->Name = S"label_name_armor";
			this->label_name_armor->Size = System::Drawing::Size(85, 20);
			this->label_name_armor->TabIndex = 70;
			this->label_name_armor->Text = S"Name:";
			this->label_name_armor->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_information_armor
			// 
			this->txtb_information_armor->Location = System::Drawing::Point(100, 420);
			this->txtb_information_armor->Multiline = true;
			this->txtb_information_armor->Name = S"txtb_information_armor";
			this->txtb_information_armor->Size = System::Drawing::Size(430, 50);
			this->txtb_information_armor->TabIndex = 69;
			this->txtb_information_armor->Text = S"";
			// 
			// txtb_name_armor
			// 
			this->txtb_name_armor->Location = System::Drawing::Point(100, 295);
			this->txtb_name_armor->Name = S"txtb_name_armor";
			this->txtb_name_armor->Size = System::Drawing::Size(535, 20);
			this->txtb_name_armor->TabIndex = 68;
			this->txtb_name_armor->Text = S"";
			// 
			// btn_apply_armor
			// 
			this->btn_apply_armor->Location = System::Drawing::Point(560, 445);
			this->btn_apply_armor->Name = S"btn_apply_armor";
			this->btn_apply_armor->TabIndex = 7;
			this->btn_apply_armor->Text = S"Apply";
			// 
			// btn_new_armor
			// 
			this->btn_new_armor->Location = System::Drawing::Point(560, 260);
			this->btn_new_armor->Name = S"btn_new_armor";
			this->btn_new_armor->TabIndex = 6;
			this->btn_new_armor->Text = S"New";
			this->btn_new_armor->Click += new System::EventHandler(this, button5_Click);
			// 
			// btn_remove_armor
			// 
			this->btn_remove_armor->Location = System::Drawing::Point(475, 260);
			this->btn_remove_armor->Name = S"btn_remove_armor";
			this->btn_remove_armor->TabIndex = 5;
			this->btn_remove_armor->Text = S"Remove";
			// 
			// lstv_armor
			// 
			this->lstv_armor->Location = System::Drawing::Point(10, 10);
			this->lstv_armor->Name = S"lstv_armor";
			this->lstv_armor->Size = System::Drawing::Size(625, 240);
			this->lstv_armor->TabIndex = 4;
			this->lstv_armor->View = System::Windows::Forms::View::Details;
			// 
			// tabp_goods
			// 
			this->tabp_goods->Controls->Add(this->comb_base_price_goods);
			this->tabp_goods->Controls->Add(this->comb_capacity_goods);
			this->tabp_goods->Controls->Add(this->dup_base_price_goods);
			this->tabp_goods->Controls->Add(this->nup_capacity_goods);
			this->tabp_goods->Controls->Add(this->label_items_goods_lbs);
			this->tabp_goods->Controls->Add(this->nup_weight_goods);
			this->tabp_goods->Controls->Add(this->label_weight_goods);
			this->tabp_goods->Controls->Add(this->comb_masterwork_goods);
			this->tabp_goods->Controls->Add(this->label_masterwork_goods);
			this->tabp_goods->Controls->Add(this->comb_type_goods);
			this->tabp_goods->Controls->Add(this->label_base_price_goods);
			this->tabp_goods->Controls->Add(this->label_information_goods);
			this->tabp_goods->Controls->Add(this->label_capacity_goods);
			this->tabp_goods->Controls->Add(this->label_type_goods);
			this->tabp_goods->Controls->Add(this->label_name_goods);
			this->tabp_goods->Controls->Add(this->txtb_information_goods);
			this->tabp_goods->Controls->Add(this->txtb_name_goods);
			this->tabp_goods->Controls->Add(this->btn_apply_goods);
			this->tabp_goods->Controls->Add(this->btn_new_goods);
			this->tabp_goods->Controls->Add(this->btn_remove_goods);
			this->tabp_goods->Controls->Add(this->lstv_goods);
			this->tabp_goods->Location = System::Drawing::Point(4, 25);
			this->tabp_goods->Name = S"tabp_goods";
			this->tabp_goods->Size = System::Drawing::Size(647, 476);
			this->tabp_goods->TabIndex = 3;
			this->tabp_goods->Text = S"Goods";
			// 
			// comb_base_price_goods
			// 
			this->comb_base_price_goods->Location = System::Drawing::Point(210, 395);
			this->comb_base_price_goods->Name = S"comb_base_price_goods";
			this->comb_base_price_goods->Size = System::Drawing::Size(50, 21);
			this->comb_base_price_goods->TabIndex = 103;
			// 
			// comb_capacity_goods
			// 
			this->comb_capacity_goods->Location = System::Drawing::Point(210, 370);
			this->comb_capacity_goods->Name = S"comb_capacity_goods";
			this->comb_capacity_goods->Size = System::Drawing::Size(50, 21);
			this->comb_capacity_goods->TabIndex = 101;
			// 
			// dup_base_price_goods
			// 
			System::Int32 __mcTemp__23[] = new System::Int32[4];
			__mcTemp__23[0] = 1;
			__mcTemp__23[1] = 0;
			__mcTemp__23[2] = 0;
			__mcTemp__23[3] = 65536;
			this->dup_base_price_goods->Increment = System::Decimal(__mcTemp__23);
			this->dup_base_price_goods->Location = System::Drawing::Point(100, 395);
			System::Int32 __mcTemp__24[] = new System::Int32[4];
			__mcTemp__24[0] = 10000;
			__mcTemp__24[1] = 0;
			__mcTemp__24[2] = 0;
			__mcTemp__24[3] = 0;
			this->dup_base_price_goods->Maximum = System::Decimal(__mcTemp__24);
			this->dup_base_price_goods->Name = S"dup_base_price_goods";
			this->dup_base_price_goods->Size = System::Drawing::Size(105, 20);
			this->dup_base_price_goods->TabIndex = 100;
			this->dup_base_price_goods->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// nup_capacity_goods
			// 
			this->nup_capacity_goods->Location = System::Drawing::Point(100, 370);
			System::Int32 __mcTemp__25[] = new System::Int32[4];
			__mcTemp__25[0] = 1;
			__mcTemp__25[1] = 0;
			__mcTemp__25[2] = 0;
			__mcTemp__25[3] = 0;
			this->nup_capacity_goods->Minimum = System::Decimal(__mcTemp__25);
			this->nup_capacity_goods->Name = S"nup_capacity_goods";
			this->nup_capacity_goods->Size = System::Drawing::Size(105, 20);
			this->nup_capacity_goods->TabIndex = 82;
			this->nup_capacity_goods->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			System::Int32 __mcTemp__26[] = new System::Int32[4];
			__mcTemp__26[0] = 1;
			__mcTemp__26[1] = 0;
			__mcTemp__26[2] = 0;
			__mcTemp__26[3] = 0;
			this->nup_capacity_goods->Value = System::Decimal(__mcTemp__26);
			// 
			// label_items_goods_lbs
			// 
			this->label_items_goods_lbs->Location = System::Drawing::Point(610, 345);
			this->label_items_goods_lbs->Name = S"label_items_goods_lbs";
			this->label_items_goods_lbs->Size = System::Drawing::Size(30, 20);
			this->label_items_goods_lbs->TabIndex = 81;
			this->label_items_goods_lbs->Text = S"lb(s)";
			this->label_items_goods_lbs->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// nup_weight_goods
			// 
			System::Int32 __mcTemp__27[] = new System::Int32[4];
			__mcTemp__27[0] = 1;
			__mcTemp__27[1] = 0;
			__mcTemp__27[2] = 0;
			__mcTemp__27[3] = 65536;
			this->nup_weight_goods->Increment = System::Decimal(__mcTemp__27);
			this->nup_weight_goods->Location = System::Drawing::Point(535, 345);
			System::Int32 __mcTemp__28[] = new System::Int32[4];
			__mcTemp__28[0] = 10000;
			__mcTemp__28[1] = 0;
			__mcTemp__28[2] = 0;
			__mcTemp__28[3] = 0;
			this->nup_weight_goods->Maximum = System::Decimal(__mcTemp__28);
			this->nup_weight_goods->Name = S"nup_weight_goods";
			this->nup_weight_goods->Size = System::Drawing::Size(75, 20);
			this->nup_weight_goods->TabIndex = 80;
			this->nup_weight_goods->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_weight_goods
			// 
			this->label_weight_goods->Location = System::Drawing::Point(420, 345);
			this->label_weight_goods->Name = S"label_weight_goods";
			this->label_weight_goods->Size = System::Drawing::Size(110, 20);
			this->label_weight_goods->TabIndex = 79;
			this->label_weight_goods->Text = S"Weight:";
			this->label_weight_goods->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_masterwork_goods
			// 
			this->comb_masterwork_goods->Location = System::Drawing::Point(305, 345);
			this->comb_masterwork_goods->Name = S"comb_masterwork_goods";
			this->comb_masterwork_goods->Size = System::Drawing::Size(105, 21);
			this->comb_masterwork_goods->TabIndex = 78;
			// 
			// label_masterwork_goods
			// 
			this->label_masterwork_goods->Location = System::Drawing::Point(215, 345);
			this->label_masterwork_goods->Name = S"label_masterwork_goods";
			this->label_masterwork_goods->Size = System::Drawing::Size(85, 20);
			this->label_masterwork_goods->TabIndex = 77;
			this->label_masterwork_goods->Text = S"Masterwork:";
			this->label_masterwork_goods->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_type_goods
			// 
			this->comb_type_goods->Location = System::Drawing::Point(100, 345);
			this->comb_type_goods->Name = S"comb_type_goods";
			this->comb_type_goods->Size = System::Drawing::Size(105, 21);
			this->comb_type_goods->TabIndex = 76;
			this->comb_type_goods->SelectedIndexChanged += new System::EventHandler(this, comboBox36_SelectedIndexChanged);
			// 
			// label_base_price_goods
			// 
			this->label_base_price_goods->Location = System::Drawing::Point(10, 395);
			this->label_base_price_goods->Name = S"label_base_price_goods";
			this->label_base_price_goods->Size = System::Drawing::Size(85, 20);
			this->label_base_price_goods->TabIndex = 75;
			this->label_base_price_goods->Text = S"Base Price:";
			this->label_base_price_goods->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_information_goods
			// 
			this->label_information_goods->Location = System::Drawing::Point(10, 420);
			this->label_information_goods->Name = S"label_information_goods";
			this->label_information_goods->Size = System::Drawing::Size(85, 20);
			this->label_information_goods->TabIndex = 74;
			this->label_information_goods->Text = S"Information:";
			this->label_information_goods->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_capacity_goods
			// 
			this->label_capacity_goods->Location = System::Drawing::Point(10, 370);
			this->label_capacity_goods->Name = S"label_capacity_goods";
			this->label_capacity_goods->Size = System::Drawing::Size(85, 20);
			this->label_capacity_goods->TabIndex = 72;
			this->label_capacity_goods->Text = S"Capacity:";
			this->label_capacity_goods->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_type_goods
			// 
			this->label_type_goods->Location = System::Drawing::Point(10, 345);
			this->label_type_goods->Name = S"label_type_goods";
			this->label_type_goods->Size = System::Drawing::Size(85, 20);
			this->label_type_goods->TabIndex = 71;
			this->label_type_goods->Text = S"Type:";
			this->label_type_goods->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_name_goods
			// 
			this->label_name_goods->Location = System::Drawing::Point(10, 320);
			this->label_name_goods->Name = S"label_name_goods";
			this->label_name_goods->Size = System::Drawing::Size(85, 20);
			this->label_name_goods->TabIndex = 70;
			this->label_name_goods->Text = S"Name:";
			this->label_name_goods->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_information_goods
			// 
			this->txtb_information_goods->Location = System::Drawing::Point(100, 420);
			this->txtb_information_goods->Multiline = true;
			this->txtb_information_goods->Name = S"txtb_information_goods";
			this->txtb_information_goods->Size = System::Drawing::Size(430, 50);
			this->txtb_information_goods->TabIndex = 69;
			this->txtb_information_goods->Text = S"";
			// 
			// txtb_name_goods
			// 
			this->txtb_name_goods->Location = System::Drawing::Point(100, 320);
			this->txtb_name_goods->Name = S"txtb_name_goods";
			this->txtb_name_goods->Size = System::Drawing::Size(535, 20);
			this->txtb_name_goods->TabIndex = 68;
			this->txtb_name_goods->Text = S"";
			// 
			// btn_apply_goods
			// 
			this->btn_apply_goods->Location = System::Drawing::Point(560, 445);
			this->btn_apply_goods->Name = S"btn_apply_goods";
			this->btn_apply_goods->TabIndex = 7;
			this->btn_apply_goods->Text = S"Apply";
			// 
			// btn_new_goods
			// 
			this->btn_new_goods->Location = System::Drawing::Point(560, 290);
			this->btn_new_goods->Name = S"btn_new_goods";
			this->btn_new_goods->TabIndex = 6;
			this->btn_new_goods->Text = S"New";
			// 
			// btn_remove_goods
			// 
			this->btn_remove_goods->Location = System::Drawing::Point(475, 290);
			this->btn_remove_goods->Name = S"btn_remove_goods";
			this->btn_remove_goods->TabIndex = 5;
			this->btn_remove_goods->Text = S"Remove";
			// 
			// lstv_goods
			// 
			this->lstv_goods->Location = System::Drawing::Point(10, 10);
			this->lstv_goods->Name = S"lstv_goods";
			this->lstv_goods->Size = System::Drawing::Size(625, 270);
			this->lstv_goods->TabIndex = 4;
			this->lstv_goods->View = System::Windows::Forms::View::Details;
			// 
			// tabp_race
			// 
			this->tabp_race->Controls->Add(this->tabc_race);
			this->tabp_race->Controls->Add(this->lstb_races);
			this->tabp_race->Controls->Add(this->btn_race_new);
			this->tabp_race->Controls->Add(this->btn_race_remove);
			this->tabp_race->Controls->Add(this->btn_race_apply);
			this->tabp_race->Location = System::Drawing::Point(4, 22);
			this->tabp_race->Name = S"tabp_race";
			this->tabp_race->Size = System::Drawing::Size(662, 514);
			this->tabp_race->TabIndex = 7;
			this->tabp_race->Text = S"Race";
			// 
			// tabc_race
			// 
			this->tabc_race->Controls->Add(this->tabp_race_racial_traits);
			this->tabc_race->Controls->Add(this->tabp_race_skills);
			this->tabc_race->Controls->Add(this->tabp_race_feats);
			this->tabc_race->Controls->Add(this->tabp_race_special);
			this->tabc_race->Controls->Add(this->tabp_race_proficiency);
			this->tabc_race->Location = System::Drawing::Point(195, 10);
			this->tabc_race->Name = S"tabc_race";
			this->tabc_race->SelectedIndex = 0;
			this->tabc_race->Size = System::Drawing::Size(460, 465);
			this->tabc_race->TabIndex = 16;
			// 
			// tabp_race_racial_traits
			// 
			this->tabp_race_racial_traits->Controls->Add(this->tabc_racial_traits);
			this->tabp_race_racial_traits->Location = System::Drawing::Point(4, 22);
			this->tabp_race_racial_traits->Name = S"tabp_race_racial_traits";
			this->tabp_race_racial_traits->Size = System::Drawing::Size(452, 439);
			this->tabp_race_racial_traits->TabIndex = 0;
			this->tabp_race_racial_traits->Text = S"Racial Traits";
			// 
			// tabc_racial_traits
			// 
			this->tabc_racial_traits->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabc_racial_traits->Controls->Add(this->tabp_racial_traits_physical);
			this->tabc_racial_traits->Controls->Add(this->tabp_racial_traits_stats);
			this->tabc_racial_traits->Controls->Add(this->tabp_racial_traits_languages);
			this->tabc_racial_traits->Location = System::Drawing::Point(5, 5);
			this->tabc_racial_traits->Name = S"tabc_racial_traits";
			this->tabc_racial_traits->SelectedIndex = 0;
			this->tabc_racial_traits->Size = System::Drawing::Size(445, 430);
			this->tabc_racial_traits->TabIndex = 0;
			// 
			// tabp_racial_traits_physical
			// 
			this->tabp_racial_traits_physical->Controls->Add(this->txtb_racial_traits_notes);
			this->tabp_racial_traits_physical->Controls->Add(this->label_racial_traits_notes);
			this->tabp_racial_traits_physical->Controls->Add(this->comb_racial_traits_alignment);
			this->tabp_racial_traits_physical->Controls->Add(this->comb_racial_traits_alignment_type);
			this->tabp_racial_traits_physical->Controls->Add(this->label_racial_traits_alignment);
			this->tabp_racial_traits_physical->Controls->Add(this->label_racial_traits_name);
			this->tabp_racial_traits_physical->Controls->Add(this->txtb_racial_traits_name);
			this->tabp_racial_traits_physical->Location = System::Drawing::Point(4, 25);
			this->tabp_racial_traits_physical->Name = S"tabp_racial_traits_physical";
			this->tabp_racial_traits_physical->Size = System::Drawing::Size(437, 401);
			this->tabp_racial_traits_physical->TabIndex = 0;
			this->tabp_racial_traits_physical->Text = S"Physical";
			// 
			// txtb_racial_traits_notes
			// 
			this->txtb_racial_traits_notes->Location = System::Drawing::Point(100, 100);
			this->txtb_racial_traits_notes->Multiline = true;
			this->txtb_racial_traits_notes->Name = S"txtb_racial_traits_notes";
			this->txtb_racial_traits_notes->Size = System::Drawing::Size(330, 145);
			this->txtb_racial_traits_notes->TabIndex = 17;
			this->txtb_racial_traits_notes->Text = S"";
			// 
			// label_racial_traits_notes
			// 
			this->label_racial_traits_notes->Location = System::Drawing::Point(5, 100);
			this->label_racial_traits_notes->Name = S"label_racial_traits_notes";
			this->label_racial_traits_notes->Size = System::Drawing::Size(90, 20);
			this->label_racial_traits_notes->TabIndex = 16;
			this->label_racial_traits_notes->Text = S"Notes:";
			this->label_racial_traits_notes->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_racial_traits_alignment
			// 
			this->comb_racial_traits_alignment->Location = System::Drawing::Point(205, 40);
			this->comb_racial_traits_alignment->Name = S"comb_racial_traits_alignment";
			this->comb_racial_traits_alignment->Size = System::Drawing::Size(100, 21);
			this->comb_racial_traits_alignment->TabIndex = 6;
			this->comb_racial_traits_alignment->Text = S"Lawful Good";
			// 
			// comb_racial_traits_alignment_type
			// 
			this->comb_racial_traits_alignment_type->Location = System::Drawing::Point(100, 40);
			this->comb_racial_traits_alignment_type->Name = S"comb_racial_traits_alignment_type";
			this->comb_racial_traits_alignment_type->Size = System::Drawing::Size(100, 21);
			this->comb_racial_traits_alignment_type->TabIndex = 5;
			this->comb_racial_traits_alignment_type->Text = S"Always";
			// 
			// label_racial_traits_alignment
			// 
			this->label_racial_traits_alignment->Location = System::Drawing::Point(5, 40);
			this->label_racial_traits_alignment->Name = S"label_racial_traits_alignment";
			this->label_racial_traits_alignment->Size = System::Drawing::Size(90, 20);
			this->label_racial_traits_alignment->TabIndex = 2;
			this->label_racial_traits_alignment->Text = S"Alignment:";
			this->label_racial_traits_alignment->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_racial_traits_name
			// 
			this->label_racial_traits_name->Location = System::Drawing::Point(5, 10);
			this->label_racial_traits_name->Name = S"label_racial_traits_name";
			this->label_racial_traits_name->Size = System::Drawing::Size(90, 20);
			this->label_racial_traits_name->TabIndex = 1;
			this->label_racial_traits_name->Text = S"Race Name:";
			this->label_racial_traits_name->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_racial_traits_name
			// 
			this->txtb_racial_traits_name->Location = System::Drawing::Point(100, 10);
			this->txtb_racial_traits_name->Name = S"txtb_racial_traits_name";
			this->txtb_racial_traits_name->Size = System::Drawing::Size(330, 20);
			this->txtb_racial_traits_name->TabIndex = 0;
			this->txtb_racial_traits_name->Text = S"";
			// 
			// tabp_racial_traits_stats
			// 
			this->tabp_racial_traits_stats->Controls->Add(this->grpb_racial_traits_speed);
			this->tabp_racial_traits_stats->Controls->Add(this->grpb_racial_traits_natrual_armor);
			this->tabp_racial_traits_stats->Controls->Add(this->grpb_racial_traits_saves);
			this->tabp_racial_traits_stats->Controls->Add(this->grpb_racial_traits_ability);
			this->tabp_racial_traits_stats->Location = System::Drawing::Point(4, 25);
			this->tabp_racial_traits_stats->Name = S"tabp_racial_traits_stats";
			this->tabp_racial_traits_stats->Size = System::Drawing::Size(437, 401);
			this->tabp_racial_traits_stats->TabIndex = 1;
			this->tabp_racial_traits_stats->Text = S"Stats";
			// 
			// grpb_racial_traits_speed
			// 
			this->grpb_racial_traits_speed->Controls->Add(this->label_racial_traits_speed_feet);
			this->grpb_racial_traits_speed->Controls->Add(this->label_racial_traits_speed_maneuver);
			this->grpb_racial_traits_speed->Controls->Add(this->label_racial_traits_speed_type);
			this->grpb_racial_traits_speed->Controls->Add(this->comb_racial_traits_speed_maneuver);
			this->grpb_racial_traits_speed->Controls->Add(this->nud_racial_traits_speed_feet);
			this->grpb_racial_traits_speed->Controls->Add(this->btn_racial_traits_speed_remove);
			this->grpb_racial_traits_speed->Controls->Add(this->comb_racial_traits_speed_type);
			this->grpb_racial_traits_speed->Controls->Add(this->btn_racial_traits_speed_add);
			this->grpb_racial_traits_speed->Controls->Add(this->lstv_racial_traits_speed);
			this->grpb_racial_traits_speed->Location = System::Drawing::Point(5, 260);
			this->grpb_racial_traits_speed->Name = S"grpb_racial_traits_speed";
			this->grpb_racial_traits_speed->Size = System::Drawing::Size(425, 135);
			this->grpb_racial_traits_speed->TabIndex = 16;
			this->grpb_racial_traits_speed->TabStop = false;
			this->grpb_racial_traits_speed->Text = S"Speed";
			// 
			// label_racial_traits_speed_feet
			// 
			this->label_racial_traits_speed_feet->Location = System::Drawing::Point(10, 85);
			this->label_racial_traits_speed_feet->Name = S"label_racial_traits_speed_feet";
			this->label_racial_traits_speed_feet->Size = System::Drawing::Size(65, 20);
			this->label_racial_traits_speed_feet->TabIndex = 17;
			this->label_racial_traits_speed_feet->Text = S"Feet:";
			this->label_racial_traits_speed_feet->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_racial_traits_speed_maneuver
			// 
			this->label_racial_traits_speed_maneuver->Location = System::Drawing::Point(10, 55);
			this->label_racial_traits_speed_maneuver->Name = S"label_racial_traits_speed_maneuver";
			this->label_racial_traits_speed_maneuver->Size = System::Drawing::Size(65, 20);
			this->label_racial_traits_speed_maneuver->TabIndex = 16;
			this->label_racial_traits_speed_maneuver->Text = S"Maneuver:";
			this->label_racial_traits_speed_maneuver->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_racial_traits_speed_type
			// 
			this->label_racial_traits_speed_type->Location = System::Drawing::Point(10, 30);
			this->label_racial_traits_speed_type->Name = S"label_racial_traits_speed_type";
			this->label_racial_traits_speed_type->Size = System::Drawing::Size(65, 20);
			this->label_racial_traits_speed_type->TabIndex = 15;
			this->label_racial_traits_speed_type->Text = S"Type:";
			this->label_racial_traits_speed_type->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_racial_traits_speed_maneuver
			// 
			this->comb_racial_traits_speed_maneuver->Location = System::Drawing::Point(80, 55);
			this->comb_racial_traits_speed_maneuver->Name = S"comb_racial_traits_speed_maneuver";
			this->comb_racial_traits_speed_maneuver->Size = System::Drawing::Size(95, 21);
			this->comb_racial_traits_speed_maneuver->TabIndex = 10;
			this->comb_racial_traits_speed_maneuver->Text = S"None";
			// 
			// nud_racial_traits_speed_feet
			// 
			this->nud_racial_traits_speed_feet->Location = System::Drawing::Point(80, 85);
			this->nud_racial_traits_speed_feet->Name = S"nud_racial_traits_speed_feet";
			this->nud_racial_traits_speed_feet->Size = System::Drawing::Size(50, 20);
			this->nud_racial_traits_speed_feet->TabIndex = 11;
			this->nud_racial_traits_speed_feet->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn_racial_traits_speed_remove
			// 
			this->btn_racial_traits_speed_remove->Location = System::Drawing::Point(185, 60);
			this->btn_racial_traits_speed_remove->Name = S"btn_racial_traits_speed_remove";
			this->btn_racial_traits_speed_remove->Size = System::Drawing::Size(60, 23);
			this->btn_racial_traits_speed_remove->TabIndex = 14;
			this->btn_racial_traits_speed_remove->Text = S"Remove";
			// 
			// comb_racial_traits_speed_type
			// 
			this->comb_racial_traits_speed_type->Location = System::Drawing::Point(80, 30);
			this->comb_racial_traits_speed_type->Name = S"comb_racial_traits_speed_type";
			this->comb_racial_traits_speed_type->Size = System::Drawing::Size(95, 21);
			this->comb_racial_traits_speed_type->TabIndex = 9;
			this->comb_racial_traits_speed_type->Text = S"Base";
			// 
			// btn_racial_traits_speed_add
			// 
			this->btn_racial_traits_speed_add->Location = System::Drawing::Point(185, 30);
			this->btn_racial_traits_speed_add->Name = S"btn_racial_traits_speed_add";
			this->btn_racial_traits_speed_add->Size = System::Drawing::Size(60, 23);
			this->btn_racial_traits_speed_add->TabIndex = 13;
			this->btn_racial_traits_speed_add->Text = S"Add";
			// 
			// lstv_racial_traits_speed
			// 
			this->lstv_racial_traits_speed->Location = System::Drawing::Point(255, 30);
			this->lstv_racial_traits_speed->Name = S"lstv_racial_traits_speed";
			this->lstv_racial_traits_speed->Size = System::Drawing::Size(165, 95);
			this->lstv_racial_traits_speed->TabIndex = 12;
			this->lstv_racial_traits_speed->View = System::Windows::Forms::View::Details;
			// 
			// grpb_racial_traits_natrual_armor
			// 
			this->grpb_racial_traits_natrual_armor->Controls->Add(this->label_racial_traits_natrual_bonus);
			this->grpb_racial_traits_natrual_armor->Controls->Add(this->nud_racial_traits_natrual_bonus);
			this->grpb_racial_traits_natrual_armor->Location = System::Drawing::Point(285, 135);
			this->grpb_racial_traits_natrual_armor->Name = S"grpb_racial_traits_natrual_armor";
			this->grpb_racial_traits_natrual_armor->Size = System::Drawing::Size(145, 120);
			this->grpb_racial_traits_natrual_armor->TabIndex = 2;
			this->grpb_racial_traits_natrual_armor->TabStop = false;
			this->grpb_racial_traits_natrual_armor->Text = S"Natural Armor";
			// 
			// label_racial_traits_natrual_bonus
			// 
			this->label_racial_traits_natrual_bonus->Location = System::Drawing::Point(10, 55);
			this->label_racial_traits_natrual_bonus->Name = S"label_racial_traits_natrual_bonus";
			this->label_racial_traits_natrual_bonus->Size = System::Drawing::Size(60, 20);
			this->label_racial_traits_natrual_bonus->TabIndex = 21;
			this->label_racial_traits_natrual_bonus->Text = S"Bonus:";
			this->label_racial_traits_natrual_bonus->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// nud_racial_traits_natrual_bonus
			// 
			this->nud_racial_traits_natrual_bonus->Location = System::Drawing::Point(75, 55);
			this->nud_racial_traits_natrual_bonus->Name = S"nud_racial_traits_natrual_bonus";
			this->nud_racial_traits_natrual_bonus->Size = System::Drawing::Size(50, 20);
			this->nud_racial_traits_natrual_bonus->TabIndex = 20;
			this->nud_racial_traits_natrual_bonus->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// grpb_racial_traits_saves
			// 
			this->grpb_racial_traits_saves->Controls->Add(this->label_racial_traits_saves_will);
			this->grpb_racial_traits_saves->Controls->Add(this->label_racial_traits_saves_ref);
			this->grpb_racial_traits_saves->Controls->Add(this->label_racial_traits_saves_fort);
			this->grpb_racial_traits_saves->Controls->Add(this->label_racial_traits_saves_good);
			this->grpb_racial_traits_saves->Controls->Add(this->ckb_racial_traits_saves_fort);
			this->grpb_racial_traits_saves->Controls->Add(this->nud_racial_traits_saves_will);
			this->grpb_racial_traits_saves->Controls->Add(this->nud_racial_traits_saves_ref);
			this->grpb_racial_traits_saves->Controls->Add(this->label_racial_traits_save_scores);
			this->grpb_racial_traits_saves->Controls->Add(this->nud_racial_traits_saves_fort);
			this->grpb_racial_traits_saves->Controls->Add(this->ckb_racial_traits_saves_ref);
			this->grpb_racial_traits_saves->Controls->Add(this->ckb_racial_traits_saves_will);
			this->grpb_racial_traits_saves->Location = System::Drawing::Point(5, 135);
			this->grpb_racial_traits_saves->Name = S"grpb_racial_traits_saves";
			this->grpb_racial_traits_saves->Size = System::Drawing::Size(260, 120);
			this->grpb_racial_traits_saves->TabIndex = 1;
			this->grpb_racial_traits_saves->TabStop = false;
			this->grpb_racial_traits_saves->Text = S"Saving Throws";
			// 
			// label_racial_traits_saves_will
			// 
			this->label_racial_traits_saves_will->Location = System::Drawing::Point(195, 30);
			this->label_racial_traits_saves_will->Name = S"label_racial_traits_saves_will";
			this->label_racial_traits_saves_will->Size = System::Drawing::Size(45, 15);
			this->label_racial_traits_saves_will->TabIndex = 40;
			this->label_racial_traits_saves_will->Text = S"WILL";
			this->label_racial_traits_saves_will->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label_racial_traits_saves_ref
			// 
			this->label_racial_traits_saves_ref->Location = System::Drawing::Point(135, 30);
			this->label_racial_traits_saves_ref->Name = S"label_racial_traits_saves_ref";
			this->label_racial_traits_saves_ref->Size = System::Drawing::Size(45, 15);
			this->label_racial_traits_saves_ref->TabIndex = 39;
			this->label_racial_traits_saves_ref->Text = S"REF";
			this->label_racial_traits_saves_ref->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label_racial_traits_saves_fort
			// 
			this->label_racial_traits_saves_fort->Location = System::Drawing::Point(75, 30);
			this->label_racial_traits_saves_fort->Name = S"label_racial_traits_saves_fort";
			this->label_racial_traits_saves_fort->Size = System::Drawing::Size(45, 15);
			this->label_racial_traits_saves_fort->TabIndex = 38;
			this->label_racial_traits_saves_fort->Text = S"FORT";
			this->label_racial_traits_saves_fort->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label_racial_traits_saves_good
			// 
			this->label_racial_traits_saves_good->Location = System::Drawing::Point(5, 80);
			this->label_racial_traits_saves_good->Name = S"label_racial_traits_saves_good";
			this->label_racial_traits_saves_good->Size = System::Drawing::Size(65, 20);
			this->label_racial_traits_saves_good->TabIndex = 37;
			this->label_racial_traits_saves_good->Text = S"Good:";
			this->label_racial_traits_saves_good->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ckb_racial_traits_saves_fort
			// 
			this->ckb_racial_traits_saves_fort->Checked = true;
			this->ckb_racial_traits_saves_fort->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_racial_traits_saves_fort->Location = System::Drawing::Point(75, 85);
			this->ckb_racial_traits_saves_fort->Name = S"ckb_racial_traits_saves_fort";
			this->ckb_racial_traits_saves_fort->Size = System::Drawing::Size(20, 15);
			this->ckb_racial_traits_saves_fort->TabIndex = 36;
			// 
			// nud_racial_traits_saves_will
			// 
			this->nud_racial_traits_saves_will->Location = System::Drawing::Point(195, 55);
			this->nud_racial_traits_saves_will->Name = S"nud_racial_traits_saves_will";
			this->nud_racial_traits_saves_will->Size = System::Drawing::Size(50, 20);
			this->nud_racial_traits_saves_will->TabIndex = 33;
			this->nud_racial_traits_saves_will->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// nud_racial_traits_saves_ref
			// 
			this->nud_racial_traits_saves_ref->Location = System::Drawing::Point(135, 55);
			this->nud_racial_traits_saves_ref->Name = S"nud_racial_traits_saves_ref";
			this->nud_racial_traits_saves_ref->Size = System::Drawing::Size(50, 20);
			this->nud_racial_traits_saves_ref->TabIndex = 32;
			this->nud_racial_traits_saves_ref->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_racial_traits_save_scores
			// 
			this->label_racial_traits_save_scores->Location = System::Drawing::Point(10, 55);
			this->label_racial_traits_save_scores->Name = S"label_racial_traits_save_scores";
			this->label_racial_traits_save_scores->Size = System::Drawing::Size(60, 20);
			this->label_racial_traits_save_scores->TabIndex = 31;
			this->label_racial_traits_save_scores->Text = S"Scores:";
			this->label_racial_traits_save_scores->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// nud_racial_traits_saves_fort
			// 
			this->nud_racial_traits_saves_fort->Location = System::Drawing::Point(75, 55);
			this->nud_racial_traits_saves_fort->Name = S"nud_racial_traits_saves_fort";
			this->nud_racial_traits_saves_fort->Size = System::Drawing::Size(50, 20);
			this->nud_racial_traits_saves_fort->TabIndex = 30;
			this->nud_racial_traits_saves_fort->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// ckb_racial_traits_saves_ref
			// 
			this->ckb_racial_traits_saves_ref->Checked = true;
			this->ckb_racial_traits_saves_ref->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_racial_traits_saves_ref->Location = System::Drawing::Point(135, 85);
			this->ckb_racial_traits_saves_ref->Name = S"ckb_racial_traits_saves_ref";
			this->ckb_racial_traits_saves_ref->Size = System::Drawing::Size(20, 15);
			this->ckb_racial_traits_saves_ref->TabIndex = 34;
			// 
			// ckb_racial_traits_saves_will
			// 
			this->ckb_racial_traits_saves_will->Checked = true;
			this->ckb_racial_traits_saves_will->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_racial_traits_saves_will->Location = System::Drawing::Point(195, 85);
			this->ckb_racial_traits_saves_will->Name = S"ckb_racial_traits_saves_will";
			this->ckb_racial_traits_saves_will->Size = System::Drawing::Size(20, 15);
			this->ckb_racial_traits_saves_will->TabIndex = 35;
			// 
			// grpb_racial_traits_ability
			// 
			this->grpb_racial_traits_ability->Controls->Add(this->label_racial_traits_cha);
			this->grpb_racial_traits_ability->Controls->Add(this->label_racial_traits_wis);
			this->grpb_racial_traits_ability->Controls->Add(this->label_racial_traits_int);
			this->grpb_racial_traits_ability->Controls->Add(this->label_racial_traits_con);
			this->grpb_racial_traits_ability->Controls->Add(this->label_racial_traits_dex);
			this->grpb_racial_traits_ability->Controls->Add(this->label_racial_traits_str);
			this->grpb_racial_traits_ability->Controls->Add(this->label_racial_traits_ability_adjustments);
			this->grpb_racial_traits_ability->Controls->Add(this->ckb_racial_traits_ability_str);
			this->grpb_racial_traits_ability->Controls->Add(this->nud_racial_traits_ability_cha);
			this->grpb_racial_traits_ability->Controls->Add(this->nud_racial_traits_ability_wis);
			this->grpb_racial_traits_ability->Controls->Add(this->nud_racial_traits_ability_int);
			this->grpb_racial_traits_ability->Controls->Add(this->nud_racial_traits_ability_con);
			this->grpb_racial_traits_ability->Controls->Add(this->nud_racial_traits_ability_dex);
			this->grpb_racial_traits_ability->Controls->Add(this->label_racial_traits_ability_score);
			this->grpb_racial_traits_ability->Controls->Add(this->nud_racial_traits_ability_str);
			this->grpb_racial_traits_ability->Controls->Add(this->ckb_racial_traits_ability_dex);
			this->grpb_racial_traits_ability->Controls->Add(this->ckb_racial_traits_ability_con);
			this->grpb_racial_traits_ability->Controls->Add(this->ckb_racial_traits_ability_int);
			this->grpb_racial_traits_ability->Controls->Add(this->ckb_racial_traits_ability_wis);
			this->grpb_racial_traits_ability->Controls->Add(this->ckb_racial_traits_ability_cha);
			this->grpb_racial_traits_ability->Location = System::Drawing::Point(5, 5);
			this->grpb_racial_traits_ability->Name = S"grpb_racial_traits_ability";
			this->grpb_racial_traits_ability->Size = System::Drawing::Size(430, 120);
			this->grpb_racial_traits_ability->TabIndex = 0;
			this->grpb_racial_traits_ability->TabStop = false;
			this->grpb_racial_traits_ability->Text = S"Ability Adjustments";
			// 
			// label_racial_traits_cha
			// 
			this->label_racial_traits_cha->Location = System::Drawing::Point(375, 30);
			this->label_racial_traits_cha->Name = S"label_racial_traits_cha";
			this->label_racial_traits_cha->Size = System::Drawing::Size(45, 15);
			this->label_racial_traits_cha->TabIndex = 32;
			this->label_racial_traits_cha->Text = S"CHA";
			this->label_racial_traits_cha->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label_racial_traits_wis
			// 
			this->label_racial_traits_wis->Location = System::Drawing::Point(315, 30);
			this->label_racial_traits_wis->Name = S"label_racial_traits_wis";
			this->label_racial_traits_wis->Size = System::Drawing::Size(45, 15);
			this->label_racial_traits_wis->TabIndex = 31;
			this->label_racial_traits_wis->Text = S"WIS";
			this->label_racial_traits_wis->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label_racial_traits_int
			// 
			this->label_racial_traits_int->Location = System::Drawing::Point(255, 30);
			this->label_racial_traits_int->Name = S"label_racial_traits_int";
			this->label_racial_traits_int->Size = System::Drawing::Size(45, 15);
			this->label_racial_traits_int->TabIndex = 30;
			this->label_racial_traits_int->Text = S"INT";
			this->label_racial_traits_int->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label_racial_traits_con
			// 
			this->label_racial_traits_con->Location = System::Drawing::Point(195, 30);
			this->label_racial_traits_con->Name = S"label_racial_traits_con";
			this->label_racial_traits_con->Size = System::Drawing::Size(45, 15);
			this->label_racial_traits_con->TabIndex = 29;
			this->label_racial_traits_con->Text = S"CON";
			this->label_racial_traits_con->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label_racial_traits_dex
			// 
			this->label_racial_traits_dex->Location = System::Drawing::Point(135, 30);
			this->label_racial_traits_dex->Name = S"label_racial_traits_dex";
			this->label_racial_traits_dex->Size = System::Drawing::Size(45, 15);
			this->label_racial_traits_dex->TabIndex = 28;
			this->label_racial_traits_dex->Text = S"DEX";
			this->label_racial_traits_dex->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label_racial_traits_str
			// 
			this->label_racial_traits_str->Location = System::Drawing::Point(75, 30);
			this->label_racial_traits_str->Name = S"label_racial_traits_str";
			this->label_racial_traits_str->Size = System::Drawing::Size(45, 15);
			this->label_racial_traits_str->TabIndex = 27;
			this->label_racial_traits_str->Text = S"STR";
			this->label_racial_traits_str->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// label_racial_traits_ability_adjustments
			// 
			this->label_racial_traits_ability_adjustments->Location = System::Drawing::Point(5, 80);
			this->label_racial_traits_ability_adjustments->Name = S"label_racial_traits_ability_adjustments";
			this->label_racial_traits_ability_adjustments->Size = System::Drawing::Size(65, 20);
			this->label_racial_traits_ability_adjustments->TabIndex = 26;
			this->label_racial_traits_ability_adjustments->Text = S"Adjustment:";
			this->label_racial_traits_ability_adjustments->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// ckb_racial_traits_ability_str
			// 
			this->ckb_racial_traits_ability_str->Checked = true;
			this->ckb_racial_traits_ability_str->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_racial_traits_ability_str->Location = System::Drawing::Point(75, 85);
			this->ckb_racial_traits_ability_str->Name = S"ckb_racial_traits_ability_str";
			this->ckb_racial_traits_ability_str->Size = System::Drawing::Size(20, 15);
			this->ckb_racial_traits_ability_str->TabIndex = 25;
			// 
			// nud_racial_traits_ability_cha
			// 
			this->nud_racial_traits_ability_cha->Location = System::Drawing::Point(375, 55);
			this->nud_racial_traits_ability_cha->Name = S"nud_racial_traits_ability_cha";
			this->nud_racial_traits_ability_cha->Size = System::Drawing::Size(50, 20);
			this->nud_racial_traits_ability_cha->TabIndex = 24;
			this->nud_racial_traits_ability_cha->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// nud_racial_traits_ability_wis
			// 
			this->nud_racial_traits_ability_wis->Location = System::Drawing::Point(315, 55);
			this->nud_racial_traits_ability_wis->Name = S"nud_racial_traits_ability_wis";
			this->nud_racial_traits_ability_wis->Size = System::Drawing::Size(50, 20);
			this->nud_racial_traits_ability_wis->TabIndex = 23;
			this->nud_racial_traits_ability_wis->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// nud_racial_traits_ability_int
			// 
			this->nud_racial_traits_ability_int->Location = System::Drawing::Point(255, 55);
			this->nud_racial_traits_ability_int->Name = S"nud_racial_traits_ability_int";
			this->nud_racial_traits_ability_int->Size = System::Drawing::Size(50, 20);
			this->nud_racial_traits_ability_int->TabIndex = 22;
			this->nud_racial_traits_ability_int->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// nud_racial_traits_ability_con
			// 
			this->nud_racial_traits_ability_con->Location = System::Drawing::Point(195, 55);
			this->nud_racial_traits_ability_con->Name = S"nud_racial_traits_ability_con";
			this->nud_racial_traits_ability_con->Size = System::Drawing::Size(50, 20);
			this->nud_racial_traits_ability_con->TabIndex = 21;
			this->nud_racial_traits_ability_con->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// nud_racial_traits_ability_dex
			// 
			this->nud_racial_traits_ability_dex->Location = System::Drawing::Point(135, 55);
			this->nud_racial_traits_ability_dex->Name = S"nud_racial_traits_ability_dex";
			this->nud_racial_traits_ability_dex->Size = System::Drawing::Size(50, 20);
			this->nud_racial_traits_ability_dex->TabIndex = 20;
			this->nud_racial_traits_ability_dex->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_racial_traits_ability_score
			// 
			this->label_racial_traits_ability_score->Location = System::Drawing::Point(10, 55);
			this->label_racial_traits_ability_score->Name = S"label_racial_traits_ability_score";
			this->label_racial_traits_ability_score->Size = System::Drawing::Size(60, 20);
			this->label_racial_traits_ability_score->TabIndex = 19;
			this->label_racial_traits_ability_score->Text = S"Scores:";
			this->label_racial_traits_ability_score->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// nud_racial_traits_ability_str
			// 
			this->nud_racial_traits_ability_str->Location = System::Drawing::Point(75, 55);
			this->nud_racial_traits_ability_str->Name = S"nud_racial_traits_ability_str";
			this->nud_racial_traits_ability_str->Size = System::Drawing::Size(50, 20);
			this->nud_racial_traits_ability_str->TabIndex = 18;
			this->nud_racial_traits_ability_str->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// ckb_racial_traits_ability_dex
			// 
			this->ckb_racial_traits_ability_dex->Checked = true;
			this->ckb_racial_traits_ability_dex->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_racial_traits_ability_dex->Location = System::Drawing::Point(135, 85);
			this->ckb_racial_traits_ability_dex->Name = S"ckb_racial_traits_ability_dex";
			this->ckb_racial_traits_ability_dex->Size = System::Drawing::Size(20, 15);
			this->ckb_racial_traits_ability_dex->TabIndex = 25;
			// 
			// ckb_racial_traits_ability_con
			// 
			this->ckb_racial_traits_ability_con->Checked = true;
			this->ckb_racial_traits_ability_con->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_racial_traits_ability_con->Location = System::Drawing::Point(195, 85);
			this->ckb_racial_traits_ability_con->Name = S"ckb_racial_traits_ability_con";
			this->ckb_racial_traits_ability_con->Size = System::Drawing::Size(20, 15);
			this->ckb_racial_traits_ability_con->TabIndex = 25;
			// 
			// ckb_racial_traits_ability_int
			// 
			this->ckb_racial_traits_ability_int->Checked = true;
			this->ckb_racial_traits_ability_int->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_racial_traits_ability_int->Location = System::Drawing::Point(255, 85);
			this->ckb_racial_traits_ability_int->Name = S"ckb_racial_traits_ability_int";
			this->ckb_racial_traits_ability_int->Size = System::Drawing::Size(20, 15);
			this->ckb_racial_traits_ability_int->TabIndex = 25;
			// 
			// ckb_racial_traits_ability_wis
			// 
			this->ckb_racial_traits_ability_wis->Checked = true;
			this->ckb_racial_traits_ability_wis->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_racial_traits_ability_wis->Location = System::Drawing::Point(315, 85);
			this->ckb_racial_traits_ability_wis->Name = S"ckb_racial_traits_ability_wis";
			this->ckb_racial_traits_ability_wis->Size = System::Drawing::Size(20, 15);
			this->ckb_racial_traits_ability_wis->TabIndex = 25;
			// 
			// ckb_racial_traits_ability_cha
			// 
			this->ckb_racial_traits_ability_cha->Checked = true;
			this->ckb_racial_traits_ability_cha->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_racial_traits_ability_cha->Location = System::Drawing::Point(375, 85);
			this->ckb_racial_traits_ability_cha->Name = S"ckb_racial_traits_ability_cha";
			this->ckb_racial_traits_ability_cha->Size = System::Drawing::Size(20, 15);
			this->ckb_racial_traits_ability_cha->TabIndex = 25;
			// 
			// tabp_racial_traits_languages
			// 
			this->tabp_racial_traits_languages->Controls->Add(this->label_racial_traits_langauages_bonus);
			this->tabp_racial_traits_languages->Controls->Add(this->label_racial_traits_languages_known);
			this->tabp_racial_traits_languages->Controls->Add(this->btn_racial_traits_langauages_bonus_remove);
			this->tabp_racial_traits_languages->Controls->Add(this->btn_racial_traits_langauages_bonus_add);
			this->tabp_racial_traits_languages->Controls->Add(this->lstb_racial_traits_langauages_bonus_known);
			this->tabp_racial_traits_languages->Controls->Add(this->lstb_racial_traits_langauages_bonus);
			this->tabp_racial_traits_languages->Controls->Add(this->btn_racial_traits_langauages_remove);
			this->tabp_racial_traits_languages->Controls->Add(this->btn_racial_traits_langauages_add);
			this->tabp_racial_traits_languages->Controls->Add(this->lstb_racial_traits_langauages_known);
			this->tabp_racial_traits_languages->Controls->Add(this->lstb_racial_traits_langauages);
			this->tabp_racial_traits_languages->Location = System::Drawing::Point(4, 25);
			this->tabp_racial_traits_languages->Name = S"tabp_racial_traits_languages";
			this->tabp_racial_traits_languages->Size = System::Drawing::Size(437, 401);
			this->tabp_racial_traits_languages->TabIndex = 2;
			this->tabp_racial_traits_languages->Text = S"Languages";
			// 
			// label_racial_traits_langauages_bonus
			// 
			this->label_racial_traits_langauages_bonus->Location = System::Drawing::Point(10, 215);
			this->label_racial_traits_langauages_bonus->Name = S"label_racial_traits_langauages_bonus";
			this->label_racial_traits_langauages_bonus->Size = System::Drawing::Size(115, 15);
			this->label_racial_traits_langauages_bonus->TabIndex = 21;
			this->label_racial_traits_langauages_bonus->Text = S"Bonus Languages:";
			// 
			// label_racial_traits_languages_known
			// 
			this->label_racial_traits_languages_known->Location = System::Drawing::Point(15, 10);
			this->label_racial_traits_languages_known->Name = S"label_racial_traits_languages_known";
			this->label_racial_traits_languages_known->Size = System::Drawing::Size(115, 15);
			this->label_racial_traits_languages_known->TabIndex = 20;
			this->label_racial_traits_languages_known->Text = S"Languages Known:";
			// 
			// btn_racial_traits_langauages_bonus_remove
			// 
			this->btn_racial_traits_langauages_bonus_remove->Location = System::Drawing::Point(180, 265);
			this->btn_racial_traits_langauages_bonus_remove->Name = S"btn_racial_traits_langauages_bonus_remove";
			this->btn_racial_traits_langauages_bonus_remove->TabIndex = 19;
			this->btn_racial_traits_langauages_bonus_remove->Text = S"Remove";
			// 
			// btn_racial_traits_langauages_bonus_add
			// 
			this->btn_racial_traits_langauages_bonus_add->Location = System::Drawing::Point(180, 235);
			this->btn_racial_traits_langauages_bonus_add->Name = S"btn_racial_traits_langauages_bonus_add";
			this->btn_racial_traits_langauages_bonus_add->TabIndex = 18;
			this->btn_racial_traits_langauages_bonus_add->Text = S"Add";
			// 
			// lstb_racial_traits_langauages_bonus_known
			// 
			this->lstb_racial_traits_langauages_bonus_known->Location = System::Drawing::Point(270, 235);
			this->lstb_racial_traits_langauages_bonus_known->Name = S"lstb_racial_traits_langauages_bonus_known";
			this->lstb_racial_traits_langauages_bonus_known->Size = System::Drawing::Size(160, 160);
			this->lstb_racial_traits_langauages_bonus_known->TabIndex = 17;
			// 
			// lstb_racial_traits_langauages_bonus
			// 
			this->lstb_racial_traits_langauages_bonus->Location = System::Drawing::Point(10, 235);
			this->lstb_racial_traits_langauages_bonus->Name = S"lstb_racial_traits_langauages_bonus";
			this->lstb_racial_traits_langauages_bonus->Size = System::Drawing::Size(160, 160);
			this->lstb_racial_traits_langauages_bonus->TabIndex = 16;
			// 
			// btn_racial_traits_langauages_remove
			// 
			this->btn_racial_traits_langauages_remove->Location = System::Drawing::Point(183, 60);
			this->btn_racial_traits_langauages_remove->Name = S"btn_racial_traits_langauages_remove";
			this->btn_racial_traits_langauages_remove->TabIndex = 15;
			this->btn_racial_traits_langauages_remove->Text = S"Remove";
			// 
			// btn_racial_traits_langauages_add
			// 
			this->btn_racial_traits_langauages_add->Location = System::Drawing::Point(183, 30);
			this->btn_racial_traits_langauages_add->Name = S"btn_racial_traits_langauages_add";
			this->btn_racial_traits_langauages_add->TabIndex = 14;
			this->btn_racial_traits_langauages_add->Text = S"Add";
			// 
			// lstb_racial_traits_langauages_known
			// 
			this->lstb_racial_traits_langauages_known->Location = System::Drawing::Point(270, 30);
			this->lstb_racial_traits_langauages_known->Name = S"lstb_racial_traits_langauages_known";
			this->lstb_racial_traits_langauages_known->Size = System::Drawing::Size(160, 160);
			this->lstb_racial_traits_langauages_known->TabIndex = 13;
			// 
			// lstb_racial_traits_langauages
			// 
			this->lstb_racial_traits_langauages->Location = System::Drawing::Point(10, 30);
			this->lstb_racial_traits_langauages->Name = S"lstb_racial_traits_langauages";
			this->lstb_racial_traits_langauages->Size = System::Drawing::Size(160, 160);
			this->lstb_racial_traits_langauages->TabIndex = 12;
			// 
			// tabp_race_skills
			// 
			this->tabp_race_skills->Controls->Add(this->label_race_skills_every);
			this->tabp_race_skills->Controls->Add(this->label_race_skills_first);
			this->tabp_race_skills->Controls->Add(this->nud_race_skills_every);
			this->tabp_race_skills->Controls->Add(this->nud_race_skills_first);
			this->tabp_race_skills->Controls->Add(this->btn_race_skills_remove);
			this->tabp_race_skills->Controls->Add(this->btn_race_skills_add);
			this->tabp_race_skills->Controls->Add(this->lstb_race_skills_known);
			this->tabp_race_skills->Controls->Add(this->lstb_race_skills);
			this->tabp_race_skills->Location = System::Drawing::Point(4, 22);
			this->tabp_race_skills->Name = S"tabp_race_skills";
			this->tabp_race_skills->Size = System::Drawing::Size(452, 439);
			this->tabp_race_skills->TabIndex = 1;
			this->tabp_race_skills->Text = S"Skills";
			// 
			// label_race_skills_every
			// 
			this->label_race_skills_every->Location = System::Drawing::Point(190, 365);
			this->label_race_skills_every->Name = S"label_race_skills_every";
			this->label_race_skills_every->Size = System::Drawing::Size(75, 35);
			this->label_race_skills_every->TabIndex = 7;
			this->label_race_skills_every->Text = S"Extra Skill Points Per Level:";
			this->label_race_skills_every->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_race_skills_first
			// 
			this->label_race_skills_first->Location = System::Drawing::Point(190, 290);
			this->label_race_skills_first->Name = S"label_race_skills_first";
			this->label_race_skills_first->Size = System::Drawing::Size(75, 35);
			this->label_race_skills_first->TabIndex = 6;
			this->label_race_skills_first->Text = S"Extra Skill Points at Level 1:";
			this->label_race_skills_first->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nud_race_skills_every
			// 
			this->nud_race_skills_every->Location = System::Drawing::Point(205, 405);
			this->nud_race_skills_every->Name = S"nud_race_skills_every";
			this->nud_race_skills_every->Size = System::Drawing::Size(50, 20);
			this->nud_race_skills_every->TabIndex = 5;
			// 
			// nud_race_skills_first
			// 
			this->nud_race_skills_first->Location = System::Drawing::Point(205, 330);
			this->nud_race_skills_first->Name = S"nud_race_skills_first";
			this->nud_race_skills_first->Size = System::Drawing::Size(50, 20);
			this->nud_race_skills_first->TabIndex = 4;
			// 
			// btn_race_skills_remove
			// 
			this->btn_race_skills_remove->Location = System::Drawing::Point(190, 40);
			this->btn_race_skills_remove->Name = S"btn_race_skills_remove";
			this->btn_race_skills_remove->TabIndex = 3;
			this->btn_race_skills_remove->Text = S"Remove";
			// 
			// btn_race_skills_add
			// 
			this->btn_race_skills_add->Location = System::Drawing::Point(190, 10);
			this->btn_race_skills_add->Name = S"btn_race_skills_add";
			this->btn_race_skills_add->TabIndex = 2;
			this->btn_race_skills_add->Text = S"Add";
			// 
			// lstb_race_skills_known
			// 
			this->lstb_race_skills_known->Location = System::Drawing::Point(280, 10);
			this->lstb_race_skills_known->Name = S"lstb_race_skills_known";
			this->lstb_race_skills_known->Size = System::Drawing::Size(160, 420);
			this->lstb_race_skills_known->TabIndex = 1;
			// 
			// lstb_race_skills
			// 
			this->lstb_race_skills->Location = System::Drawing::Point(10, 10);
			this->lstb_race_skills->Name = S"lstb_race_skills";
			this->lstb_race_skills->Size = System::Drawing::Size(160, 420);
			this->lstb_race_skills->TabIndex = 0;
			// 
			// tabp_race_feats
			// 
			this->tabp_race_feats->Controls->Add(this->label_race_feats_every);
			this->tabp_race_feats->Controls->Add(this->label_race_feats_first);
			this->tabp_race_feats->Controls->Add(this->nud_race_feats_every);
			this->tabp_race_feats->Controls->Add(this->nud_race_feats_first);
			this->tabp_race_feats->Controls->Add(this->btn_race_feats_remove);
			this->tabp_race_feats->Controls->Add(this->btn_race_feats_add);
			this->tabp_race_feats->Controls->Add(this->lstb_race_feats_known);
			this->tabp_race_feats->Controls->Add(this->lstb_race_feats);
			this->tabp_race_feats->Location = System::Drawing::Point(4, 22);
			this->tabp_race_feats->Name = S"tabp_race_feats";
			this->tabp_race_feats->Size = System::Drawing::Size(452, 439);
			this->tabp_race_feats->TabIndex = 2;
			this->tabp_race_feats->Text = S"Feats";
			// 
			// label_race_feats_every
			// 
			this->label_race_feats_every->Location = System::Drawing::Point(190, 370);
			this->label_race_feats_every->Name = S"label_race_feats_every";
			this->label_race_feats_every->Size = System::Drawing::Size(75, 35);
			this->label_race_feats_every->TabIndex = 15;
			this->label_race_feats_every->Text = S"ExtraFeats Per Level:";
			this->label_race_feats_every->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_race_feats_first
			// 
			this->label_race_feats_first->Location = System::Drawing::Point(190, 295);
			this->label_race_feats_first->Name = S"label_race_feats_first";
			this->label_race_feats_first->Size = System::Drawing::Size(75, 35);
			this->label_race_feats_first->TabIndex = 14;
			this->label_race_feats_first->Text = S"Extra Feats at Level 1:";
			this->label_race_feats_first->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nud_race_feats_every
			// 
			this->nud_race_feats_every->Location = System::Drawing::Point(205, 405);
			this->nud_race_feats_every->Name = S"nud_race_feats_every";
			this->nud_race_feats_every->Size = System::Drawing::Size(50, 20);
			this->nud_race_feats_every->TabIndex = 13;
			// 
			// nud_race_feats_first
			// 
			this->nud_race_feats_first->Location = System::Drawing::Point(205, 330);
			this->nud_race_feats_first->Name = S"nud_race_feats_first";
			this->nud_race_feats_first->Size = System::Drawing::Size(50, 20);
			this->nud_race_feats_first->TabIndex = 12;
			// 
			// btn_race_feats_remove
			// 
			this->btn_race_feats_remove->Location = System::Drawing::Point(190, 40);
			this->btn_race_feats_remove->Name = S"btn_race_feats_remove";
			this->btn_race_feats_remove->TabIndex = 11;
			this->btn_race_feats_remove->Text = S"Remove";
			// 
			// btn_race_feats_add
			// 
			this->btn_race_feats_add->Location = System::Drawing::Point(190, 10);
			this->btn_race_feats_add->Name = S"btn_race_feats_add";
			this->btn_race_feats_add->TabIndex = 10;
			this->btn_race_feats_add->Text = S"Add";
			// 
			// lstb_race_feats_known
			// 
			this->lstb_race_feats_known->Location = System::Drawing::Point(280, 10);
			this->lstb_race_feats_known->Name = S"lstb_race_feats_known";
			this->lstb_race_feats_known->Size = System::Drawing::Size(160, 420);
			this->lstb_race_feats_known->TabIndex = 9;
			// 
			// lstb_race_feats
			// 
			this->lstb_race_feats->Location = System::Drawing::Point(10, 10);
			this->lstb_race_feats->Name = S"lstb_race_feats";
			this->lstb_race_feats->Size = System::Drawing::Size(160, 420);
			this->lstb_race_feats->TabIndex = 8;
			// 
			// tabp_race_special
			// 
			this->tabp_race_special->Controls->Add(this->btn_race_special_remove);
			this->tabp_race_special->Controls->Add(this->btn_race_special_add);
			this->tabp_race_special->Controls->Add(this->lstb_race_special_known);
			this->tabp_race_special->Controls->Add(this->lstb_race_special);
			this->tabp_race_special->Location = System::Drawing::Point(4, 22);
			this->tabp_race_special->Name = S"tabp_race_special";
			this->tabp_race_special->Size = System::Drawing::Size(452, 439);
			this->tabp_race_special->TabIndex = 3;
			this->tabp_race_special->Text = S"Special";
			// 
			// btn_race_special_remove
			// 
			this->btn_race_special_remove->Location = System::Drawing::Point(190, 40);
			this->btn_race_special_remove->Name = S"btn_race_special_remove";
			this->btn_race_special_remove->TabIndex = 19;
			this->btn_race_special_remove->Text = S"Remove";
			// 
			// btn_race_special_add
			// 
			this->btn_race_special_add->Location = System::Drawing::Point(190, 10);
			this->btn_race_special_add->Name = S"btn_race_special_add";
			this->btn_race_special_add->TabIndex = 18;
			this->btn_race_special_add->Text = S"Add";
			// 
			// lstb_race_special_known
			// 
			this->lstb_race_special_known->Location = System::Drawing::Point(280, 10);
			this->lstb_race_special_known->Name = S"lstb_race_special_known";
			this->lstb_race_special_known->Size = System::Drawing::Size(160, 420);
			this->lstb_race_special_known->TabIndex = 17;
			// 
			// lstb_race_special
			// 
			this->lstb_race_special->Location = System::Drawing::Point(10, 10);
			this->lstb_race_special->Name = S"lstb_race_special";
			this->lstb_race_special->Size = System::Drawing::Size(160, 420);
			this->lstb_race_special->TabIndex = 16;
			// 
			// tabp_race_proficiency
			// 
			this->tabp_race_proficiency->Controls->Add(this->btn_race_proficiency_remove);
			this->tabp_race_proficiency->Controls->Add(this->btn_race_proficiency_add);
			this->tabp_race_proficiency->Controls->Add(this->lstb_race_proficiency_known);
			this->tabp_race_proficiency->Controls->Add(this->lstb_race_proficiency);
			this->tabp_race_proficiency->Location = System::Drawing::Point(4, 22);
			this->tabp_race_proficiency->Name = S"tabp_race_proficiency";
			this->tabp_race_proficiency->Size = System::Drawing::Size(452, 439);
			this->tabp_race_proficiency->TabIndex = 4;
			this->tabp_race_proficiency->Text = S"Proficiency";
			// 
			// btn_race_proficiency_remove
			// 
			this->btn_race_proficiency_remove->Location = System::Drawing::Point(190, 40);
			this->btn_race_proficiency_remove->Name = S"btn_race_proficiency_remove";
			this->btn_race_proficiency_remove->TabIndex = 23;
			this->btn_race_proficiency_remove->Text = S"Remove";
			// 
			// btn_race_proficiency_add
			// 
			this->btn_race_proficiency_add->Location = System::Drawing::Point(190, 10);
			this->btn_race_proficiency_add->Name = S"btn_race_proficiency_add";
			this->btn_race_proficiency_add->TabIndex = 22;
			this->btn_race_proficiency_add->Text = S"Add";
			// 
			// lstb_race_proficiency_known
			// 
			this->lstb_race_proficiency_known->Location = System::Drawing::Point(280, 10);
			this->lstb_race_proficiency_known->Name = S"lstb_race_proficiency_known";
			this->lstb_race_proficiency_known->Size = System::Drawing::Size(160, 420);
			this->lstb_race_proficiency_known->TabIndex = 21;
			// 
			// lstb_race_proficiency
			// 
			this->lstb_race_proficiency->Location = System::Drawing::Point(10, 10);
			this->lstb_race_proficiency->Name = S"lstb_race_proficiency";
			this->lstb_race_proficiency->Size = System::Drawing::Size(160, 420);
			this->lstb_race_proficiency->TabIndex = 20;
			// 
			// lstb_races
			// 
			this->lstb_races->Location = System::Drawing::Point(10, 10);
			this->lstb_races->Name = S"lstb_races";
			this->lstb_races->Size = System::Drawing::Size(175, 498);
			this->lstb_races->TabIndex = 15;
			// 
			// btn_race_new
			// 
			this->btn_race_new->Location = System::Drawing::Point(195, 485);
			this->btn_race_new->Name = S"btn_race_new";
			this->btn_race_new->TabIndex = 14;
			this->btn_race_new->Text = S"New";
			// 
			// btn_race_remove
			// 
			this->btn_race_remove->Location = System::Drawing::Point(280, 485);
			this->btn_race_remove->Name = S"btn_race_remove";
			this->btn_race_remove->TabIndex = 13;
			this->btn_race_remove->Text = S"Remove";
			// 
			// btn_race_apply
			// 
			this->btn_race_apply->Location = System::Drawing::Point(580, 485);
			this->btn_race_apply->Name = S"btn_race_apply";
			this->btn_race_apply->TabIndex = 12;
			this->btn_race_apply->Text = S"Apply";
			// 
			// tabp_spells
			// 
			this->tabp_spells->Controls->Add(this->comb_spells_casting);
			this->tabp_spells->Controls->Add(this->nud_spells_casting);
			this->tabp_spells->Controls->Add(this->txtb_spells_target);
			this->tabp_spells->Controls->Add(this->label_target_spells);
			this->tabp_spells->Controls->Add(this->comb_spells_range);
			this->tabp_spells->Controls->Add(this->label_range_spells);
			this->tabp_spells->Controls->Add(this->comb_duration_spells);
			this->tabp_spells->Controls->Add(this->label_duration_spells);
			this->tabp_spells->Controls->Add(this->comb_spells_description);
			this->tabp_spells->Controls->Add(this->label_description_spells);
			this->tabp_spells->Controls->Add(this->txtb_components_spells);
			this->tabp_spells->Controls->Add(this->label_components_spells);
			this->tabp_spells->Controls->Add(this->comb_spells_school);
			this->tabp_spells->Controls->Add(this->label_school_spells);
			this->tabp_spells->Controls->Add(this->comb_save_spells);
			this->tabp_spells->Controls->Add(this->label_save_spells);
			this->tabp_spells->Controls->Add(this->comb_resistance_spells);
			this->tabp_spells->Controls->Add(this->label_resistance_spells);
			this->tabp_spells->Controls->Add(this->label_information_spells);
			this->tabp_spells->Controls->Add(this->txtb_spells_information);
			this->tabp_spells->Controls->Add(this->label_casting_time_spells);
			this->tabp_spells->Controls->Add(this->label_name_spells);
			this->tabp_spells->Controls->Add(this->txtb_spells_name);
			this->tabp_spells->Controls->Add(this->btn_new_spells);
			this->tabp_spells->Controls->Add(this->btn_remove_spells);
			this->tabp_spells->Controls->Add(this->lstv_spells);
			this->tabp_spells->Controls->Add(this->btn_save_spells);
			this->tabp_spells->Location = System::Drawing::Point(4, 22);
			this->tabp_spells->Name = S"tabp_spells";
			this->tabp_spells->Size = System::Drawing::Size(662, 514);
			this->tabp_spells->TabIndex = 1;
			this->tabp_spells->Text = S"Spells";
			// 
			// comb_spells_casting
			// 
			this->comb_spells_casting->Location = System::Drawing::Point(160, 425);
			this->comb_spells_casting->Name = S"comb_spells_casting";
			this->comb_spells_casting->Size = System::Drawing::Size(70, 21);
			this->comb_spells_casting->TabIndex = 136;
			this->comb_spells_casting->Text = S"Actions";
			// 
			// nud_spells_casting
			// 
			System::Int32 __mcTemp__29[] = new System::Int32[4];
			__mcTemp__29[0] = 1;
			__mcTemp__29[1] = 0;
			__mcTemp__29[2] = 0;
			__mcTemp__29[3] = 65536;
			this->nud_spells_casting->Increment = System::Decimal(__mcTemp__29);
			this->nud_spells_casting->Location = System::Drawing::Point(105, 425);
			System::Int32 __mcTemp__30[] = new System::Int32[4];
			__mcTemp__30[0] = 10000;
			__mcTemp__30[1] = 0;
			__mcTemp__30[2] = 0;
			__mcTemp__30[3] = 0;
			this->nud_spells_casting->Maximum = System::Decimal(__mcTemp__30);
			this->nud_spells_casting->Name = S"nud_spells_casting";
			this->nud_spells_casting->Size = System::Drawing::Size(55, 20);
			this->nud_spells_casting->TabIndex = 135;
			this->nud_spells_casting->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtb_spells_target
			// 
			this->txtb_spells_target->Location = System::Drawing::Point(105, 400);
			this->txtb_spells_target->Name = S"txtb_spells_target";
			this->txtb_spells_target->Size = System::Drawing::Size(205, 20);
			this->txtb_spells_target->TabIndex = 134;
			this->txtb_spells_target->Text = S"";
			// 
			// label_target_spells
			// 
			this->label_target_spells->Location = System::Drawing::Point(15, 400);
			this->label_target_spells->Name = S"label_target_spells";
			this->label_target_spells->Size = System::Drawing::Size(85, 20);
			this->label_target_spells->TabIndex = 133;
			this->label_target_spells->Text = S"Target/Area:";
			this->label_target_spells->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label_target_spells->Click += new System::EventHandler(this, label61_Click);
			// 
			// comb_spells_range
			// 
			this->comb_spells_range->Location = System::Drawing::Point(105, 375);
			this->comb_spells_range->Name = S"comb_spells_range";
			this->comb_spells_range->Size = System::Drawing::Size(205, 21);
			this->comb_spells_range->TabIndex = 132;
			// 
			// label_range_spells
			// 
			this->label_range_spells->Location = System::Drawing::Point(15, 375);
			this->label_range_spells->Name = S"label_range_spells";
			this->label_range_spells->Size = System::Drawing::Size(85, 20);
			this->label_range_spells->TabIndex = 131;
			this->label_range_spells->Text = S"Range:";
			this->label_range_spells->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_duration_spells
			// 
			this->comb_duration_spells->Location = System::Drawing::Point(445, 350);
			this->comb_duration_spells->Name = S"comb_duration_spells";
			this->comb_duration_spells->Size = System::Drawing::Size(205, 21);
			this->comb_duration_spells->TabIndex = 130;
			// 
			// label_duration_spells
			// 
			this->label_duration_spells->Location = System::Drawing::Point(355, 350);
			this->label_duration_spells->Name = S"label_duration_spells";
			this->label_duration_spells->Size = System::Drawing::Size(85, 20);
			this->label_duration_spells->TabIndex = 129;
			this->label_duration_spells->Text = S"Duration:";
			this->label_duration_spells->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_spells_description
			// 
			this->comb_spells_description->Location = System::Drawing::Point(105, 350);
			this->comb_spells_description->Name = S"comb_spells_description";
			this->comb_spells_description->Size = System::Drawing::Size(205, 21);
			this->comb_spells_description->TabIndex = 128;
			// 
			// label_description_spells
			// 
			this->label_description_spells->Location = System::Drawing::Point(15, 350);
			this->label_description_spells->Name = S"label_description_spells";
			this->label_description_spells->Size = System::Drawing::Size(85, 20);
			this->label_description_spells->TabIndex = 127;
			this->label_description_spells->Text = S"Description:";
			this->label_description_spells->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_components_spells
			// 
			this->txtb_components_spells->Location = System::Drawing::Point(445, 325);
			this->txtb_components_spells->Name = S"txtb_components_spells";
			this->txtb_components_spells->Size = System::Drawing::Size(205, 20);
			this->txtb_components_spells->TabIndex = 126;
			this->txtb_components_spells->Text = S"";
			// 
			// label_components_spells
			// 
			this->label_components_spells->Location = System::Drawing::Point(355, 325);
			this->label_components_spells->Name = S"label_components_spells";
			this->label_components_spells->Size = System::Drawing::Size(85, 20);
			this->label_components_spells->TabIndex = 124;
			this->label_components_spells->Text = S"Components:";
			this->label_components_spells->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_spells_school
			// 
			this->comb_spells_school->Location = System::Drawing::Point(105, 325);
			this->comb_spells_school->Name = S"comb_spells_school";
			this->comb_spells_school->Size = System::Drawing::Size(205, 21);
			this->comb_spells_school->TabIndex = 123;
			// 
			// label_school_spells
			// 
			this->label_school_spells->Location = System::Drawing::Point(15, 325);
			this->label_school_spells->Name = S"label_school_spells";
			this->label_school_spells->Size = System::Drawing::Size(85, 20);
			this->label_school_spells->TabIndex = 122;
			this->label_school_spells->Text = S"School:";
			this->label_school_spells->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_save_spells
			// 
			this->comb_save_spells->Location = System::Drawing::Point(445, 400);
			this->comb_save_spells->Name = S"comb_save_spells";
			this->comb_save_spells->Size = System::Drawing::Size(105, 21);
			this->comb_save_spells->TabIndex = 116;
			// 
			// label_save_spells
			// 
			this->label_save_spells->Location = System::Drawing::Point(355, 400);
			this->label_save_spells->Name = S"label_save_spells";
			this->label_save_spells->Size = System::Drawing::Size(85, 20);
			this->label_save_spells->TabIndex = 115;
			this->label_save_spells->Text = S"Save:";
			this->label_save_spells->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_resistance_spells
			// 
			this->comb_resistance_spells->Location = System::Drawing::Point(445, 375);
			this->comb_resistance_spells->Name = S"comb_resistance_spells";
			this->comb_resistance_spells->Size = System::Drawing::Size(105, 21);
			this->comb_resistance_spells->TabIndex = 114;
			// 
			// label_resistance_spells
			// 
			this->label_resistance_spells->Location = System::Drawing::Point(355, 375);
			this->label_resistance_spells->Name = S"label_resistance_spells";
			this->label_resistance_spells->Size = System::Drawing::Size(85, 20);
			this->label_resistance_spells->TabIndex = 113;
			this->label_resistance_spells->Text = S"Resistance:";
			this->label_resistance_spells->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_information_spells
			// 
			this->label_information_spells->Location = System::Drawing::Point(15, 450);
			this->label_information_spells->Name = S"label_information_spells";
			this->label_information_spells->Size = System::Drawing::Size(85, 20);
			this->label_information_spells->TabIndex = 112;
			this->label_information_spells->Text = S"Information:";
			this->label_information_spells->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_spells_information
			// 
			this->txtb_spells_information->Location = System::Drawing::Point(105, 450);
			this->txtb_spells_information->Multiline = true;
			this->txtb_spells_information->Name = S"txtb_spells_information";
			this->txtb_spells_information->Size = System::Drawing::Size(445, 50);
			this->txtb_spells_information->TabIndex = 111;
			this->txtb_spells_information->Text = S"";
			// 
			// label_casting_time_spells
			// 
			this->label_casting_time_spells->Location = System::Drawing::Point(15, 425);
			this->label_casting_time_spells->Name = S"label_casting_time_spells";
			this->label_casting_time_spells->Size = System::Drawing::Size(85, 20);
			this->label_casting_time_spells->TabIndex = 109;
			this->label_casting_time_spells->Text = S"Casting Time:";
			this->label_casting_time_spells->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_name_spells
			// 
			this->label_name_spells->Location = System::Drawing::Point(15, 300);
			this->label_name_spells->Name = S"label_name_spells";
			this->label_name_spells->Size = System::Drawing::Size(85, 20);
			this->label_name_spells->TabIndex = 108;
			this->label_name_spells->Text = S"Name:";
			this->label_name_spells->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label_name_spells->Click += new System::EventHandler(this, label71_Click);
			// 
			// txtb_spells_name
			// 
			this->txtb_spells_name->Location = System::Drawing::Point(105, 300);
			this->txtb_spells_name->Name = S"txtb_spells_name";
			this->txtb_spells_name->Size = System::Drawing::Size(545, 20);
			this->txtb_spells_name->TabIndex = 107;
			this->txtb_spells_name->Text = S"";
			// 
			// btn_new_spells
			// 
			this->btn_new_spells->Location = System::Drawing::Point(580, 265);
			this->btn_new_spells->Name = S"btn_new_spells";
			this->btn_new_spells->TabIndex = 106;
			this->btn_new_spells->Text = S"New";
			// 
			// btn_remove_spells
			// 
			this->btn_remove_spells->Location = System::Drawing::Point(495, 265);
			this->btn_remove_spells->Name = S"btn_remove_spells";
			this->btn_remove_spells->TabIndex = 105;
			this->btn_remove_spells->Text = S"Remove";
			this->btn_remove_spells->Click += new System::EventHandler(this, btn_remove_spells_Click);
			// 
			// lstv_spells
			// 
			this->lstv_spells->Location = System::Drawing::Point(10, 10);
			this->lstv_spells->Name = S"lstv_spells";
			this->lstv_spells->Size = System::Drawing::Size(645, 245);
			this->lstv_spells->TabIndex = 9;
			this->lstv_spells->View = System::Windows::Forms::View::Details;
			// 
			// btn_save_spells
			// 
			this->btn_save_spells->Location = System::Drawing::Point(580, 485);
			this->btn_save_spells->Name = S"btn_save_spells";
			this->btn_save_spells->TabIndex = 8;
			this->btn_save_spells->Text = S"Apply";
			// 
			// tabp_gods
			// 
			this->tabp_gods->Controls->Add(this->label_domains_gods);
			this->tabp_gods->Controls->Add(this->lstv_domains_gods);
			this->tabp_gods->Controls->Add(this->label_information_gods);
			this->tabp_gods->Controls->Add(this->label_alignment_gods);
			this->tabp_gods->Controls->Add(this->label_name_gods);
			this->tabp_gods->Controls->Add(this->lstv_domains2_gods);
			this->tabp_gods->Controls->Add(this->btn_remove_domains_gods);
			this->tabp_gods->Controls->Add(this->btn_add_domains_gods);
			this->tabp_gods->Controls->Add(this->txtb_information_gods);
			this->tabp_gods->Controls->Add(this->comb_alignment_gods);
			this->tabp_gods->Controls->Add(this->txtb_name_gods);
			this->tabp_gods->Controls->Add(this->btn_new_gods);
			this->tabp_gods->Controls->Add(this->btn_remove_gods);
			this->tabp_gods->Controls->Add(this->lstv_gods);
			this->tabp_gods->Controls->Add(this->btn_apply_gods);
			this->tabp_gods->Location = System::Drawing::Point(4, 22);
			this->tabp_gods->Name = S"tabp_gods";
			this->tabp_gods->Size = System::Drawing::Size(662, 514);
			this->tabp_gods->TabIndex = 4;
			this->tabp_gods->Text = S"Gods";
			// 
			// label_domains_gods
			// 
			this->label_domains_gods->Location = System::Drawing::Point(15, 345);
			this->label_domains_gods->Name = S"label_domains_gods";
			this->label_domains_gods->Size = System::Drawing::Size(85, 20);
			this->label_domains_gods->TabIndex = 125;
			this->label_domains_gods->Text = S"Domains:";
			this->label_domains_gods->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lstv_domains_gods
			// 
			this->lstv_domains_gods->Location = System::Drawing::Point(105, 345);
			this->lstv_domains_gods->Name = S"lstv_domains_gods";
			this->lstv_domains_gods->Size = System::Drawing::Size(270, 97);
			this->lstv_domains_gods->TabIndex = 124;
			this->lstv_domains_gods->View = System::Windows::Forms::View::Details;
			// 
			// label_information_gods
			// 
			this->label_information_gods->Location = System::Drawing::Point(15, 450);
			this->label_information_gods->Name = S"label_information_gods";
			this->label_information_gods->Size = System::Drawing::Size(85, 20);
			this->label_information_gods->TabIndex = 123;
			this->label_information_gods->Text = S"Information:";
			this->label_information_gods->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_alignment_gods
			// 
			this->label_alignment_gods->Location = System::Drawing::Point(15, 315);
			this->label_alignment_gods->Name = S"label_alignment_gods";
			this->label_alignment_gods->Size = System::Drawing::Size(85, 20);
			this->label_alignment_gods->TabIndex = 122;
			this->label_alignment_gods->Text = S"Alignment:";
			this->label_alignment_gods->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->label_alignment_gods->Click += new System::EventHandler(this, label_alignment_gods_Click);
			// 
			// label_name_gods
			// 
			this->label_name_gods->Location = System::Drawing::Point(15, 290);
			this->label_name_gods->Name = S"label_name_gods";
			this->label_name_gods->Size = System::Drawing::Size(85, 20);
			this->label_name_gods->TabIndex = 121;
			this->label_name_gods->Text = S"Name:";
			this->label_name_gods->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// lstv_domains2_gods
			// 
			this->lstv_domains2_gods->Location = System::Drawing::Point(470, 345);
			this->lstv_domains2_gods->Name = S"lstv_domains2_gods";
			this->lstv_domains2_gods->Size = System::Drawing::Size(175, 97);
			this->lstv_domains2_gods->TabIndex = 120;
			this->lstv_domains2_gods->View = System::Windows::Forms::View::Details;
			// 
			// btn_remove_domains_gods
			// 
			this->btn_remove_domains_gods->Location = System::Drawing::Point(385, 375);
			this->btn_remove_domains_gods->Name = S"btn_remove_domains_gods";
			this->btn_remove_domains_gods->TabIndex = 119;
			this->btn_remove_domains_gods->Text = S"Remove";
			// 
			// btn_add_domains_gods
			// 
			this->btn_add_domains_gods->Location = System::Drawing::Point(385, 345);
			this->btn_add_domains_gods->Name = S"btn_add_domains_gods";
			this->btn_add_domains_gods->TabIndex = 118;
			this->btn_add_domains_gods->Text = S"Add";
			// 
			// txtb_information_gods
			// 
			this->txtb_information_gods->Location = System::Drawing::Point(105, 450);
			this->txtb_information_gods->Multiline = true;
			this->txtb_information_gods->Name = S"txtb_information_gods";
			this->txtb_information_gods->Size = System::Drawing::Size(445, 50);
			this->txtb_information_gods->TabIndex = 110;
			this->txtb_information_gods->Text = S"";
			this->txtb_information_gods->TextChanged += new System::EventHandler(this, textBox19_TextChanged);
			// 
			// comb_alignment_gods
			// 
			this->comb_alignment_gods->Location = System::Drawing::Point(105, 315);
			this->comb_alignment_gods->Name = S"comb_alignment_gods";
			this->comb_alignment_gods->Size = System::Drawing::Size(105, 21);
			this->comb_alignment_gods->TabIndex = 109;
			// 
			// txtb_name_gods
			// 
			this->txtb_name_gods->Location = System::Drawing::Point(105, 290);
			this->txtb_name_gods->Name = S"txtb_name_gods";
			this->txtb_name_gods->Size = System::Drawing::Size(545, 20);
			this->txtb_name_gods->TabIndex = 108;
			this->txtb_name_gods->Text = S"";
			// 
			// btn_new_gods
			// 
			this->btn_new_gods->Location = System::Drawing::Point(580, 255);
			this->btn_new_gods->Name = S"btn_new_gods";
			this->btn_new_gods->TabIndex = 107;
			this->btn_new_gods->Text = S"New";
			// 
			// btn_remove_gods
			// 
			this->btn_remove_gods->Location = System::Drawing::Point(495, 255);
			this->btn_remove_gods->Name = S"btn_remove_gods";
			this->btn_remove_gods->TabIndex = 106;
			this->btn_remove_gods->Text = S"Remove";
			// 
			// lstv_gods
			// 
			this->lstv_gods->Location = System::Drawing::Point(10, 10);
			this->lstv_gods->Name = S"lstv_gods";
			this->lstv_gods->Size = System::Drawing::Size(645, 235);
			this->lstv_gods->TabIndex = 105;
			this->lstv_gods->View = System::Windows::Forms::View::Details;
			// 
			// btn_apply_gods
			// 
			this->btn_apply_gods->Location = System::Drawing::Point(580, 485);
			this->btn_apply_gods->Name = S"btn_apply_gods";
			this->btn_apply_gods->TabIndex = 8;
			this->btn_apply_gods->Text = S"Apply";
			this->btn_apply_gods->Click += new System::EventHandler(this, button18_Click);
			// 
			// tabp_domains
			// 
			this->tabp_domains->Controls->Add(this->comb_opposing_domain_domains);
			this->tabp_domains->Controls->Add(this->label_opposing_domain_domains);
			this->tabp_domains->Controls->Add(this->comb_req_alignment_domains);
			this->tabp_domains->Controls->Add(this->label_req_alignment_domains);
			this->tabp_domains->Controls->Add(this->label_domains_information);
			this->tabp_domains->Controls->Add(this->label_name_domains);
			this->tabp_domains->Controls->Add(this->txtb_information_domains);
			this->tabp_domains->Controls->Add(this->txtb_name_domains);
			this->tabp_domains->Controls->Add(this->btn_new_domains);
			this->tabp_domains->Controls->Add(this->btn_remove_domains);
			this->tabp_domains->Controls->Add(this->lstv_domains);
			this->tabp_domains->Controls->Add(this->lstv_ability_domains);
			this->tabp_domains->Controls->Add(this->btn_remove_ability_domains);
			this->tabp_domains->Controls->Add(this->btn_add_domains);
			this->tabp_domains->Controls->Add(this->dup_data_domains);
			this->tabp_domains->Controls->Add(this->comb_domains_data);
			this->tabp_domains->Controls->Add(this->label_information_domains);
			this->tabp_domains->Controls->Add(this->comb_ability_domains);
			this->tabp_domains->Controls->Add(this->label_ability_domains);
			this->tabp_domains->Controls->Add(this->btn_apply_domains);
			this->tabp_domains->Location = System::Drawing::Point(4, 22);
			this->tabp_domains->Name = S"tabp_domains";
			this->tabp_domains->Size = System::Drawing::Size(662, 514);
			this->tabp_domains->TabIndex = 5;
			this->tabp_domains->Text = S"Domains";
			// 
			// comb_opposing_domain_domains
			// 
			this->comb_opposing_domain_domains->Location = System::Drawing::Point(445, 315);
			this->comb_opposing_domain_domains->Name = S"comb_opposing_domain_domains";
			this->comb_opposing_domain_domains->Size = System::Drawing::Size(205, 21);
			this->comb_opposing_domain_domains->TabIndex = 134;
			// 
			// label_opposing_domain_domains
			// 
			this->label_opposing_domain_domains->Location = System::Drawing::Point(320, 315);
			this->label_opposing_domain_domains->Name = S"label_opposing_domain_domains";
			this->label_opposing_domain_domains->Size = System::Drawing::Size(120, 20);
			this->label_opposing_domain_domains->TabIndex = 133;
			this->label_opposing_domain_domains->Text = S"Opposing Domain:";
			this->label_opposing_domain_domains->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_req_alignment_domains
			// 
			this->comb_req_alignment_domains->Location = System::Drawing::Point(105, 315);
			this->comb_req_alignment_domains->Name = S"comb_req_alignment_domains";
			this->comb_req_alignment_domains->Size = System::Drawing::Size(205, 21);
			this->comb_req_alignment_domains->TabIndex = 132;
			// 
			// label_req_alignment_domains
			// 
			this->label_req_alignment_domains->Location = System::Drawing::Point(15, 315);
			this->label_req_alignment_domains->Name = S"label_req_alignment_domains";
			this->label_req_alignment_domains->Size = System::Drawing::Size(85, 20);
			this->label_req_alignment_domains->TabIndex = 131;
			this->label_req_alignment_domains->Text = S"Req. Alignment:";
			this->label_req_alignment_domains->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_domains_information
			// 
			this->label_domains_information->Location = System::Drawing::Point(15, 450);
			this->label_domains_information->Name = S"label_domains_information";
			this->label_domains_information->Size = System::Drawing::Size(85, 20);
			this->label_domains_information->TabIndex = 130;
			this->label_domains_information->Text = S"Information:";
			this->label_domains_information->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_name_domains
			// 
			this->label_name_domains->Location = System::Drawing::Point(15, 290);
			this->label_name_domains->Name = S"label_name_domains";
			this->label_name_domains->Size = System::Drawing::Size(85, 20);
			this->label_name_domains->TabIndex = 129;
			this->label_name_domains->Text = S"Name:";
			this->label_name_domains->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_information_domains
			// 
			this->txtb_information_domains->Location = System::Drawing::Point(105, 450);
			this->txtb_information_domains->Multiline = true;
			this->txtb_information_domains->Name = S"txtb_information_domains";
			this->txtb_information_domains->Size = System::Drawing::Size(445, 50);
			this->txtb_information_domains->TabIndex = 128;
			this->txtb_information_domains->Text = S"";
			this->txtb_information_domains->TextChanged += new System::EventHandler(this, textBox21_TextChanged);
			// 
			// txtb_name_domains
			// 
			this->txtb_name_domains->Location = System::Drawing::Point(105, 290);
			this->txtb_name_domains->Name = S"txtb_name_domains";
			this->txtb_name_domains->Size = System::Drawing::Size(545, 20);
			this->txtb_name_domains->TabIndex = 127;
			this->txtb_name_domains->Text = S"";
			// 
			// btn_new_domains
			// 
			this->btn_new_domains->Location = System::Drawing::Point(580, 255);
			this->btn_new_domains->Name = S"btn_new_domains";
			this->btn_new_domains->TabIndex = 126;
			this->btn_new_domains->Text = S"New";
			// 
			// btn_remove_domains
			// 
			this->btn_remove_domains->Location = System::Drawing::Point(495, 255);
			this->btn_remove_domains->Name = S"btn_remove_domains";
			this->btn_remove_domains->TabIndex = 125;
			this->btn_remove_domains->Text = S"Remove";
			// 
			// lstv_domains
			// 
			this->lstv_domains->Location = System::Drawing::Point(10, 10);
			this->lstv_domains->Name = S"lstv_domains";
			this->lstv_domains->Size = System::Drawing::Size(645, 235);
			this->lstv_domains->TabIndex = 124;
			this->lstv_domains->View = System::Windows::Forms::View::Details;
			// 
			// lstv_ability_domains
			// 
			this->lstv_ability_domains->Location = System::Drawing::Point(380, 345);
			this->lstv_ability_domains->Name = S"lstv_ability_domains";
			this->lstv_ability_domains->Size = System::Drawing::Size(270, 97);
			this->lstv_ability_domains->TabIndex = 112;
			this->lstv_ability_domains->View = System::Windows::Forms::View::Details;
			// 
			// btn_remove_ability_domains
			// 
			this->btn_remove_ability_domains->Location = System::Drawing::Point(295, 375);
			this->btn_remove_ability_domains->Name = S"btn_remove_ability_domains";
			this->btn_remove_ability_domains->TabIndex = 111;
			this->btn_remove_ability_domains->Text = S"Remove";
			// 
			// btn_add_domains
			// 
			this->btn_add_domains->Location = System::Drawing::Point(295, 345);
			this->btn_add_domains->Name = S"btn_add_domains";
			this->btn_add_domains->TabIndex = 110;
			this->btn_add_domains->Text = S"Add";
			// 
			// dup_data_domains
			// 
			this->dup_data_domains->Location = System::Drawing::Point(230, 405);
			this->dup_data_domains->Name = S"dup_data_domains";
			this->dup_data_domains->Size = System::Drawing::Size(55, 20);
			this->dup_data_domains->TabIndex = 109;
			this->dup_data_domains->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// comb_domains_data
			// 
			this->comb_domains_data->Location = System::Drawing::Point(105, 375);
			this->comb_domains_data->Name = S"comb_domains_data";
			this->comb_domains_data->Size = System::Drawing::Size(180, 21);
			this->comb_domains_data->TabIndex = 108;
			// 
			// label_information_domains
			// 
			this->label_information_domains->Location = System::Drawing::Point(15, 375);
			this->label_information_domains->Name = S"label_information_domains";
			this->label_information_domains->Size = System::Drawing::Size(85, 20);
			this->label_information_domains->TabIndex = 107;
			this->label_information_domains->Text = S"Data:";
			this->label_information_domains->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_ability_domains
			// 
			this->comb_ability_domains->Location = System::Drawing::Point(105, 345);
			this->comb_ability_domains->Name = S"comb_ability_domains";
			this->comb_ability_domains->Size = System::Drawing::Size(180, 21);
			this->comb_ability_domains->TabIndex = 106;
			// 
			// label_ability_domains
			// 
			this->label_ability_domains->Location = System::Drawing::Point(15, 345);
			this->label_ability_domains->Name = S"label_ability_domains";
			this->label_ability_domains->Size = System::Drawing::Size(85, 20);
			this->label_ability_domains->TabIndex = 105;
			this->label_ability_domains->Text = S"Ability:";
			this->label_ability_domains->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_apply_domains
			// 
			this->btn_apply_domains->Location = System::Drawing::Point(580, 485);
			this->btn_apply_domains->Name = S"btn_apply_domains";
			this->btn_apply_domains->TabIndex = 8;
			this->btn_apply_domains->Text = S"Apply";
			// 
			// tabp_feats
			// 
			this->tabp_feats->Controls->Add(this->lstv_prerequisite_feats);
			this->tabp_feats->Controls->Add(this->btn_prerequisite_remove_feats);
			this->tabp_feats->Controls->Add(this->btn_add_feats);
			this->tabp_feats->Controls->Add(this->nup_feats);
			this->tabp_feats->Controls->Add(this->comb_data_feats);
			this->tabp_feats->Controls->Add(this->label_data_feats);
			this->tabp_feats->Controls->Add(this->comb_prerequisite_feats);
			this->tabp_feats->Controls->Add(this->label_prerequisite_feats);
			this->tabp_feats->Controls->Add(this->comb_target_feats);
			this->tabp_feats->Controls->Add(this->label_target_feats);
			this->tabp_feats->Controls->Add(this->comb_stacking_feats);
			this->tabp_feats->Controls->Add(this->label_stacking_feats);
			this->tabp_feats->Controls->Add(this->label_information_feats);
			this->tabp_feats->Controls->Add(this->txtb_information_feats);
			this->tabp_feats->Controls->Add(this->comb_type_feats);
			this->tabp_feats->Controls->Add(this->label_type_feats);
			this->tabp_feats->Controls->Add(this->label_name_feats);
			this->tabp_feats->Controls->Add(this->txtb_name_feats);
			this->tabp_feats->Controls->Add(this->btn_new_feats);
			this->tabp_feats->Controls->Add(this->btn_remove_feats);
			this->tabp_feats->Controls->Add(this->lstv_feats);
			this->tabp_feats->Controls->Add(this->btn_apply_feats);
			this->tabp_feats->Location = System::Drawing::Point(4, 22);
			this->tabp_feats->Name = S"tabp_feats";
			this->tabp_feats->Size = System::Drawing::Size(662, 514);
			this->tabp_feats->TabIndex = 3;
			this->tabp_feats->Text = S"Feats";
			// 
			// lstv_prerequisite_feats
			// 
			this->lstv_prerequisite_feats->Location = System::Drawing::Point(380, 335);
			this->lstv_prerequisite_feats->Name = S"lstv_prerequisite_feats";
			this->lstv_prerequisite_feats->Size = System::Drawing::Size(270, 97);
			this->lstv_prerequisite_feats->TabIndex = 104;
			this->lstv_prerequisite_feats->View = System::Windows::Forms::View::Details;
			// 
			// btn_prerequisite_remove_feats
			// 
			this->btn_prerequisite_remove_feats->Location = System::Drawing::Point(295, 365);
			this->btn_prerequisite_remove_feats->Name = S"btn_prerequisite_remove_feats";
			this->btn_prerequisite_remove_feats->TabIndex = 103;
			this->btn_prerequisite_remove_feats->Text = S"Remove";
			// 
			// btn_add_feats
			// 
			this->btn_add_feats->Location = System::Drawing::Point(295, 335);
			this->btn_add_feats->Name = S"btn_add_feats";
			this->btn_add_feats->TabIndex = 102;
			this->btn_add_feats->Text = S"Add";
			// 
			// nup_feats
			// 
			this->nup_feats->Location = System::Drawing::Point(230, 395);
			this->nup_feats->Name = S"nup_feats";
			this->nup_feats->Size = System::Drawing::Size(55, 20);
			this->nup_feats->TabIndex = 101;
			this->nup_feats->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// comb_data_feats
			// 
			this->comb_data_feats->Location = System::Drawing::Point(105, 365);
			this->comb_data_feats->Name = S"comb_data_feats";
			this->comb_data_feats->Size = System::Drawing::Size(180, 21);
			this->comb_data_feats->TabIndex = 100;
			// 
			// label_data_feats
			// 
			this->label_data_feats->Location = System::Drawing::Point(15, 365);
			this->label_data_feats->Name = S"label_data_feats";
			this->label_data_feats->Size = System::Drawing::Size(85, 20);
			this->label_data_feats->TabIndex = 99;
			this->label_data_feats->Text = S"Data:";
			this->label_data_feats->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_prerequisite_feats
			// 
			this->comb_prerequisite_feats->Location = System::Drawing::Point(105, 335);
			this->comb_prerequisite_feats->Name = S"comb_prerequisite_feats";
			this->comb_prerequisite_feats->Size = System::Drawing::Size(180, 21);
			this->comb_prerequisite_feats->TabIndex = 98;
			// 
			// label_prerequisite_feats
			// 
			this->label_prerequisite_feats->Location = System::Drawing::Point(15, 335);
			this->label_prerequisite_feats->Name = S"label_prerequisite_feats";
			this->label_prerequisite_feats->Size = System::Drawing::Size(85, 20);
			this->label_prerequisite_feats->TabIndex = 97;
			this->label_prerequisite_feats->Text = S"Prerequisite:";
			this->label_prerequisite_feats->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_target_feats
			// 
			this->comb_target_feats->Location = System::Drawing::Point(545, 285);
			this->comb_target_feats->Name = S"comb_target_feats";
			this->comb_target_feats->Size = System::Drawing::Size(105, 21);
			this->comb_target_feats->TabIndex = 94;
			this->comb_target_feats->SelectedIndexChanged += new System::EventHandler(this, comb_target_feats_SelectedIndexChanged);
			// 
			// label_target_feats
			// 
			this->label_target_feats->Location = System::Drawing::Point(455, 285);
			this->label_target_feats->Name = S"label_target_feats";
			this->label_target_feats->Size = System::Drawing::Size(85, 20);
			this->label_target_feats->TabIndex = 93;
			this->label_target_feats->Text = S"Target:";
			this->label_target_feats->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_stacking_feats
			// 
			this->comb_stacking_feats->Location = System::Drawing::Point(325, 285);
			this->comb_stacking_feats->Name = S"comb_stacking_feats";
			this->comb_stacking_feats->Size = System::Drawing::Size(105, 21);
			this->comb_stacking_feats->TabIndex = 92;
			// 
			// label_stacking_feats
			// 
			this->label_stacking_feats->Location = System::Drawing::Point(235, 285);
			this->label_stacking_feats->Name = S"label_stacking_feats";
			this->label_stacking_feats->Size = System::Drawing::Size(85, 20);
			this->label_stacking_feats->TabIndex = 91;
			this->label_stacking_feats->Text = S"Stacking:";
			this->label_stacking_feats->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_information_feats
			// 
			this->label_information_feats->Location = System::Drawing::Point(15, 450);
			this->label_information_feats->Name = S"label_information_feats";
			this->label_information_feats->Size = System::Drawing::Size(85, 20);
			this->label_information_feats->TabIndex = 90;
			this->label_information_feats->Text = S"Information:";
			this->label_information_feats->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_information_feats
			// 
			this->txtb_information_feats->Location = System::Drawing::Point(105, 450);
			this->txtb_information_feats->Multiline = true;
			this->txtb_information_feats->Name = S"txtb_information_feats";
			this->txtb_information_feats->Size = System::Drawing::Size(445, 50);
			this->txtb_information_feats->TabIndex = 89;
			this->txtb_information_feats->Text = S"";
			// 
			// comb_type_feats
			// 
			this->comb_type_feats->Location = System::Drawing::Point(105, 285);
			this->comb_type_feats->Name = S"comb_type_feats";
			this->comb_type_feats->Size = System::Drawing::Size(105, 21);
			this->comb_type_feats->TabIndex = 88;
			// 
			// label_type_feats
			// 
			this->label_type_feats->Location = System::Drawing::Point(15, 285);
			this->label_type_feats->Name = S"label_type_feats";
			this->label_type_feats->Size = System::Drawing::Size(85, 20);
			this->label_type_feats->TabIndex = 87;
			this->label_type_feats->Text = S"Type:";
			this->label_type_feats->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_name_feats
			// 
			this->label_name_feats->Location = System::Drawing::Point(15, 260);
			this->label_name_feats->Name = S"label_name_feats";
			this->label_name_feats->Size = System::Drawing::Size(85, 20);
			this->label_name_feats->TabIndex = 86;
			this->label_name_feats->Text = S"Name:";
			this->label_name_feats->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_name_feats
			// 
			this->txtb_name_feats->Location = System::Drawing::Point(105, 260);
			this->txtb_name_feats->Name = S"txtb_name_feats";
			this->txtb_name_feats->Size = System::Drawing::Size(545, 20);
			this->txtb_name_feats->TabIndex = 85;
			this->txtb_name_feats->Text = S"";
			// 
			// btn_new_feats
			// 
			this->btn_new_feats->Location = System::Drawing::Point(580, 225);
			this->btn_new_feats->Name = S"btn_new_feats";
			this->btn_new_feats->TabIndex = 11;
			this->btn_new_feats->Text = S"New";
			// 
			// btn_remove_feats
			// 
			this->btn_remove_feats->Location = System::Drawing::Point(495, 225);
			this->btn_remove_feats->Name = S"btn_remove_feats";
			this->btn_remove_feats->TabIndex = 10;
			this->btn_remove_feats->Text = S"Remove";
			// 
			// lstv_feats
			// 
			this->lstv_feats->Location = System::Drawing::Point(10, 10);
			this->lstv_feats->Name = S"lstv_feats";
			this->lstv_feats->Size = System::Drawing::Size(645, 205);
			this->lstv_feats->TabIndex = 9;
			this->lstv_feats->View = System::Windows::Forms::View::Details;
			// 
			// btn_apply_feats
			// 
			this->btn_apply_feats->Location = System::Drawing::Point(580, 485);
			this->btn_apply_feats->Name = S"btn_apply_feats";
			this->btn_apply_feats->TabIndex = 8;
			this->btn_apply_feats->Text = S"Apply";
			// 
			// tabp_skills
			// 
			this->tabp_skills->Controls->Add(this->label_information_skills);
			this->tabp_skills->Controls->Add(this->txtb_information);
			this->tabp_skills->Controls->Add(this->chk_armor_check_penalty);
			this->tabp_skills->Controls->Add(this->ckb_use_untrained_skills);
			this->tabp_skills->Controls->Add(this->comb_ability_skills);
			this->tabp_skills->Controls->Add(this->label_ability_skills);
			this->tabp_skills->Controls->Add(this->label_name_skills);
			this->tabp_skills->Controls->Add(this->txtb_name_skills);
			this->tabp_skills->Controls->Add(this->btn_apply_skills);
			this->tabp_skills->Controls->Add(this->btn_new_skills);
			this->tabp_skills->Controls->Add(this->btn_remove_skills);
			this->tabp_skills->Controls->Add(this->lstv_skills);
			this->tabp_skills->Location = System::Drawing::Point(4, 22);
			this->tabp_skills->Name = S"tabp_skills";
			this->tabp_skills->Size = System::Drawing::Size(662, 514);
			this->tabp_skills->TabIndex = 2;
			this->tabp_skills->Text = S"Skills";
			// 
			// label_information_skills
			// 
			this->label_information_skills->Location = System::Drawing::Point(15, 450);
			this->label_information_skills->Name = S"label_information_skills";
			this->label_information_skills->Size = System::Drawing::Size(85, 20);
			this->label_information_skills->TabIndex = 84;
			this->label_information_skills->Text = S"Information:";
			this->label_information_skills->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_information
			// 
			this->txtb_information->Location = System::Drawing::Point(105, 450);
			this->txtb_information->Multiline = true;
			this->txtb_information->Name = S"txtb_information";
			this->txtb_information->Size = System::Drawing::Size(445, 50);
			this->txtb_information->TabIndex = 83;
			this->txtb_information->Text = S"";
			// 
			// chk_armor_check_penalty
			// 
			this->chk_armor_check_penalty->Location = System::Drawing::Point(370, 425);
			this->chk_armor_check_penalty->Name = S"chk_armor_check_penalty";
			this->chk_armor_check_penalty->Size = System::Drawing::Size(175, 20);
			this->chk_armor_check_penalty->TabIndex = 82;
			this->chk_armor_check_penalty->Text = S"Armor Check Penalty";
			// 
			// ckb_use_untrained_skills
			// 
			this->ckb_use_untrained_skills->Location = System::Drawing::Point(225, 425);
			this->ckb_use_untrained_skills->Name = S"ckb_use_untrained_skills";
			this->ckb_use_untrained_skills->Size = System::Drawing::Size(125, 20);
			this->ckb_use_untrained_skills->TabIndex = 81;
			this->ckb_use_untrained_skills->Text = S"Use Untranied";
			// 
			// comb_ability_skills
			// 
			this->comb_ability_skills->Location = System::Drawing::Point(105, 425);
			this->comb_ability_skills->Name = S"comb_ability_skills";
			this->comb_ability_skills->Size = System::Drawing::Size(105, 21);
			this->comb_ability_skills->TabIndex = 80;
			// 
			// label_ability_skills
			// 
			this->label_ability_skills->Location = System::Drawing::Point(15, 425);
			this->label_ability_skills->Name = S"label_ability_skills";
			this->label_ability_skills->Size = System::Drawing::Size(85, 20);
			this->label_ability_skills->TabIndex = 79;
			this->label_ability_skills->Text = S"Ability:";
			this->label_ability_skills->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_name_skills
			// 
			this->label_name_skills->Location = System::Drawing::Point(15, 400);
			this->label_name_skills->Name = S"label_name_skills";
			this->label_name_skills->Size = System::Drawing::Size(85, 20);
			this->label_name_skills->TabIndex = 78;
			this->label_name_skills->Text = S"Name:";
			this->label_name_skills->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_name_skills
			// 
			this->txtb_name_skills->Location = System::Drawing::Point(105, 400);
			this->txtb_name_skills->Name = S"txtb_name_skills";
			this->txtb_name_skills->Size = System::Drawing::Size(545, 20);
			this->txtb_name_skills->TabIndex = 77;
			this->txtb_name_skills->Text = S"";
			// 
			// btn_apply_skills
			// 
			this->btn_apply_skills->Location = System::Drawing::Point(580, 485);
			this->btn_apply_skills->Name = S"btn_apply_skills";
			this->btn_apply_skills->TabIndex = 7;
			this->btn_apply_skills->Text = S"Apply";
			// 
			// btn_new_skills
			// 
			this->btn_new_skills->Location = System::Drawing::Point(580, 365);
			this->btn_new_skills->Name = S"btn_new_skills";
			this->btn_new_skills->TabIndex = 6;
			this->btn_new_skills->Text = S"New";
			// 
			// btn_remove_skills
			// 
			this->btn_remove_skills->Location = System::Drawing::Point(495, 365);
			this->btn_remove_skills->Name = S"btn_remove_skills";
			this->btn_remove_skills->TabIndex = 5;
			this->btn_remove_skills->Text = S"Remove";
			// 
			// lstv_skills
			// 
			this->lstv_skills->Location = System::Drawing::Point(10, 10);
			this->lstv_skills->Name = S"lstv_skills";
			this->lstv_skills->Size = System::Drawing::Size(645, 345);
			this->lstv_skills->TabIndex = 4;
			this->lstv_skills->View = System::Windows::Forms::View::Details;
			// 
			// tabp_languages
			// 
			this->tabp_languages->Controls->Add(this->comb_languages_type);
			this->tabp_languages->Controls->Add(this->label_languages_type);
			this->tabp_languages->Controls->Add(this->label_languages_information);
			this->tabp_languages->Controls->Add(this->txtb_languages_information);
			this->tabp_languages->Controls->Add(this->label_languages_name);
			this->tabp_languages->Controls->Add(this->txtb_languages_name);
			this->tabp_languages->Controls->Add(this->btn_languages_new);
			this->tabp_languages->Controls->Add(this->btn_languages_remove);
			this->tabp_languages->Controls->Add(this->lstv_languages);
			this->tabp_languages->Controls->Add(this->btn_languages_apply);
			this->tabp_languages->Location = System::Drawing::Point(4, 22);
			this->tabp_languages->Name = S"tabp_languages";
			this->tabp_languages->Size = System::Drawing::Size(662, 514);
			this->tabp_languages->TabIndex = 6;
			this->tabp_languages->Text = S"Languages";
			// 
			// comb_languages_type
			// 
			this->comb_languages_type->Location = System::Drawing::Point(105, 425);
			this->comb_languages_type->Name = S"comb_languages_type";
			this->comb_languages_type->Size = System::Drawing::Size(180, 21);
			this->comb_languages_type->TabIndex = 108;
			// 
			// label_languages_type
			// 
			this->label_languages_type->Location = System::Drawing::Point(15, 425);
			this->label_languages_type->Name = S"label_languages_type";
			this->label_languages_type->Size = System::Drawing::Size(85, 20);
			this->label_languages_type->TabIndex = 107;
			this->label_languages_type->Text = S"Type:";
			this->label_languages_type->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_languages_information
			// 
			this->label_languages_information->Location = System::Drawing::Point(14, 450);
			this->label_languages_information->Name = S"label_languages_information";
			this->label_languages_information->Size = System::Drawing::Size(85, 20);
			this->label_languages_information->TabIndex = 91;
			this->label_languages_information->Text = S"Information:";
			this->label_languages_information->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_languages_information
			// 
			this->txtb_languages_information->Location = System::Drawing::Point(105, 450);
			this->txtb_languages_information->Multiline = true;
			this->txtb_languages_information->Name = S"txtb_languages_information";
			this->txtb_languages_information->Size = System::Drawing::Size(445, 50);
			this->txtb_languages_information->TabIndex = 90;
			this->txtb_languages_information->Text = S"";
			// 
			// label_languages_name
			// 
			this->label_languages_name->Location = System::Drawing::Point(14, 400);
			this->label_languages_name->Name = S"label_languages_name";
			this->label_languages_name->Size = System::Drawing::Size(85, 20);
			this->label_languages_name->TabIndex = 89;
			this->label_languages_name->Text = S"Name:";
			this->label_languages_name->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_languages_name
			// 
			this->txtb_languages_name->Location = System::Drawing::Point(105, 400);
			this->txtb_languages_name->Name = S"txtb_languages_name";
			this->txtb_languages_name->Size = System::Drawing::Size(545, 20);
			this->txtb_languages_name->TabIndex = 88;
			this->txtb_languages_name->Text = S"";
			// 
			// btn_languages_new
			// 
			this->btn_languages_new->Location = System::Drawing::Point(580, 360);
			this->btn_languages_new->Name = S"btn_languages_new";
			this->btn_languages_new->TabIndex = 87;
			this->btn_languages_new->Text = S"New";
			// 
			// btn_languages_remove
			// 
			this->btn_languages_remove->Location = System::Drawing::Point(495, 360);
			this->btn_languages_remove->Name = S"btn_languages_remove";
			this->btn_languages_remove->TabIndex = 86;
			this->btn_languages_remove->Text = S"Remove";
			// 
			// lstv_languages
			// 
			this->lstv_languages->Location = System::Drawing::Point(10, 10);
			this->lstv_languages->Name = S"lstv_languages";
			this->lstv_languages->Size = System::Drawing::Size(645, 340);
			this->lstv_languages->TabIndex = 85;
			this->lstv_languages->View = System::Windows::Forms::View::Details;
			// 
			// btn_languages_apply
			// 
			this->btn_languages_apply->Location = System::Drawing::Point(580, 485);
			this->btn_languages_apply->Name = S"btn_languages_apply";
			this->btn_languages_apply->TabIndex = 8;
			this->btn_languages_apply->Text = S"Apply";
			// 
			// tabp_class
			// 
			this->tabp_class->Controls->Add(this->tabc_class);
			this->tabp_class->Controls->Add(this->lstb_classes);
			this->tabp_class->Controls->Add(this->btn_class_new);
			this->tabp_class->Controls->Add(this->btn_class_remove);
			this->tabp_class->Controls->Add(this->btn_class_apply);
			this->tabp_class->Location = System::Drawing::Point(4, 22);
			this->tabp_class->Name = S"tabp_class";
			this->tabp_class->Size = System::Drawing::Size(662, 514);
			this->tabp_class->TabIndex = 8;
			this->tabp_class->Text = S"Class";
			// 
			// tabc_class
			// 
			this->tabc_class->Controls->Add(this->tabp_class_bio);
			this->tabc_class->Controls->Add(this->tabp_class_skills);
			this->tabc_class->Controls->Add(this->tabp_class_feats);
			this->tabc_class->Controls->Add(this->tabp_class_spells);
			this->tabc_class->Controls->Add(this->tabp_class_specials);
			this->tabc_class->Location = System::Drawing::Point(195, 10);
			this->tabc_class->Name = S"tabc_class";
			this->tabc_class->SelectedIndex = 0;
			this->tabc_class->Size = System::Drawing::Size(455, 465);
			this->tabc_class->TabIndex = 20;
			// 
			// tabp_class_bio
			// 
			this->tabp_class_bio->Controls->Add(this->grpb_class_bio_abilities);
			this->tabp_class_bio->Controls->Add(this->grpb_class_bio_attacks);
			this->tabp_class_bio->Controls->Add(this->grpb_class_bio_saves);
			this->tabp_class_bio->Controls->Add(this->comb_class_bio_alignment);
			this->tabp_class_bio->Controls->Add(this->comb_class_bio_alignment_type);
			this->tabp_class_bio->Controls->Add(this->comb_class_bio_type);
			this->tabp_class_bio->Controls->Add(this->nud_class_bio_hit_die);
			this->tabp_class_bio->Controls->Add(this->comb_class_bio_hit_die);
			this->tabp_class_bio->Controls->Add(this->label_class_bio_hit_die);
			this->tabp_class_bio->Controls->Add(this->txtb_class_bio_name);
			this->tabp_class_bio->Controls->Add(this->label_class_bio_description);
			this->tabp_class_bio->Controls->Add(this->label_class_bio_alignment);
			this->tabp_class_bio->Controls->Add(this->label_class_bio_type);
			this->tabp_class_bio->Controls->Add(this->label_class_bio_name);
			this->tabp_class_bio->Controls->Add(this->txtb_class_bio_description);
			this->tabp_class_bio->Location = System::Drawing::Point(4, 22);
			this->tabp_class_bio->Name = S"tabp_class_bio";
			this->tabp_class_bio->Size = System::Drawing::Size(447, 439);
			this->tabp_class_bio->TabIndex = 0;
			this->tabp_class_bio->Text = S"Bio";
			// 
			// grpb_class_bio_abilities
			// 
			this->grpb_class_bio_abilities->Controls->Add(this->btn_class_bio_abilities_remove);
			this->grpb_class_bio_abilities->Controls->Add(this->btn_class_bio_abilities_add);
			this->grpb_class_bio_abilities->Controls->Add(this->lstb_class_bio_abilities);
			this->grpb_class_bio_abilities->Controls->Add(this->comb_class_bio_abilities);
			this->grpb_class_bio_abilities->Location = System::Drawing::Point(5, 175);
			this->grpb_class_bio_abilities->Name = S"grpb_class_bio_abilities";
			this->grpb_class_bio_abilities->Size = System::Drawing::Size(345, 120);
			this->grpb_class_bio_abilities->TabIndex = 57;
			this->grpb_class_bio_abilities->TabStop = false;
			this->grpb_class_bio_abilities->Text = S"Primary Abilities";
			// 
			// btn_class_bio_abilities_remove
			// 
			this->btn_class_bio_abilities_remove->Location = System::Drawing::Point(70, 55);
			this->btn_class_bio_abilities_remove->Name = S"btn_class_bio_abilities_remove";
			this->btn_class_bio_abilities_remove->TabIndex = 12;
			this->btn_class_bio_abilities_remove->Text = S"Remove";
			// 
			// btn_class_bio_abilities_add
			// 
			this->btn_class_bio_abilities_add->Location = System::Drawing::Point(70, 25);
			this->btn_class_bio_abilities_add->Name = S"btn_class_bio_abilities_add";
			this->btn_class_bio_abilities_add->TabIndex = 12;
			this->btn_class_bio_abilities_add->Text = S"Add";
			// 
			// lstb_class_bio_abilities
			// 
			this->lstb_class_bio_abilities->Location = System::Drawing::Point(160, 25);
			this->lstb_class_bio_abilities->Name = S"lstb_class_bio_abilities";
			this->lstb_class_bio_abilities->Size = System::Drawing::Size(175, 82);
			this->lstb_class_bio_abilities->TabIndex = 13;
			// 
			// comb_class_bio_abilities
			// 
			this->comb_class_bio_abilities->Location = System::Drawing::Point(10, 25);
			this->comb_class_bio_abilities->Name = S"comb_class_bio_abilities";
			this->comb_class_bio_abilities->Size = System::Drawing::Size(50, 21);
			this->comb_class_bio_abilities->TabIndex = 11;
			this->comb_class_bio_abilities->Text = S"STR";
			// 
			// grpb_class_bio_attacks
			// 
			this->grpb_class_bio_attacks->Controls->Add(this->label_class_bio_attacks);
			this->grpb_class_bio_attacks->Controls->Add(this->comb_class_bio_attacks);
			this->grpb_class_bio_attacks->Location = System::Drawing::Point(285, 305);
			this->grpb_class_bio_attacks->Name = S"grpb_class_bio_attacks";
			this->grpb_class_bio_attacks->Size = System::Drawing::Size(155, 65);
			this->grpb_class_bio_attacks->TabIndex = 56;
			this->grpb_class_bio_attacks->TabStop = false;
			this->grpb_class_bio_attacks->Text = S"Attacks";
			// 
			// label_class_bio_attacks
			// 
			this->label_class_bio_attacks->Location = System::Drawing::Point(5, 30);
			this->label_class_bio_attacks->Name = S"label_class_bio_attacks";
			this->label_class_bio_attacks->Size = System::Drawing::Size(70, 20);
			this->label_class_bio_attacks->TabIndex = 4;
			this->label_class_bio_attacks->Text = S"Base Attack:";
			this->label_class_bio_attacks->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comb_class_bio_attacks
			// 
			this->comb_class_bio_attacks->Location = System::Drawing::Point(85, 30);
			this->comb_class_bio_attacks->Name = S"comb_class_bio_attacks";
			this->comb_class_bio_attacks->Size = System::Drawing::Size(60, 21);
			this->comb_class_bio_attacks->TabIndex = 14;
			this->comb_class_bio_attacks->Text = S"Good";
			// 
			// grpb_class_bio_saves
			// 
			this->grpb_class_bio_saves->Controls->Add(this->label_class_bio_saves);
			this->grpb_class_bio_saves->Controls->Add(this->label_class_bio_saves_will);
			this->grpb_class_bio_saves->Controls->Add(this->ckb_class_bio_saves_will);
			this->grpb_class_bio_saves->Controls->Add(this->label_class_bio_svaes_ref);
			this->grpb_class_bio_saves->Controls->Add(this->ckb_class_bio_saves_fort);
			this->grpb_class_bio_saves->Controls->Add(this->label_class_bio_saves_fort);
			this->grpb_class_bio_saves->Controls->Add(this->ckb_class_bio_saves_ref);
			this->grpb_class_bio_saves->Location = System::Drawing::Point(5, 305);
			this->grpb_class_bio_saves->Name = S"grpb_class_bio_saves";
			this->grpb_class_bio_saves->Size = System::Drawing::Size(270, 65);
			this->grpb_class_bio_saves->TabIndex = 55;
			this->grpb_class_bio_saves->TabStop = false;
			this->grpb_class_bio_saves->Text = S"Saving Throws";
			// 
			// label_class_bio_saves
			// 
			this->label_class_bio_saves->Location = System::Drawing::Point(10, 35);
			this->label_class_bio_saves->Name = S"label_class_bio_saves";
			this->label_class_bio_saves->Size = System::Drawing::Size(75, 20);
			this->label_class_bio_saves->TabIndex = 48;
			this->label_class_bio_saves->Text = S"Good Throws:";
			this->label_class_bio_saves->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_class_bio_saves_will
			// 
			this->label_class_bio_saves_will->Location = System::Drawing::Point(205, 20);
			this->label_class_bio_saves_will->Name = S"label_class_bio_saves_will";
			this->label_class_bio_saves_will->Size = System::Drawing::Size(45, 15);
			this->label_class_bio_saves_will->TabIndex = 51;
			this->label_class_bio_saves_will->Text = S"WILL";
			this->label_class_bio_saves_will->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// ckb_class_bio_saves_will
			// 
			this->ckb_class_bio_saves_will->Checked = true;
			this->ckb_class_bio_saves_will->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_class_bio_saves_will->Location = System::Drawing::Point(220, 40);
			this->ckb_class_bio_saves_will->Name = S"ckb_class_bio_saves_will";
			this->ckb_class_bio_saves_will->Size = System::Drawing::Size(20, 15);
			this->ckb_class_bio_saves_will->TabIndex = 46;
			// 
			// label_class_bio_svaes_ref
			// 
			this->label_class_bio_svaes_ref->Location = System::Drawing::Point(145, 20);
			this->label_class_bio_svaes_ref->Name = S"label_class_bio_svaes_ref";
			this->label_class_bio_svaes_ref->Size = System::Drawing::Size(45, 15);
			this->label_class_bio_svaes_ref->TabIndex = 50;
			this->label_class_bio_svaes_ref->Text = S"REF";
			this->label_class_bio_svaes_ref->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// ckb_class_bio_saves_fort
			// 
			this->ckb_class_bio_saves_fort->Checked = true;
			this->ckb_class_bio_saves_fort->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_class_bio_saves_fort->Location = System::Drawing::Point(100, 40);
			this->ckb_class_bio_saves_fort->Name = S"ckb_class_bio_saves_fort";
			this->ckb_class_bio_saves_fort->Size = System::Drawing::Size(20, 15);
			this->ckb_class_bio_saves_fort->TabIndex = 47;
			// 
			// label_class_bio_saves_fort
			// 
			this->label_class_bio_saves_fort->Location = System::Drawing::Point(85, 20);
			this->label_class_bio_saves_fort->Name = S"label_class_bio_saves_fort";
			this->label_class_bio_saves_fort->Size = System::Drawing::Size(45, 15);
			this->label_class_bio_saves_fort->TabIndex = 49;
			this->label_class_bio_saves_fort->Text = S"FORT";
			this->label_class_bio_saves_fort->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// ckb_class_bio_saves_ref
			// 
			this->ckb_class_bio_saves_ref->Checked = true;
			this->ckb_class_bio_saves_ref->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_class_bio_saves_ref->Location = System::Drawing::Point(160, 40);
			this->ckb_class_bio_saves_ref->Name = S"ckb_class_bio_saves_ref";
			this->ckb_class_bio_saves_ref->Size = System::Drawing::Size(20, 15);
			this->ckb_class_bio_saves_ref->TabIndex = 45;
			// 
			// comb_class_bio_alignment
			// 
			this->comb_class_bio_alignment->Location = System::Drawing::Point(185, 85);
			this->comb_class_bio_alignment->Name = S"comb_class_bio_alignment";
			this->comb_class_bio_alignment->Size = System::Drawing::Size(80, 21);
			this->comb_class_bio_alignment->TabIndex = 14;
			this->comb_class_bio_alignment->Text = S"Lawful Good";
			// 
			// comb_class_bio_alignment_type
			// 
			this->comb_class_bio_alignment_type->Location = System::Drawing::Point(105, 85);
			this->comb_class_bio_alignment_type->Name = S"comb_class_bio_alignment_type";
			this->comb_class_bio_alignment_type->Size = System::Drawing::Size(80, 21);
			this->comb_class_bio_alignment_type->TabIndex = 13;
			this->comb_class_bio_alignment_type->Text = S"Always";
			// 
			// comb_class_bio_type
			// 
			this->comb_class_bio_type->Location = System::Drawing::Point(105, 60);
			this->comb_class_bio_type->Name = S"comb_class_bio_type";
			this->comb_class_bio_type->Size = System::Drawing::Size(121, 21);
			this->comb_class_bio_type->TabIndex = 12;
			this->comb_class_bio_type->Text = S"Magic User";
			// 
			// nud_class_bio_hit_die
			// 
			this->nud_class_bio_hit_die->Location = System::Drawing::Point(105, 35);
			this->nud_class_bio_hit_die->Name = S"nud_class_bio_hit_die";
			this->nud_class_bio_hit_die->Size = System::Drawing::Size(45, 20);
			this->nud_class_bio_hit_die->TabIndex = 11;
			// 
			// comb_class_bio_hit_die
			// 
			this->comb_class_bio_hit_die->Location = System::Drawing::Point(155, 35);
			this->comb_class_bio_hit_die->Name = S"comb_class_bio_hit_die";
			this->comb_class_bio_hit_die->Size = System::Drawing::Size(50, 21);
			this->comb_class_bio_hit_die->TabIndex = 10;
			this->comb_class_bio_hit_die->Text = S"d1";
			// 
			// label_class_bio_hit_die
			// 
			this->label_class_bio_hit_die->Location = System::Drawing::Point(5, 35);
			this->label_class_bio_hit_die->Name = S"label_class_bio_hit_die";
			this->label_class_bio_hit_die->Size = System::Drawing::Size(100, 20);
			this->label_class_bio_hit_die->TabIndex = 9;
			this->label_class_bio_hit_die->Text = S"Hit Die:";
			this->label_class_bio_hit_die->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_class_bio_name
			// 
			this->txtb_class_bio_name->Location = System::Drawing::Point(105, 10);
			this->txtb_class_bio_name->Name = S"txtb_class_bio_name";
			this->txtb_class_bio_name->Size = System::Drawing::Size(335, 20);
			this->txtb_class_bio_name->TabIndex = 5;
			this->txtb_class_bio_name->Text = S"";
			// 
			// label_class_bio_description
			// 
			this->label_class_bio_description->Location = System::Drawing::Point(5, 110);
			this->label_class_bio_description->Name = S"label_class_bio_description";
			this->label_class_bio_description->Size = System::Drawing::Size(100, 20);
			this->label_class_bio_description->TabIndex = 4;
			this->label_class_bio_description->Text = S"Description:";
			this->label_class_bio_description->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_class_bio_alignment
			// 
			this->label_class_bio_alignment->Location = System::Drawing::Point(5, 85);
			this->label_class_bio_alignment->Name = S"label_class_bio_alignment";
			this->label_class_bio_alignment->Size = System::Drawing::Size(100, 20);
			this->label_class_bio_alignment->TabIndex = 3;
			this->label_class_bio_alignment->Text = S"Alignment:";
			this->label_class_bio_alignment->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_class_bio_type
			// 
			this->label_class_bio_type->Location = System::Drawing::Point(5, 60);
			this->label_class_bio_type->Name = S"label_class_bio_type";
			this->label_class_bio_type->Size = System::Drawing::Size(100, 20);
			this->label_class_bio_type->TabIndex = 2;
			this->label_class_bio_type->Text = S"Class Type:";
			this->label_class_bio_type->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_class_bio_name
			// 
			this->label_class_bio_name->Location = System::Drawing::Point(5, 10);
			this->label_class_bio_name->Name = S"label_class_bio_name";
			this->label_class_bio_name->Size = System::Drawing::Size(100, 20);
			this->label_class_bio_name->TabIndex = 0;
			this->label_class_bio_name->Text = S"Name:";
			this->label_class_bio_name->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_class_bio_description
			// 
			this->txtb_class_bio_description->Location = System::Drawing::Point(105, 110);
			this->txtb_class_bio_description->Multiline = true;
			this->txtb_class_bio_description->Name = S"txtb_class_bio_description";
			this->txtb_class_bio_description->Size = System::Drawing::Size(335, 60);
			this->txtb_class_bio_description->TabIndex = 5;
			this->txtb_class_bio_description->Text = S"";
			// 
			// tabp_class_skills
			// 
			this->tabp_class_skills->Controls->Add(this->label_class_skills);
			this->tabp_class_skills->Controls->Add(this->label_class_skills_every_right);
			this->tabp_class_skills->Controls->Add(this->label_class_skills_every);
			this->tabp_class_skills->Controls->Add(this->nud_class_skills_every);
			this->tabp_class_skills->Controls->Add(this->label_class_skills_first_left);
			this->tabp_class_skills->Controls->Add(this->label_class_skills_first_right);
			this->tabp_class_skills->Controls->Add(this->label_class_skills_first);
			this->tabp_class_skills->Controls->Add(this->nud_class_skills_first);
			this->tabp_class_skills->Controls->Add(this->btn_class_skills_remove);
			this->tabp_class_skills->Controls->Add(this->btn_class_skills_add);
			this->tabp_class_skills->Controls->Add(this->lstb_class_skills_known);
			this->tabp_class_skills->Controls->Add(this->lstb_class_skills);
			this->tabp_class_skills->Location = System::Drawing::Point(4, 22);
			this->tabp_class_skills->Name = S"tabp_class_skills";
			this->tabp_class_skills->Size = System::Drawing::Size(447, 439);
			this->tabp_class_skills->TabIndex = 2;
			this->tabp_class_skills->Text = S"Skills";
			// 
			// label_class_skills
			// 
			this->label_class_skills->Location = System::Drawing::Point(10, 5);
			this->label_class_skills->Name = S"label_class_skills";
			this->label_class_skills->Size = System::Drawing::Size(130, 15);
			this->label_class_skills->TabIndex = 21;
			this->label_class_skills->Text = S"Class Skills:";
			this->label_class_skills->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_class_skills_every_right
			// 
			this->label_class_skills_every_right->Location = System::Drawing::Point(360, 380);
			this->label_class_skills_every_right->Name = S"label_class_skills_every_right";
			this->label_class_skills_every_right->Size = System::Drawing::Size(60, 20);
			this->label_class_skills_every_right->TabIndex = 20;
			this->label_class_skills_every_right->Text = S"+ INT";
			this->label_class_skills_every_right->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_class_skills_every
			// 
			this->label_class_skills_every->Location = System::Drawing::Point(280, 355);
			this->label_class_skills_every->Name = S"label_class_skills_every";
			this->label_class_skills_every->Size = System::Drawing::Size(140, 15);
			this->label_class_skills_every->TabIndex = 19;
			this->label_class_skills_every->Text = S"Skill Points as Each Level:";
			this->label_class_skills_every->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nud_class_skills_every
			// 
			this->nud_class_skills_every->Location = System::Drawing::Point(320, 380);
			this->nud_class_skills_every->Name = S"nud_class_skills_every";
			this->nud_class_skills_every->Size = System::Drawing::Size(40, 20);
			this->nud_class_skills_every->TabIndex = 18;
			// 
			// label_class_skills_first_left
			// 
			this->label_class_skills_first_left->Location = System::Drawing::Point(305, 315);
			this->label_class_skills_first_left->Name = S"label_class_skills_first_left";
			this->label_class_skills_first_left->Size = System::Drawing::Size(12, 20);
			this->label_class_skills_first_left->TabIndex = 17;
			this->label_class_skills_first_left->Text = S"(";
			this->label_class_skills_first_left->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_class_skills_first_right
			// 
			this->label_class_skills_first_right->Location = System::Drawing::Point(360, 315);
			this->label_class_skills_first_right->Name = S"label_class_skills_first_right";
			this->label_class_skills_first_right->Size = System::Drawing::Size(60, 20);
			this->label_class_skills_first_right->TabIndex = 16;
			this->label_class_skills_first_right->Text = S"+ INT ) x 4";
			this->label_class_skills_first_right->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_class_skills_first
			// 
			this->label_class_skills_first->Location = System::Drawing::Point(280, 290);
			this->label_class_skills_first->Name = S"label_class_skills_first";
			this->label_class_skills_first->Size = System::Drawing::Size(130, 15);
			this->label_class_skills_first->TabIndex = 14;
			this->label_class_skills_first->Text = S"Skill Points as 1st Level:";
			this->label_class_skills_first->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// nud_class_skills_first
			// 
			this->nud_class_skills_first->Location = System::Drawing::Point(320, 315);
			this->nud_class_skills_first->Name = S"nud_class_skills_first";
			this->nud_class_skills_first->Size = System::Drawing::Size(40, 20);
			this->nud_class_skills_first->TabIndex = 12;
			// 
			// btn_class_skills_remove
			// 
			this->btn_class_skills_remove->Location = System::Drawing::Point(190, 55);
			this->btn_class_skills_remove->Name = S"btn_class_skills_remove";
			this->btn_class_skills_remove->TabIndex = 11;
			this->btn_class_skills_remove->Text = S"Remove";
			// 
			// btn_class_skills_add
			// 
			this->btn_class_skills_add->Location = System::Drawing::Point(190, 25);
			this->btn_class_skills_add->Name = S"btn_class_skills_add";
			this->btn_class_skills_add->TabIndex = 10;
			this->btn_class_skills_add->Text = S"Add";
			// 
			// lstb_class_skills_known
			// 
			this->lstb_class_skills_known->Location = System::Drawing::Point(280, 25);
			this->lstb_class_skills_known->Name = S"lstb_class_skills_known";
			this->lstb_class_skills_known->Size = System::Drawing::Size(160, 225);
			this->lstb_class_skills_known->TabIndex = 9;
			// 
			// lstb_class_skills
			// 
			this->lstb_class_skills->Location = System::Drawing::Point(10, 25);
			this->lstb_class_skills->Name = S"lstb_class_skills";
			this->lstb_class_skills->Size = System::Drawing::Size(160, 394);
			this->lstb_class_skills->TabIndex = 8;
			// 
			// tabp_class_feats
			// 
			this->tabp_class_feats->Controls->Add(this->label_class_feats);
			this->tabp_class_feats->Controls->Add(this->btn_class_feats_remove);
			this->tabp_class_feats->Controls->Add(this->btn_class_feats_add);
			this->tabp_class_feats->Controls->Add(this->lstb_class_feats_known);
			this->tabp_class_feats->Controls->Add(this->lstb_class_feats);
			this->tabp_class_feats->Location = System::Drawing::Point(4, 22);
			this->tabp_class_feats->Name = S"tabp_class_feats";
			this->tabp_class_feats->Size = System::Drawing::Size(447, 439);
			this->tabp_class_feats->TabIndex = 3;
			this->tabp_class_feats->Text = S"Feats";
			// 
			// label_class_feats
			// 
			this->label_class_feats->Location = System::Drawing::Point(10, 5);
			this->label_class_feats->Name = S"label_class_feats";
			this->label_class_feats->Size = System::Drawing::Size(130, 15);
			this->label_class_feats->TabIndex = 26;
			this->label_class_feats->Text = S"Bonus Feats:";
			this->label_class_feats->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btn_class_feats_remove
			// 
			this->btn_class_feats_remove->Location = System::Drawing::Point(190, 55);
			this->btn_class_feats_remove->Name = S"btn_class_feats_remove";
			this->btn_class_feats_remove->TabIndex = 25;
			this->btn_class_feats_remove->Text = S"Remove";
			// 
			// btn_class_feats_add
			// 
			this->btn_class_feats_add->Location = System::Drawing::Point(190, 25);
			this->btn_class_feats_add->Name = S"btn_class_feats_add";
			this->btn_class_feats_add->TabIndex = 24;
			this->btn_class_feats_add->Text = S"Add";
			// 
			// lstb_class_feats_known
			// 
			this->lstb_class_feats_known->Location = System::Drawing::Point(280, 25);
			this->lstb_class_feats_known->Name = S"lstb_class_feats_known";
			this->lstb_class_feats_known->Size = System::Drawing::Size(160, 225);
			this->lstb_class_feats_known->TabIndex = 23;
			// 
			// lstb_class_feats
			// 
			this->lstb_class_feats->Location = System::Drawing::Point(10, 25);
			this->lstb_class_feats->Name = S"lstb_class_feats";
			this->lstb_class_feats->Size = System::Drawing::Size(160, 394);
			this->lstb_class_feats->TabIndex = 22;
			// 
			// tabp_class_spells
			// 
			this->tabp_class_spells->Controls->Add(this->comb_class_spells_magic_base);
			this->tabp_class_spells->Controls->Add(this->label_class_spells_magic_base);
			this->tabp_class_spells->Controls->Add(this->comb_class_spells_type);
			this->tabp_class_spells->Controls->Add(this->label_class_spells_type);
			this->tabp_class_spells->Controls->Add(this->label_class_spells);
			this->tabp_class_spells->Controls->Add(this->lstv_class_spells);
			this->tabp_class_spells->Location = System::Drawing::Point(4, 22);
			this->tabp_class_spells->Name = S"tabp_class_spells";
			this->tabp_class_spells->Size = System::Drawing::Size(447, 439);
			this->tabp_class_spells->TabIndex = 4;
			this->tabp_class_spells->Text = S"Spells";
			// 
			// comb_class_spells_magic_base
			// 
			this->comb_class_spells_magic_base->Location = System::Drawing::Point(105, 375);
			this->comb_class_spells_magic_base->Name = S"comb_class_spells_magic_base";
			this->comb_class_spells_magic_base->Size = System::Drawing::Size(55, 21);
			this->comb_class_spells_magic_base->TabIndex = 31;
			this->comb_class_spells_magic_base->Text = S"STR";
			// 
			// label_class_spells_magic_base
			// 
			this->label_class_spells_magic_base->Location = System::Drawing::Point(10, 380);
			this->label_class_spells_magic_base->Name = S"label_class_spells_magic_base";
			this->label_class_spells_magic_base->Size = System::Drawing::Size(95, 15);
			this->label_class_spells_magic_base->TabIndex = 30;
			this->label_class_spells_magic_base->Text = S"Magic Based On:";
			// 
			// comb_class_spells_type
			// 
			this->comb_class_spells_type->Location = System::Drawing::Point(105, 350);
			this->comb_class_spells_type->Name = S"comb_class_spells_type";
			this->comb_class_spells_type->Size = System::Drawing::Size(121, 21);
			this->comb_class_spells_type->TabIndex = 29;
			this->comb_class_spells_type->Text = S"Divine";
			// 
			// label_class_spells_type
			// 
			this->label_class_spells_type->Location = System::Drawing::Point(40, 355);
			this->label_class_spells_type->Name = S"label_class_spells_type";
			this->label_class_spells_type->Size = System::Drawing::Size(65, 15);
			this->label_class_spells_type->TabIndex = 28;
			this->label_class_spells_type->Text = S"Spell Type:";
			// 
			// label_class_spells
			// 
			this->label_class_spells->Location = System::Drawing::Point(10, 5);
			this->label_class_spells->Name = S"label_class_spells";
			this->label_class_spells->Size = System::Drawing::Size(130, 15);
			this->label_class_spells->TabIndex = 27;
			this->label_class_spells->Text = S"Spells Per Day:";
			this->label_class_spells->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// lstv_class_spells
			// 
			System::Windows::Forms::ColumnHeader* __mcTemp__31[] = new System::Windows::Forms::ColumnHeader*[10];
			__mcTemp__31[0] = this->cloh_class_spells_0;
			__mcTemp__31[1] = this->cloh_class_spells_1;
			__mcTemp__31[2] = this->cloh_class_spells_2;
			__mcTemp__31[3] = this->cloh_class_spells_3;
			__mcTemp__31[4] = this->cloh_class_spells_4;
			__mcTemp__31[5] = this->cloh_class_spells_5;
			__mcTemp__31[6] = this->cloh_class_spells_6;
			__mcTemp__31[7] = this->cloh_class_spells_7;
			__mcTemp__31[8] = this->cloh_class_spells_8;
			__mcTemp__31[9] = this->cloh_class_spells_9;
			this->lstv_class_spells->Columns->AddRange(__mcTemp__31);
			this->lstv_class_spells->GridLines = true;
			this->lstv_class_spells->Location = System::Drawing::Point(10, 25);
			this->lstv_class_spells->Name = S"lstv_class_spells";
			this->lstv_class_spells->Size = System::Drawing::Size(355, 320);
			this->lstv_class_spells->TabIndex = 1;
			this->lstv_class_spells->View = System::Windows::Forms::View::Details;
			// 
			// cloh_class_spells_0
			// 
			this->cloh_class_spells_0->Text = S"0";
			this->cloh_class_spells_0->Width = 35;
			// 
			// cloh_class_spells_1
			// 
			this->cloh_class_spells_1->Text = S"1st";
			this->cloh_class_spells_1->Width = 35;
			// 
			// cloh_class_spells_2
			// 
			this->cloh_class_spells_2->Text = S"2nd";
			this->cloh_class_spells_2->Width = 35;
			// 
			// cloh_class_spells_3
			// 
			this->cloh_class_spells_3->Text = S"3rd";
			this->cloh_class_spells_3->Width = 35;
			// 
			// cloh_class_spells_4
			// 
			this->cloh_class_spells_4->Text = S"4th";
			this->cloh_class_spells_4->Width = 35;
			// 
			// cloh_class_spells_5
			// 
			this->cloh_class_spells_5->Text = S"5th";
			this->cloh_class_spells_5->Width = 35;
			// 
			// cloh_class_spells_6
			// 
			this->cloh_class_spells_6->Text = S"6th";
			this->cloh_class_spells_6->Width = 35;
			// 
			// cloh_class_spells_7
			// 
			this->cloh_class_spells_7->Text = S"7th";
			this->cloh_class_spells_7->Width = 35;
			// 
			// cloh_class_spells_8
			// 
			this->cloh_class_spells_8->Text = S"8th";
			this->cloh_class_spells_8->Width = 35;
			// 
			// cloh_class_spells_9
			// 
			this->cloh_class_spells_9->Text = S"9th";
			this->cloh_class_spells_9->Width = 35;
			// 
			// tabp_class_specials
			// 
			this->tabp_class_specials->Controls->Add(this->lstv_class_specials);
			this->tabp_class_specials->Controls->Add(this->nud_class_specials_level);
			this->tabp_class_specials->Controls->Add(this->label_class_specials_level);
			this->tabp_class_specials->Controls->Add(this->label_class_specials);
			this->tabp_class_specials->Controls->Add(this->btn_class_specials_remove);
			this->tabp_class_specials->Controls->Add(this->btn_class_specials_add);
			this->tabp_class_specials->Controls->Add(this->lstb_class_specials);
			this->tabp_class_specials->Location = System::Drawing::Point(4, 22);
			this->tabp_class_specials->Name = S"tabp_class_specials";
			this->tabp_class_specials->Size = System::Drawing::Size(447, 439);
			this->tabp_class_specials->TabIndex = 5;
			this->tabp_class_specials->Text = S"Specials";
			// 
			// lstv_class_specials
			// 
			this->lstv_class_specials->Location = System::Drawing::Point(285, 25);
			this->lstv_class_specials->Name = S"lstv_class_specials";
			this->lstv_class_specials->Size = System::Drawing::Size(155, 410);
			this->lstv_class_specials->TabIndex = 30;
			this->lstv_class_specials->View = System::Windows::Forms::View::Details;
			// 
			// nud_class_specials_level
			// 
			this->nud_class_specials_level->Location = System::Drawing::Point(205, 50);
			this->nud_class_specials_level->Name = S"nud_class_specials_level";
			this->nud_class_specials_level->Size = System::Drawing::Size(45, 20);
			this->nud_class_specials_level->TabIndex = 29;
			// 
			// label_class_specials_level
			// 
			this->label_class_specials_level->Location = System::Drawing::Point(195, 25);
			this->label_class_specials_level->Name = S"label_class_specials_level";
			this->label_class_specials_level->Size = System::Drawing::Size(65, 20);
			this->label_class_specials_level->TabIndex = 28;
			this->label_class_specials_level->Text = S"At Level:";
			this->label_class_specials_level->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_class_specials
			// 
			this->label_class_specials->Location = System::Drawing::Point(10, 5);
			this->label_class_specials->Name = S"label_class_specials";
			this->label_class_specials->Size = System::Drawing::Size(130, 15);
			this->label_class_specials->TabIndex = 27;
			this->label_class_specials->Text = S"Class Specials:";
			this->label_class_specials->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// btn_class_specials_remove
			// 
			this->btn_class_specials_remove->Location = System::Drawing::Point(190, 120);
			this->btn_class_specials_remove->Name = S"btn_class_specials_remove";
			this->btn_class_specials_remove->TabIndex = 25;
			this->btn_class_specials_remove->Text = S"Remove";
			// 
			// btn_class_specials_add
			// 
			this->btn_class_specials_add->Location = System::Drawing::Point(190, 90);
			this->btn_class_specials_add->Name = S"btn_class_specials_add";
			this->btn_class_specials_add->TabIndex = 24;
			this->btn_class_specials_add->Text = S"Add";
			// 
			// lstb_class_specials
			// 
			this->lstb_class_specials->Location = System::Drawing::Point(10, 25);
			this->lstb_class_specials->Name = S"lstb_class_specials";
			this->lstb_class_specials->Size = System::Drawing::Size(160, 407);
			this->lstb_class_specials->TabIndex = 22;
			// 
			// lstb_classes
			// 
			this->lstb_classes->Location = System::Drawing::Point(10, 10);
			this->lstb_classes->Name = S"lstb_classes";
			this->lstb_classes->Size = System::Drawing::Size(175, 498);
			this->lstb_classes->TabIndex = 19;
			// 
			// btn_class_new
			// 
			this->btn_class_new->Location = System::Drawing::Point(195, 485);
			this->btn_class_new->Name = S"btn_class_new";
			this->btn_class_new->TabIndex = 18;
			this->btn_class_new->Text = S"New";
			// 
			// btn_class_remove
			// 
			this->btn_class_remove->Location = System::Drawing::Point(280, 485);
			this->btn_class_remove->Name = S"btn_class_remove";
			this->btn_class_remove->TabIndex = 17;
			this->btn_class_remove->Text = S"Remove";
			// 
			// btn_class_apply
			// 
			this->btn_class_apply->Location = System::Drawing::Point(580, 485);
			this->btn_class_apply->Name = S"btn_class_apply";
			this->btn_class_apply->TabIndex = 16;
			this->btn_class_apply->Text = S"Apply";
			// 
			// btn_close
			// 
			this->btn_close->Location = System::Drawing::Point(590, 560);
			this->btn_close->Name = S"btn_close";
			this->btn_close->TabIndex = 1;
			this->btn_close->Text = S"Close";
			this->btn_close->Click += new System::EventHandler(this, btn_close_Click);
			// 
			// d20_house_rules
			// 
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->ClientSize = System::Drawing::Size(677, 596);
			this->Controls->Add(this->btn_close);
			this->Controls->Add(this->tabc_house_rules);
			this->Name = S"d20_house_rules";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = S"d2o House Rules";
			this->tabc_house_rules->ResumeLayout(false);
			this->tabp_items->ResumeLayout(false);
			this->tabc_items->ResumeLayout(false);
			this->tabp_weapons->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_base_price_weapon))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_inrements_weapon))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_secondary_damage_weapon))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_damage2_weapon))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_items_weapons_weight))->EndInit();
			this->tabp_magic->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_magic_type))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_magic_base_price))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_magic_weight))->EndInit();
			this->tabp_Armor->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_spell_failure_armor))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_max_dex_armor))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_base_price_armor))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_check_penalty))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->dup_armor_bonus))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_weight_armor))->EndInit();
			this->tabp_goods->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->dup_base_price_goods))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_capacity_goods))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_weight_goods))->EndInit();
			this->tabp_race->ResumeLayout(false);
			this->tabc_race->ResumeLayout(false);
			this->tabp_race_racial_traits->ResumeLayout(false);
			this->tabc_racial_traits->ResumeLayout(false);
			this->tabp_racial_traits_physical->ResumeLayout(false);
			this->tabp_racial_traits_stats->ResumeLayout(false);
			this->grpb_racial_traits_speed->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_speed_feet))->EndInit();
			this->grpb_racial_traits_natrual_armor->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_natrual_bonus))->EndInit();
			this->grpb_racial_traits_saves->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_saves_will))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_saves_ref))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_saves_fort))->EndInit();
			this->grpb_racial_traits_ability->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_ability_cha))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_ability_wis))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_ability_int))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_ability_con))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_ability_dex))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_racial_traits_ability_str))->EndInit();
			this->tabp_racial_traits_languages->ResumeLayout(false);
			this->tabp_race_skills->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_race_skills_every))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_race_skills_first))->EndInit();
			this->tabp_race_feats->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_race_feats_every))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_race_feats_first))->EndInit();
			this->tabp_race_special->ResumeLayout(false);
			this->tabp_race_proficiency->ResumeLayout(false);
			this->tabp_spells->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_spells_casting))->EndInit();
			this->tabp_gods->ResumeLayout(false);
			this->tabp_domains->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->dup_data_domains))->EndInit();
			this->tabp_feats->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nup_feats))->EndInit();
			this->tabp_skills->ResumeLayout(false);
			this->tabp_languages->ResumeLayout(false);
			this->tabp_class->ResumeLayout(false);
			this->tabc_class->ResumeLayout(false);
			this->tabp_class_bio->ResumeLayout(false);
			this->grpb_class_bio_abilities->ResumeLayout(false);
			this->grpb_class_bio_attacks->ResumeLayout(false);
			this->grpb_class_bio_saves->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_class_bio_hit_die))->EndInit();
			this->tabp_class_skills->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_class_skills_every))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_class_skills_first))->EndInit();
			this->tabp_class_feats->ResumeLayout(false);
			this->tabp_class_spells->ResumeLayout(false);
			this->tabp_class_specials->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_class_specials_level))->EndInit();
			this->ResumeLayout(false);

		}		




		System::Void btn_close_Click(System::Object *  sender, System::EventArgs *  e)
				{
					//  Close the current form
					this->Close();
				}

		System::Void comb_weapon_use_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void tabc_house_rules_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void label_strength_bonus_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void button5_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void label45_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void comboBox36_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void comb_target_feats_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void label71_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void label61_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_remove_spells_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void label_alignment_gods_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void textBox19_TextChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void button18_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void textBox21_TextChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}



};
}