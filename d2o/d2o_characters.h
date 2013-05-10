#pragma once
#include "d2o_new_items.h"
#include "d2o_misc.h"
#include "profile.h"
#include "utilities.h"

namespace d2o
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;


	/// <summary> 
	/// Summary for d2o_characters
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public __gc class d2o_characters : public System::Windows::Forms::Form
	{
	public: 
		d2o_characters(void)
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
		profile * character_details;
		System::Windows::Forms::GroupBox *  grpb_classes;
		System::Windows::Forms::GroupBox *  grpb_level;
		System::Windows::Forms::TextBox *  txtb_level;
		System::Windows::Forms::GroupBox *  grpb_alignment;
		System::Windows::Forms::TextBox *  txtb_alignment;
		System::Windows::Forms::GroupBox *  grpb_gender;
		System::Windows::Forms::GroupBox *  grpb_size;
		System::Windows::Forms::TextBox *  txtb_size;
		System::Windows::Forms::GroupBox *  grpb_race;
		System::Windows::Forms::TextBox *  txtb_race;
		System::Windows::Forms::ComboBox *  comb_classes;
		System::Windows::Forms::MainMenu *  mnu_flie;
		System::Windows::Forms::MenuItem *  mnu_flie_title;
		System::Windows::Forms::ComboBox *  comb_gender;
		System::Windows::Forms::Label *  label_class_requirements;
		System::Windows::Forms::Button *  btn_add_class;
		System::Windows::Forms::ListView *  lstv_class_list;
		System::Windows::Forms::ListView *  lstv_class_level;
		System::Windows::Forms::Button *  btn_remove_class;
		System::Windows::Forms::Label *  label_race_benifits;
		System::Windows::Forms::ComboBox *  comb_alignment_selector;
		System::Windows::Forms::ComboBox *  comb_race_selector;
		System::Windows::Forms::Button *  btn_class_ok;
		System::Windows::Forms::Button *  btn_class_cancel;
		System::Windows::Forms::Label *  label_class_description;
		System::Windows::Forms::Label *  label_race_description;
		System::Windows::Forms::Label *  label_init_user;
		System::Windows::Forms::Label *  label_init_magic;
		System::Windows::Forms::Label *  label_init_feats;
		System::Windows::Forms::Label *  label_init_mod;
		System::Windows::Forms::Label *  label_init_plus_3;
		System::Windows::Forms::Label *  label_init_plus_2;
		System::Windows::Forms::Label *  label_init_plus_1;
		System::Windows::Forms::Label *  label_init_equals;
		System::Windows::Forms::NumericUpDown *  nud_init_user;
		System::Windows::Forms::TextBox *  txtb_init_magic;
		System::Windows::Forms::TextBox *  txtb_init_feats;
		System::Windows::Forms::TextBox *  txtb_init_mod;
		System::Windows::Forms::TextBox *  txtb_init_total;
		System::Windows::Forms::Label *  label_init;
		System::Windows::Forms::Label *  label_base_speed;
		System::Windows::Forms::TextBox *  txtb_base_speed;
		System::Windows::Forms::Label *  label_fort_equals;
		System::Windows::Forms::TextBox *  txtb_fort_total;
		System::Windows::Forms::Label *  label_fort;
		System::Windows::Forms::Label *  label_saves_mod;
		System::Windows::Forms::Label *  label_saves_base;
		System::Windows::Forms::Label *  label_fort_plus_2;
		System::Windows::Forms::Label *  label_fort_plus_1;
		System::Windows::Forms::Label *  label_saves_user;
		System::Windows::Forms::Label *  label_saves_misc;
		System::Windows::Forms::Label *  label_saves_magic;
		System::Windows::Forms::Label *  label_saves_race;
		System::Windows::Forms::Label *  label_fort_plus_5;
		System::Windows::Forms::Label *  label_fort_plus_4;
		System::Windows::Forms::Label *  label_fort_plus_3;
		System::Windows::Forms::Label *  label_will_plus_2;
		System::Windows::Forms::Label *  label_will_plus_1;
		System::Windows::Forms::Label *  label_ref_plus_2;
		System::Windows::Forms::Label *  label_ref_plus_1;
		System::Windows::Forms::TextBox *  txtb_fort_mod;
		System::Windows::Forms::TextBox *  txtb_fort_base;
		System::Windows::Forms::Label *  label_will_plus_5;
		System::Windows::Forms::Label *  label_will_plus_4;
		System::Windows::Forms::Label *  label_will_plus_3;
		System::Windows::Forms::Label *  label_will_equals;
		System::Windows::Forms::Label *  label_ref_plus_5;
		System::Windows::Forms::Label *  label_ref_plus_4;
		System::Windows::Forms::Label *  label_ref_plus_3;
		System::Windows::Forms::Label *  label_ref_equals;
		System::Windows::Forms::NumericUpDown *  nud_ref_user;
		System::Windows::Forms::NumericUpDown *  nud_fort_user;
		System::Windows::Forms::TextBox *  txtb_fort_misc;
		System::Windows::Forms::TextBox *  txtb_fort_magic;
		System::Windows::Forms::TextBox *  txtb_fort_race;
		System::Windows::Forms::TextBox *  txtb_ref_base;
		System::Windows::Forms::TextBox *  txtb_ref_misc;
		System::Windows::Forms::TextBox *  txtb_ref_total;
		System::Windows::Forms::Label *  label_ac_mod;
		System::Windows::Forms::Label *  label_ac_natural;
		System::Windows::Forms::Label *  label_ac_base;
		System::Windows::Forms::TextBox *  txtb_ac_mod;
		System::Windows::Forms::TextBox *  txtb_ac_natural;
		System::Windows::Forms::TextBox *  txtb_ac_base;
		System::Windows::Forms::TextBox *  txtb_will_mod;
		System::Windows::Forms::TextBox *  txtb_will_base;
		System::Windows::Forms::TextBox *  txtb_ref_mod;
		System::Windows::Forms::Label *  label_ac_user;
		System::Windows::Forms::Label *  label_ac_misc;
		System::Windows::Forms::Label *  label_ac_magic;
		System::Windows::Forms::Label *  label_ac_armor;
		System::Windows::Forms::Label *  label_ac_equals;
		System::Windows::Forms::NumericUpDown *  nud_ac_user;
		System::Windows::Forms::TextBox *  txtb_ac_misc;
		System::Windows::Forms::TextBox *  txtb_ac_magic;
		System::Windows::Forms::TextBox *  txtb_ac_armor;
		System::Windows::Forms::TextBox *  txtb_ac_total;
		System::Windows::Forms::Label *  label_ac;
		System::Windows::Forms::NumericUpDown *  nud_will_user;
		System::Windows::Forms::TextBox *  txtb_will_misc;
		System::Windows::Forms::TextBox *  txtb_will_magic;
		System::Windows::Forms::TextBox *  txtb_will_race;
		System::Windows::Forms::TextBox *  txtb_will_total;
		System::Windows::Forms::TextBox *  txtb_ref_magic;
		System::Windows::Forms::TextBox *  txtb_ref_race;
		System::Windows::Forms::Label *  label_attack_misc;
		System::Windows::Forms::Label *  label_melee_plus_4;
		System::Windows::Forms::TextBox *  txtb_melee_misc;
		System::Windows::Forms::Label *  label_ac_plus_3;
		System::Windows::Forms::Label *  label_ac_plus_2;
		System::Windows::Forms::Label *  label_ac_plus_1;
		System::Windows::Forms::Label *  label_attack_size;
		System::Windows::Forms::Label *  label_attack_mod;
		System::Windows::Forms::Label *  label_attack_base;
		System::Windows::Forms::Label *  label_melee_plus_3;
		System::Windows::Forms::Label *  label_melee_plus_2;
		System::Windows::Forms::Label *  label_melee_plus_1;
		System::Windows::Forms::Label *  label_melee_equals;
		System::Windows::Forms::TextBox *  txtb_melee_size;
		System::Windows::Forms::TextBox *  txtb_melee_mod;
		System::Windows::Forms::TextBox *  txtb_melee_base;
		System::Windows::Forms::TextBox *  txtb_melee_base_total;
		System::Windows::Forms::Label *  label_melee;
		System::Windows::Forms::Label *  label_ac_plus_6;
		System::Windows::Forms::Label *  label_ac_plus_5;
		System::Windows::Forms::Label *  label_ac_plus_4;
		System::Windows::Forms::TextBox *  txtb_melee_total;
		System::Windows::Forms::TextBox *  txtb_ranged_total;
		System::Windows::Forms::Label *  label_ranged_plus_4;
		System::Windows::Forms::TextBox *  txtb_ranged_misc;
		System::Windows::Forms::Label *  label_ranged_plus_3;
		System::Windows::Forms::Label *  label_ranged_plus_2;
		System::Windows::Forms::Label *  label_ranged_plus_1;
		System::Windows::Forms::Label *  label_ranged_equals;
		System::Windows::Forms::TextBox *  txtb_ranged_size;
		System::Windows::Forms::TextBox *  txtb_ranged_mod;
		System::Windows::Forms::TextBox *  txtb_ranged_base;
		System::Windows::Forms::TextBox *  txtb_ranged_base_total;
		System::Windows::Forms::Label *  label_ranged;
		System::Windows::Forms::Label *  label_will;
		System::Windows::Forms::Label *  label_ref;
		System::Windows::Forms::Label *  label_feat_requirements_description;
		System::Windows::Forms::ListView *  lstv_god_list;
		System::Windows::Forms::ListView *  lstv_god_worship;
		System::Windows::Forms::Button *  btn_add_god;
		System::Windows::Forms::Button *  btn_remove_god;
		System::Windows::Forms::Label *  label_domian_points;
		System::Windows::Forms::TextBox *  txtb_domain_points;
		System::Windows::Forms::Button *  btn_remove_remove;
		System::Windows::Forms::Button *  btn_add_domain;
		System::Windows::Forms::ListView *  lstv_domain_have;
		System::Windows::Forms::ListView *  lstv_domain_list;
		System::Windows::Forms::NumericUpDown *  nud_add_funds;
		System::Windows::Forms::ComboBox *  comb_add_type;
		System::Windows::Forms::Button *  btn_add_funds;
		System::Windows::Forms::Button *  btn_subtract_funds;
		System::Windows::Forms::Label *  label_add_subtract_funds;
		System::Windows::Forms::Label *  label_total_funds;
		System::Windows::Forms::TextBox *  txtb_pp_funds;
		System::Windows::Forms::TextBox *  txtb_gp_funds;
		System::Windows::Forms::TextBox *  txtb_sp_funds;
		System::Windows::Forms::TextBox *  txtb_cp_funds;
		System::Windows::Forms::Label *  label_pp_funds;
		System::Windows::Forms::Label *  label_gp_funds;
		System::Windows::Forms::Label *  label_sp_funds;
		System::Windows::Forms::Label *  label_cp_funds;
		System::Windows::Forms::ComboBox *  comb_spell_level;
		System::Windows::Forms::ListView *  lstv_spell_list;
		System::Windows::Forms::ListView *  lstv_spells_known;
		System::Windows::Forms::TextBox *  txtb_spell_points;
		System::Windows::Forms::Button *  btn_add_spell;
		System::Windows::Forms::Button *  btn_remove_spell;
		System::Windows::Forms::Label *  label_spell_points;
		System::Windows::Forms::Label *  label_spell_level_0;
		System::Windows::Forms::TextBox *  txtb_spells_known_0;
		System::Windows::Forms::TextBox *  txtb_spells_known_1;
		System::Windows::Forms::TextBox *  txtb_spells_known_2;
		System::Windows::Forms::TextBox *  txtb_spells_known_5;
		System::Windows::Forms::TextBox *  txtb_spells_known_4;
		System::Windows::Forms::TextBox *  txtb_spells_known_3;
		System::Windows::Forms::TextBox *  txtb_spells_known_8;
		System::Windows::Forms::TextBox *  txtb_spells_known_7;
		System::Windows::Forms::TextBox *  txtb_spells_known_6;
		System::Windows::Forms::TextBox *  txtb_spells_per_day_8;
		System::Windows::Forms::TextBox *  txtb_spells_per_day_7;
		System::Windows::Forms::TextBox *  txtb_spells_per_day_6;
		System::Windows::Forms::TextBox *  txtb_spells_per_day_5;
		System::Windows::Forms::TextBox *  txtb_spells_per_day_4;
		System::Windows::Forms::TextBox *  txtb_spells_per_day_3;
		System::Windows::Forms::TextBox *  txtb_spells_per_day_2;
		System::Windows::Forms::TextBox *  txtb_spells_per_day_1;
		System::Windows::Forms::TextBox *  txtb_spells_per_day_0;
		System::Windows::Forms::Label *  label_spells_known;
		System::Windows::Forms::Label *  label_spells_per_day;
		System::Windows::Forms::Label *  label_spell_level_1;
		System::Windows::Forms::Label *  label_spell_level_2;
		System::Windows::Forms::Label *  label_spell_level_3;
		System::Windows::Forms::Label *  label_spell_level_4;
		System::Windows::Forms::Label *  label_spell_level_5;
		System::Windows::Forms::Label *  label_spell_level_6;
		System::Windows::Forms::Label *  label_spell_level_7;
		System::Windows::Forms::Label *  label_spell_level_8;
		System::Windows::Forms::Label *  label_spell_level_9;
		System::Windows::Forms::TextBox *  txtb_spells_per_day_9;
		System::Windows::Forms::TextBox *  txtb_spells_known_9;
		System::Windows::Forms::Button *  btn_add_companion;
		System::Windows::Forms::Button *  btn_remove_compainon;
		System::Windows::Forms::Label *  label_companion_benifits;
		System::Windows::Forms::Label *  label_companion_benifits_description;
		System::Windows::Forms::ListView *  lstv_companions;
		System::Windows::Forms::ListView *  lstv_companion;
		System::Windows::Forms::TextBox *  txtb_xp_total;
		System::Windows::Forms::Button *  btn_add_xp;
		System::Windows::Forms::Button *  btn_subtract_xp;
		System::Windows::Forms::NumericUpDown *  nud_xp;

		System::Windows::Forms::Button *  btn_levelup;
		System::Windows::Forms::Label *  label_dm_note_title;
		System::Windows::Forms::Label *  label_dm_note;
		System::Windows::Forms::NumericUpDown *  nud_equip_group;
		System::Windows::Forms::Button *  btn_equip_group;
		System::Windows::Forms::Button *  btn_unequip;
		System::Windows::Forms::Button *  btn_equip;
		System::Windows::Forms::ListView *  lstv_equiped;
		System::Windows::Forms::ListView *  lstv_unequiped;
		System::Windows::Forms::CheckBox *  ckb_masterwork;
		System::Windows::Forms::ComboBox *  comb_item_magic;
		System::Windows::Forms::ComboBox *  comb_item_type;
		System::Windows::Forms::Label *  label_lb;
		System::Windows::Forms::Label *  label_load;
		System::Windows::Forms::Label *  label_total_wieght;
		System::Windows::Forms::TextBox *  txtb_load;
		System::Windows::Forms::TextBox *  txtb_total_wieght;
		System::Windows::Forms::Button *  btn_item_not_carried;
		System::Windows::Forms::Button *  btn_item_carried;
		System::Windows::Forms::Label *  label_buy_cp;
		System::Windows::Forms::Label *  label_buy_sp;
		System::Windows::Forms::Label *  label_buy_gp;
		System::Windows::Forms::Label *  label_buy_pp;
		System::Windows::Forms::CheckBox *  ckb_buy_free;
		System::Windows::Forms::TextBox *  txtb_buy_cp;
		System::Windows::Forms::TextBox *  txtb_buy_sp;
		System::Windows::Forms::TextBox *  txtb_buy_gp;
		System::Windows::Forms::TextBox *  txtb_buy_pp;
		System::Windows::Forms::Button *  btn_new_item;
		System::Windows::Forms::Button *  btn_sell;
		System::Windows::Forms::Button *  btn_buy;
		System::Windows::Forms::ListView *  lst_user_items;
		System::Windows::Forms::ListView *  lstv_store_items;
		System::Windows::Forms::ListView *  lstv_languages_known;
		System::Windows::Forms::ListView *  lstv_languages;
		System::Windows::Forms::CheckBox *  ckb_language_negative;
		System::Windows::Forms::Label *  label_language_skill_points;
		System::Windows::Forms::TextBox *  txtb_language_skill_points;
		System::Windows::Forms::Label *  label_language_points;
		System::Windows::Forms::TextBox *  txtb_language_points;
		System::Windows::Forms::Button *  btn_add_language_skill;
		System::Windows::Forms::Button *  btn_remove_language;
		System::Windows::Forms::Button *  btn_add_language;
		System::Windows::Forms::CheckBox *  ckb_disable_feats;
		System::Windows::Forms::ListView *  lstv_feats_known;
		System::Windows::Forms::ListView *  lstv_feats;
		System::Windows::Forms::Label *  label_feat_requirements_title;
		System::Windows::Forms::CheckBox *  ckb_negative_feats;
		System::Windows::Forms::Label *  label_bonus_feat_points;
		System::Windows::Forms::TextBox *  txtb_bonus_feat_points;
		System::Windows::Forms::Label *  label_feat_points;
		System::Windows::Forms::TextBox *  txtb_feat_points;
		System::Windows::Forms::Button *  btn_add_bonus_feat;
		System::Windows::Forms::Button *  btn_remove_feat;
		System::Windows::Forms::Button *  btn_add_feat;
		System::Windows::Forms::Button *  btn_remove_skill;
		System::Windows::Forms::Button *  btn_add_skill;
		System::Windows::Forms::Button *  btn_max_skills;
		System::Windows::Forms::CheckBox *  ckb_enforce_max_skills;
		System::Windows::Forms::TextBox *  txtb_skill_points;
		System::Windows::Forms::Label *  label_skill_points;
		System::Windows::Forms::ListView *  lstv_skills;
		System::Windows::Forms::Button *  btn_racial_prof;
		System::Windows::Forms::TextBox *  txtb_racial_prof;
		System::Windows::Forms::Label *  label_racial_prof;
		System::Windows::Forms::Button *  btn_rogue_special;
		System::Windows::Forms::TextBox *  txtb_rogue_special;
		System::Windows::Forms::Label *  label_rogue_special;
		System::Windows::Forms::Button *  btn_bard_prof;
		System::Windows::Forms::TextBox *  txtb_bard_prof;
		System::Windows::Forms::Label *  label_bard_prof;
		System::Windows::Forms::Button *  btn_ranger_enemie;
		System::Windows::Forms::TextBox *  txtb_ranger_enemie;
		System::Windows::Forms::Label *  label_ranger_enemie;
		System::Windows::Forms::TreeView *  trev_features;
		System::Windows::Forms::ComboBox *  comb_feature_type;
		System::Windows::Forms::Label *  label_height;
		System::Windows::Forms::Label *  label_age;
		System::Windows::Forms::Label *  label_campaign;
		System::Windows::Forms::Label *  label_characters_name;
		System::Windows::Forms::Label *  label_players_name;
		System::Windows::Forms::TextBox *  txtb_campaign;
		System::Windows::Forms::ListView *  lstv_character_image;
		System::Windows::Forms::PictureBox *  picb_character_image;
		System::Windows::Forms::NumericUpDown *  nud_feet;
		System::Windows::Forms::NumericUpDown *  nud_age;
		System::Windows::Forms::TextBox *  txtb_characters_name;
		System::Windows::Forms::TextBox *  txtb_players_name;
		System::Windows::Forms::Label *  label_feet;
		System::Windows::Forms::NumericUpDown *  nud_inches;
		System::Windows::Forms::Label *  label_inches;
		System::Windows::Forms::Label *  label_eye_colour;
		System::Windows::Forms::TextBox *  txtb_eye_colour;
		System::Windows::Forms::Label *  label_hair_colour;
		System::Windows::Forms::TextBox *  txtb_hair_colour;
		System::Windows::Forms::Label *  label_ability_rolls;
		System::Windows::Forms::Label *  label_ability_total;
		System::Windows::Forms::Label *  label_ability_mods;
		System::Windows::Forms::Label *  label_ability_information;
		System::Windows::Forms::Label *  label_ability_race;
		System::Windows::Forms::Label *  label_ability_cha;
		System::Windows::Forms::Label *  label_ability_wis;
		System::Windows::Forms::Label *  label_ability_int;
		System::Windows::Forms::Label *  label_ability_con;
		System::Windows::Forms::Label *  label_ability_dex;
		System::Windows::Forms::Label *  label_ability_str;
		System::Windows::Forms::Label *  label_ability_misc;
		System::Windows::Forms::Label *  label_cha_equals;
		System::Windows::Forms::Label *  label_wis_equals;
		System::Windows::Forms::Label *  label_int_equals;
		System::Windows::Forms::Label *  label_dex_plus_01;
		System::Windows::Forms::Label *  label_str_plus_01;
		System::Windows::Forms::Label *  label_con_equals;
		System::Windows::Forms::Label *  label_dex_equals;
		System::Windows::Forms::Label *  label_str_equals;
		System::Windows::Forms::Label *  label_dex_plus_02;
		System::Windows::Forms::Label *  label_str_plus_02;
		System::Windows::Forms::Label *  label_cha_plus_01;
		System::Windows::Forms::Label *  label_wis_plus_01;
		System::Windows::Forms::Label *  label_int_plus_01;
		System::Windows::Forms::Label *  label_con_plus_01;
		System::Windows::Forms::Label *  label_cha_plus_02;
		System::Windows::Forms::Label *  label_wis_plus_02;
		System::Windows::Forms::Label *  label_int_plus_02;
		System::Windows::Forms::Label *  label_con_plus_02;
		System::Windows::Forms::NumericUpDown *  nud_cha;
		System::Windows::Forms::NumericUpDown *  nud_wis;
		System::Windows::Forms::NumericUpDown *  nud_int;
		System::Windows::Forms::NumericUpDown *  nud_con;
		System::Windows::Forms::NumericUpDown *  nud_dex;
		System::Windows::Forms::NumericUpDown *  nud_str;
		System::Windows::Forms::TextBox *  txtb_cha_race;
		System::Windows::Forms::TextBox *  txtb_wis_race;
		System::Windows::Forms::TextBox *  txt_int_race;
		System::Windows::Forms::TextBox *  txt_con_race;
		System::Windows::Forms::TextBox *  txt_dex_race;
		System::Windows::Forms::TextBox *  txt_str_race;
		System::Windows::Forms::TextBox *  txtb_cha_mods;
		System::Windows::Forms::TextBox *  txtb_wis_mods;
		System::Windows::Forms::TextBox *  txt_int_mods;
		System::Windows::Forms::TextBox *  txtb_cha_total;
		System::Windows::Forms::TextBox *  txtb_wis_total;
		System::Windows::Forms::TextBox *  txt_int_total;
		System::Windows::Forms::TextBox *  txt_con_mods;
		System::Windows::Forms::TextBox *  txt_dex_mods;
		System::Windows::Forms::TextBox *  txt_str_mods;
		System::Windows::Forms::TextBox *  txt_con_total;
		System::Windows::Forms::TextBox *  txt_dex_total;
		System::Windows::Forms::TextBox *  txt_str_total;
		System::Windows::Forms::TextBox *  txtb_cha_misc;
		System::Windows::Forms::TextBox *  txtb_wis_misc;
		System::Windows::Forms::TextBox *  txt_int_misc;
		System::Windows::Forms::TextBox *  txt_con_misc;
		System::Windows::Forms::TextBox *  txt_dex_misc;
		System::Windows::Forms::TextBox *  txt_str_misc;
		System::Windows::Forms::Label *  label_earned_information;
		System::Windows::Forms::Label *  label_inherent_abilities_at;
		System::Windows::Forms::Label *  label_earned_abilities_at;
		System::Windows::Forms::Label *  label_inherent_abilities_to;
		System::Windows::Forms::Label *  label_earned_abilities_to;
		System::Windows::Forms::NumericUpDown *  nud_inherent_abilities_level;
		System::Windows::Forms::TextBox *  txb_label_earned_abilities_level;
		System::Windows::Forms::ComboBox *  comb_inherent_abilities;
		System::Windows::Forms::ComboBox *  comb_earned_abilities;
		System::Windows::Forms::TextBox *  txtb_earned_abilities_total;
		System::Windows::Forms::Label *  label_inherent_abilities;
		System::Windows::Forms::Label *  label_earned_abilities;
		System::Windows::Forms::NumericUpDown *  nud_inherent_abilities_total;
		System::Windows::Forms::TextBox *  txtb_earned_abilities;
		System::Windows::Forms::Button *  btn_remove_abilities;
		System::Windows::Forms::Button *  btn_apply_abilities;
		System::Windows::Forms::Button *  btn_cancel_abilities;
		System::Windows::Forms::Button *  btn_add_inherent;
		System::Windows::Forms::Button *  btn_add_earned;
		System::Windows::Forms::ListView *  lstv_abilities;
		System::Windows::Forms::Label *  label_display_ability_mods;
		System::Windows::Forms::Label *  label_display_ability_score;
		System::Windows::Forms::Label *  label_display_total_hp;
		System::Windows::Forms::Label *  label_display_ability_cha;
		System::Windows::Forms::Label *  label_display_ability_wis;
		System::Windows::Forms::Label *  label_display_ability_int;
		System::Windows::Forms::Label *  label_display_ability_con;
		System::Windows::Forms::Label *  label_display_ability_dex;
		System::Windows::Forms::Label *  label_display_ability_str;
		System::Windows::Forms::TextBox *  txtb_ability_modifier_cha;
		System::Windows::Forms::TextBox *  txtb_ability_score_cha;
		System::Windows::Forms::TextBox *  txtb_ability_modifier_wis;
		System::Windows::Forms::TextBox *  txtb_ability_score_wis;
		System::Windows::Forms::TextBox *  txtb_display_total_hp;
		System::Windows::Forms::TextBox *  txtb_ability_modifier_int;
		System::Windows::Forms::TextBox *  txtb_ability_score_int;
		System::Windows::Forms::TextBox *  txtb_ability_modifier_con;
		System::Windows::Forms::TextBox *  txtb_ability_score_con;
		System::Windows::Forms::TextBox *  txtb_ability_modifier_dex;
		System::Windows::Forms::TextBox *  txtb_ability_score_dex;
		System::Windows::Forms::TextBox *  txtb_ability_modifier_str;
		System::Windows::Forms::TextBox *  txtb_ability_score_str;
		System::Windows::Forms::MenuItem *  mnui_new;
		System::Windows::Forms::MenuItem *  mnui_load;
		System::Windows::Forms::MenuItem *  mnui_save;
		System::Windows::Forms::MenuItem *  mnui_close;
		System::Windows::Forms::OpenFileDialog *  ofd_load;
		System::Windows::Forms::SaveFileDialog *  sfd_save;
		System::Windows::Forms::Label *  label_weight;
		System::Windows::Forms::NumericUpDown *  nud_weight;
		System::Windows::Forms::CheckBox *  ckb_domain_enforce;
		System::Windows::Forms::TextBox *  txtb_inherent_abilities;
		System::Windows::Forms::TabPage *  tabp_class;
		System::Windows::Forms::TabPage *  tabp_abilities;
		System::Windows::Forms::TabPage *  tabp_stats;
		System::Windows::Forms::TabPage *  tabp_character_features;
		System::Windows::Forms::TabPage *  tabp_skills;
		System::Windows::Forms::TabPage *  tabp_feats;
		System::Windows::Forms::TabControl *  tabc_character_features;
		System::Windows::Forms::TabPage *  tabp_bio;
		System::Windows::Forms::TabPage *  tabp_features;
		System::Windows::Forms::TabPage *  tabp_languages;
		System::Windows::Forms::TabPage *  tabp_gods;
		System::Windows::Forms::TabPage *  tabp_companions;
		System::Windows::Forms::TabPage *  tabp_equipment;
		System::Windows::Forms::TabControl *  tabc_equipment;
		System::Windows::Forms::TabPage *  tabp_purchases;
		System::Windows::Forms::TabPage *  tabp_equip;
		System::Windows::Forms::TabPage *  tabp_funds;
		System::Windows::Forms::TabPage *  tabp_spells;
		System::Windows::Forms::TabPage *  tabp_xp;
		System::Windows::Forms::TabPage *  tabp_notes;
		System::Windows::Forms::TabControl *  tabc_character;
		System::Windows::Forms::ListView *  lstv_hp_levels;
		System::Windows::Forms::Label *  label_hp;
		System::Windows::Forms::Label *  label_hp_roll;
		System::Windows::Forms::Label *  label_hp_misc;
		System::Windows::Forms::Label *  label_hp_mod;
		System::Windows::Forms::Label *  label_hp_plus_2;
		System::Windows::Forms::Label *  label_hp_plus_1;
		System::Windows::Forms::Label *  label_hp_equals;
		System::Windows::Forms::Button *  btn_hp_apply;
		System::Windows::Forms::NumericUpDown *  nud_hp_roll;
		System::Windows::Forms::TextBox *  txtb_hp_misc;
		System::Windows::Forms::TextBox *  txtb_hp_mod;
		System::Windows::Forms::TextBox *  txtb_hp;


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
			this->grpb_alignment = new System::Windows::Forms::GroupBox();
			this->txtb_alignment = new System::Windows::Forms::TextBox();
			this->grpb_gender = new System::Windows::Forms::GroupBox();
			this->comb_gender = new System::Windows::Forms::ComboBox();
			this->grpb_size = new System::Windows::Forms::GroupBox();
			this->txtb_size = new System::Windows::Forms::TextBox();
			this->grpb_race = new System::Windows::Forms::GroupBox();
			this->txtb_race = new System::Windows::Forms::TextBox();
			this->grpb_classes = new System::Windows::Forms::GroupBox();
			this->comb_classes = new System::Windows::Forms::ComboBox();
			this->grpb_level = new System::Windows::Forms::GroupBox();
			this->txtb_level = new System::Windows::Forms::TextBox();
			this->mnu_flie = new System::Windows::Forms::MainMenu();
			this->mnu_flie_title = new System::Windows::Forms::MenuItem();
			this->mnui_new = new System::Windows::Forms::MenuItem();
			this->mnui_load = new System::Windows::Forms::MenuItem();
			this->mnui_save = new System::Windows::Forms::MenuItem();
			this->mnui_close = new System::Windows::Forms::MenuItem();
			this->label_race_description = new System::Windows::Forms::Label();
			this->label_class_description = new System::Windows::Forms::Label();
			this->btn_add_class = new System::Windows::Forms::Button();
			this->lstv_class_list = new System::Windows::Forms::ListView();
			this->btn_class_ok = new System::Windows::Forms::Button();
			this->lstv_class_level = new System::Windows::Forms::ListView();
			this->label_race_benifits = new System::Windows::Forms::Label();
			this->label_class_requirements = new System::Windows::Forms::Label();
			this->btn_remove_class = new System::Windows::Forms::Button();
			this->comb_alignment_selector = new System::Windows::Forms::ComboBox();
			this->btn_class_cancel = new System::Windows::Forms::Button();
			this->comb_race_selector = new System::Windows::Forms::ComboBox();
			this->label_base_speed = new System::Windows::Forms::Label();
			this->txtb_base_speed = new System::Windows::Forms::TextBox();
			this->txtb_ranged_total = new System::Windows::Forms::TextBox();
			this->txtb_melee_total = new System::Windows::Forms::TextBox();
			this->label_ranged_plus_4 = new System::Windows::Forms::Label();
			this->txtb_ranged_misc = new System::Windows::Forms::TextBox();
			this->label_attack_misc = new System::Windows::Forms::Label();
			this->label_melee_plus_4 = new System::Windows::Forms::Label();
			this->txtb_melee_misc = new System::Windows::Forms::TextBox();
			this->label_ac_mod = new System::Windows::Forms::Label();
			this->label_ac_natural = new System::Windows::Forms::Label();
			this->label_ac_base = new System::Windows::Forms::Label();
			this->label_ac_plus_3 = new System::Windows::Forms::Label();
			this->label_ac_plus_2 = new System::Windows::Forms::Label();
			this->label_ac_plus_1 = new System::Windows::Forms::Label();
			this->txtb_ac_mod = new System::Windows::Forms::TextBox();
			this->txtb_ac_natural = new System::Windows::Forms::TextBox();
			this->txtb_ac_base = new System::Windows::Forms::TextBox();
			this->label_will_plus_2 = new System::Windows::Forms::Label();
			this->label_will_plus_1 = new System::Windows::Forms::Label();
			this->txtb_will_mod = new System::Windows::Forms::TextBox();
			this->txtb_will_base = new System::Windows::Forms::TextBox();
			this->label_ref_plus_2 = new System::Windows::Forms::Label();
			this->label_ref_plus_1 = new System::Windows::Forms::Label();
			this->txtb_ref_mod = new System::Windows::Forms::TextBox();
			this->txtb_ref_base = new System::Windows::Forms::TextBox();
			this->label_saves_mod = new System::Windows::Forms::Label();
			this->label_saves_base = new System::Windows::Forms::Label();
			this->label_fort_plus_2 = new System::Windows::Forms::Label();
			this->label_fort_plus_1 = new System::Windows::Forms::Label();
			this->txtb_fort_mod = new System::Windows::Forms::TextBox();
			this->txtb_fort_base = new System::Windows::Forms::TextBox();
			this->label_ranged_plus_3 = new System::Windows::Forms::Label();
			this->label_ranged_plus_2 = new System::Windows::Forms::Label();
			this->label_ranged_plus_1 = new System::Windows::Forms::Label();
			this->label_ranged_equals = new System::Windows::Forms::Label();
			this->txtb_ranged_size = new System::Windows::Forms::TextBox();
			this->txtb_ranged_mod = new System::Windows::Forms::TextBox();
			this->txtb_ranged_base = new System::Windows::Forms::TextBox();
			this->txtb_ranged_base_total = new System::Windows::Forms::TextBox();
			this->label_ranged = new System::Windows::Forms::Label();
			this->label_attack_size = new System::Windows::Forms::Label();
			this->label_attack_mod = new System::Windows::Forms::Label();
			this->label_attack_base = new System::Windows::Forms::Label();
			this->label_melee_plus_3 = new System::Windows::Forms::Label();
			this->label_melee_plus_2 = new System::Windows::Forms::Label();
			this->label_melee_plus_1 = new System::Windows::Forms::Label();
			this->label_melee_equals = new System::Windows::Forms::Label();
			this->txtb_melee_size = new System::Windows::Forms::TextBox();
			this->txtb_melee_mod = new System::Windows::Forms::TextBox();
			this->txtb_melee_base = new System::Windows::Forms::TextBox();
			this->txtb_melee_base_total = new System::Windows::Forms::TextBox();
			this->label_melee = new System::Windows::Forms::Label();
			this->label_ac_user = new System::Windows::Forms::Label();
			this->label_ac_misc = new System::Windows::Forms::Label();
			this->label_ac_magic = new System::Windows::Forms::Label();
			this->label_ac_armor = new System::Windows::Forms::Label();
			this->label_ac_plus_6 = new System::Windows::Forms::Label();
			this->label_ac_plus_5 = new System::Windows::Forms::Label();
			this->label_ac_plus_4 = new System::Windows::Forms::Label();
			this->label_ac_equals = new System::Windows::Forms::Label();
			this->nud_ac_user = new System::Windows::Forms::NumericUpDown();
			this->txtb_ac_misc = new System::Windows::Forms::TextBox();
			this->txtb_ac_magic = new System::Windows::Forms::TextBox();
			this->txtb_ac_armor = new System::Windows::Forms::TextBox();
			this->txtb_ac_total = new System::Windows::Forms::TextBox();
			this->label_ac = new System::Windows::Forms::Label();
			this->label_will_plus_5 = new System::Windows::Forms::Label();
			this->label_will_plus_4 = new System::Windows::Forms::Label();
			this->label_will_plus_3 = new System::Windows::Forms::Label();
			this->label_will_equals = new System::Windows::Forms::Label();
			this->nud_will_user = new System::Windows::Forms::NumericUpDown();
			this->txtb_will_misc = new System::Windows::Forms::TextBox();
			this->txtb_will_magic = new System::Windows::Forms::TextBox();
			this->txtb_will_race = new System::Windows::Forms::TextBox();
			this->txtb_will_total = new System::Windows::Forms::TextBox();
			this->label_will = new System::Windows::Forms::Label();
			this->label_ref_plus_5 = new System::Windows::Forms::Label();
			this->label_ref_plus_4 = new System::Windows::Forms::Label();
			this->label_ref_plus_3 = new System::Windows::Forms::Label();
			this->label_ref_equals = new System::Windows::Forms::Label();
			this->nud_ref_user = new System::Windows::Forms::NumericUpDown();
			this->txtb_ref_misc = new System::Windows::Forms::TextBox();
			this->txtb_ref_magic = new System::Windows::Forms::TextBox();
			this->txtb_ref_race = new System::Windows::Forms::TextBox();
			this->txtb_ref_total = new System::Windows::Forms::TextBox();
			this->label_ref = new System::Windows::Forms::Label();
			this->label_saves_user = new System::Windows::Forms::Label();
			this->label_saves_misc = new System::Windows::Forms::Label();
			this->label_saves_magic = new System::Windows::Forms::Label();
			this->label_saves_race = new System::Windows::Forms::Label();
			this->label_fort_plus_5 = new System::Windows::Forms::Label();
			this->label_fort_plus_4 = new System::Windows::Forms::Label();
			this->label_fort_plus_3 = new System::Windows::Forms::Label();
			this->label_fort_equals = new System::Windows::Forms::Label();
			this->nud_fort_user = new System::Windows::Forms::NumericUpDown();
			this->txtb_fort_misc = new System::Windows::Forms::TextBox();
			this->txtb_fort_magic = new System::Windows::Forms::TextBox();
			this->txtb_fort_race = new System::Windows::Forms::TextBox();
			this->txtb_fort_total = new System::Windows::Forms::TextBox();
			this->label_fort = new System::Windows::Forms::Label();
			this->label_init_user = new System::Windows::Forms::Label();
			this->label_init_magic = new System::Windows::Forms::Label();
			this->label_init_feats = new System::Windows::Forms::Label();
			this->label_init_mod = new System::Windows::Forms::Label();
			this->label_init_plus_3 = new System::Windows::Forms::Label();
			this->label_init_plus_2 = new System::Windows::Forms::Label();
			this->label_init_plus_1 = new System::Windows::Forms::Label();
			this->label_init_equals = new System::Windows::Forms::Label();
			this->nud_init_user = new System::Windows::Forms::NumericUpDown();
			this->txtb_init_magic = new System::Windows::Forms::TextBox();
			this->txtb_init_feats = new System::Windows::Forms::TextBox();
			this->txtb_init_mod = new System::Windows::Forms::TextBox();
			this->txtb_init_total = new System::Windows::Forms::TextBox();
			this->label_init = new System::Windows::Forms::Label();
			this->txtb_cha_misc = new System::Windows::Forms::TextBox();
			this->txtb_wis_misc = new System::Windows::Forms::TextBox();
			this->txt_int_misc = new System::Windows::Forms::TextBox();
			this->txt_con_misc = new System::Windows::Forms::TextBox();
			this->txt_dex_misc = new System::Windows::Forms::TextBox();
			this->label_ability_misc = new System::Windows::Forms::Label();
			this->txt_str_misc = new System::Windows::Forms::TextBox();
			this->label_cha_plus_02 = new System::Windows::Forms::Label();
			this->label_wis_plus_02 = new System::Windows::Forms::Label();
			this->label_int_plus_02 = new System::Windows::Forms::Label();
			this->label_con_plus_02 = new System::Windows::Forms::Label();
			this->label_dex_plus_02 = new System::Windows::Forms::Label();
			this->label_str_plus_02 = new System::Windows::Forms::Label();
			this->label_earned_information = new System::Windows::Forms::Label();
			this->label_ability_information = new System::Windows::Forms::Label();
			this->btn_remove_abilities = new System::Windows::Forms::Button();
			this->btn_apply_abilities = new System::Windows::Forms::Button();
			this->btn_cancel_abilities = new System::Windows::Forms::Button();
			this->btn_add_inherent = new System::Windows::Forms::Button();
			this->btn_add_earned = new System::Windows::Forms::Button();
			this->label_inherent_abilities_at = new System::Windows::Forms::Label();
			this->label_earned_abilities_at = new System::Windows::Forms::Label();
			this->label_inherent_abilities_to = new System::Windows::Forms::Label();
			this->label_earned_abilities_to = new System::Windows::Forms::Label();
			this->nud_inherent_abilities_level = new System::Windows::Forms::NumericUpDown();
			this->txb_label_earned_abilities_level = new System::Windows::Forms::TextBox();
			this->comb_inherent_abilities = new System::Windows::Forms::ComboBox();
			this->comb_earned_abilities = new System::Windows::Forms::ComboBox();
			this->txtb_earned_abilities_total = new System::Windows::Forms::TextBox();
			this->label_inherent_abilities = new System::Windows::Forms::Label();
			this->label_earned_abilities = new System::Windows::Forms::Label();
			this->nud_inherent_abilities_total = new System::Windows::Forms::NumericUpDown();
			this->txtb_inherent_abilities = new System::Windows::Forms::TextBox();
			this->txtb_earned_abilities = new System::Windows::Forms::TextBox();
			this->lstv_abilities = new System::Windows::Forms::ListView();
			this->nud_cha = new System::Windows::Forms::NumericUpDown();
			this->nud_wis = new System::Windows::Forms::NumericUpDown();
			this->nud_int = new System::Windows::Forms::NumericUpDown();
			this->nud_con = new System::Windows::Forms::NumericUpDown();
			this->nud_dex = new System::Windows::Forms::NumericUpDown();
			this->nud_str = new System::Windows::Forms::NumericUpDown();
			this->label_ability_rolls = new System::Windows::Forms::Label();
			this->label_ability_total = new System::Windows::Forms::Label();
			this->txtb_cha_race = new System::Windows::Forms::TextBox();
			this->txtb_wis_race = new System::Windows::Forms::TextBox();
			this->txt_int_race = new System::Windows::Forms::TextBox();
			this->txt_con_race = new System::Windows::Forms::TextBox();
			this->txt_dex_race = new System::Windows::Forms::TextBox();
			this->label_ability_race = new System::Windows::Forms::Label();
			this->txt_str_race = new System::Windows::Forms::TextBox();
			this->label_cha_plus_01 = new System::Windows::Forms::Label();
			this->txtb_cha_mods = new System::Windows::Forms::TextBox();
			this->label_wis_plus_01 = new System::Windows::Forms::Label();
			this->txtb_wis_mods = new System::Windows::Forms::TextBox();
			this->label_int_plus_01 = new System::Windows::Forms::Label();
			this->txt_int_mods = new System::Windows::Forms::TextBox();
			this->label_cha_equals = new System::Windows::Forms::Label();
			this->txtb_cha_total = new System::Windows::Forms::TextBox();
			this->label_ability_cha = new System::Windows::Forms::Label();
			this->label_wis_equals = new System::Windows::Forms::Label();
			this->txtb_wis_total = new System::Windows::Forms::TextBox();
			this->label_ability_wis = new System::Windows::Forms::Label();
			this->label_int_equals = new System::Windows::Forms::Label();
			this->txt_int_total = new System::Windows::Forms::TextBox();
			this->label_ability_int = new System::Windows::Forms::Label();
			this->label_con_plus_01 = new System::Windows::Forms::Label();
			this->txt_con_mods = new System::Windows::Forms::TextBox();
			this->label_dex_plus_01 = new System::Windows::Forms::Label();
			this->txt_dex_mods = new System::Windows::Forms::TextBox();
			this->label_ability_mods = new System::Windows::Forms::Label();
			this->label_str_plus_01 = new System::Windows::Forms::Label();
			this->txt_str_mods = new System::Windows::Forms::TextBox();
			this->label_con_equals = new System::Windows::Forms::Label();
			this->txt_con_total = new System::Windows::Forms::TextBox();
			this->label_ability_con = new System::Windows::Forms::Label();
			this->label_dex_equals = new System::Windows::Forms::Label();
			this->txt_dex_total = new System::Windows::Forms::TextBox();
			this->label_ability_dex = new System::Windows::Forms::Label();
			this->label_str_equals = new System::Windows::Forms::Label();
			this->txt_str_total = new System::Windows::Forms::TextBox();
			this->label_ability_str = new System::Windows::Forms::Label();
			this->txtb_ability_modifier_cha = new System::Windows::Forms::TextBox();
			this->txtb_ability_score_cha = new System::Windows::Forms::TextBox();
			this->txtb_ability_modifier_wis = new System::Windows::Forms::TextBox();
			this->txtb_ability_score_wis = new System::Windows::Forms::TextBox();
			this->txtb_display_total_hp = new System::Windows::Forms::TextBox();
			this->txtb_ability_modifier_int = new System::Windows::Forms::TextBox();
			this->txtb_ability_score_int = new System::Windows::Forms::TextBox();
			this->txtb_ability_modifier_con = new System::Windows::Forms::TextBox();
			this->txtb_ability_score_con = new System::Windows::Forms::TextBox();
			this->txtb_ability_modifier_dex = new System::Windows::Forms::TextBox();
			this->txtb_ability_score_dex = new System::Windows::Forms::TextBox();
			this->txtb_ability_modifier_str = new System::Windows::Forms::TextBox();
			this->txtb_ability_score_str = new System::Windows::Forms::TextBox();
			this->label_display_ability_mods = new System::Windows::Forms::Label();
			this->label_display_ability_score = new System::Windows::Forms::Label();
			this->label_display_total_hp = new System::Windows::Forms::Label();
			this->label_display_ability_cha = new System::Windows::Forms::Label();
			this->label_display_ability_wis = new System::Windows::Forms::Label();
			this->label_display_ability_int = new System::Windows::Forms::Label();
			this->label_display_ability_con = new System::Windows::Forms::Label();
			this->label_display_ability_dex = new System::Windows::Forms::Label();
			this->label_display_ability_str = new System::Windows::Forms::Label();
			this->label_hair_colour = new System::Windows::Forms::Label();
			this->txtb_hair_colour = new System::Windows::Forms::TextBox();
			this->label_eye_colour = new System::Windows::Forms::Label();
			this->txtb_eye_colour = new System::Windows::Forms::TextBox();
			this->label_inches = new System::Windows::Forms::Label();
			this->label_feet = new System::Windows::Forms::Label();
			this->nud_inches = new System::Windows::Forms::NumericUpDown();
			this->label_weight = new System::Windows::Forms::Label();
			this->label_height = new System::Windows::Forms::Label();
			this->label_age = new System::Windows::Forms::Label();
			this->label_campaign = new System::Windows::Forms::Label();
			this->label_characters_name = new System::Windows::Forms::Label();
			this->label_players_name = new System::Windows::Forms::Label();
			this->txtb_campaign = new System::Windows::Forms::TextBox();
			this->lstv_character_image = new System::Windows::Forms::ListView();
			this->picb_character_image = new System::Windows::Forms::PictureBox();
			this->nud_weight = new System::Windows::Forms::NumericUpDown();
			this->nud_feet = new System::Windows::Forms::NumericUpDown();
			this->nud_age = new System::Windows::Forms::NumericUpDown();
			this->txtb_characters_name = new System::Windows::Forms::TextBox();
			this->txtb_players_name = new System::Windows::Forms::TextBox();
			this->btn_racial_prof = new System::Windows::Forms::Button();
			this->txtb_racial_prof = new System::Windows::Forms::TextBox();
			this->label_racial_prof = new System::Windows::Forms::Label();
			this->btn_rogue_special = new System::Windows::Forms::Button();
			this->txtb_rogue_special = new System::Windows::Forms::TextBox();
			this->label_rogue_special = new System::Windows::Forms::Label();
			this->btn_bard_prof = new System::Windows::Forms::Button();
			this->txtb_bard_prof = new System::Windows::Forms::TextBox();
			this->label_bard_prof = new System::Windows::Forms::Label();
			this->btn_ranger_enemie = new System::Windows::Forms::Button();
			this->txtb_ranger_enemie = new System::Windows::Forms::TextBox();
			this->label_ranger_enemie = new System::Windows::Forms::Label();
			this->trev_features = new System::Windows::Forms::TreeView();
			this->comb_feature_type = new System::Windows::Forms::ComboBox();
			this->btn_remove_skill = new System::Windows::Forms::Button();
			this->btn_add_skill = new System::Windows::Forms::Button();
			this->btn_max_skills = new System::Windows::Forms::Button();
			this->ckb_enforce_max_skills = new System::Windows::Forms::CheckBox();
			this->txtb_skill_points = new System::Windows::Forms::TextBox();
			this->label_skill_points = new System::Windows::Forms::Label();
			this->lstv_skills = new System::Windows::Forms::ListView();
			this->label_feat_requirements_description = new System::Windows::Forms::Label();
			this->label_feat_requirements_title = new System::Windows::Forms::Label();
			this->ckb_negative_feats = new System::Windows::Forms::CheckBox();
			this->ckb_disable_feats = new System::Windows::Forms::CheckBox();
			this->label_bonus_feat_points = new System::Windows::Forms::Label();
			this->txtb_bonus_feat_points = new System::Windows::Forms::TextBox();
			this->label_feat_points = new System::Windows::Forms::Label();
			this->txtb_feat_points = new System::Windows::Forms::TextBox();
			this->btn_add_bonus_feat = new System::Windows::Forms::Button();
			this->btn_remove_feat = new System::Windows::Forms::Button();
			this->btn_add_feat = new System::Windows::Forms::Button();
			this->lstv_feats_known = new System::Windows::Forms::ListView();
			this->lstv_feats = new System::Windows::Forms::ListView();
			this->ckb_language_negative = new System::Windows::Forms::CheckBox();
			this->label_language_skill_points = new System::Windows::Forms::Label();
			this->txtb_language_skill_points = new System::Windows::Forms::TextBox();
			this->label_language_points = new System::Windows::Forms::Label();
			this->txtb_language_points = new System::Windows::Forms::TextBox();
			this->btn_add_language_skill = new System::Windows::Forms::Button();
			this->btn_remove_language = new System::Windows::Forms::Button();
			this->btn_add_language = new System::Windows::Forms::Button();
			this->lstv_languages_known = new System::Windows::Forms::ListView();
			this->lstv_languages = new System::Windows::Forms::ListView();
			this->ckb_masterwork = new System::Windows::Forms::CheckBox();
			this->comb_item_magic = new System::Windows::Forms::ComboBox();
			this->comb_item_type = new System::Windows::Forms::ComboBox();
			this->label_lb = new System::Windows::Forms::Label();
			this->label_load = new System::Windows::Forms::Label();
			this->label_total_wieght = new System::Windows::Forms::Label();
			this->txtb_load = new System::Windows::Forms::TextBox();
			this->txtb_total_wieght = new System::Windows::Forms::TextBox();
			this->btn_item_not_carried = new System::Windows::Forms::Button();
			this->btn_item_carried = new System::Windows::Forms::Button();
			this->label_buy_cp = new System::Windows::Forms::Label();
			this->label_buy_sp = new System::Windows::Forms::Label();
			this->label_buy_gp = new System::Windows::Forms::Label();
			this->label_buy_pp = new System::Windows::Forms::Label();
			this->ckb_buy_free = new System::Windows::Forms::CheckBox();
			this->txtb_buy_cp = new System::Windows::Forms::TextBox();
			this->txtb_buy_sp = new System::Windows::Forms::TextBox();
			this->txtb_buy_gp = new System::Windows::Forms::TextBox();
			this->txtb_buy_pp = new System::Windows::Forms::TextBox();
			this->btn_new_item = new System::Windows::Forms::Button();
			this->btn_sell = new System::Windows::Forms::Button();
			this->btn_buy = new System::Windows::Forms::Button();
			this->lst_user_items = new System::Windows::Forms::ListView();
			this->lstv_store_items = new System::Windows::Forms::ListView();
			this->nud_equip_group = new System::Windows::Forms::NumericUpDown();
			this->btn_equip_group = new System::Windows::Forms::Button();
			this->btn_unequip = new System::Windows::Forms::Button();
			this->btn_equip = new System::Windows::Forms::Button();
			this->lstv_equiped = new System::Windows::Forms::ListView();
			this->lstv_unequiped = new System::Windows::Forms::ListView();
			this->txtb_domain_points = new System::Windows::Forms::TextBox();
			this->label_domian_points = new System::Windows::Forms::Label();
			this->ckb_domain_enforce = new System::Windows::Forms::CheckBox();
			this->btn_remove_remove = new System::Windows::Forms::Button();
			this->btn_add_domain = new System::Windows::Forms::Button();
			this->lstv_domain_have = new System::Windows::Forms::ListView();
			this->lstv_domain_list = new System::Windows::Forms::ListView();
			this->btn_remove_god = new System::Windows::Forms::Button();
			this->btn_add_god = new System::Windows::Forms::Button();
			this->lstv_god_worship = new System::Windows::Forms::ListView();
			this->lstv_god_list = new System::Windows::Forms::ListView();
			this->label_cp_funds = new System::Windows::Forms::Label();
			this->label_sp_funds = new System::Windows::Forms::Label();
			this->label_gp_funds = new System::Windows::Forms::Label();
			this->label_pp_funds = new System::Windows::Forms::Label();
			this->label_total_funds = new System::Windows::Forms::Label();
			this->label_add_subtract_funds = new System::Windows::Forms::Label();
			this->btn_subtract_funds = new System::Windows::Forms::Button();
			this->btn_add_funds = new System::Windows::Forms::Button();
			this->comb_add_type = new System::Windows::Forms::ComboBox();
			this->nud_add_funds = new System::Windows::Forms::NumericUpDown();
			this->txtb_cp_funds = new System::Windows::Forms::TextBox();
			this->txtb_sp_funds = new System::Windows::Forms::TextBox();
			this->txtb_gp_funds = new System::Windows::Forms::TextBox();
			this->txtb_pp_funds = new System::Windows::Forms::TextBox();
			this->label_spell_level_9 = new System::Windows::Forms::Label();
			this->txtb_spells_per_day_9 = new System::Windows::Forms::TextBox();
			this->txtb_spells_known_9 = new System::Windows::Forms::TextBox();
			this->label_spell_level_8 = new System::Windows::Forms::Label();
			this->label_spell_level_6 = new System::Windows::Forms::Label();
			this->label_spell_level_5 = new System::Windows::Forms::Label();
			this->label_spell_level_4 = new System::Windows::Forms::Label();
			this->label_spell_level_3 = new System::Windows::Forms::Label();
			this->label_spell_level_2 = new System::Windows::Forms::Label();
			this->label_spell_level_1 = new System::Windows::Forms::Label();
			this->label_spell_level_0 = new System::Windows::Forms::Label();
			this->label_spells_per_day = new System::Windows::Forms::Label();
			this->label_spells_known = new System::Windows::Forms::Label();
			this->label_spell_points = new System::Windows::Forms::Label();
			this->txtb_spells_per_day_8 = new System::Windows::Forms::TextBox();
			this->txtb_spells_per_day_7 = new System::Windows::Forms::TextBox();
			this->txtb_spells_per_day_6 = new System::Windows::Forms::TextBox();
			this->txtb_spells_per_day_5 = new System::Windows::Forms::TextBox();
			this->txtb_spells_per_day_4 = new System::Windows::Forms::TextBox();
			this->txtb_spells_per_day_3 = new System::Windows::Forms::TextBox();
			this->txtb_spells_per_day_2 = new System::Windows::Forms::TextBox();
			this->txtb_spells_per_day_1 = new System::Windows::Forms::TextBox();
			this->txtb_spells_per_day_0 = new System::Windows::Forms::TextBox();
			this->txtb_spells_known_8 = new System::Windows::Forms::TextBox();
			this->txtb_spells_known_7 = new System::Windows::Forms::TextBox();
			this->txtb_spells_known_6 = new System::Windows::Forms::TextBox();
			this->txtb_spells_known_5 = new System::Windows::Forms::TextBox();
			this->txtb_spells_known_4 = new System::Windows::Forms::TextBox();
			this->txtb_spells_known_3 = new System::Windows::Forms::TextBox();
			this->txtb_spells_known_2 = new System::Windows::Forms::TextBox();
			this->txtb_spells_known_1 = new System::Windows::Forms::TextBox();
			this->txtb_spells_known_0 = new System::Windows::Forms::TextBox();
			this->btn_remove_spell = new System::Windows::Forms::Button();
			this->btn_add_spell = new System::Windows::Forms::Button();
			this->lstv_spells_known = new System::Windows::Forms::ListView();
			this->lstv_spell_list = new System::Windows::Forms::ListView();
			this->txtb_spell_points = new System::Windows::Forms::TextBox();
			this->comb_spell_level = new System::Windows::Forms::ComboBox();
			this->label_spell_level_7 = new System::Windows::Forms::Label();
			this->label_companion_benifits_description = new System::Windows::Forms::Label();
			this->label_companion_benifits = new System::Windows::Forms::Label();
			this->btn_remove_compainon = new System::Windows::Forms::Button();
			this->btn_add_companion = new System::Windows::Forms::Button();
			this->lstv_companion = new System::Windows::Forms::ListView();
			this->lstv_companions = new System::Windows::Forms::ListView();
			this->btn_levelup = new System::Windows::Forms::Button();
			this->lstv_hp_levels = new System::Windows::Forms::ListView();
			this->nud_xp = new System::Windows::Forms::NumericUpDown();
			this->btn_subtract_xp = new System::Windows::Forms::Button();
			this->btn_add_xp = new System::Windows::Forms::Button();
			this->txtb_xp_total = new System::Windows::Forms::TextBox();
			this->label_dm_note = new System::Windows::Forms::Label();
			this->label_dm_note_title = new System::Windows::Forms::Label();
			this->ofd_load = new System::Windows::Forms::OpenFileDialog();
			this->sfd_save = new System::Windows::Forms::SaveFileDialog();
			this->tabc_character = new System::Windows::Forms::TabControl();
			this->tabp_class = new System::Windows::Forms::TabPage();
			this->tabp_character_features = new System::Windows::Forms::TabPage();
			this->tabc_character_features = new System::Windows::Forms::TabControl();
			this->tabp_bio = new System::Windows::Forms::TabPage();
			this->tabp_features = new System::Windows::Forms::TabPage();
			this->tabp_languages = new System::Windows::Forms::TabPage();
			this->tabp_gods = new System::Windows::Forms::TabPage();
			this->tabp_companions = new System::Windows::Forms::TabPage();
			this->tabp_stats = new System::Windows::Forms::TabPage();
			this->tabp_abilities = new System::Windows::Forms::TabPage();
			this->tabp_skills = new System::Windows::Forms::TabPage();
			this->tabp_feats = new System::Windows::Forms::TabPage();
			this->tabp_equipment = new System::Windows::Forms::TabPage();
			this->tabc_equipment = new System::Windows::Forms::TabControl();
			this->tabp_purchases = new System::Windows::Forms::TabPage();
			this->tabp_equip = new System::Windows::Forms::TabPage();
			this->tabp_funds = new System::Windows::Forms::TabPage();
			this->tabp_spells = new System::Windows::Forms::TabPage();
			this->tabp_xp = new System::Windows::Forms::TabPage();
			this->label_hp = new System::Windows::Forms::Label();
			this->label_hp_roll = new System::Windows::Forms::Label();
			this->label_hp_misc = new System::Windows::Forms::Label();
			this->label_hp_mod = new System::Windows::Forms::Label();
			this->label_hp_plus_2 = new System::Windows::Forms::Label();
			this->label_hp_plus_1 = new System::Windows::Forms::Label();
			this->label_hp_equals = new System::Windows::Forms::Label();
			this->nud_hp_roll = new System::Windows::Forms::NumericUpDown();
			this->txtb_hp_misc = new System::Windows::Forms::TextBox();
			this->txtb_hp_mod = new System::Windows::Forms::TextBox();
			this->txtb_hp = new System::Windows::Forms::TextBox();
			this->btn_hp_apply = new System::Windows::Forms::Button();
			this->tabp_notes = new System::Windows::Forms::TabPage();
			this->grpb_alignment->SuspendLayout();
			this->grpb_gender->SuspendLayout();
			this->grpb_size->SuspendLayout();
			this->grpb_race->SuspendLayout();
			this->grpb_classes->SuspendLayout();
			this->grpb_level->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_ac_user))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_will_user))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_ref_user))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_fort_user))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_init_user))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_inherent_abilities_level))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_inherent_abilities_total))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_cha))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_wis))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_int))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_con))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_dex))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_str))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_inches))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_weight))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_feet))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_age))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_equip_group))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_add_funds))->BeginInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_xp))->BeginInit();
			this->tabc_character->SuspendLayout();
			this->tabp_class->SuspendLayout();
			this->tabp_character_features->SuspendLayout();
			this->tabc_character_features->SuspendLayout();
			this->tabp_bio->SuspendLayout();
			this->tabp_features->SuspendLayout();
			this->tabp_languages->SuspendLayout();
			this->tabp_gods->SuspendLayout();
			this->tabp_companions->SuspendLayout();
			this->tabp_stats->SuspendLayout();
			this->tabp_abilities->SuspendLayout();
			this->tabp_skills->SuspendLayout();
			this->tabp_feats->SuspendLayout();
			this->tabp_equipment->SuspendLayout();
			this->tabc_equipment->SuspendLayout();
			this->tabp_purchases->SuspendLayout();
			this->tabp_equip->SuspendLayout();
			this->tabp_funds->SuspendLayout();
			this->tabp_spells->SuspendLayout();
			this->tabp_xp->SuspendLayout();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_hp_roll))->BeginInit();
			this->tabp_notes->SuspendLayout();
			this->SuspendLayout();
			// 
			// grpb_alignment
			// 
			this->grpb_alignment->BackColor = System::Drawing::Color::Transparent;
			this->grpb_alignment->Controls->Add(this->txtb_alignment);
			this->grpb_alignment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->grpb_alignment->ForeColor = System::Drawing::SystemColors::ControlText;
			this->grpb_alignment->Location = System::Drawing::Point(640, 10);
			this->grpb_alignment->Name = S"grpb_alignment";
			this->grpb_alignment->Size = System::Drawing::Size(155, 45);
			this->grpb_alignment->TabIndex = 6;
			this->grpb_alignment->TabStop = false;
			this->grpb_alignment->Text = S"Alignment";
			// 
			// txtb_alignment
			// 
			this->txtb_alignment->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_alignment->Enabled = false;
			this->txtb_alignment->Location = System::Drawing::Point(5, 20);
			this->txtb_alignment->Name = S"txtb_alignment";
			this->txtb_alignment->ReadOnly = true;
			this->txtb_alignment->Size = System::Drawing::Size(145, 20);
			this->txtb_alignment->TabIndex = 0;
			this->txtb_alignment->Text = S"";
			// 
			// grpb_gender
			// 
			this->grpb_gender->BackColor = System::Drawing::Color::Transparent;
			this->grpb_gender->Controls->Add(this->comb_gender);
			this->grpb_gender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->grpb_gender->ForeColor = System::Drawing::SystemColors::ControlText;
			this->grpb_gender->Location = System::Drawing::Point(435, 10);
			this->grpb_gender->Name = S"grpb_gender";
			this->grpb_gender->Size = System::Drawing::Size(95, 45);
			this->grpb_gender->TabIndex = 4;
			this->grpb_gender->TabStop = false;
			this->grpb_gender->Text = S"Gender";
			// 
			// comb_gender
			// 
			this->comb_gender->Location = System::Drawing::Point(5, 20);
			this->comb_gender->Name = S"comb_gender";
			this->comb_gender->Size = System::Drawing::Size(85, 21);
			this->comb_gender->TabIndex = 0;
			// 
			// grpb_size
			// 
			this->grpb_size->BackColor = System::Drawing::Color::Transparent;
			this->grpb_size->Controls->Add(this->txtb_size);
			this->grpb_size->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->grpb_size->ForeColor = System::Drawing::SystemColors::ControlText;
			this->grpb_size->Location = System::Drawing::Point(545, 10);
			this->grpb_size->Name = S"grpb_size";
			this->grpb_size->Size = System::Drawing::Size(80, 45);
			this->grpb_size->TabIndex = 5;
			this->grpb_size->TabStop = false;
			this->grpb_size->Text = S"Size";
			// 
			// txtb_size
			// 
			this->txtb_size->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_size->Enabled = false;
			this->txtb_size->Location = System::Drawing::Point(5, 20);
			this->txtb_size->Name = S"txtb_size";
			this->txtb_size->ReadOnly = true;
			this->txtb_size->Size = System::Drawing::Size(70, 20);
			this->txtb_size->TabIndex = 0;
			this->txtb_size->Text = S"";
			// 
			// grpb_race
			// 
			this->grpb_race->BackColor = System::Drawing::Color::Transparent;
			this->grpb_race->Controls->Add(this->txtb_race);
			this->grpb_race->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->grpb_race->ForeColor = System::Drawing::SystemColors::ControlText;
			this->grpb_race->Location = System::Drawing::Point(260, 10);
			this->grpb_race->Name = S"grpb_race";
			this->grpb_race->Size = System::Drawing::Size(155, 45);
			this->grpb_race->TabIndex = 3;
			this->grpb_race->TabStop = false;
			this->grpb_race->Text = S"Race";
			// 
			// txtb_race
			// 
			this->txtb_race->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_race->Enabled = false;
			this->txtb_race->Location = System::Drawing::Point(5, 20);
			this->txtb_race->Name = S"txtb_race";
			this->txtb_race->ReadOnly = true;
			this->txtb_race->Size = System::Drawing::Size(145, 20);
			this->txtb_race->TabIndex = 0;
			this->txtb_race->Text = S"";
			// 
			// grpb_classes
			// 
			this->grpb_classes->BackColor = System::Drawing::Color::Transparent;
			this->grpb_classes->Controls->Add(this->comb_classes);
			this->grpb_classes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->grpb_classes->ForeColor = System::Drawing::SystemColors::ControlText;
			this->grpb_classes->Location = System::Drawing::Point(85, 10);
			this->grpb_classes->Name = S"grpb_classes";
			this->grpb_classes->Size = System::Drawing::Size(155, 45);
			this->grpb_classes->TabIndex = 2;
			this->grpb_classes->TabStop = false;
			this->grpb_classes->Text = S"Classes";
			// 
			// comb_classes
			// 
			this->comb_classes->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comb_classes->Location = System::Drawing::Point(5, 20);
			this->comb_classes->Name = S"comb_classes";
			this->comb_classes->Size = System::Drawing::Size(145, 21);
			this->comb_classes->TabIndex = 0;
			this->comb_classes->SelectedIndexChanged += new System::EventHandler(this, comb_classes_SelectedIndexChanged);
			// 
			// grpb_level
			// 
			this->grpb_level->BackColor = System::Drawing::Color::Transparent;
			this->grpb_level->Controls->Add(this->txtb_level);
			this->grpb_level->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->grpb_level->ForeColor = System::Drawing::SystemColors::ControlText;
			this->grpb_level->Location = System::Drawing::Point(5, 10);
			this->grpb_level->Name = S"grpb_level";
			this->grpb_level->Size = System::Drawing::Size(60, 45);
			this->grpb_level->TabIndex = 1;
			this->grpb_level->TabStop = false;
			this->grpb_level->Text = S"Level";
			// 
			// txtb_level
			// 
			this->txtb_level->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_level->Enabled = false;
			this->txtb_level->Location = System::Drawing::Point(5, 20);
			this->txtb_level->Name = S"txtb_level";
			this->txtb_level->ReadOnly = true;
			this->txtb_level->Size = System::Drawing::Size(50, 20);
			this->txtb_level->TabIndex = 0;
			this->txtb_level->Text = S"";
			this->txtb_level->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// mnu_flie
			// 
			System::Windows::Forms::MenuItem* __mcTemp__1[] = new System::Windows::Forms::MenuItem*[1];
			__mcTemp__1[0] = this->mnu_flie_title;
			this->mnu_flie->MenuItems->AddRange(__mcTemp__1);
			// 
			// mnu_flie_title
			// 
			this->mnu_flie_title->Index = 0;
			System::Windows::Forms::MenuItem* __mcTemp__2[] = new System::Windows::Forms::MenuItem*[4];
			__mcTemp__2[0] = this->mnui_new;
			__mcTemp__2[1] = this->mnui_load;
			__mcTemp__2[2] = this->mnui_save;
			__mcTemp__2[3] = this->mnui_close;
			this->mnu_flie_title->MenuItems->AddRange(__mcTemp__2);
			this->mnu_flie_title->Text = S"&File";
			// 
			// mnui_new
			// 
			this->mnui_new->Index = 0;
			this->mnui_new->Text = S"New";
			// 
			// mnui_load
			// 
			this->mnui_load->Index = 1;
			this->mnui_load->Text = S"Load";
			this->mnui_load->Click += new System::EventHandler(this, mnui_load_Click);
			// 
			// mnui_save
			// 
			this->mnui_save->Index = 2;
			this->mnui_save->Text = S"Save";
			this->mnui_save->Click += new System::EventHandler(this, mnui_save_Click);
			// 
			// mnui_close
			// 
			this->mnui_close->Index = 3;
			this->mnui_close->Text = S"Close";
			this->mnui_close->Click += new System::EventHandler(this, mnui_close_Click);
			// 
			// label_race_description
			// 
			this->label_race_description->Location = System::Drawing::Point(490, 60);
			this->label_race_description->Name = S"label_race_description";
			this->label_race_description->Size = System::Drawing::Size(130, 160);
			this->label_race_description->TabIndex = 41;
			// 
			// label_class_description
			// 
			this->label_class_description->Location = System::Drawing::Point(5, 355);
			this->label_class_description->Name = S"label_class_description";
			this->label_class_description->Size = System::Drawing::Size(395, 55);
			this->label_class_description->TabIndex = 40;
			// 
			// btn_add_class
			// 
			this->btn_add_class->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_class->Location = System::Drawing::Point(200, 10);
			this->btn_add_class->Name = S"btn_add_class";
			this->btn_add_class->Size = System::Drawing::Size(70, 25);
			this->btn_add_class->TabIndex = 31;
			this->btn_add_class->Text = S"Add";
			this->btn_add_class->Click += new System::EventHandler(this, btn_add_class_Click);
			// 
			// lstv_class_list
			// 
			this->lstv_class_list->FullRowSelect = true;
			this->lstv_class_list->HideSelection = false;
			this->lstv_class_list->Location = System::Drawing::Point(5, 10);
			this->lstv_class_list->MultiSelect = false;
			this->lstv_class_list->Name = S"lstv_class_list";
			this->lstv_class_list->Size = System::Drawing::Size(170, 330);
			this->lstv_class_list->TabIndex = 28;
			this->lstv_class_list->View = System::Windows::Forms::View::Details;
			// 
			// btn_class_ok
			// 
			this->btn_class_ok->BackColor = System::Drawing::SystemColors::Control;
			this->btn_class_ok->Location = System::Drawing::Point(535, 375);
			this->btn_class_ok->Name = S"btn_class_ok";
			this->btn_class_ok->Size = System::Drawing::Size(100, 25);
			this->btn_class_ok->TabIndex = 36;
			this->btn_class_ok->Text = S"OK";
			this->btn_class_ok->Click += new System::EventHandler(this, btn_class_ok_Click);
			// 
			// lstv_class_level
			// 
			this->lstv_class_level->Location = System::Drawing::Point(295, 10);
			this->lstv_class_level->Name = S"lstv_class_level";
			this->lstv_class_level->Size = System::Drawing::Size(170, 335);
			this->lstv_class_level->TabIndex = 29;
			this->lstv_class_level->View = System::Windows::Forms::View::Details;
			// 
			// label_race_benifits
			// 
			this->label_race_benifits->Font = new System::Drawing::Font(S"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, (System::Byte)0);
			this->label_race_benifits->Location = System::Drawing::Point(490, 35);
			this->label_race_benifits->Name = S"label_race_benifits";
			this->label_race_benifits->Size = System::Drawing::Size(85, 15);
			this->label_race_benifits->TabIndex = 37;
			this->label_race_benifits->Text = S"Race Benifits";
			// 
			// label_class_requirements
			// 
			this->label_class_requirements->Font = new System::Drawing::Font(S"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, (System::Byte)0);
			this->label_class_requirements->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label_class_requirements->Location = System::Drawing::Point(5, 340);
			this->label_class_requirements->Name = S"label_class_requirements";
			this->label_class_requirements->Size = System::Drawing::Size(120, 20);
			this->label_class_requirements->TabIndex = 34;
			this->label_class_requirements->Text = S"Class Requirements:";
			// 
			// btn_remove_class
			// 
			this->btn_remove_class->BackColor = System::Drawing::SystemColors::Control;
			this->btn_remove_class->Location = System::Drawing::Point(200, 45);
			this->btn_remove_class->Name = S"btn_remove_class";
			this->btn_remove_class->Size = System::Drawing::Size(70, 25);
			this->btn_remove_class->TabIndex = 30;
			this->btn_remove_class->Text = S"Remove";
			this->btn_remove_class->Click += new System::EventHandler(this, btn_remove_class_Click);
			// 
			// comb_alignment_selector
			// 
			this->comb_alignment_selector->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comb_alignment_selector->ForeColor = System::Drawing::SystemColors::WindowText;
			System::Object* __mcTemp__3[] = new System::Object*[10];
			__mcTemp__3[0] = S"Alignment";
			__mcTemp__3[1] = S"Lawful Good";
			__mcTemp__3[2] = S"Neutral Good";
			__mcTemp__3[3] = S"Chaotic Good";
			__mcTemp__3[4] = S"Lawful Neutral";
			__mcTemp__3[5] = S"True Neutral";
			__mcTemp__3[6] = S"Chaotic Neutral";
			__mcTemp__3[7] = S"Lawful Evil";
			__mcTemp__3[8] = S"Neutral Evil";
			__mcTemp__3[9] = S"Chaotic Evil";
			this->comb_alignment_selector->Items->AddRange(__mcTemp__3);
			this->comb_alignment_selector->Location = System::Drawing::Point(490, 230);
			this->comb_alignment_selector->MaxDropDownItems = 10;
			this->comb_alignment_selector->Name = S"comb_alignment_selector";
			this->comb_alignment_selector->Size = System::Drawing::Size(130, 21);
			this->comb_alignment_selector->TabIndex = 33;
			// 
			// btn_class_cancel
			// 
			this->btn_class_cancel->BackColor = System::Drawing::SystemColors::Control;
			this->btn_class_cancel->Location = System::Drawing::Point(425, 375);
			this->btn_class_cancel->Name = S"btn_class_cancel";
			this->btn_class_cancel->Size = System::Drawing::Size(100, 25);
			this->btn_class_cancel->TabIndex = 39;
			this->btn_class_cancel->Text = S"Cancel";
			this->btn_class_cancel->Click += new System::EventHandler(this, btn_class_cancel_Click);
			// 
			// comb_race_selector
			// 
			this->comb_race_selector->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comb_race_selector->Location = System::Drawing::Point(490, 5);
			this->comb_race_selector->Name = S"comb_race_selector";
			this->comb_race_selector->Size = System::Drawing::Size(130, 21);
			this->comb_race_selector->TabIndex = 32;
			this->comb_race_selector->SelectedIndexChanged += new System::EventHandler(this, comb_race_selector_SelectedIndexChanged);
			// 
			// label_base_speed
			// 
			this->label_base_speed->Location = System::Drawing::Point(470, 30);
			this->label_base_speed->Name = S"label_base_speed";
			this->label_base_speed->Size = System::Drawing::Size(70, 13);
			this->label_base_speed->TabIndex = 347;
			this->label_base_speed->Text = S"Base Speed:";
			this->label_base_speed->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtb_base_speed
			// 
			this->txtb_base_speed->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_base_speed->Enabled = false;
			this->txtb_base_speed->ForeColor = System::Drawing::Color::Gray;
			this->txtb_base_speed->Location = System::Drawing::Point(560, 30);
			this->txtb_base_speed->Name = S"txtb_base_speed";
			this->txtb_base_speed->ReadOnly = true;
			this->txtb_base_speed->Size = System::Drawing::Size(60, 20);
			this->txtb_base_speed->TabIndex = 346;
			this->txtb_base_speed->Text = S"20 ft";
			this->txtb_base_speed->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ranged_total
			// 
			this->txtb_ranged_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ranged_total->Enabled = false;
			this->txtb_ranged_total->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ranged_total->Location = System::Drawing::Point(435, 320);
			this->txtb_ranged_total->Name = S"txtb_ranged_total";
			this->txtb_ranged_total->ReadOnly = true;
			this->txtb_ranged_total->Size = System::Drawing::Size(190, 20);
			this->txtb_ranged_total->TabIndex = 345;
			this->txtb_ranged_total->Text = S"0";
			this->txtb_ranged_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_melee_total
			// 
			this->txtb_melee_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_melee_total->Enabled = false;
			this->txtb_melee_total->ForeColor = System::Drawing::Color::Gray;
			this->txtb_melee_total->Location = System::Drawing::Point(435, 290);
			this->txtb_melee_total->Name = S"txtb_melee_total";
			this->txtb_melee_total->ReadOnly = true;
			this->txtb_melee_total->Size = System::Drawing::Size(190, 20);
			this->txtb_melee_total->TabIndex = 344;
			this->txtb_melee_total->Text = S"0";
			this->txtb_melee_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ranged_plus_4
			// 
			this->label_ranged_plus_4->Location = System::Drawing::Point(400, 320);
			this->label_ranged_plus_4->Name = S"label_ranged_plus_4";
			this->label_ranged_plus_4->Size = System::Drawing::Size(15, 13);
			this->label_ranged_plus_4->TabIndex = 343;
			this->label_ranged_plus_4->Text = S"+";
			// 
			// txtb_ranged_misc
			// 
			this->txtb_ranged_misc->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ranged_misc->Enabled = false;
			this->txtb_ranged_misc->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ranged_misc->Location = System::Drawing::Point(360, 320);
			this->txtb_ranged_misc->Name = S"txtb_ranged_misc";
			this->txtb_ranged_misc->ReadOnly = true;
			this->txtb_ranged_misc->Size = System::Drawing::Size(35, 20);
			this->txtb_ranged_misc->TabIndex = 342;
			this->txtb_ranged_misc->Text = S"0";
			this->txtb_ranged_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_attack_misc
			// 
			this->label_attack_misc->Location = System::Drawing::Point(355, 265);
			this->label_attack_misc->Name = S"label_attack_misc";
			this->label_attack_misc->Size = System::Drawing::Size(35, 13);
			this->label_attack_misc->TabIndex = 341;
			this->label_attack_misc->Text = S"misc.";
			this->label_attack_misc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_melee_plus_4
			// 
			this->label_melee_plus_4->Location = System::Drawing::Point(400, 290);
			this->label_melee_plus_4->Name = S"label_melee_plus_4";
			this->label_melee_plus_4->Size = System::Drawing::Size(15, 13);
			this->label_melee_plus_4->TabIndex = 340;
			this->label_melee_plus_4->Text = S"+";
			// 
			// txtb_melee_misc
			// 
			this->txtb_melee_misc->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_melee_misc->Enabled = false;
			this->txtb_melee_misc->ForeColor = System::Drawing::Color::Gray;
			this->txtb_melee_misc->Location = System::Drawing::Point(360, 290);
			this->txtb_melee_misc->Name = S"txtb_melee_misc";
			this->txtb_melee_misc->ReadOnly = true;
			this->txtb_melee_misc->Size = System::Drawing::Size(35, 20);
			this->txtb_melee_misc->TabIndex = 339;
			this->txtb_melee_misc->Text = S"0";
			this->txtb_melee_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ac_mod
			// 
			this->label_ac_mod->Location = System::Drawing::Point(285, 200);
			this->label_ac_mod->Name = S"label_ac_mod";
			this->label_ac_mod->Size = System::Drawing::Size(35, 13);
			this->label_ac_mod->TabIndex = 338;
			this->label_ac_mod->Text = S"mod";
			this->label_ac_mod->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_ac_natural
			// 
			this->label_ac_natural->Location = System::Drawing::Point(210, 200);
			this->label_ac_natural->Name = S"label_ac_natural";
			this->label_ac_natural->Size = System::Drawing::Size(45, 13);
			this->label_ac_natural->TabIndex = 337;
			this->label_ac_natural->Text = S"natural";
			this->label_ac_natural->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_ac_base
			// 
			this->label_ac_base->Location = System::Drawing::Point(145, 200);
			this->label_ac_base->Name = S"label_ac_base";
			this->label_ac_base->Size = System::Drawing::Size(35, 13);
			this->label_ac_base->TabIndex = 336;
			this->label_ac_base->Text = S"base";
			this->label_ac_base->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_ac_plus_3
			// 
			this->label_ac_plus_3->Location = System::Drawing::Point(330, 225);
			this->label_ac_plus_3->Name = S"label_ac_plus_3";
			this->label_ac_plus_3->Size = System::Drawing::Size(15, 13);
			this->label_ac_plus_3->TabIndex = 335;
			this->label_ac_plus_3->Text = S"+";
			// 
			// label_ac_plus_2
			// 
			this->label_ac_plus_2->Location = System::Drawing::Point(260, 225);
			this->label_ac_plus_2->Name = S"label_ac_plus_2";
			this->label_ac_plus_2->Size = System::Drawing::Size(15, 13);
			this->label_ac_plus_2->TabIndex = 334;
			this->label_ac_plus_2->Text = S"+";
			// 
			// label_ac_plus_1
			// 
			this->label_ac_plus_1->Location = System::Drawing::Point(190, 225);
			this->label_ac_plus_1->Name = S"label_ac_plus_1";
			this->label_ac_plus_1->Size = System::Drawing::Size(15, 13);
			this->label_ac_plus_1->TabIndex = 333;
			this->label_ac_plus_1->Text = S"+";
			// 
			// txtb_ac_mod
			// 
			this->txtb_ac_mod->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ac_mod->Enabled = false;
			this->txtb_ac_mod->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ac_mod->Location = System::Drawing::Point(290, 225);
			this->txtb_ac_mod->Name = S"txtb_ac_mod";
			this->txtb_ac_mod->ReadOnly = true;
			this->txtb_ac_mod->Size = System::Drawing::Size(35, 20);
			this->txtb_ac_mod->TabIndex = 332;
			this->txtb_ac_mod->Text = S"0";
			this->txtb_ac_mod->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ac_natural
			// 
			this->txtb_ac_natural->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ac_natural->Enabled = false;
			this->txtb_ac_natural->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ac_natural->Location = System::Drawing::Point(220, 225);
			this->txtb_ac_natural->Name = S"txtb_ac_natural";
			this->txtb_ac_natural->ReadOnly = true;
			this->txtb_ac_natural->Size = System::Drawing::Size(35, 20);
			this->txtb_ac_natural->TabIndex = 331;
			this->txtb_ac_natural->Text = S"0";
			this->txtb_ac_natural->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ac_base
			// 
			this->txtb_ac_base->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ac_base->Enabled = false;
			this->txtb_ac_base->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ac_base->Location = System::Drawing::Point(150, 225);
			this->txtb_ac_base->Name = S"txtb_ac_base";
			this->txtb_ac_base->ReadOnly = true;
			this->txtb_ac_base->Size = System::Drawing::Size(35, 20);
			this->txtb_ac_base->TabIndex = 330;
			this->txtb_ac_base->Text = S"0";
			this->txtb_ac_base->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_will_plus_2
			// 
			this->label_will_plus_2->Location = System::Drawing::Point(260, 160);
			this->label_will_plus_2->Name = S"label_will_plus_2";
			this->label_will_plus_2->Size = System::Drawing::Size(15, 13);
			this->label_will_plus_2->TabIndex = 329;
			this->label_will_plus_2->Text = S"+";
			// 
			// label_will_plus_1
			// 
			this->label_will_plus_1->Location = System::Drawing::Point(190, 160);
			this->label_will_plus_1->Name = S"label_will_plus_1";
			this->label_will_plus_1->Size = System::Drawing::Size(15, 13);
			this->label_will_plus_1->TabIndex = 328;
			this->label_will_plus_1->Text = S"+";
			// 
			// txtb_will_mod
			// 
			this->txtb_will_mod->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_will_mod->Enabled = false;
			this->txtb_will_mod->ForeColor = System::Drawing::Color::Gray;
			this->txtb_will_mod->Location = System::Drawing::Point(220, 160);
			this->txtb_will_mod->Name = S"txtb_will_mod";
			this->txtb_will_mod->ReadOnly = true;
			this->txtb_will_mod->Size = System::Drawing::Size(35, 20);
			this->txtb_will_mod->TabIndex = 327;
			this->txtb_will_mod->Text = S"0";
			this->txtb_will_mod->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_will_base
			// 
			this->txtb_will_base->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_will_base->Enabled = false;
			this->txtb_will_base->ForeColor = System::Drawing::Color::Gray;
			this->txtb_will_base->Location = System::Drawing::Point(150, 160);
			this->txtb_will_base->Name = S"txtb_will_base";
			this->txtb_will_base->ReadOnly = true;
			this->txtb_will_base->Size = System::Drawing::Size(35, 20);
			this->txtb_will_base->TabIndex = 326;
			this->txtb_will_base->Text = S"0";
			this->txtb_will_base->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ref_plus_2
			// 
			this->label_ref_plus_2->Location = System::Drawing::Point(260, 130);
			this->label_ref_plus_2->Name = S"label_ref_plus_2";
			this->label_ref_plus_2->Size = System::Drawing::Size(15, 13);
			this->label_ref_plus_2->TabIndex = 325;
			this->label_ref_plus_2->Text = S"+";
			// 
			// label_ref_plus_1
			// 
			this->label_ref_plus_1->Location = System::Drawing::Point(190, 130);
			this->label_ref_plus_1->Name = S"label_ref_plus_1";
			this->label_ref_plus_1->Size = System::Drawing::Size(15, 13);
			this->label_ref_plus_1->TabIndex = 324;
			this->label_ref_plus_1->Text = S"+";
			// 
			// txtb_ref_mod
			// 
			this->txtb_ref_mod->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ref_mod->Enabled = false;
			this->txtb_ref_mod->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ref_mod->Location = System::Drawing::Point(220, 130);
			this->txtb_ref_mod->Name = S"txtb_ref_mod";
			this->txtb_ref_mod->ReadOnly = true;
			this->txtb_ref_mod->Size = System::Drawing::Size(35, 20);
			this->txtb_ref_mod->TabIndex = 323;
			this->txtb_ref_mod->Text = S"0";
			this->txtb_ref_mod->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ref_base
			// 
			this->txtb_ref_base->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ref_base->Enabled = false;
			this->txtb_ref_base->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ref_base->Location = System::Drawing::Point(150, 130);
			this->txtb_ref_base->Name = S"txtb_ref_base";
			this->txtb_ref_base->ReadOnly = true;
			this->txtb_ref_base->Size = System::Drawing::Size(35, 20);
			this->txtb_ref_base->TabIndex = 322;
			this->txtb_ref_base->Text = S"0";
			this->txtb_ref_base->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_saves_mod
			// 
			this->label_saves_mod->Location = System::Drawing::Point(215, 75);
			this->label_saves_mod->Name = S"label_saves_mod";
			this->label_saves_mod->Size = System::Drawing::Size(35, 13);
			this->label_saves_mod->TabIndex = 321;
			this->label_saves_mod->Text = S"mod";
			this->label_saves_mod->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_saves_base
			// 
			this->label_saves_base->Location = System::Drawing::Point(145, 75);
			this->label_saves_base->Name = S"label_saves_base";
			this->label_saves_base->Size = System::Drawing::Size(35, 13);
			this->label_saves_base->TabIndex = 320;
			this->label_saves_base->Text = S"base";
			this->label_saves_base->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_fort_plus_2
			// 
			this->label_fort_plus_2->Location = System::Drawing::Point(260, 100);
			this->label_fort_plus_2->Name = S"label_fort_plus_2";
			this->label_fort_plus_2->Size = System::Drawing::Size(15, 13);
			this->label_fort_plus_2->TabIndex = 319;
			this->label_fort_plus_2->Text = S"+";
			// 
			// label_fort_plus_1
			// 
			this->label_fort_plus_1->Location = System::Drawing::Point(190, 100);
			this->label_fort_plus_1->Name = S"label_fort_plus_1";
			this->label_fort_plus_1->Size = System::Drawing::Size(15, 13);
			this->label_fort_plus_1->TabIndex = 318;
			this->label_fort_plus_1->Text = S"+";
			// 
			// txtb_fort_mod
			// 
			this->txtb_fort_mod->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_fort_mod->Enabled = false;
			this->txtb_fort_mod->ForeColor = System::Drawing::Color::Gray;
			this->txtb_fort_mod->Location = System::Drawing::Point(220, 100);
			this->txtb_fort_mod->Name = S"txtb_fort_mod";
			this->txtb_fort_mod->ReadOnly = true;
			this->txtb_fort_mod->Size = System::Drawing::Size(35, 20);
			this->txtb_fort_mod->TabIndex = 317;
			this->txtb_fort_mod->Text = S"0";
			this->txtb_fort_mod->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_fort_base
			// 
			this->txtb_fort_base->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_fort_base->Enabled = false;
			this->txtb_fort_base->ForeColor = System::Drawing::Color::Gray;
			this->txtb_fort_base->Location = System::Drawing::Point(150, 100);
			this->txtb_fort_base->Name = S"txtb_fort_base";
			this->txtb_fort_base->ReadOnly = true;
			this->txtb_fort_base->Size = System::Drawing::Size(35, 20);
			this->txtb_fort_base->TabIndex = 316;
			this->txtb_fort_base->Text = S"0";
			this->txtb_fort_base->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ranged_plus_3
			// 
			this->label_ranged_plus_3->Location = System::Drawing::Point(330, 320);
			this->label_ranged_plus_3->Name = S"label_ranged_plus_3";
			this->label_ranged_plus_3->Size = System::Drawing::Size(15, 13);
			this->label_ranged_plus_3->TabIndex = 315;
			this->label_ranged_plus_3->Text = S"+";
			// 
			// label_ranged_plus_2
			// 
			this->label_ranged_plus_2->Location = System::Drawing::Point(260, 320);
			this->label_ranged_plus_2->Name = S"label_ranged_plus_2";
			this->label_ranged_plus_2->Size = System::Drawing::Size(15, 13);
			this->label_ranged_plus_2->TabIndex = 314;
			this->label_ranged_plus_2->Text = S"+";
			// 
			// label_ranged_plus_1
			// 
			this->label_ranged_plus_1->Location = System::Drawing::Point(190, 320);
			this->label_ranged_plus_1->Name = S"label_ranged_plus_1";
			this->label_ranged_plus_1->Size = System::Drawing::Size(15, 13);
			this->label_ranged_plus_1->TabIndex = 313;
			this->label_ranged_plus_1->Text = S"+";
			// 
			// label_ranged_equals
			// 
			this->label_ranged_equals->Location = System::Drawing::Point(120, 320);
			this->label_ranged_equals->Name = S"label_ranged_equals";
			this->label_ranged_equals->Size = System::Drawing::Size(15, 13);
			this->label_ranged_equals->TabIndex = 312;
			this->label_ranged_equals->Text = S"=";
			// 
			// txtb_ranged_size
			// 
			this->txtb_ranged_size->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ranged_size->Enabled = false;
			this->txtb_ranged_size->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ranged_size->Location = System::Drawing::Point(290, 320);
			this->txtb_ranged_size->Name = S"txtb_ranged_size";
			this->txtb_ranged_size->ReadOnly = true;
			this->txtb_ranged_size->Size = System::Drawing::Size(35, 20);
			this->txtb_ranged_size->TabIndex = 311;
			this->txtb_ranged_size->Text = S"0";
			this->txtb_ranged_size->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ranged_mod
			// 
			this->txtb_ranged_mod->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ranged_mod->Enabled = false;
			this->txtb_ranged_mod->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ranged_mod->Location = System::Drawing::Point(220, 320);
			this->txtb_ranged_mod->Name = S"txtb_ranged_mod";
			this->txtb_ranged_mod->ReadOnly = true;
			this->txtb_ranged_mod->Size = System::Drawing::Size(35, 20);
			this->txtb_ranged_mod->TabIndex = 310;
			this->txtb_ranged_mod->Text = S"0";
			this->txtb_ranged_mod->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ranged_base
			// 
			this->txtb_ranged_base->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ranged_base->Enabled = false;
			this->txtb_ranged_base->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ranged_base->Location = System::Drawing::Point(150, 320);
			this->txtb_ranged_base->Name = S"txtb_ranged_base";
			this->txtb_ranged_base->ReadOnly = true;
			this->txtb_ranged_base->Size = System::Drawing::Size(35, 20);
			this->txtb_ranged_base->TabIndex = 309;
			this->txtb_ranged_base->Text = S"0";
			this->txtb_ranged_base->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ranged_base_total
			// 
			this->txtb_ranged_base_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ranged_base_total->Enabled = false;
			this->txtb_ranged_base_total->Location = System::Drawing::Point(80, 320);
			this->txtb_ranged_base_total->Name = S"txtb_ranged_base_total";
			this->txtb_ranged_base_total->ReadOnly = true;
			this->txtb_ranged_base_total->Size = System::Drawing::Size(35, 20);
			this->txtb_ranged_base_total->TabIndex = 308;
			this->txtb_ranged_base_total->Text = S"0";
			this->txtb_ranged_base_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ranged
			// 
			this->label_ranged->Location = System::Drawing::Point(10, 320);
			this->label_ranged->Name = S"label_ranged";
			this->label_ranged->Size = System::Drawing::Size(50, 13);
			this->label_ranged->TabIndex = 307;
			this->label_ranged->Text = S"Ranged:";
			this->label_ranged->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_attack_size
			// 
			this->label_attack_size->Location = System::Drawing::Point(285, 265);
			this->label_attack_size->Name = S"label_attack_size";
			this->label_attack_size->Size = System::Drawing::Size(35, 13);
			this->label_attack_size->TabIndex = 306;
			this->label_attack_size->Text = S"size";
			this->label_attack_size->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_attack_mod
			// 
			this->label_attack_mod->Location = System::Drawing::Point(215, 265);
			this->label_attack_mod->Name = S"label_attack_mod";
			this->label_attack_mod->Size = System::Drawing::Size(35, 13);
			this->label_attack_mod->TabIndex = 305;
			this->label_attack_mod->Text = S"mod";
			this->label_attack_mod->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_attack_base
			// 
			this->label_attack_base->Location = System::Drawing::Point(145, 265);
			this->label_attack_base->Name = S"label_attack_base";
			this->label_attack_base->Size = System::Drawing::Size(35, 13);
			this->label_attack_base->TabIndex = 304;
			this->label_attack_base->Text = S"base";
			this->label_attack_base->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_melee_plus_3
			// 
			this->label_melee_plus_3->Location = System::Drawing::Point(330, 290);
			this->label_melee_plus_3->Name = S"label_melee_plus_3";
			this->label_melee_plus_3->Size = System::Drawing::Size(15, 13);
			this->label_melee_plus_3->TabIndex = 303;
			this->label_melee_plus_3->Text = S"+";
			// 
			// label_melee_plus_2
			// 
			this->label_melee_plus_2->Location = System::Drawing::Point(260, 290);
			this->label_melee_plus_2->Name = S"label_melee_plus_2";
			this->label_melee_plus_2->Size = System::Drawing::Size(15, 13);
			this->label_melee_plus_2->TabIndex = 302;
			this->label_melee_plus_2->Text = S"+";
			// 
			// label_melee_plus_1
			// 
			this->label_melee_plus_1->Location = System::Drawing::Point(190, 290);
			this->label_melee_plus_1->Name = S"label_melee_plus_1";
			this->label_melee_plus_1->Size = System::Drawing::Size(15, 13);
			this->label_melee_plus_1->TabIndex = 301;
			this->label_melee_plus_1->Text = S"+";
			// 
			// label_melee_equals
			// 
			this->label_melee_equals->Location = System::Drawing::Point(120, 290);
			this->label_melee_equals->Name = S"label_melee_equals";
			this->label_melee_equals->Size = System::Drawing::Size(15, 13);
			this->label_melee_equals->TabIndex = 300;
			this->label_melee_equals->Text = S"=";
			// 
			// txtb_melee_size
			// 
			this->txtb_melee_size->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_melee_size->Enabled = false;
			this->txtb_melee_size->ForeColor = System::Drawing::Color::Gray;
			this->txtb_melee_size->Location = System::Drawing::Point(290, 290);
			this->txtb_melee_size->Name = S"txtb_melee_size";
			this->txtb_melee_size->ReadOnly = true;
			this->txtb_melee_size->Size = System::Drawing::Size(35, 20);
			this->txtb_melee_size->TabIndex = 299;
			this->txtb_melee_size->Text = S"0";
			this->txtb_melee_size->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_melee_mod
			// 
			this->txtb_melee_mod->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_melee_mod->Enabled = false;
			this->txtb_melee_mod->ForeColor = System::Drawing::Color::Gray;
			this->txtb_melee_mod->Location = System::Drawing::Point(220, 290);
			this->txtb_melee_mod->Name = S"txtb_melee_mod";
			this->txtb_melee_mod->ReadOnly = true;
			this->txtb_melee_mod->Size = System::Drawing::Size(35, 20);
			this->txtb_melee_mod->TabIndex = 298;
			this->txtb_melee_mod->Text = S"0";
			this->txtb_melee_mod->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_melee_base
			// 
			this->txtb_melee_base->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_melee_base->Enabled = false;
			this->txtb_melee_base->ForeColor = System::Drawing::Color::Gray;
			this->txtb_melee_base->Location = System::Drawing::Point(150, 290);
			this->txtb_melee_base->Name = S"txtb_melee_base";
			this->txtb_melee_base->ReadOnly = true;
			this->txtb_melee_base->Size = System::Drawing::Size(35, 20);
			this->txtb_melee_base->TabIndex = 297;
			this->txtb_melee_base->Text = S"0";
			this->txtb_melee_base->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_melee_base_total
			// 
			this->txtb_melee_base_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_melee_base_total->Enabled = false;
			this->txtb_melee_base_total->Location = System::Drawing::Point(80, 290);
			this->txtb_melee_base_total->Name = S"txtb_melee_base_total";
			this->txtb_melee_base_total->ReadOnly = true;
			this->txtb_melee_base_total->Size = System::Drawing::Size(35, 20);
			this->txtb_melee_base_total->TabIndex = 296;
			this->txtb_melee_base_total->Text = S"0";
			this->txtb_melee_base_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_melee
			// 
			this->label_melee->Location = System::Drawing::Point(10, 290);
			this->label_melee->Name = S"label_melee";
			this->label_melee->Size = System::Drawing::Size(50, 13);
			this->label_melee->TabIndex = 295;
			this->label_melee->Text = S"Melee:";
			this->label_melee->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_ac_user
			// 
			this->label_ac_user->Location = System::Drawing::Point(565, 200);
			this->label_ac_user->Name = S"label_ac_user";
			this->label_ac_user->Size = System::Drawing::Size(55, 13);
			this->label_ac_user->TabIndex = 294;
			this->label_ac_user->Text = S"user";
			this->label_ac_user->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_ac_misc
			// 
			this->label_ac_misc->Location = System::Drawing::Point(495, 200);
			this->label_ac_misc->Name = S"label_ac_misc";
			this->label_ac_misc->Size = System::Drawing::Size(35, 13);
			this->label_ac_misc->TabIndex = 293;
			this->label_ac_misc->Text = S"misc.";
			this->label_ac_misc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_ac_magic
			// 
			this->label_ac_magic->Location = System::Drawing::Point(425, 200);
			this->label_ac_magic->Name = S"label_ac_magic";
			this->label_ac_magic->Size = System::Drawing::Size(35, 13);
			this->label_ac_magic->TabIndex = 292;
			this->label_ac_magic->Text = S"magic";
			this->label_ac_magic->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_ac_armor
			// 
			this->label_ac_armor->Location = System::Drawing::Point(355, 200);
			this->label_ac_armor->Name = S"label_ac_armor";
			this->label_ac_armor->Size = System::Drawing::Size(35, 13);
			this->label_ac_armor->TabIndex = 291;
			this->label_ac_armor->Text = S"armor";
			this->label_ac_armor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_ac_plus_6
			// 
			this->label_ac_plus_6->Location = System::Drawing::Point(540, 225);
			this->label_ac_plus_6->Name = S"label_ac_plus_6";
			this->label_ac_plus_6->Size = System::Drawing::Size(15, 13);
			this->label_ac_plus_6->TabIndex = 290;
			this->label_ac_plus_6->Text = S"+";
			// 
			// label_ac_plus_5
			// 
			this->label_ac_plus_5->Location = System::Drawing::Point(470, 225);
			this->label_ac_plus_5->Name = S"label_ac_plus_5";
			this->label_ac_plus_5->Size = System::Drawing::Size(15, 13);
			this->label_ac_plus_5->TabIndex = 289;
			this->label_ac_plus_5->Text = S"+";
			// 
			// label_ac_plus_4
			// 
			this->label_ac_plus_4->Location = System::Drawing::Point(400, 225);
			this->label_ac_plus_4->Name = S"label_ac_plus_4";
			this->label_ac_plus_4->Size = System::Drawing::Size(15, 13);
			this->label_ac_plus_4->TabIndex = 288;
			this->label_ac_plus_4->Text = S"+";
			// 
			// label_ac_equals
			// 
			this->label_ac_equals->Location = System::Drawing::Point(120, 225);
			this->label_ac_equals->Name = S"label_ac_equals";
			this->label_ac_equals->Size = System::Drawing::Size(15, 13);
			this->label_ac_equals->TabIndex = 287;
			this->label_ac_equals->Text = S"=";
			// 
			// nud_ac_user
			// 
			this->nud_ac_user->BackColor = System::Drawing::SystemColors::Window;
			this->nud_ac_user->Location = System::Drawing::Point(570, 225);
			this->nud_ac_user->Name = S"nud_ac_user";
			this->nud_ac_user->Size = System::Drawing::Size(60, 20);
			this->nud_ac_user->TabIndex = 286;
			this->nud_ac_user->ValueChanged += new System::EventHandler(this, nud_ac_user_ValueChanged);
			// 
			// txtb_ac_misc
			// 
			this->txtb_ac_misc->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ac_misc->Enabled = false;
			this->txtb_ac_misc->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ac_misc->Location = System::Drawing::Point(500, 225);
			this->txtb_ac_misc->Name = S"txtb_ac_misc";
			this->txtb_ac_misc->ReadOnly = true;
			this->txtb_ac_misc->Size = System::Drawing::Size(35, 20);
			this->txtb_ac_misc->TabIndex = 285;
			this->txtb_ac_misc->Text = S"0";
			this->txtb_ac_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ac_magic
			// 
			this->txtb_ac_magic->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ac_magic->Enabled = false;
			this->txtb_ac_magic->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ac_magic->Location = System::Drawing::Point(430, 225);
			this->txtb_ac_magic->Name = S"txtb_ac_magic";
			this->txtb_ac_magic->ReadOnly = true;
			this->txtb_ac_magic->Size = System::Drawing::Size(35, 20);
			this->txtb_ac_magic->TabIndex = 284;
			this->txtb_ac_magic->Text = S"0";
			this->txtb_ac_magic->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ac_armor
			// 
			this->txtb_ac_armor->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ac_armor->Enabled = false;
			this->txtb_ac_armor->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ac_armor->Location = System::Drawing::Point(360, 225);
			this->txtb_ac_armor->Name = S"txtb_ac_armor";
			this->txtb_ac_armor->ReadOnly = true;
			this->txtb_ac_armor->Size = System::Drawing::Size(35, 20);
			this->txtb_ac_armor->TabIndex = 283;
			this->txtb_ac_armor->Text = S"0";
			this->txtb_ac_armor->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ac_total
			// 
			this->txtb_ac_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ac_total->Enabled = false;
			this->txtb_ac_total->Location = System::Drawing::Point(80, 225);
			this->txtb_ac_total->Name = S"txtb_ac_total";
			this->txtb_ac_total->ReadOnly = true;
			this->txtb_ac_total->Size = System::Drawing::Size(35, 20);
			this->txtb_ac_total->TabIndex = 282;
			this->txtb_ac_total->Text = S"0";
			this->txtb_ac_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ac
			// 
			this->label_ac->Location = System::Drawing::Point(25, 225);
			this->label_ac->Name = S"label_ac";
			this->label_ac->Size = System::Drawing::Size(35, 13);
			this->label_ac->TabIndex = 281;
			this->label_ac->Text = S"AC:";
			this->label_ac->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_will_plus_5
			// 
			this->label_will_plus_5->Location = System::Drawing::Point(470, 160);
			this->label_will_plus_5->Name = S"label_will_plus_5";
			this->label_will_plus_5->Size = System::Drawing::Size(15, 13);
			this->label_will_plus_5->TabIndex = 280;
			this->label_will_plus_5->Text = S"+";
			// 
			// label_will_plus_4
			// 
			this->label_will_plus_4->Location = System::Drawing::Point(400, 160);
			this->label_will_plus_4->Name = S"label_will_plus_4";
			this->label_will_plus_4->Size = System::Drawing::Size(15, 13);
			this->label_will_plus_4->TabIndex = 279;
			this->label_will_plus_4->Text = S"+";
			// 
			// label_will_plus_3
			// 
			this->label_will_plus_3->Location = System::Drawing::Point(330, 160);
			this->label_will_plus_3->Name = S"label_will_plus_3";
			this->label_will_plus_3->Size = System::Drawing::Size(15, 13);
			this->label_will_plus_3->TabIndex = 278;
			this->label_will_plus_3->Text = S"+";
			// 
			// label_will_equals
			// 
			this->label_will_equals->Location = System::Drawing::Point(120, 160);
			this->label_will_equals->Name = S"label_will_equals";
			this->label_will_equals->Size = System::Drawing::Size(15, 13);
			this->label_will_equals->TabIndex = 277;
			this->label_will_equals->Text = S"=";
			// 
			// nud_will_user
			// 
			this->nud_will_user->BackColor = System::Drawing::SystemColors::Window;
			this->nud_will_user->Location = System::Drawing::Point(500, 160);
			this->nud_will_user->Name = S"nud_will_user";
			this->nud_will_user->Size = System::Drawing::Size(60, 20);
			this->nud_will_user->TabIndex = 276;
			this->nud_will_user->ValueChanged += new System::EventHandler(this, nud_will_user_ValueChanged);
			// 
			// txtb_will_misc
			// 
			this->txtb_will_misc->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_will_misc->Enabled = false;
			this->txtb_will_misc->ForeColor = System::Drawing::Color::Gray;
			this->txtb_will_misc->Location = System::Drawing::Point(430, 160);
			this->txtb_will_misc->Name = S"txtb_will_misc";
			this->txtb_will_misc->ReadOnly = true;
			this->txtb_will_misc->Size = System::Drawing::Size(35, 20);
			this->txtb_will_misc->TabIndex = 275;
			this->txtb_will_misc->Text = S"0";
			this->txtb_will_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_will_magic
			// 
			this->txtb_will_magic->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_will_magic->Enabled = false;
			this->txtb_will_magic->ForeColor = System::Drawing::Color::Gray;
			this->txtb_will_magic->Location = System::Drawing::Point(360, 160);
			this->txtb_will_magic->Name = S"txtb_will_magic";
			this->txtb_will_magic->ReadOnly = true;
			this->txtb_will_magic->Size = System::Drawing::Size(35, 20);
			this->txtb_will_magic->TabIndex = 274;
			this->txtb_will_magic->Text = S"0";
			this->txtb_will_magic->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_will_race
			// 
			this->txtb_will_race->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_will_race->Enabled = false;
			this->txtb_will_race->ForeColor = System::Drawing::Color::Gray;
			this->txtb_will_race->Location = System::Drawing::Point(290, 160);
			this->txtb_will_race->Name = S"txtb_will_race";
			this->txtb_will_race->ReadOnly = true;
			this->txtb_will_race->Size = System::Drawing::Size(35, 20);
			this->txtb_will_race->TabIndex = 273;
			this->txtb_will_race->Text = S"0";
			this->txtb_will_race->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_will_total
			// 
			this->txtb_will_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_will_total->Enabled = false;
			this->txtb_will_total->Location = System::Drawing::Point(80, 160);
			this->txtb_will_total->Name = S"txtb_will_total";
			this->txtb_will_total->ReadOnly = true;
			this->txtb_will_total->Size = System::Drawing::Size(35, 20);
			this->txtb_will_total->TabIndex = 272;
			this->txtb_will_total->Text = S"0";
			this->txtb_will_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_will
			// 
			this->label_will->Location = System::Drawing::Point(25, 160);
			this->label_will->Name = S"label_will";
			this->label_will->Size = System::Drawing::Size(35, 13);
			this->label_will->TabIndex = 271;
			this->label_will->Text = S"Will:";
			this->label_will->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_ref_plus_5
			// 
			this->label_ref_plus_5->Location = System::Drawing::Point(470, 130);
			this->label_ref_plus_5->Name = S"label_ref_plus_5";
			this->label_ref_plus_5->Size = System::Drawing::Size(15, 13);
			this->label_ref_plus_5->TabIndex = 270;
			this->label_ref_plus_5->Text = S"+";
			// 
			// label_ref_plus_4
			// 
			this->label_ref_plus_4->Location = System::Drawing::Point(400, 130);
			this->label_ref_plus_4->Name = S"label_ref_plus_4";
			this->label_ref_plus_4->Size = System::Drawing::Size(15, 13);
			this->label_ref_plus_4->TabIndex = 269;
			this->label_ref_plus_4->Text = S"+";
			// 
			// label_ref_plus_3
			// 
			this->label_ref_plus_3->Location = System::Drawing::Point(330, 130);
			this->label_ref_plus_3->Name = S"label_ref_plus_3";
			this->label_ref_plus_3->Size = System::Drawing::Size(15, 13);
			this->label_ref_plus_3->TabIndex = 268;
			this->label_ref_plus_3->Text = S"+";
			// 
			// label_ref_equals
			// 
			this->label_ref_equals->Location = System::Drawing::Point(120, 130);
			this->label_ref_equals->Name = S"label_ref_equals";
			this->label_ref_equals->Size = System::Drawing::Size(15, 13);
			this->label_ref_equals->TabIndex = 267;
			this->label_ref_equals->Text = S"=";
			// 
			// nud_ref_user
			// 
			this->nud_ref_user->BackColor = System::Drawing::SystemColors::Window;
			this->nud_ref_user->Location = System::Drawing::Point(500, 130);
			this->nud_ref_user->Name = S"nud_ref_user";
			this->nud_ref_user->Size = System::Drawing::Size(60, 20);
			this->nud_ref_user->TabIndex = 266;
			this->nud_ref_user->ValueChanged += new System::EventHandler(this, nud_ref_user_ValueChanged);
			// 
			// txtb_ref_misc
			// 
			this->txtb_ref_misc->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ref_misc->Enabled = false;
			this->txtb_ref_misc->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ref_misc->Location = System::Drawing::Point(430, 130);
			this->txtb_ref_misc->Name = S"txtb_ref_misc";
			this->txtb_ref_misc->ReadOnly = true;
			this->txtb_ref_misc->Size = System::Drawing::Size(35, 20);
			this->txtb_ref_misc->TabIndex = 265;
			this->txtb_ref_misc->Text = S"0";
			this->txtb_ref_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ref_magic
			// 
			this->txtb_ref_magic->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ref_magic->Enabled = false;
			this->txtb_ref_magic->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ref_magic->Location = System::Drawing::Point(360, 130);
			this->txtb_ref_magic->Name = S"txtb_ref_magic";
			this->txtb_ref_magic->ReadOnly = true;
			this->txtb_ref_magic->Size = System::Drawing::Size(35, 20);
			this->txtb_ref_magic->TabIndex = 264;
			this->txtb_ref_magic->Text = S"0";
			this->txtb_ref_magic->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ref_race
			// 
			this->txtb_ref_race->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ref_race->Enabled = false;
			this->txtb_ref_race->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ref_race->Location = System::Drawing::Point(290, 130);
			this->txtb_ref_race->Name = S"txtb_ref_race";
			this->txtb_ref_race->ReadOnly = true;
			this->txtb_ref_race->Size = System::Drawing::Size(35, 20);
			this->txtb_ref_race->TabIndex = 263;
			this->txtb_ref_race->Text = S"0";
			this->txtb_ref_race->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ref_total
			// 
			this->txtb_ref_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ref_total->Enabled = false;
			this->txtb_ref_total->Location = System::Drawing::Point(80, 130);
			this->txtb_ref_total->Name = S"txtb_ref_total";
			this->txtb_ref_total->ReadOnly = true;
			this->txtb_ref_total->Size = System::Drawing::Size(35, 20);
			this->txtb_ref_total->TabIndex = 262;
			this->txtb_ref_total->Text = S"0";
			this->txtb_ref_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ref
			// 
			this->label_ref->Location = System::Drawing::Point(25, 130);
			this->label_ref->Name = S"label_ref";
			this->label_ref->Size = System::Drawing::Size(35, 13);
			this->label_ref->TabIndex = 261;
			this->label_ref->Text = S"Ref:";
			this->label_ref->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_saves_user
			// 
			this->label_saves_user->Location = System::Drawing::Point(495, 75);
			this->label_saves_user->Name = S"label_saves_user";
			this->label_saves_user->Size = System::Drawing::Size(55, 13);
			this->label_saves_user->TabIndex = 260;
			this->label_saves_user->Text = S"user";
			this->label_saves_user->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_saves_misc
			// 
			this->label_saves_misc->Location = System::Drawing::Point(425, 75);
			this->label_saves_misc->Name = S"label_saves_misc";
			this->label_saves_misc->Size = System::Drawing::Size(35, 13);
			this->label_saves_misc->TabIndex = 259;
			this->label_saves_misc->Text = S"misc.";
			this->label_saves_misc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_saves_magic
			// 
			this->label_saves_magic->Location = System::Drawing::Point(355, 75);
			this->label_saves_magic->Name = S"label_saves_magic";
			this->label_saves_magic->Size = System::Drawing::Size(35, 13);
			this->label_saves_magic->TabIndex = 258;
			this->label_saves_magic->Text = S"magic";
			this->label_saves_magic->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_saves_race
			// 
			this->label_saves_race->Location = System::Drawing::Point(285, 75);
			this->label_saves_race->Name = S"label_saves_race";
			this->label_saves_race->Size = System::Drawing::Size(35, 13);
			this->label_saves_race->TabIndex = 257;
			this->label_saves_race->Text = S"race";
			this->label_saves_race->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_fort_plus_5
			// 
			this->label_fort_plus_5->Location = System::Drawing::Point(470, 100);
			this->label_fort_plus_5->Name = S"label_fort_plus_5";
			this->label_fort_plus_5->Size = System::Drawing::Size(15, 13);
			this->label_fort_plus_5->TabIndex = 256;
			this->label_fort_plus_5->Text = S"+";
			// 
			// label_fort_plus_4
			// 
			this->label_fort_plus_4->Location = System::Drawing::Point(400, 100);
			this->label_fort_plus_4->Name = S"label_fort_plus_4";
			this->label_fort_plus_4->Size = System::Drawing::Size(15, 13);
			this->label_fort_plus_4->TabIndex = 255;
			this->label_fort_plus_4->Text = S"+";
			// 
			// label_fort_plus_3
			// 
			this->label_fort_plus_3->Location = System::Drawing::Point(330, 100);
			this->label_fort_plus_3->Name = S"label_fort_plus_3";
			this->label_fort_plus_3->Size = System::Drawing::Size(15, 13);
			this->label_fort_plus_3->TabIndex = 254;
			this->label_fort_plus_3->Text = S"+";
			// 
			// label_fort_equals
			// 
			this->label_fort_equals->Location = System::Drawing::Point(120, 100);
			this->label_fort_equals->Name = S"label_fort_equals";
			this->label_fort_equals->Size = System::Drawing::Size(15, 13);
			this->label_fort_equals->TabIndex = 253;
			this->label_fort_equals->Text = S"=";
			// 
			// nud_fort_user
			// 
			this->nud_fort_user->BackColor = System::Drawing::SystemColors::Window;
			this->nud_fort_user->Location = System::Drawing::Point(500, 100);
			this->nud_fort_user->Name = S"nud_fort_user";
			this->nud_fort_user->Size = System::Drawing::Size(60, 20);
			this->nud_fort_user->TabIndex = 252;
			this->nud_fort_user->ValueChanged += new System::EventHandler(this, nud_fort_user_ValueChanged);
			// 
			// txtb_fort_misc
			// 
			this->txtb_fort_misc->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_fort_misc->Enabled = false;
			this->txtb_fort_misc->ForeColor = System::Drawing::Color::Gray;
			this->txtb_fort_misc->Location = System::Drawing::Point(430, 100);
			this->txtb_fort_misc->Name = S"txtb_fort_misc";
			this->txtb_fort_misc->ReadOnly = true;
			this->txtb_fort_misc->Size = System::Drawing::Size(35, 20);
			this->txtb_fort_misc->TabIndex = 251;
			this->txtb_fort_misc->Text = S"0";
			this->txtb_fort_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_fort_magic
			// 
			this->txtb_fort_magic->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_fort_magic->Enabled = false;
			this->txtb_fort_magic->ForeColor = System::Drawing::Color::Gray;
			this->txtb_fort_magic->Location = System::Drawing::Point(360, 100);
			this->txtb_fort_magic->Name = S"txtb_fort_magic";
			this->txtb_fort_magic->ReadOnly = true;
			this->txtb_fort_magic->Size = System::Drawing::Size(35, 20);
			this->txtb_fort_magic->TabIndex = 250;
			this->txtb_fort_magic->Text = S"0";
			this->txtb_fort_magic->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_fort_race
			// 
			this->txtb_fort_race->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_fort_race->Enabled = false;
			this->txtb_fort_race->ForeColor = System::Drawing::Color::Gray;
			this->txtb_fort_race->Location = System::Drawing::Point(290, 100);
			this->txtb_fort_race->Name = S"txtb_fort_race";
			this->txtb_fort_race->ReadOnly = true;
			this->txtb_fort_race->Size = System::Drawing::Size(35, 20);
			this->txtb_fort_race->TabIndex = 249;
			this->txtb_fort_race->Text = S"0";
			this->txtb_fort_race->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_fort_total
			// 
			this->txtb_fort_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_fort_total->Enabled = false;
			this->txtb_fort_total->Location = System::Drawing::Point(80, 100);
			this->txtb_fort_total->Name = S"txtb_fort_total";
			this->txtb_fort_total->ReadOnly = true;
			this->txtb_fort_total->Size = System::Drawing::Size(35, 20);
			this->txtb_fort_total->TabIndex = 248;
			this->txtb_fort_total->Text = S"0";
			this->txtb_fort_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_fort
			// 
			this->label_fort->Location = System::Drawing::Point(25, 100);
			this->label_fort->Name = S"label_fort";
			this->label_fort->Size = System::Drawing::Size(35, 13);
			this->label_fort->TabIndex = 247;
			this->label_fort->Text = S"Fort:";
			this->label_fort->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_init_user
			// 
			this->label_init_user->Location = System::Drawing::Point(355, 10);
			this->label_init_user->Name = S"label_init_user";
			this->label_init_user->Size = System::Drawing::Size(55, 13);
			this->label_init_user->TabIndex = 246;
			this->label_init_user->Text = S"user";
			this->label_init_user->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_init_magic
			// 
			this->label_init_magic->Location = System::Drawing::Point(290, 10);
			this->label_init_magic->Name = S"label_init_magic";
			this->label_init_magic->Size = System::Drawing::Size(35, 13);
			this->label_init_magic->TabIndex = 245;
			this->label_init_magic->Text = S"magic";
			this->label_init_magic->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_init_feats
			// 
			this->label_init_feats->Location = System::Drawing::Point(220, 10);
			this->label_init_feats->Name = S"label_init_feats";
			this->label_init_feats->Size = System::Drawing::Size(35, 13);
			this->label_init_feats->TabIndex = 244;
			this->label_init_feats->Text = S"feats";
			this->label_init_feats->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_init_mod
			// 
			this->label_init_mod->Location = System::Drawing::Point(150, 10);
			this->label_init_mod->Name = S"label_init_mod";
			this->label_init_mod->Size = System::Drawing::Size(35, 13);
			this->label_init_mod->TabIndex = 243;
			this->label_init_mod->Text = S"mod";
			this->label_init_mod->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_init_plus_3
			// 
			this->label_init_plus_3->Location = System::Drawing::Point(330, 30);
			this->label_init_plus_3->Name = S"label_init_plus_3";
			this->label_init_plus_3->Size = System::Drawing::Size(15, 13);
			this->label_init_plus_3->TabIndex = 242;
			this->label_init_plus_3->Text = S"+";
			// 
			// label_init_plus_2
			// 
			this->label_init_plus_2->Location = System::Drawing::Point(260, 30);
			this->label_init_plus_2->Name = S"label_init_plus_2";
			this->label_init_plus_2->Size = System::Drawing::Size(15, 13);
			this->label_init_plus_2->TabIndex = 241;
			this->label_init_plus_2->Text = S"+";
			// 
			// label_init_plus_1
			// 
			this->label_init_plus_1->Location = System::Drawing::Point(190, 30);
			this->label_init_plus_1->Name = S"label_init_plus_1";
			this->label_init_plus_1->Size = System::Drawing::Size(15, 13);
			this->label_init_plus_1->TabIndex = 240;
			this->label_init_plus_1->Text = S"+";
			// 
			// label_init_equals
			// 
			this->label_init_equals->Location = System::Drawing::Point(120, 30);
			this->label_init_equals->Name = S"label_init_equals";
			this->label_init_equals->Size = System::Drawing::Size(15, 13);
			this->label_init_equals->TabIndex = 239;
			this->label_init_equals->Text = S"=";
			// 
			// nud_init_user
			// 
			this->nud_init_user->BackColor = System::Drawing::SystemColors::Window;
			this->nud_init_user->Location = System::Drawing::Point(360, 30);
			this->nud_init_user->Name = S"nud_init_user";
			this->nud_init_user->Size = System::Drawing::Size(60, 20);
			this->nud_init_user->TabIndex = 238;
			this->nud_init_user->ValueChanged += new System::EventHandler(this, nud_init_user_ValueChanged);
			// 
			// txtb_init_magic
			// 
			this->txtb_init_magic->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_init_magic->Enabled = false;
			this->txtb_init_magic->ForeColor = System::Drawing::Color::Gray;
			this->txtb_init_magic->Location = System::Drawing::Point(290, 30);
			this->txtb_init_magic->Name = S"txtb_init_magic";
			this->txtb_init_magic->ReadOnly = true;
			this->txtb_init_magic->Size = System::Drawing::Size(35, 20);
			this->txtb_init_magic->TabIndex = 237;
			this->txtb_init_magic->Text = S"0";
			this->txtb_init_magic->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_init_feats
			// 
			this->txtb_init_feats->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_init_feats->Enabled = false;
			this->txtb_init_feats->ForeColor = System::Drawing::Color::Gray;
			this->txtb_init_feats->Location = System::Drawing::Point(220, 30);
			this->txtb_init_feats->Name = S"txtb_init_feats";
			this->txtb_init_feats->ReadOnly = true;
			this->txtb_init_feats->Size = System::Drawing::Size(35, 20);
			this->txtb_init_feats->TabIndex = 236;
			this->txtb_init_feats->Text = S"0";
			this->txtb_init_feats->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_init_mod
			// 
			this->txtb_init_mod->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_init_mod->Enabled = false;
			this->txtb_init_mod->ForeColor = System::Drawing::Color::Gray;
			this->txtb_init_mod->Location = System::Drawing::Point(150, 30);
			this->txtb_init_mod->Name = S"txtb_init_mod";
			this->txtb_init_mod->ReadOnly = true;
			this->txtb_init_mod->Size = System::Drawing::Size(35, 20);
			this->txtb_init_mod->TabIndex = 235;
			this->txtb_init_mod->Text = S"0";
			this->txtb_init_mod->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_init_total
			// 
			this->txtb_init_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_init_total->Enabled = false;
			this->txtb_init_total->Location = System::Drawing::Point(80, 30);
			this->txtb_init_total->Name = S"txtb_init_total";
			this->txtb_init_total->ReadOnly = true;
			this->txtb_init_total->Size = System::Drawing::Size(35, 20);
			this->txtb_init_total->TabIndex = 234;
			this->txtb_init_total->Text = S"0";
			this->txtb_init_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_init
			// 
			this->label_init->Location = System::Drawing::Point(25, 30);
			this->label_init->Name = S"label_init";
			this->label_init->Size = System::Drawing::Size(35, 13);
			this->label_init->TabIndex = 233;
			this->label_init->Text = S"Init:";
			this->label_init->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtb_cha_misc
			// 
			this->txtb_cha_misc->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_cha_misc->Enabled = false;
			this->txtb_cha_misc->ForeColor = System::Drawing::Color::Gray;
			this->txtb_cha_misc->Location = System::Drawing::Point(245, 185);
			this->txtb_cha_misc->Name = S"txtb_cha_misc";
			this->txtb_cha_misc->ReadOnly = true;
			this->txtb_cha_misc->Size = System::Drawing::Size(35, 20);
			this->txtb_cha_misc->TabIndex = 434;
			this->txtb_cha_misc->Text = S"0";
			this->txtb_cha_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_wis_misc
			// 
			this->txtb_wis_misc->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_wis_misc->Enabled = false;
			this->txtb_wis_misc->ForeColor = System::Drawing::Color::Gray;
			this->txtb_wis_misc->Location = System::Drawing::Point(245, 155);
			this->txtb_wis_misc->Name = S"txtb_wis_misc";
			this->txtb_wis_misc->ReadOnly = true;
			this->txtb_wis_misc->Size = System::Drawing::Size(35, 20);
			this->txtb_wis_misc->TabIndex = 433;
			this->txtb_wis_misc->Text = S"0";
			this->txtb_wis_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_int_misc
			// 
			this->txt_int_misc->BackColor = System::Drawing::SystemColors::Window;
			this->txt_int_misc->Enabled = false;
			this->txt_int_misc->ForeColor = System::Drawing::Color::Gray;
			this->txt_int_misc->Location = System::Drawing::Point(245, 125);
			this->txt_int_misc->Name = S"txt_int_misc";
			this->txt_int_misc->ReadOnly = true;
			this->txt_int_misc->Size = System::Drawing::Size(35, 20);
			this->txt_int_misc->TabIndex = 432;
			this->txt_int_misc->Text = S"0";
			this->txt_int_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_con_misc
			// 
			this->txt_con_misc->BackColor = System::Drawing::SystemColors::Window;
			this->txt_con_misc->Enabled = false;
			this->txt_con_misc->ForeColor = System::Drawing::Color::Gray;
			this->txt_con_misc->Location = System::Drawing::Point(245, 95);
			this->txt_con_misc->Name = S"txt_con_misc";
			this->txt_con_misc->ReadOnly = true;
			this->txt_con_misc->Size = System::Drawing::Size(35, 20);
			this->txt_con_misc->TabIndex = 431;
			this->txt_con_misc->Text = S"0";
			this->txt_con_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_dex_misc
			// 
			this->txt_dex_misc->BackColor = System::Drawing::SystemColors::Window;
			this->txt_dex_misc->Enabled = false;
			this->txt_dex_misc->ForeColor = System::Drawing::Color::Gray;
			this->txt_dex_misc->Location = System::Drawing::Point(245, 65);
			this->txt_dex_misc->Name = S"txt_dex_misc";
			this->txt_dex_misc->ReadOnly = true;
			this->txt_dex_misc->Size = System::Drawing::Size(35, 20);
			this->txt_dex_misc->TabIndex = 430;
			this->txt_dex_misc->Text = S"0";
			this->txt_dex_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ability_misc
			// 
			this->label_ability_misc->Location = System::Drawing::Point(245, 10);
			this->label_ability_misc->Name = S"label_ability_misc";
			this->label_ability_misc->Size = System::Drawing::Size(35, 13);
			this->label_ability_misc->TabIndex = 429;
			this->label_ability_misc->Text = S"misc";
			this->label_ability_misc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_str_misc
			// 
			this->txt_str_misc->BackColor = System::Drawing::SystemColors::Window;
			this->txt_str_misc->Enabled = false;
			this->txt_str_misc->ForeColor = System::Drawing::Color::Gray;
			this->txt_str_misc->Location = System::Drawing::Point(245, 35);
			this->txt_str_misc->Name = S"txt_str_misc";
			this->txt_str_misc->ReadOnly = true;
			this->txt_str_misc->Size = System::Drawing::Size(35, 20);
			this->txt_str_misc->TabIndex = 428;
			this->txt_str_misc->Text = S"0";
			this->txt_str_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_cha_plus_02
			// 
			this->label_cha_plus_02->Location = System::Drawing::Point(290, 185);
			this->label_cha_plus_02->Name = S"label_cha_plus_02";
			this->label_cha_plus_02->Size = System::Drawing::Size(15, 13);
			this->label_cha_plus_02->TabIndex = 427;
			this->label_cha_plus_02->Text = S"+";
			// 
			// label_wis_plus_02
			// 
			this->label_wis_plus_02->Location = System::Drawing::Point(290, 155);
			this->label_wis_plus_02->Name = S"label_wis_plus_02";
			this->label_wis_plus_02->Size = System::Drawing::Size(15, 13);
			this->label_wis_plus_02->TabIndex = 426;
			this->label_wis_plus_02->Text = S"+";
			// 
			// label_int_plus_02
			// 
			this->label_int_plus_02->Location = System::Drawing::Point(290, 125);
			this->label_int_plus_02->Name = S"label_int_plus_02";
			this->label_int_plus_02->Size = System::Drawing::Size(15, 13);
			this->label_int_plus_02->TabIndex = 425;
			this->label_int_plus_02->Text = S"+";
			// 
			// label_con_plus_02
			// 
			this->label_con_plus_02->Location = System::Drawing::Point(290, 95);
			this->label_con_plus_02->Name = S"label_con_plus_02";
			this->label_con_plus_02->Size = System::Drawing::Size(15, 13);
			this->label_con_plus_02->TabIndex = 424;
			this->label_con_plus_02->Text = S"+";
			// 
			// label_dex_plus_02
			// 
			this->label_dex_plus_02->Location = System::Drawing::Point(290, 65);
			this->label_dex_plus_02->Name = S"label_dex_plus_02";
			this->label_dex_plus_02->Size = System::Drawing::Size(15, 13);
			this->label_dex_plus_02->TabIndex = 423;
			this->label_dex_plus_02->Text = S"+";
			// 
			// label_str_plus_02
			// 
			this->label_str_plus_02->Location = System::Drawing::Point(290, 35);
			this->label_str_plus_02->Name = S"label_str_plus_02";
			this->label_str_plus_02->Size = System::Drawing::Size(15, 13);
			this->label_str_plus_02->TabIndex = 422;
			this->label_str_plus_02->Text = S"+";
			// 
			// label_earned_information
			// 
			this->label_earned_information->BackColor = System::Drawing::Color::Transparent;
			this->label_earned_information->Location = System::Drawing::Point(405, 235);
			this->label_earned_information->Name = S"label_earned_information";
			this->label_earned_information->Size = System::Drawing::Size(220, 110);
			this->label_earned_information->TabIndex = 421;
			this->label_earned_information->Text = S"Information";
			// 
			// label_ability_information
			// 
			this->label_ability_information->BackColor = System::Drawing::Color::Transparent;
			this->label_ability_information->Location = System::Drawing::Point(405, 30);
			this->label_ability_information->Name = S"label_ability_information";
			this->label_ability_information->Size = System::Drawing::Size(220, 170);
			this->label_ability_information->TabIndex = 420;
			this->label_ability_information->Text = S"Information";
			// 
			// btn_remove_abilities
			// 
			this->btn_remove_abilities->BackColor = System::Drawing::SystemColors::Control;
			this->btn_remove_abilities->Location = System::Drawing::Point(100, 370);
			this->btn_remove_abilities->Name = S"btn_remove_abilities";
			this->btn_remove_abilities->Size = System::Drawing::Size(85, 25);
			this->btn_remove_abilities->TabIndex = 419;
			this->btn_remove_abilities->Text = S"Remove";
			this->btn_remove_abilities->Click += new System::EventHandler(this, btn_remove_abilities_Click);
			// 
			// btn_apply_abilities
			// 
			this->btn_apply_abilities->BackColor = System::Drawing::SystemColors::Control;
			this->btn_apply_abilities->Location = System::Drawing::Point(540, 370);
			this->btn_apply_abilities->Name = S"btn_apply_abilities";
			this->btn_apply_abilities->Size = System::Drawing::Size(85, 25);
			this->btn_apply_abilities->TabIndex = 418;
			this->btn_apply_abilities->Text = S"Apply";
			this->btn_apply_abilities->Click += new System::EventHandler(this, btn_apply_abilities_Click);
			// 
			// btn_cancel_abilities
			// 
			this->btn_cancel_abilities->BackColor = System::Drawing::SystemColors::Control;
			this->btn_cancel_abilities->Location = System::Drawing::Point(440, 370);
			this->btn_cancel_abilities->Name = S"btn_cancel_abilities";
			this->btn_cancel_abilities->Size = System::Drawing::Size(85, 25);
			this->btn_cancel_abilities->TabIndex = 417;
			this->btn_cancel_abilities->Text = S"Cancel";
			this->btn_cancel_abilities->Click += new System::EventHandler(this, btn_cancel_abilities_Click);
			// 
			// btn_add_inherent
			// 
			this->btn_add_inherent->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_inherent->Location = System::Drawing::Point(100, 335);
			this->btn_add_inherent->Name = S"btn_add_inherent";
			this->btn_add_inherent->Size = System::Drawing::Size(85, 25);
			this->btn_add_inherent->TabIndex = 416;
			this->btn_add_inherent->Text = S"Add Inherent";
			this->btn_add_inherent->Click += new System::EventHandler(this, btn_add_inherent_Click);
			// 
			// btn_add_earned
			// 
			this->btn_add_earned->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_earned->Location = System::Drawing::Point(100, 300);
			this->btn_add_earned->Name = S"btn_add_earned";
			this->btn_add_earned->Size = System::Drawing::Size(85, 25);
			this->btn_add_earned->TabIndex = 415;
			this->btn_add_earned->Text = S"Add Earned";
			this->btn_add_earned->Click += new System::EventHandler(this, btn_add_earned_Click);
			// 
			// label_inherent_abilities_at
			// 
			this->label_inherent_abilities_at->Location = System::Drawing::Point(280, 270);
			this->label_inherent_abilities_at->Name = S"label_inherent_abilities_at";
			this->label_inherent_abilities_at->Size = System::Drawing::Size(45, 13);
			this->label_inherent_abilities_at->TabIndex = 414;
			this->label_inherent_abilities_at->Text = S"at Level";
			this->label_inherent_abilities_at->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_earned_abilities_at
			// 
			this->label_earned_abilities_at->Location = System::Drawing::Point(280, 240);
			this->label_earned_abilities_at->Name = S"label_earned_abilities_at";
			this->label_earned_abilities_at->Size = System::Drawing::Size(45, 13);
			this->label_earned_abilities_at->TabIndex = 413;
			this->label_earned_abilities_at->Text = S"at Level";
			this->label_earned_abilities_at->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_inherent_abilities_to
			// 
			this->label_inherent_abilities_to->Location = System::Drawing::Point(200, 270);
			this->label_inherent_abilities_to->Name = S"label_inherent_abilities_to";
			this->label_inherent_abilities_to->Size = System::Drawing::Size(15, 13);
			this->label_inherent_abilities_to->TabIndex = 412;
			this->label_inherent_abilities_to->Text = S"to";
			// 
			// label_earned_abilities_to
			// 
			this->label_earned_abilities_to->Location = System::Drawing::Point(200, 240);
			this->label_earned_abilities_to->Name = S"label_earned_abilities_to";
			this->label_earned_abilities_to->Size = System::Drawing::Size(15, 13);
			this->label_earned_abilities_to->TabIndex = 411;
			this->label_earned_abilities_to->Text = S"to";
			// 
			// nud_inherent_abilities_level
			// 
			this->nud_inherent_abilities_level->Location = System::Drawing::Point(330, 270);
			this->nud_inherent_abilities_level->Name = S"nud_inherent_abilities_level";
			this->nud_inherent_abilities_level->Size = System::Drawing::Size(45, 20);
			this->nud_inherent_abilities_level->TabIndex = 410;
			this->nud_inherent_abilities_level->ValueChanged += new System::EventHandler(this, nud_inherent_abilities_level_ValueChanged);
			// 
			// txb_label_earned_abilities_level
			// 
			this->txb_label_earned_abilities_level->BackColor = System::Drawing::SystemColors::Window;
			this->txb_label_earned_abilities_level->Enabled = false;
			this->txb_label_earned_abilities_level->ForeColor = System::Drawing::Color::Gray;
			this->txb_label_earned_abilities_level->Location = System::Drawing::Point(330, 240);
			this->txb_label_earned_abilities_level->Name = S"txb_label_earned_abilities_level";
			this->txb_label_earned_abilities_level->ReadOnly = true;
			this->txb_label_earned_abilities_level->Size = System::Drawing::Size(40, 20);
			this->txb_label_earned_abilities_level->TabIndex = 409;
			this->txb_label_earned_abilities_level->Text = S"0";
			this->txb_label_earned_abilities_level->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comb_inherent_abilities
			// 
			System::Object* __mcTemp__4[] = new System::Object*[6];
			__mcTemp__4[0] = S"STR";
			__mcTemp__4[1] = S"DEX";
			__mcTemp__4[2] = S"CON";
			__mcTemp__4[3] = S"INT";
			__mcTemp__4[4] = S"WIS";
			__mcTemp__4[5] = S"CHA";
			this->comb_inherent_abilities->Items->AddRange(__mcTemp__4);
			this->comb_inherent_abilities->Location = System::Drawing::Point(220, 265);
			this->comb_inherent_abilities->Name = S"comb_inherent_abilities";
			this->comb_inherent_abilities->Size = System::Drawing::Size(55, 21);
			this->comb_inherent_abilities->TabIndex = 408;
			this->comb_inherent_abilities->Text = S"STR";
			// 
			// comb_earned_abilities
			// 
			System::Object* __mcTemp__5[] = new System::Object*[6];
			__mcTemp__5[0] = S"STR";
			__mcTemp__5[1] = S"DEX";
			__mcTemp__5[2] = S"CON";
			__mcTemp__5[3] = S"INT";
			__mcTemp__5[4] = S"WIS";
			__mcTemp__5[5] = S"CHA";
			this->comb_earned_abilities->Items->AddRange(__mcTemp__5);
			this->comb_earned_abilities->Location = System::Drawing::Point(220, 235);
			this->comb_earned_abilities->Name = S"comb_earned_abilities";
			this->comb_earned_abilities->Size = System::Drawing::Size(55, 21);
			this->comb_earned_abilities->TabIndex = 407;
			this->comb_earned_abilities->Text = S"STR";
			// 
			// txtb_earned_abilities_total
			// 
			this->txtb_earned_abilities_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_earned_abilities_total->Enabled = false;
			this->txtb_earned_abilities_total->ForeColor = System::Drawing::Color::Gray;
			this->txtb_earned_abilities_total->Location = System::Drawing::Point(155, 240);
			this->txtb_earned_abilities_total->Name = S"txtb_earned_abilities_total";
			this->txtb_earned_abilities_total->ReadOnly = true;
			this->txtb_earned_abilities_total->Size = System::Drawing::Size(40, 20);
			this->txtb_earned_abilities_total->TabIndex = 406;
			this->txtb_earned_abilities_total->Text = S"0";
			this->txtb_earned_abilities_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_inherent_abilities
			// 
			this->label_inherent_abilities->Location = System::Drawing::Point(5, 270);
			this->label_inherent_abilities->Name = S"label_inherent_abilities";
			this->label_inherent_abilities->Size = System::Drawing::Size(105, 13);
			this->label_inherent_abilities->TabIndex = 405;
			this->label_inherent_abilities->Text = S"Inherent Abilities:";
			this->label_inherent_abilities->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_earned_abilities
			// 
			this->label_earned_abilities->Location = System::Drawing::Point(15, 240);
			this->label_earned_abilities->Name = S"label_earned_abilities";
			this->label_earned_abilities->Size = System::Drawing::Size(95, 13);
			this->label_earned_abilities->TabIndex = 404;
			this->label_earned_abilities->Text = S"Earned Abilities:";
			this->label_earned_abilities->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// nud_inherent_abilities_total
			// 
			this->nud_inherent_abilities_total->BackColor = System::Drawing::SystemColors::Window;
			this->nud_inherent_abilities_total->Location = System::Drawing::Point(155, 270);
			this->nud_inherent_abilities_total->Name = S"nud_inherent_abilities_total";
			this->nud_inherent_abilities_total->Size = System::Drawing::Size(40, 20);
			this->nud_inherent_abilities_total->TabIndex = 403;
			this->nud_inherent_abilities_total->ValueChanged += new System::EventHandler(this, nud_inherent_abilities_total_ValueChanged);
			// 
			// txtb_inherent_abilities
			// 
			this->txtb_inherent_abilities->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_inherent_abilities->Enabled = false;
			this->txtb_inherent_abilities->ForeColor = System::Drawing::SystemColors::ControlText;
			this->txtb_inherent_abilities->Location = System::Drawing::Point(110, 270);
			this->txtb_inherent_abilities->Name = S"txtb_inherent_abilities";
			this->txtb_inherent_abilities->ReadOnly = true;
			this->txtb_inherent_abilities->Size = System::Drawing::Size(25, 20);
			this->txtb_inherent_abilities->TabIndex = 394;
			this->txtb_inherent_abilities->Text = S"0";
			this->txtb_inherent_abilities->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_earned_abilities
			// 
			this->txtb_earned_abilities->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_earned_abilities->Enabled = false;
			this->txtb_earned_abilities->ForeColor = System::Drawing::SystemColors::ControlText;
			this->txtb_earned_abilities->Location = System::Drawing::Point(110, 240);
			this->txtb_earned_abilities->Name = S"txtb_earned_abilities";
			this->txtb_earned_abilities->ReadOnly = true;
			this->txtb_earned_abilities->Size = System::Drawing::Size(25, 20);
			this->txtb_earned_abilities->TabIndex = 391;
			this->txtb_earned_abilities->Text = S"0";
			this->txtb_earned_abilities->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// lstv_abilities
			// 
			this->lstv_abilities->Location = System::Drawing::Point(195, 300);
			this->lstv_abilities->Name = S"lstv_abilities";
			this->lstv_abilities->Size = System::Drawing::Size(175, 95);
			this->lstv_abilities->TabIndex = 388;
			this->lstv_abilities->View = System::Windows::Forms::View::Details;
			// 
			// nud_cha
			// 
			this->nud_cha->Location = System::Drawing::Point(310, 185);
			System::Int32 __mcTemp__6[] = new System::Int32[4];
			__mcTemp__6[0] = 18;
			__mcTemp__6[1] = 0;
			__mcTemp__6[2] = 0;
			__mcTemp__6[3] = 0;
			this->nud_cha->Maximum = System::Decimal(__mcTemp__6);
			System::Int32 __mcTemp__7[] = new System::Int32[4];
			__mcTemp__7[0] = 3;
			__mcTemp__7[1] = 0;
			__mcTemp__7[2] = 0;
			__mcTemp__7[3] = 0;
			this->nud_cha->Minimum = System::Decimal(__mcTemp__7);
			this->nud_cha->Name = S"nud_cha";
			this->nud_cha->Size = System::Drawing::Size(55, 20);
			this->nud_cha->TabIndex = 387;
			System::Int32 __mcTemp__8[] = new System::Int32[4];
			__mcTemp__8[0] = 3;
			__mcTemp__8[1] = 0;
			__mcTemp__8[2] = 0;
			__mcTemp__8[3] = 0;
			this->nud_cha->Value = System::Decimal(__mcTemp__8);
			this->nud_cha->ValueChanged += new System::EventHandler(this, nud_cha_ValueChanged);
			// 
			// nud_wis
			// 
			this->nud_wis->Location = System::Drawing::Point(310, 155);
			System::Int32 __mcTemp__9[] = new System::Int32[4];
			__mcTemp__9[0] = 18;
			__mcTemp__9[1] = 0;
			__mcTemp__9[2] = 0;
			__mcTemp__9[3] = 0;
			this->nud_wis->Maximum = System::Decimal(__mcTemp__9);
			System::Int32 __mcTemp__10[] = new System::Int32[4];
			__mcTemp__10[0] = 3;
			__mcTemp__10[1] = 0;
			__mcTemp__10[2] = 0;
			__mcTemp__10[3] = 0;
			this->nud_wis->Minimum = System::Decimal(__mcTemp__10);
			this->nud_wis->Name = S"nud_wis";
			this->nud_wis->Size = System::Drawing::Size(55, 20);
			this->nud_wis->TabIndex = 386;
			System::Int32 __mcTemp__11[] = new System::Int32[4];
			__mcTemp__11[0] = 3;
			__mcTemp__11[1] = 0;
			__mcTemp__11[2] = 0;
			__mcTemp__11[3] = 0;
			this->nud_wis->Value = System::Decimal(__mcTemp__11);
			this->nud_wis->ValueChanged += new System::EventHandler(this, nud_wis_ValueChanged);
			// 
			// nud_int
			// 
			this->nud_int->Location = System::Drawing::Point(310, 125);
			System::Int32 __mcTemp__12[] = new System::Int32[4];
			__mcTemp__12[0] = 18;
			__mcTemp__12[1] = 0;
			__mcTemp__12[2] = 0;
			__mcTemp__12[3] = 0;
			this->nud_int->Maximum = System::Decimal(__mcTemp__12);
			System::Int32 __mcTemp__13[] = new System::Int32[4];
			__mcTemp__13[0] = 3;
			__mcTemp__13[1] = 0;
			__mcTemp__13[2] = 0;
			__mcTemp__13[3] = 0;
			this->nud_int->Minimum = System::Decimal(__mcTemp__13);
			this->nud_int->Name = S"nud_int";
			this->nud_int->Size = System::Drawing::Size(55, 20);
			this->nud_int->TabIndex = 385;
			System::Int32 __mcTemp__14[] = new System::Int32[4];
			__mcTemp__14[0] = 3;
			__mcTemp__14[1] = 0;
			__mcTemp__14[2] = 0;
			__mcTemp__14[3] = 0;
			this->nud_int->Value = System::Decimal(__mcTemp__14);
			this->nud_int->ValueChanged += new System::EventHandler(this, nud_int_ValueChanged);
			// 
			// nud_con
			// 
			this->nud_con->Location = System::Drawing::Point(310, 95);
			System::Int32 __mcTemp__15[] = new System::Int32[4];
			__mcTemp__15[0] = 18;
			__mcTemp__15[1] = 0;
			__mcTemp__15[2] = 0;
			__mcTemp__15[3] = 0;
			this->nud_con->Maximum = System::Decimal(__mcTemp__15);
			System::Int32 __mcTemp__16[] = new System::Int32[4];
			__mcTemp__16[0] = 3;
			__mcTemp__16[1] = 0;
			__mcTemp__16[2] = 0;
			__mcTemp__16[3] = 0;
			this->nud_con->Minimum = System::Decimal(__mcTemp__16);
			this->nud_con->Name = S"nud_con";
			this->nud_con->Size = System::Drawing::Size(55, 20);
			this->nud_con->TabIndex = 384;
			System::Int32 __mcTemp__17[] = new System::Int32[4];
			__mcTemp__17[0] = 3;
			__mcTemp__17[1] = 0;
			__mcTemp__17[2] = 0;
			__mcTemp__17[3] = 0;
			this->nud_con->Value = System::Decimal(__mcTemp__17);
			this->nud_con->ValueChanged += new System::EventHandler(this, nud_con_ValueChanged);
			// 
			// nud_dex
			// 
			this->nud_dex->Location = System::Drawing::Point(310, 65);
			System::Int32 __mcTemp__18[] = new System::Int32[4];
			__mcTemp__18[0] = 18;
			__mcTemp__18[1] = 0;
			__mcTemp__18[2] = 0;
			__mcTemp__18[3] = 0;
			this->nud_dex->Maximum = System::Decimal(__mcTemp__18);
			System::Int32 __mcTemp__19[] = new System::Int32[4];
			__mcTemp__19[0] = 3;
			__mcTemp__19[1] = 0;
			__mcTemp__19[2] = 0;
			__mcTemp__19[3] = 0;
			this->nud_dex->Minimum = System::Decimal(__mcTemp__19);
			this->nud_dex->Name = S"nud_dex";
			this->nud_dex->Size = System::Drawing::Size(55, 20);
			this->nud_dex->TabIndex = 383;
			System::Int32 __mcTemp__20[] = new System::Int32[4];
			__mcTemp__20[0] = 3;
			__mcTemp__20[1] = 0;
			__mcTemp__20[2] = 0;
			__mcTemp__20[3] = 0;
			this->nud_dex->Value = System::Decimal(__mcTemp__20);
			this->nud_dex->ValueChanged += new System::EventHandler(this, nud_dex_ValueChanged);
			// 
			// nud_str
			// 
			this->nud_str->Location = System::Drawing::Point(310, 35);
			System::Int32 __mcTemp__21[] = new System::Int32[4];
			__mcTemp__21[0] = 18;
			__mcTemp__21[1] = 0;
			__mcTemp__21[2] = 0;
			__mcTemp__21[3] = 0;
			this->nud_str->Maximum = System::Decimal(__mcTemp__21);
			System::Int32 __mcTemp__22[] = new System::Int32[4];
			__mcTemp__22[0] = 3;
			__mcTemp__22[1] = 0;
			__mcTemp__22[2] = 0;
			__mcTemp__22[3] = 0;
			this->nud_str->Minimum = System::Decimal(__mcTemp__22);
			this->nud_str->Name = S"nud_str";
			this->nud_str->Size = System::Drawing::Size(55, 20);
			this->nud_str->TabIndex = 382;
			System::Int32 __mcTemp__23[] = new System::Int32[4];
			__mcTemp__23[0] = 3;
			__mcTemp__23[1] = 0;
			__mcTemp__23[2] = 0;
			__mcTemp__23[3] = 0;
			this->nud_str->Value = System::Decimal(__mcTemp__23);
			this->nud_str->ValueChanged += new System::EventHandler(this, nud_str_ValueChanged);
			// 
			// label_ability_rolls
			// 
			this->label_ability_rolls->Location = System::Drawing::Point(315, 10);
			this->label_ability_rolls->Name = S"label_ability_rolls";
			this->label_ability_rolls->Size = System::Drawing::Size(35, 13);
			this->label_ability_rolls->TabIndex = 381;
			this->label_ability_rolls->Text = S"rolls";
			this->label_ability_rolls->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_ability_total
			// 
			this->label_ability_total->Location = System::Drawing::Point(65, 10);
			this->label_ability_total->Name = S"label_ability_total";
			this->label_ability_total->Size = System::Drawing::Size(35, 13);
			this->label_ability_total->TabIndex = 374;
			this->label_ability_total->Text = S"total";
			this->label_ability_total->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtb_cha_race
			// 
			this->txtb_cha_race->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_cha_race->Enabled = false;
			this->txtb_cha_race->ForeColor = System::Drawing::Color::Gray;
			this->txtb_cha_race->Location = System::Drawing::Point(180, 185);
			this->txtb_cha_race->Name = S"txtb_cha_race";
			this->txtb_cha_race->ReadOnly = true;
			this->txtb_cha_race->Size = System::Drawing::Size(35, 20);
			this->txtb_cha_race->TabIndex = 373;
			this->txtb_cha_race->Text = S"0";
			this->txtb_cha_race->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_wis_race
			// 
			this->txtb_wis_race->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_wis_race->Enabled = false;
			this->txtb_wis_race->ForeColor = System::Drawing::Color::Gray;
			this->txtb_wis_race->Location = System::Drawing::Point(180, 155);
			this->txtb_wis_race->Name = S"txtb_wis_race";
			this->txtb_wis_race->ReadOnly = true;
			this->txtb_wis_race->Size = System::Drawing::Size(35, 20);
			this->txtb_wis_race->TabIndex = 372;
			this->txtb_wis_race->Text = S"0";
			this->txtb_wis_race->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_int_race
			// 
			this->txt_int_race->BackColor = System::Drawing::SystemColors::Window;
			this->txt_int_race->Enabled = false;
			this->txt_int_race->ForeColor = System::Drawing::Color::Gray;
			this->txt_int_race->Location = System::Drawing::Point(180, 125);
			this->txt_int_race->Name = S"txt_int_race";
			this->txt_int_race->ReadOnly = true;
			this->txt_int_race->Size = System::Drawing::Size(35, 20);
			this->txt_int_race->TabIndex = 371;
			this->txt_int_race->Text = S"0";
			this->txt_int_race->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_con_race
			// 
			this->txt_con_race->BackColor = System::Drawing::SystemColors::Window;
			this->txt_con_race->Enabled = false;
			this->txt_con_race->ForeColor = System::Drawing::Color::Gray;
			this->txt_con_race->Location = System::Drawing::Point(180, 95);
			this->txt_con_race->Name = S"txt_con_race";
			this->txt_con_race->ReadOnly = true;
			this->txt_con_race->Size = System::Drawing::Size(35, 20);
			this->txt_con_race->TabIndex = 370;
			this->txt_con_race->Text = S"0";
			this->txt_con_race->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_dex_race
			// 
			this->txt_dex_race->BackColor = System::Drawing::SystemColors::Window;
			this->txt_dex_race->Enabled = false;
			this->txt_dex_race->ForeColor = System::Drawing::Color::Gray;
			this->txt_dex_race->Location = System::Drawing::Point(180, 65);
			this->txt_dex_race->Name = S"txt_dex_race";
			this->txt_dex_race->ReadOnly = true;
			this->txt_dex_race->Size = System::Drawing::Size(35, 20);
			this->txt_dex_race->TabIndex = 369;
			this->txt_dex_race->Text = S"0";
			this->txt_dex_race->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ability_race
			// 
			this->label_ability_race->Location = System::Drawing::Point(180, 10);
			this->label_ability_race->Name = S"label_ability_race";
			this->label_ability_race->Size = System::Drawing::Size(35, 13);
			this->label_ability_race->TabIndex = 368;
			this->label_ability_race->Text = S"race";
			this->label_ability_race->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txt_str_race
			// 
			this->txt_str_race->BackColor = System::Drawing::SystemColors::Window;
			this->txt_str_race->Enabled = false;
			this->txt_str_race->ForeColor = System::Drawing::Color::Gray;
			this->txt_str_race->Location = System::Drawing::Point(180, 35);
			this->txt_str_race->Name = S"txt_str_race";
			this->txt_str_race->ReadOnly = true;
			this->txt_str_race->Size = System::Drawing::Size(35, 20);
			this->txt_str_race->TabIndex = 367;
			this->txt_str_race->Text = S"0";
			this->txt_str_race->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_cha_plus_01
			// 
			this->label_cha_plus_01->Location = System::Drawing::Point(225, 185);
			this->label_cha_plus_01->Name = S"label_cha_plus_01";
			this->label_cha_plus_01->Size = System::Drawing::Size(15, 13);
			this->label_cha_plus_01->TabIndex = 366;
			this->label_cha_plus_01->Text = S"+";
			// 
			// txtb_cha_mods
			// 
			this->txtb_cha_mods->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_cha_mods->Enabled = false;
			this->txtb_cha_mods->ForeColor = System::Drawing::Color::Gray;
			this->txtb_cha_mods->Location = System::Drawing::Point(110, 185);
			this->txtb_cha_mods->Name = S"txtb_cha_mods";
			this->txtb_cha_mods->ReadOnly = true;
			this->txtb_cha_mods->Size = System::Drawing::Size(35, 20);
			this->txtb_cha_mods->TabIndex = 365;
			this->txtb_cha_mods->Text = S"-4";
			this->txtb_cha_mods->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_wis_plus_01
			// 
			this->label_wis_plus_01->Location = System::Drawing::Point(225, 155);
			this->label_wis_plus_01->Name = S"label_wis_plus_01";
			this->label_wis_plus_01->Size = System::Drawing::Size(15, 13);
			this->label_wis_plus_01->TabIndex = 363;
			this->label_wis_plus_01->Text = S"+";
			// 
			// txtb_wis_mods
			// 
			this->txtb_wis_mods->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_wis_mods->Enabled = false;
			this->txtb_wis_mods->ForeColor = System::Drawing::Color::Gray;
			this->txtb_wis_mods->Location = System::Drawing::Point(110, 155);
			this->txtb_wis_mods->Name = S"txtb_wis_mods";
			this->txtb_wis_mods->ReadOnly = true;
			this->txtb_wis_mods->Size = System::Drawing::Size(35, 20);
			this->txtb_wis_mods->TabIndex = 362;
			this->txtb_wis_mods->Text = S"-4";
			this->txtb_wis_mods->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_int_plus_01
			// 
			this->label_int_plus_01->Location = System::Drawing::Point(225, 125);
			this->label_int_plus_01->Name = S"label_int_plus_01";
			this->label_int_plus_01->Size = System::Drawing::Size(15, 13);
			this->label_int_plus_01->TabIndex = 360;
			this->label_int_plus_01->Text = S"+";
			// 
			// txt_int_mods
			// 
			this->txt_int_mods->BackColor = System::Drawing::SystemColors::Window;
			this->txt_int_mods->Enabled = false;
			this->txt_int_mods->ForeColor = System::Drawing::Color::Gray;
			this->txt_int_mods->Location = System::Drawing::Point(110, 125);
			this->txt_int_mods->Name = S"txt_int_mods";
			this->txt_int_mods->ReadOnly = true;
			this->txt_int_mods->Size = System::Drawing::Size(35, 20);
			this->txt_int_mods->TabIndex = 359;
			this->txt_int_mods->Text = S"-4";
			this->txt_int_mods->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_cha_equals
			// 
			this->label_cha_equals->Location = System::Drawing::Point(155, 185);
			this->label_cha_equals->Name = S"label_cha_equals";
			this->label_cha_equals->Size = System::Drawing::Size(15, 13);
			this->label_cha_equals->TabIndex = 357;
			this->label_cha_equals->Text = S"=";
			// 
			// txtb_cha_total
			// 
			this->txtb_cha_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_cha_total->Enabled = false;
			this->txtb_cha_total->Location = System::Drawing::Point(65, 185);
			this->txtb_cha_total->Name = S"txtb_cha_total";
			this->txtb_cha_total->ReadOnly = true;
			this->txtb_cha_total->Size = System::Drawing::Size(35, 20);
			this->txtb_cha_total->TabIndex = 356;
			this->txtb_cha_total->Text = S"3";
			this->txtb_cha_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ability_cha
			// 
			this->label_ability_cha->Location = System::Drawing::Point(15, 185);
			this->label_ability_cha->Name = S"label_ability_cha";
			this->label_ability_cha->Size = System::Drawing::Size(35, 13);
			this->label_ability_cha->TabIndex = 355;
			this->label_ability_cha->Text = S"CHA:";
			this->label_ability_cha->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_wis_equals
			// 
			this->label_wis_equals->Location = System::Drawing::Point(155, 155);
			this->label_wis_equals->Name = S"label_wis_equals";
			this->label_wis_equals->Size = System::Drawing::Size(15, 13);
			this->label_wis_equals->TabIndex = 354;
			this->label_wis_equals->Text = S"=";
			// 
			// txtb_wis_total
			// 
			this->txtb_wis_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_wis_total->Enabled = false;
			this->txtb_wis_total->Location = System::Drawing::Point(65, 155);
			this->txtb_wis_total->Name = S"txtb_wis_total";
			this->txtb_wis_total->ReadOnly = true;
			this->txtb_wis_total->Size = System::Drawing::Size(35, 20);
			this->txtb_wis_total->TabIndex = 353;
			this->txtb_wis_total->Text = S"3";
			this->txtb_wis_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ability_wis
			// 
			this->label_ability_wis->Location = System::Drawing::Point(15, 155);
			this->label_ability_wis->Name = S"label_ability_wis";
			this->label_ability_wis->Size = System::Drawing::Size(35, 13);
			this->label_ability_wis->TabIndex = 352;
			this->label_ability_wis->Text = S"WIS:";
			this->label_ability_wis->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_int_equals
			// 
			this->label_int_equals->Location = System::Drawing::Point(155, 125);
			this->label_int_equals->Name = S"label_int_equals";
			this->label_int_equals->Size = System::Drawing::Size(15, 13);
			this->label_int_equals->TabIndex = 351;
			this->label_int_equals->Text = S"=";
			// 
			// txt_int_total
			// 
			this->txt_int_total->BackColor = System::Drawing::SystemColors::Window;
			this->txt_int_total->Enabled = false;
			this->txt_int_total->Location = System::Drawing::Point(65, 125);
			this->txt_int_total->Name = S"txt_int_total";
			this->txt_int_total->ReadOnly = true;
			this->txt_int_total->Size = System::Drawing::Size(35, 20);
			this->txt_int_total->TabIndex = 350;
			this->txt_int_total->Text = S"3";
			this->txt_int_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ability_int
			// 
			this->label_ability_int->Location = System::Drawing::Point(15, 125);
			this->label_ability_int->Name = S"label_ability_int";
			this->label_ability_int->Size = System::Drawing::Size(35, 13);
			this->label_ability_int->TabIndex = 349;
			this->label_ability_int->Text = S"INT:";
			this->label_ability_int->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_con_plus_01
			// 
			this->label_con_plus_01->Location = System::Drawing::Point(225, 95);
			this->label_con_plus_01->Name = S"label_con_plus_01";
			this->label_con_plus_01->Size = System::Drawing::Size(15, 13);
			this->label_con_plus_01->TabIndex = 348;
			this->label_con_plus_01->Text = S"+";
			// 
			// txt_con_mods
			// 
			this->txt_con_mods->BackColor = System::Drawing::SystemColors::Window;
			this->txt_con_mods->Enabled = false;
			this->txt_con_mods->ForeColor = System::Drawing::Color::Gray;
			this->txt_con_mods->Location = System::Drawing::Point(110, 95);
			this->txt_con_mods->Name = S"txt_con_mods";
			this->txt_con_mods->ReadOnly = true;
			this->txt_con_mods->Size = System::Drawing::Size(35, 20);
			this->txt_con_mods->TabIndex = 347;
			this->txt_con_mods->Text = S"-4";
			this->txt_con_mods->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_dex_plus_01
			// 
			this->label_dex_plus_01->Location = System::Drawing::Point(225, 65);
			this->label_dex_plus_01->Name = S"label_dex_plus_01";
			this->label_dex_plus_01->Size = System::Drawing::Size(15, 13);
			this->label_dex_plus_01->TabIndex = 345;
			this->label_dex_plus_01->Text = S"+";
			// 
			// txt_dex_mods
			// 
			this->txt_dex_mods->BackColor = System::Drawing::SystemColors::Window;
			this->txt_dex_mods->Enabled = false;
			this->txt_dex_mods->ForeColor = System::Drawing::Color::Gray;
			this->txt_dex_mods->Location = System::Drawing::Point(110, 65);
			this->txt_dex_mods->Name = S"txt_dex_mods";
			this->txt_dex_mods->ReadOnly = true;
			this->txt_dex_mods->Size = System::Drawing::Size(35, 20);
			this->txt_dex_mods->TabIndex = 344;
			this->txt_dex_mods->Text = S"-4";
			this->txt_dex_mods->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ability_mods
			// 
			this->label_ability_mods->Location = System::Drawing::Point(110, 10);
			this->label_ability_mods->Name = S"label_ability_mods";
			this->label_ability_mods->Size = System::Drawing::Size(35, 13);
			this->label_ability_mods->TabIndex = 342;
			this->label_ability_mods->Text = S"mods";
			this->label_ability_mods->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_str_plus_01
			// 
			this->label_str_plus_01->Location = System::Drawing::Point(225, 35);
			this->label_str_plus_01->Name = S"label_str_plus_01";
			this->label_str_plus_01->Size = System::Drawing::Size(15, 13);
			this->label_str_plus_01->TabIndex = 340;
			this->label_str_plus_01->Text = S"+";
			// 
			// txt_str_mods
			// 
			this->txt_str_mods->BackColor = System::Drawing::SystemColors::Window;
			this->txt_str_mods->Enabled = false;
			this->txt_str_mods->ForeColor = System::Drawing::Color::Gray;
			this->txt_str_mods->Location = System::Drawing::Point(110, 35);
			this->txt_str_mods->Name = S"txt_str_mods";
			this->txt_str_mods->ReadOnly = true;
			this->txt_str_mods->Size = System::Drawing::Size(35, 20);
			this->txt_str_mods->TabIndex = 339;
			this->txt_str_mods->Text = S"-4";
			this->txt_str_mods->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_con_equals
			// 
			this->label_con_equals->Location = System::Drawing::Point(155, 95);
			this->label_con_equals->Name = S"label_con_equals";
			this->label_con_equals->Size = System::Drawing::Size(15, 13);
			this->label_con_equals->TabIndex = 337;
			this->label_con_equals->Text = S"=";
			// 
			// txt_con_total
			// 
			this->txt_con_total->BackColor = System::Drawing::SystemColors::Window;
			this->txt_con_total->Enabled = false;
			this->txt_con_total->Location = System::Drawing::Point(65, 95);
			this->txt_con_total->Name = S"txt_con_total";
			this->txt_con_total->ReadOnly = true;
			this->txt_con_total->Size = System::Drawing::Size(35, 20);
			this->txt_con_total->TabIndex = 336;
			this->txt_con_total->Text = S"3";
			this->txt_con_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ability_con
			// 
			this->label_ability_con->Location = System::Drawing::Point(15, 95);
			this->label_ability_con->Name = S"label_ability_con";
			this->label_ability_con->Size = System::Drawing::Size(35, 13);
			this->label_ability_con->TabIndex = 335;
			this->label_ability_con->Text = S"CON:";
			this->label_ability_con->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_dex_equals
			// 
			this->label_dex_equals->Location = System::Drawing::Point(155, 65);
			this->label_dex_equals->Name = S"label_dex_equals";
			this->label_dex_equals->Size = System::Drawing::Size(15, 13);
			this->label_dex_equals->TabIndex = 334;
			this->label_dex_equals->Text = S"=";
			// 
			// txt_dex_total
			// 
			this->txt_dex_total->BackColor = System::Drawing::SystemColors::Window;
			this->txt_dex_total->Enabled = false;
			this->txt_dex_total->Location = System::Drawing::Point(65, 65);
			this->txt_dex_total->Name = S"txt_dex_total";
			this->txt_dex_total->ReadOnly = true;
			this->txt_dex_total->Size = System::Drawing::Size(35, 20);
			this->txt_dex_total->TabIndex = 333;
			this->txt_dex_total->Text = S"3";
			this->txt_dex_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ability_dex
			// 
			this->label_ability_dex->Location = System::Drawing::Point(15, 65);
			this->label_ability_dex->Name = S"label_ability_dex";
			this->label_ability_dex->Size = System::Drawing::Size(35, 13);
			this->label_ability_dex->TabIndex = 332;
			this->label_ability_dex->Text = S"DEX:";
			this->label_ability_dex->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// label_str_equals
			// 
			this->label_str_equals->Location = System::Drawing::Point(155, 35);
			this->label_str_equals->Name = S"label_str_equals";
			this->label_str_equals->Size = System::Drawing::Size(15, 13);
			this->label_str_equals->TabIndex = 331;
			this->label_str_equals->Text = S"=";
			// 
			// txt_str_total
			// 
			this->txt_str_total->BackColor = System::Drawing::SystemColors::Window;
			this->txt_str_total->Enabled = false;
			this->txt_str_total->Location = System::Drawing::Point(65, 35);
			this->txt_str_total->Name = S"txt_str_total";
			this->txt_str_total->ReadOnly = true;
			this->txt_str_total->Size = System::Drawing::Size(35, 20);
			this->txt_str_total->TabIndex = 330;
			this->txt_str_total->Text = S"3";
			this->txt_str_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ability_str
			// 
			this->label_ability_str->Location = System::Drawing::Point(15, 35);
			this->label_ability_str->Name = S"label_ability_str";
			this->label_ability_str->Size = System::Drawing::Size(35, 13);
			this->label_ability_str->TabIndex = 329;
			this->label_ability_str->Text = S"STR:";
			this->label_ability_str->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// txtb_ability_modifier_cha
			// 
			this->txtb_ability_modifier_cha->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ability_modifier_cha->Enabled = false;
			this->txtb_ability_modifier_cha->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ability_modifier_cha->Location = System::Drawing::Point(90, 280);
			this->txtb_ability_modifier_cha->Name = S"txtb_ability_modifier_cha";
			this->txtb_ability_modifier_cha->ReadOnly = true;
			this->txtb_ability_modifier_cha->Size = System::Drawing::Size(35, 20);
			this->txtb_ability_modifier_cha->TabIndex = 114;
			this->txtb_ability_modifier_cha->Text = S"0";
			this->txtb_ability_modifier_cha->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ability_score_cha
			// 
			this->txtb_ability_score_cha->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ability_score_cha->Enabled = false;
			this->txtb_ability_score_cha->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ability_score_cha->Location = System::Drawing::Point(45, 280);
			this->txtb_ability_score_cha->Name = S"txtb_ability_score_cha";
			this->txtb_ability_score_cha->ReadOnly = true;
			this->txtb_ability_score_cha->Size = System::Drawing::Size(35, 20);
			this->txtb_ability_score_cha->TabIndex = 113;
			this->txtb_ability_score_cha->Text = S"0";
			this->txtb_ability_score_cha->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ability_modifier_wis
			// 
			this->txtb_ability_modifier_wis->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ability_modifier_wis->Enabled = false;
			this->txtb_ability_modifier_wis->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ability_modifier_wis->Location = System::Drawing::Point(90, 245);
			this->txtb_ability_modifier_wis->Name = S"txtb_ability_modifier_wis";
			this->txtb_ability_modifier_wis->ReadOnly = true;
			this->txtb_ability_modifier_wis->Size = System::Drawing::Size(35, 20);
			this->txtb_ability_modifier_wis->TabIndex = 112;
			this->txtb_ability_modifier_wis->Text = S"0";
			this->txtb_ability_modifier_wis->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ability_score_wis
			// 
			this->txtb_ability_score_wis->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ability_score_wis->Enabled = false;
			this->txtb_ability_score_wis->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ability_score_wis->Location = System::Drawing::Point(45, 245);
			this->txtb_ability_score_wis->Name = S"txtb_ability_score_wis";
			this->txtb_ability_score_wis->ReadOnly = true;
			this->txtb_ability_score_wis->Size = System::Drawing::Size(35, 20);
			this->txtb_ability_score_wis->TabIndex = 111;
			this->txtb_ability_score_wis->Text = S"0";
			this->txtb_ability_score_wis->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_display_total_hp
			// 
			this->txtb_display_total_hp->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_display_total_hp->Enabled = false;
			this->txtb_display_total_hp->ForeColor = System::Drawing::Color::Gray;
			this->txtb_display_total_hp->Location = System::Drawing::Point(45, 345);
			this->txtb_display_total_hp->Name = S"txtb_display_total_hp";
			this->txtb_display_total_hp->ReadOnly = true;
			this->txtb_display_total_hp->Size = System::Drawing::Size(35, 20);
			this->txtb_display_total_hp->TabIndex = 110;
			this->txtb_display_total_hp->Text = S"0";
			this->txtb_display_total_hp->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ability_modifier_int
			// 
			this->txtb_ability_modifier_int->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ability_modifier_int->Enabled = false;
			this->txtb_ability_modifier_int->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ability_modifier_int->Location = System::Drawing::Point(90, 210);
			this->txtb_ability_modifier_int->Name = S"txtb_ability_modifier_int";
			this->txtb_ability_modifier_int->ReadOnly = true;
			this->txtb_ability_modifier_int->Size = System::Drawing::Size(35, 20);
			this->txtb_ability_modifier_int->TabIndex = 109;
			this->txtb_ability_modifier_int->Text = S"0";
			this->txtb_ability_modifier_int->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ability_score_int
			// 
			this->txtb_ability_score_int->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ability_score_int->Enabled = false;
			this->txtb_ability_score_int->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ability_score_int->Location = System::Drawing::Point(45, 210);
			this->txtb_ability_score_int->Name = S"txtb_ability_score_int";
			this->txtb_ability_score_int->ReadOnly = true;
			this->txtb_ability_score_int->Size = System::Drawing::Size(35, 20);
			this->txtb_ability_score_int->TabIndex = 108;
			this->txtb_ability_score_int->Text = S"0";
			this->txtb_ability_score_int->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ability_modifier_con
			// 
			this->txtb_ability_modifier_con->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ability_modifier_con->Enabled = false;
			this->txtb_ability_modifier_con->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ability_modifier_con->Location = System::Drawing::Point(90, 175);
			this->txtb_ability_modifier_con->Name = S"txtb_ability_modifier_con";
			this->txtb_ability_modifier_con->ReadOnly = true;
			this->txtb_ability_modifier_con->Size = System::Drawing::Size(35, 20);
			this->txtb_ability_modifier_con->TabIndex = 107;
			this->txtb_ability_modifier_con->Text = S"0";
			this->txtb_ability_modifier_con->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ability_score_con
			// 
			this->txtb_ability_score_con->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ability_score_con->Enabled = false;
			this->txtb_ability_score_con->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ability_score_con->Location = System::Drawing::Point(45, 175);
			this->txtb_ability_score_con->Name = S"txtb_ability_score_con";
			this->txtb_ability_score_con->ReadOnly = true;
			this->txtb_ability_score_con->Size = System::Drawing::Size(35, 20);
			this->txtb_ability_score_con->TabIndex = 106;
			this->txtb_ability_score_con->Text = S"0";
			this->txtb_ability_score_con->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ability_modifier_dex
			// 
			this->txtb_ability_modifier_dex->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ability_modifier_dex->Enabled = false;
			this->txtb_ability_modifier_dex->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ability_modifier_dex->Location = System::Drawing::Point(90, 140);
			this->txtb_ability_modifier_dex->Name = S"txtb_ability_modifier_dex";
			this->txtb_ability_modifier_dex->ReadOnly = true;
			this->txtb_ability_modifier_dex->Size = System::Drawing::Size(35, 20);
			this->txtb_ability_modifier_dex->TabIndex = 105;
			this->txtb_ability_modifier_dex->Text = S"0";
			this->txtb_ability_modifier_dex->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ability_score_dex
			// 
			this->txtb_ability_score_dex->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ability_score_dex->Enabled = false;
			this->txtb_ability_score_dex->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ability_score_dex->Location = System::Drawing::Point(45, 140);
			this->txtb_ability_score_dex->Name = S"txtb_ability_score_dex";
			this->txtb_ability_score_dex->ReadOnly = true;
			this->txtb_ability_score_dex->Size = System::Drawing::Size(35, 20);
			this->txtb_ability_score_dex->TabIndex = 104;
			this->txtb_ability_score_dex->Text = S"0";
			this->txtb_ability_score_dex->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ability_modifier_str
			// 
			this->txtb_ability_modifier_str->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ability_modifier_str->Enabled = false;
			this->txtb_ability_modifier_str->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ability_modifier_str->Location = System::Drawing::Point(90, 105);
			this->txtb_ability_modifier_str->Name = S"txtb_ability_modifier_str";
			this->txtb_ability_modifier_str->ReadOnly = true;
			this->txtb_ability_modifier_str->Size = System::Drawing::Size(35, 20);
			this->txtb_ability_modifier_str->TabIndex = 103;
			this->txtb_ability_modifier_str->Text = S"0";
			this->txtb_ability_modifier_str->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_ability_score_str
			// 
			this->txtb_ability_score_str->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_ability_score_str->Enabled = false;
			this->txtb_ability_score_str->ForeColor = System::Drawing::Color::Gray;
			this->txtb_ability_score_str->Location = System::Drawing::Point(45, 105);
			this->txtb_ability_score_str->Name = S"txtb_ability_score_str";
			this->txtb_ability_score_str->ReadOnly = true;
			this->txtb_ability_score_str->Size = System::Drawing::Size(35, 20);
			this->txtb_ability_score_str->TabIndex = 102;
			this->txtb_ability_score_str->Text = S"0";
			this->txtb_ability_score_str->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_display_ability_mods
			// 
			this->label_display_ability_mods->BackColor = System::Drawing::Color::Transparent;
			this->label_display_ability_mods->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label_display_ability_mods->Location = System::Drawing::Point(80, 80);
			this->label_display_ability_mods->Name = S"label_display_ability_mods";
			this->label_display_ability_mods->Size = System::Drawing::Size(50, 15);
			this->label_display_ability_mods->TabIndex = 101;
			this->label_display_ability_mods->Text = S"Modifier";
			this->label_display_ability_mods->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_display_ability_score
			// 
			this->label_display_ability_score->BackColor = System::Drawing::Color::Transparent;
			this->label_display_ability_score->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label_display_ability_score->Location = System::Drawing::Point(45, 80);
			this->label_display_ability_score->Name = S"label_display_ability_score";
			this->label_display_ability_score->Size = System::Drawing::Size(35, 15);
			this->label_display_ability_score->TabIndex = 100;
			this->label_display_ability_score->Text = S"Total";
			this->label_display_ability_score->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_display_total_hp
			// 
			this->label_display_total_hp->BackColor = System::Drawing::Color::Transparent;
			this->label_display_total_hp->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label_display_total_hp->Location = System::Drawing::Point(5, 350);
			this->label_display_total_hp->Name = S"label_display_total_hp";
			this->label_display_total_hp->Size = System::Drawing::Size(35, 15);
			this->label_display_total_hp->TabIndex = 99;
			this->label_display_total_hp->Text = S"HP";
			this->label_display_total_hp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_display_ability_cha
			// 
			this->label_display_ability_cha->BackColor = System::Drawing::Color::Transparent;
			this->label_display_ability_cha->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label_display_ability_cha->Location = System::Drawing::Point(5, 285);
			this->label_display_ability_cha->Name = S"label_display_ability_cha";
			this->label_display_ability_cha->Size = System::Drawing::Size(35, 15);
			this->label_display_ability_cha->TabIndex = 98;
			this->label_display_ability_cha->Text = S"CHA";
			this->label_display_ability_cha->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_display_ability_wis
			// 
			this->label_display_ability_wis->BackColor = System::Drawing::Color::Transparent;
			this->label_display_ability_wis->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label_display_ability_wis->Location = System::Drawing::Point(5, 250);
			this->label_display_ability_wis->Name = S"label_display_ability_wis";
			this->label_display_ability_wis->Size = System::Drawing::Size(35, 15);
			this->label_display_ability_wis->TabIndex = 97;
			this->label_display_ability_wis->Text = S"WIS";
			this->label_display_ability_wis->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_display_ability_int
			// 
			this->label_display_ability_int->BackColor = System::Drawing::Color::Transparent;
			this->label_display_ability_int->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label_display_ability_int->Location = System::Drawing::Point(5, 215);
			this->label_display_ability_int->Name = S"label_display_ability_int";
			this->label_display_ability_int->Size = System::Drawing::Size(35, 15);
			this->label_display_ability_int->TabIndex = 96;
			this->label_display_ability_int->Text = S"INT";
			this->label_display_ability_int->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_display_ability_con
			// 
			this->label_display_ability_con->BackColor = System::Drawing::Color::Transparent;
			this->label_display_ability_con->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label_display_ability_con->Location = System::Drawing::Point(5, 180);
			this->label_display_ability_con->Name = S"label_display_ability_con";
			this->label_display_ability_con->Size = System::Drawing::Size(35, 15);
			this->label_display_ability_con->TabIndex = 95;
			this->label_display_ability_con->Text = S"CON";
			this->label_display_ability_con->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_display_ability_dex
			// 
			this->label_display_ability_dex->BackColor = System::Drawing::Color::Transparent;
			this->label_display_ability_dex->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label_display_ability_dex->Location = System::Drawing::Point(5, 145);
			this->label_display_ability_dex->Name = S"label_display_ability_dex";
			this->label_display_ability_dex->Size = System::Drawing::Size(35, 15);
			this->label_display_ability_dex->TabIndex = 94;
			this->label_display_ability_dex->Text = S"DEX";
			this->label_display_ability_dex->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_display_ability_str
			// 
			this->label_display_ability_str->BackColor = System::Drawing::Color::Transparent;
			this->label_display_ability_str->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label_display_ability_str->Location = System::Drawing::Point(5, 110);
			this->label_display_ability_str->Name = S"label_display_ability_str";
			this->label_display_ability_str->Size = System::Drawing::Size(35, 15);
			this->label_display_ability_str->TabIndex = 93;
			this->label_display_ability_str->Text = S"STR";
			this->label_display_ability_str->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_hair_colour
			// 
			this->label_hair_colour->Location = System::Drawing::Point(465, 80);
			this->label_hair_colour->Name = S"label_hair_colour";
			this->label_hair_colour->Size = System::Drawing::Size(65, 20);
			this->label_hair_colour->TabIndex = 34;
			this->label_hair_colour->Text = S"Hair Colour:";
			this->label_hair_colour->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_hair_colour
			// 
			this->txtb_hair_colour->Location = System::Drawing::Point(535, 80);
			this->txtb_hair_colour->Name = S"txtb_hair_colour";
			this->txtb_hair_colour->Size = System::Drawing::Size(70, 20);
			this->txtb_hair_colour->TabIndex = 33;
			this->txtb_hair_colour->Text = S"";
			// 
			// label_eye_colour
			// 
			this->label_eye_colour->Location = System::Drawing::Point(310, 80);
			this->label_eye_colour->Name = S"label_eye_colour";
			this->label_eye_colour->Size = System::Drawing::Size(65, 20);
			this->label_eye_colour->TabIndex = 32;
			this->label_eye_colour->Text = S"Eye Colour:";
			this->label_eye_colour->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_eye_colour
			// 
			this->txtb_eye_colour->Location = System::Drawing::Point(380, 80);
			this->txtb_eye_colour->Name = S"txtb_eye_colour";
			this->txtb_eye_colour->Size = System::Drawing::Size(70, 20);
			this->txtb_eye_colour->TabIndex = 31;
			this->txtb_eye_colour->Text = S"";
			// 
			// label_inches
			// 
			this->label_inches->Location = System::Drawing::Point(505, 45);
			this->label_inches->Name = S"label_inches";
			this->label_inches->Size = System::Drawing::Size(40, 20);
			this->label_inches->TabIndex = 30;
			this->label_inches->Text = S"inches";
			this->label_inches->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_feet
			// 
			this->label_feet->Location = System::Drawing::Point(425, 45);
			this->label_feet->Name = S"label_feet";
			this->label_feet->Size = System::Drawing::Size(25, 20);
			this->label_feet->TabIndex = 29;
			this->label_feet->Text = S"feet";
			this->label_feet->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// nud_inches
			// 
			this->nud_inches->Location = System::Drawing::Point(455, 45);
			System::Int32 __mcTemp__24[] = new System::Int32[4];
			__mcTemp__24[0] = 13;
			__mcTemp__24[1] = 0;
			__mcTemp__24[2] = 0;
			__mcTemp__24[3] = 0;
			this->nud_inches->Maximum = System::Decimal(__mcTemp__24);
			this->nud_inches->Name = S"nud_inches";
			this->nud_inches->Size = System::Drawing::Size(45, 20);
			this->nud_inches->TabIndex = 28;
			this->nud_inches->ValueChanged += new System::EventHandler(this, nud_inches_ValueChanged);
			// 
			// label_weight
			// 
			this->label_weight->Location = System::Drawing::Point(490, 5);
			this->label_weight->Name = S"label_weight";
			this->label_weight->Size = System::Drawing::Size(45, 20);
			this->label_weight->TabIndex = 27;
			this->label_weight->Text = S"Weight:";
			this->label_weight->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_height
			// 
			this->label_height->Location = System::Drawing::Point(330, 45);
			this->label_height->Name = S"label_height";
			this->label_height->Size = System::Drawing::Size(45, 20);
			this->label_height->TabIndex = 26;
			this->label_height->Text = S"Height:";
			this->label_height->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_age
			// 
			this->label_age->Location = System::Drawing::Point(330, 10);
			this->label_age->Name = S"label_age";
			this->label_age->Size = System::Drawing::Size(45, 20);
			this->label_age->TabIndex = 25;
			this->label_age->Text = S"Age:";
			this->label_age->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_campaign
			// 
			this->label_campaign->Location = System::Drawing::Point(5, 80);
			this->label_campaign->Name = S"label_campaign";
			this->label_campaign->Size = System::Drawing::Size(105, 15);
			this->label_campaign->TabIndex = 24;
			this->label_campaign->Text = S"Campaign:";
			this->label_campaign->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_characters_name
			// 
			this->label_characters_name->Location = System::Drawing::Point(5, 50);
			this->label_characters_name->Name = S"label_characters_name";
			this->label_characters_name->Size = System::Drawing::Size(105, 10);
			this->label_characters_name->TabIndex = 23;
			this->label_characters_name->Text = S"Character\'s Name:";
			this->label_characters_name->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_players_name
			// 
			this->label_players_name->Location = System::Drawing::Point(5, 10);
			this->label_players_name->Name = S"label_players_name";
			this->label_players_name->Size = System::Drawing::Size(105, 15);
			this->label_players_name->TabIndex = 22;
			this->label_players_name->Text = S"Player\'s Name:";
			this->label_players_name->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_campaign
			// 
			this->txtb_campaign->Location = System::Drawing::Point(115, 80);
			this->txtb_campaign->Name = S"txtb_campaign";
			this->txtb_campaign->Size = System::Drawing::Size(170, 20);
			this->txtb_campaign->TabIndex = 21;
			this->txtb_campaign->Text = S"";
			// 
			// lstv_character_image
			// 
			this->lstv_character_image->Location = System::Drawing::Point(25, 130);
			this->lstv_character_image->Name = S"lstv_character_image";
			this->lstv_character_image->Size = System::Drawing::Size(240, 235);
			this->lstv_character_image->TabIndex = 20;
			this->lstv_character_image->View = System::Windows::Forms::View::Details;
			// 
			// picb_character_image
			// 
			this->picb_character_image->BackColor = System::Drawing::SystemColors::Control;
			this->picb_character_image->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picb_character_image->Location = System::Drawing::Point(335, 130);
			this->picb_character_image->Name = S"picb_character_image";
			this->picb_character_image->Size = System::Drawing::Size(235, 235);
			this->picb_character_image->TabIndex = 19;
			this->picb_character_image->TabStop = false;
			// 
			// nud_weight
			// 
			this->nud_weight->Location = System::Drawing::Point(540, 5);
			this->nud_weight->Name = S"nud_weight";
			this->nud_weight->Size = System::Drawing::Size(70, 20);
			this->nud_weight->TabIndex = 18;
			this->nud_weight->ValueChanged += new System::EventHandler(this, nud_weight_ValueChanged);
			// 
			// nud_feet
			// 
			this->nud_feet->Location = System::Drawing::Point(380, 45);
			System::Int32 __mcTemp__25[] = new System::Int32[4];
			__mcTemp__25[0] = 8;
			__mcTemp__25[1] = 0;
			__mcTemp__25[2] = 0;
			__mcTemp__25[3] = 0;
			this->nud_feet->Maximum = System::Decimal(__mcTemp__25);
			System::Int32 __mcTemp__26[] = new System::Int32[4];
			__mcTemp__26[0] = 3;
			__mcTemp__26[1] = 0;
			__mcTemp__26[2] = 0;
			__mcTemp__26[3] = 0;
			this->nud_feet->Minimum = System::Decimal(__mcTemp__26);
			this->nud_feet->Name = S"nud_feet";
			this->nud_feet->Size = System::Drawing::Size(45, 20);
			this->nud_feet->TabIndex = 17;
			System::Int32 __mcTemp__27[] = new System::Int32[4];
			__mcTemp__27[0] = 3;
			__mcTemp__27[1] = 0;
			__mcTemp__27[2] = 0;
			__mcTemp__27[3] = 0;
			this->nud_feet->Value = System::Decimal(__mcTemp__27);
			this->nud_feet->ValueChanged += new System::EventHandler(this, nud_feet_ValueChanged);
			// 
			// nud_age
			// 
			this->nud_age->Location = System::Drawing::Point(380, 10);
			this->nud_age->Name = S"nud_age";
			this->nud_age->Size = System::Drawing::Size(70, 20);
			this->nud_age->TabIndex = 16;
			this->nud_age->ValueChanged += new System::EventHandler(this, nud_age_ValueChanged);
			// 
			// txtb_characters_name
			// 
			this->txtb_characters_name->Location = System::Drawing::Point(115, 45);
			this->txtb_characters_name->Name = S"txtb_characters_name";
			this->txtb_characters_name->Size = System::Drawing::Size(170, 20);
			this->txtb_characters_name->TabIndex = 15;
			this->txtb_characters_name->Text = S"";
			// 
			// txtb_players_name
			// 
			this->txtb_players_name->Location = System::Drawing::Point(115, 10);
			this->txtb_players_name->Name = S"txtb_players_name";
			this->txtb_players_name->Size = System::Drawing::Size(170, 20);
			this->txtb_players_name->TabIndex = 14;
			this->txtb_players_name->Text = S"";
			// 
			// btn_racial_prof
			// 
			this->btn_racial_prof->BackColor = System::Drawing::SystemColors::Control;
			this->btn_racial_prof->Location = System::Drawing::Point(535, 185);
			this->btn_racial_prof->Name = S"btn_racial_prof";
			this->btn_racial_prof->Size = System::Drawing::Size(55, 20);
			this->btn_racial_prof->TabIndex = 36;
			this->btn_racial_prof->Text = S"Select";
			this->btn_racial_prof->Click += new System::EventHandler(this, btn_racial_prof_Click);
			// 
			// txtb_racial_prof
			// 
			this->txtb_racial_prof->Location = System::Drawing::Point(480, 185);
			this->txtb_racial_prof->Name = S"txtb_racial_prof";
			this->txtb_racial_prof->Size = System::Drawing::Size(35, 20);
			this->txtb_racial_prof->TabIndex = 35;
			this->txtb_racial_prof->Text = S"0";
			this->txtb_racial_prof->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_racial_prof
			// 
			this->label_racial_prof->Location = System::Drawing::Point(345, 185);
			this->label_racial_prof->Name = S"label_racial_prof";
			this->label_racial_prof->Size = System::Drawing::Size(125, 20);
			this->label_racial_prof->TabIndex = 34;
			this->label_racial_prof->Text = S"Racial Weapon Prof:";
			this->label_racial_prof->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_rogue_special
			// 
			this->btn_rogue_special->BackColor = System::Drawing::SystemColors::Control;
			this->btn_rogue_special->Location = System::Drawing::Point(535, 140);
			this->btn_rogue_special->Name = S"btn_rogue_special";
			this->btn_rogue_special->Size = System::Drawing::Size(55, 20);
			this->btn_rogue_special->TabIndex = 27;
			this->btn_rogue_special->Text = S"Select";
			this->btn_rogue_special->Click += new System::EventHandler(this, btn_rogue_special_Click);
			// 
			// txtb_rogue_special
			// 
			this->txtb_rogue_special->Location = System::Drawing::Point(480, 140);
			this->txtb_rogue_special->Name = S"txtb_rogue_special";
			this->txtb_rogue_special->Size = System::Drawing::Size(35, 20);
			this->txtb_rogue_special->TabIndex = 26;
			this->txtb_rogue_special->Text = S"0";
			this->txtb_rogue_special->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_rogue_special
			// 
			this->label_rogue_special->Location = System::Drawing::Point(340, 140);
			this->label_rogue_special->Name = S"label_rogue_special";
			this->label_rogue_special->Size = System::Drawing::Size(135, 20);
			this->label_rogue_special->TabIndex = 25;
			this->label_rogue_special->Text = S"Rogue Special Abitilies:";
			this->label_rogue_special->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_bard_prof
			// 
			this->btn_bard_prof->BackColor = System::Drawing::SystemColors::Control;
			this->btn_bard_prof->Location = System::Drawing::Point(535, 95);
			this->btn_bard_prof->Name = S"btn_bard_prof";
			this->btn_bard_prof->Size = System::Drawing::Size(55, 20);
			this->btn_bard_prof->TabIndex = 24;
			this->btn_bard_prof->Text = S"Select";
			this->btn_bard_prof->Click += new System::EventHandler(this, btn_bard_prof_Click);
			// 
			// txtb_bard_prof
			// 
			this->txtb_bard_prof->Location = System::Drawing::Point(480, 95);
			this->txtb_bard_prof->Name = S"txtb_bard_prof";
			this->txtb_bard_prof->Size = System::Drawing::Size(35, 20);
			this->txtb_bard_prof->TabIndex = 23;
			this->txtb_bard_prof->Text = S"0";
			this->txtb_bard_prof->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_bard_prof
			// 
			this->label_bard_prof->Location = System::Drawing::Point(340, 95);
			this->label_bard_prof->Name = S"label_bard_prof";
			this->label_bard_prof->Size = System::Drawing::Size(135, 20);
			this->label_bard_prof->TabIndex = 22;
			this->label_bard_prof->Text = S"Bard Weapon Prof:";
			this->label_bard_prof->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn_ranger_enemie
			// 
			this->btn_ranger_enemie->BackColor = System::Drawing::SystemColors::Control;
			this->btn_ranger_enemie->Location = System::Drawing::Point(535, 45);
			this->btn_ranger_enemie->Name = S"btn_ranger_enemie";
			this->btn_ranger_enemie->Size = System::Drawing::Size(55, 20);
			this->btn_ranger_enemie->TabIndex = 21;
			this->btn_ranger_enemie->Text = S"Select";
			this->btn_ranger_enemie->Click += new System::EventHandler(this, btn_ranger_enemie_Click);
			// 
			// txtb_ranger_enemie
			// 
			this->txtb_ranger_enemie->Location = System::Drawing::Point(480, 45);
			this->txtb_ranger_enemie->Name = S"txtb_ranger_enemie";
			this->txtb_ranger_enemie->Size = System::Drawing::Size(35, 20);
			this->txtb_ranger_enemie->TabIndex = 20;
			this->txtb_ranger_enemie->Text = S"0";
			this->txtb_ranger_enemie->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_ranger_enemie
			// 
			this->label_ranger_enemie->Location = System::Drawing::Point(340, 45);
			this->label_ranger_enemie->Name = S"label_ranger_enemie";
			this->label_ranger_enemie->Size = System::Drawing::Size(135, 20);
			this->label_ranger_enemie->TabIndex = 19;
			this->label_ranger_enemie->Text = S"Ranger Favored Enemie:";
			this->label_ranger_enemie->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// trev_features
			// 
			this->trev_features->ImageIndex = -1;
			this->trev_features->Location = System::Drawing::Point(5, 35);
			this->trev_features->Name = S"trev_features";
			this->trev_features->SelectedImageIndex = -1;
			this->trev_features->Size = System::Drawing::Size(310, 295);
			this->trev_features->TabIndex = 18;
			// 
			// comb_feature_type
			// 
			this->comb_feature_type->Location = System::Drawing::Point(5, 5);
			this->comb_feature_type->Name = S"comb_feature_type";
			this->comb_feature_type->Size = System::Drawing::Size(195, 21);
			this->comb_feature_type->TabIndex = 17;
			this->comb_feature_type->SelectedIndexChanged += new System::EventHandler(this, comb_feature_type_SelectedIndexChanged);
			// 
			// btn_remove_skill
			// 
			this->btn_remove_skill->BackColor = System::Drawing::SystemColors::Control;
			this->btn_remove_skill->Location = System::Drawing::Point(555, 110);
			this->btn_remove_skill->Name = S"btn_remove_skill";
			this->btn_remove_skill->Size = System::Drawing::Size(80, 25);
			this->btn_remove_skill->TabIndex = 13;
			this->btn_remove_skill->Text = S"Remove";
			this->btn_remove_skill->Click += new System::EventHandler(this, btn_remove_skill_Click);
			// 
			// btn_add_skill
			// 
			this->btn_add_skill->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_skill->Location = System::Drawing::Point(555, 70);
			this->btn_add_skill->Name = S"btn_add_skill";
			this->btn_add_skill->Size = System::Drawing::Size(80, 25);
			this->btn_add_skill->TabIndex = 12;
			this->btn_add_skill->Text = S"Add";
			this->btn_add_skill->Click += new System::EventHandler(this, btn_add_skill_Click);
			// 
			// btn_max_skills
			// 
			this->btn_max_skills->BackColor = System::Drawing::SystemColors::Control;
			this->btn_max_skills->Location = System::Drawing::Point(555, 355);
			this->btn_max_skills->Name = S"btn_max_skills";
			this->btn_max_skills->Size = System::Drawing::Size(80, 25);
			this->btn_max_skills->TabIndex = 11;
			this->btn_max_skills->Text = S"Max Ranks";
			this->btn_max_skills->Click += new System::EventHandler(this, btn_max_skills_Click);
			// 
			// ckb_enforce_max_skills
			// 
			this->ckb_enforce_max_skills->BackColor = System::Drawing::Color::Transparent;
			this->ckb_enforce_max_skills->Checked = true;
			this->ckb_enforce_max_skills->CheckState = System::Windows::Forms::CheckState::Checked;
			this->ckb_enforce_max_skills->Location = System::Drawing::Point(555, 385);
			this->ckb_enforce_max_skills->Name = S"ckb_enforce_max_skills";
			this->ckb_enforce_max_skills->Size = System::Drawing::Size(90, 15);
			this->ckb_enforce_max_skills->TabIndex = 10;
			this->ckb_enforce_max_skills->Text = S"Enforce Max";
			this->ckb_enforce_max_skills->CheckedChanged += new System::EventHandler(this, ckb_enforce_max_skills_CheckedChanged);
			// 
			// txtb_skill_points
			// 
			this->txtb_skill_points->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_skill_points->Enabled = false;
			this->txtb_skill_points->ForeColor = System::Drawing::Color::Gray;
			this->txtb_skill_points->Location = System::Drawing::Point(565, 30);
			this->txtb_skill_points->Name = S"txtb_skill_points";
			this->txtb_skill_points->ReadOnly = true;
			this->txtb_skill_points->Size = System::Drawing::Size(55, 20);
			this->txtb_skill_points->TabIndex = 9;
			this->txtb_skill_points->Text = S"0";
			this->txtb_skill_points->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_skill_points
			// 
			this->label_skill_points->BackColor = System::Drawing::Color::Transparent;
			this->label_skill_points->Location = System::Drawing::Point(545, 10);
			this->label_skill_points->Name = S"label_skill_points";
			this->label_skill_points->Size = System::Drawing::Size(95, 10);
			this->label_skill_points->TabIndex = 8;
			this->label_skill_points->Text = S"Points";
			this->label_skill_points->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lstv_skills
			// 
			this->lstv_skills->FullRowSelect = true;
			this->lstv_skills->HideSelection = false;
			this->lstv_skills->Location = System::Drawing::Point(5, 5);
			this->lstv_skills->MultiSelect = false;
			this->lstv_skills->Name = S"lstv_skills";
			this->lstv_skills->Size = System::Drawing::Size(530, 400);
			this->lstv_skills->TabIndex = 7;
			this->lstv_skills->View = System::Windows::Forms::View::Details;
			this->lstv_skills->SelectedIndexChanged += new System::EventHandler(this, lstv_skills_SelectedIndexChanged);
			// 
			// label_feat_requirements_description
			// 
			this->label_feat_requirements_description->BackColor = System::Drawing::Color::Transparent;
			this->label_feat_requirements_description->Location = System::Drawing::Point(265, 295);
			this->label_feat_requirements_description->Name = S"label_feat_requirements_description";
			this->label_feat_requirements_description->Size = System::Drawing::Size(370, 105);
			this->label_feat_requirements_description->TabIndex = 14;
			// 
			// label_feat_requirements_title
			// 
			this->label_feat_requirements_title->Location = System::Drawing::Point(265, 280);
			this->label_feat_requirements_title->Name = S"label_feat_requirements_title";
			this->label_feat_requirements_title->Size = System::Drawing::Size(235, 15);
			this->label_feat_requirements_title->TabIndex = 13;
			this->label_feat_requirements_title->Text = S"Requirements:";
			// 
			// ckb_negative_feats
			// 
			this->ckb_negative_feats->Location = System::Drawing::Point(260, 140);
			this->ckb_negative_feats->Name = S"ckb_negative_feats";
			this->ckb_negative_feats->Size = System::Drawing::Size(104, 20);
			this->ckb_negative_feats->TabIndex = 12;
			this->ckb_negative_feats->Text = S"Allow Negative";
			this->ckb_negative_feats->CheckedChanged += new System::EventHandler(this, ckb_negative_feats_CheckedChanged);
			// 
			// ckb_disable_feats
			// 
			this->ckb_disable_feats->Location = System::Drawing::Point(5, 385);
			this->ckb_disable_feats->Name = S"ckb_disable_feats";
			this->ckb_disable_feats->Size = System::Drawing::Size(225, 20);
			this->ckb_disable_feats->TabIndex = 10;
			this->ckb_disable_feats->Text = S"Disable Feat Prerequisites";
			this->ckb_disable_feats->CheckedChanged += new System::EventHandler(this, ckb_disable_feats_CheckedChanged);
			// 
			// label_bonus_feat_points
			// 
			this->label_bonus_feat_points->Location = System::Drawing::Point(255, 70);
			this->label_bonus_feat_points->Name = S"label_bonus_feat_points";
			this->label_bonus_feat_points->Size = System::Drawing::Size(115, 15);
			this->label_bonus_feat_points->TabIndex = 9;
			this->label_bonus_feat_points->Text = S"Bonus Feat Points:";
			this->label_bonus_feat_points->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtb_bonus_feat_points
			// 
			this->txtb_bonus_feat_points->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_bonus_feat_points->Enabled = false;
			this->txtb_bonus_feat_points->ForeColor = System::Drawing::Color::Gray;
			this->txtb_bonus_feat_points->Location = System::Drawing::Point(295, 90);
			this->txtb_bonus_feat_points->Name = S"txtb_bonus_feat_points";
			this->txtb_bonus_feat_points->Size = System::Drawing::Size(45, 20);
			this->txtb_bonus_feat_points->TabIndex = 8;
			this->txtb_bonus_feat_points->Text = S"0";
			this->txtb_bonus_feat_points->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_feat_points
			// 
			this->label_feat_points->Location = System::Drawing::Point(275, 10);
			this->label_feat_points->Name = S"label_feat_points";
			this->label_feat_points->Size = System::Drawing::Size(80, 15);
			this->label_feat_points->TabIndex = 7;
			this->label_feat_points->Text = S"Feat Points:";
			this->label_feat_points->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtb_feat_points
			// 
			this->txtb_feat_points->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_feat_points->Enabled = false;
			this->txtb_feat_points->ForeColor = System::Drawing::Color::Gray;
			this->txtb_feat_points->Location = System::Drawing::Point(295, 30);
			this->txtb_feat_points->Name = S"txtb_feat_points";
			this->txtb_feat_points->Size = System::Drawing::Size(45, 20);
			this->txtb_feat_points->TabIndex = 6;
			this->txtb_feat_points->Text = S"0";
			this->txtb_feat_points->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_add_bonus_feat
			// 
			this->btn_add_bonus_feat->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_bonus_feat->Location = System::Drawing::Point(265, 200);
			this->btn_add_bonus_feat->Name = S"btn_add_bonus_feat";
			this->btn_add_bonus_feat->Size = System::Drawing::Size(95, 25);
			this->btn_add_bonus_feat->TabIndex = 4;
			this->btn_add_bonus_feat->Text = S"Add Bonus Feat";
			this->btn_add_bonus_feat->Click += new System::EventHandler(this, btn_add_bonus_feat_Click);
			// 
			// btn_remove_feat
			// 
			this->btn_remove_feat->BackColor = System::Drawing::SystemColors::Control;
			this->btn_remove_feat->Location = System::Drawing::Point(265, 235);
			this->btn_remove_feat->Name = S"btn_remove_feat";
			this->btn_remove_feat->Size = System::Drawing::Size(95, 25);
			this->btn_remove_feat->TabIndex = 3;
			this->btn_remove_feat->Text = S"Remove";
			this->btn_remove_feat->Click += new System::EventHandler(this, btn_remove_feat_Click);
			// 
			// btn_add_feat
			// 
			this->btn_add_feat->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_feat->Location = System::Drawing::Point(265, 165);
			this->btn_add_feat->Name = S"btn_add_feat";
			this->btn_add_feat->Size = System::Drawing::Size(95, 25);
			this->btn_add_feat->TabIndex = 2;
			this->btn_add_feat->Text = S"Add Feat";
			this->btn_add_feat->Click += new System::EventHandler(this, btn_add_feat_Click);
			// 
			// lstv_feats_known
			// 
			this->lstv_feats_known->Location = System::Drawing::Point(415, 5);
			this->lstv_feats_known->Name = S"lstv_feats_known";
			this->lstv_feats_known->Size = System::Drawing::Size(225, 255);
			this->lstv_feats_known->TabIndex = 1;
			this->lstv_feats_known->View = System::Windows::Forms::View::Details;
			// 
			// lstv_feats
			// 
			this->lstv_feats->FullRowSelect = true;
			this->lstv_feats->HideSelection = false;
			this->lstv_feats->Location = System::Drawing::Point(5, 5);
			this->lstv_feats->MultiSelect = false;
			this->lstv_feats->Name = S"lstv_feats";
			this->lstv_feats->Size = System::Drawing::Size(225, 375);
			this->lstv_feats->TabIndex = 0;
			this->lstv_feats->View = System::Windows::Forms::View::Details;
			// 
			// ckb_language_negative
			// 
			this->ckb_language_negative->Location = System::Drawing::Point(270, 140);
			this->ckb_language_negative->Name = S"ckb_language_negative";
			this->ckb_language_negative->Size = System::Drawing::Size(104, 20);
			this->ckb_language_negative->TabIndex = 22;
			this->ckb_language_negative->Text = S"Allow Negative";
			this->ckb_language_negative->CheckedChanged += new System::EventHandler(this, ckb_language_negative_CheckedChanged);
			// 
			// label_language_skill_points
			// 
			this->label_language_skill_points->Location = System::Drawing::Point(260, 70);
			this->label_language_skill_points->Name = S"label_language_skill_points";
			this->label_language_skill_points->Size = System::Drawing::Size(125, 15);
			this->label_language_skill_points->TabIndex = 21;
			this->label_language_skill_points->Text = S"Language Skill Points:";
			this->label_language_skill_points->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtb_language_skill_points
			// 
			this->txtb_language_skill_points->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_language_skill_points->Enabled = false;
			this->txtb_language_skill_points->ForeColor = System::Drawing::Color::Gray;
			this->txtb_language_skill_points->Location = System::Drawing::Point(300, 95);
			this->txtb_language_skill_points->Name = S"txtb_language_skill_points";
			this->txtb_language_skill_points->Size = System::Drawing::Size(45, 20);
			this->txtb_language_skill_points->TabIndex = 20;
			this->txtb_language_skill_points->Text = S"0";
			this->txtb_language_skill_points->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_language_points
			// 
			this->label_language_points->Location = System::Drawing::Point(270, 10);
			this->label_language_points->Name = S"label_language_points";
			this->label_language_points->Size = System::Drawing::Size(105, 15);
			this->label_language_points->TabIndex = 19;
			this->label_language_points->Text = S"Language Points:";
			this->label_language_points->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtb_language_points
			// 
			this->txtb_language_points->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_language_points->Enabled = false;
			this->txtb_language_points->ForeColor = System::Drawing::Color::Gray;
			this->txtb_language_points->Location = System::Drawing::Point(300, 35);
			this->txtb_language_points->Name = S"txtb_language_points";
			this->txtb_language_points->Size = System::Drawing::Size(45, 20);
			this->txtb_language_points->TabIndex = 18;
			this->txtb_language_points->Text = S"0";
			this->txtb_language_points->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_add_language_skill
			// 
			this->btn_add_language_skill->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_language_skill->Location = System::Drawing::Point(275, 200);
			this->btn_add_language_skill->Name = S"btn_add_language_skill";
			this->btn_add_language_skill->Size = System::Drawing::Size(95, 25);
			this->btn_add_language_skill->TabIndex = 17;
			this->btn_add_language_skill->Text = S"Add From Skills";
			this->btn_add_language_skill->Click += new System::EventHandler(this, btn_add_language_skill_Click);
			// 
			// btn_remove_language
			// 
			this->btn_remove_language->BackColor = System::Drawing::SystemColors::Control;
			this->btn_remove_language->Location = System::Drawing::Point(275, 235);
			this->btn_remove_language->Name = S"btn_remove_language";
			this->btn_remove_language->Size = System::Drawing::Size(95, 25);
			this->btn_remove_language->TabIndex = 16;
			this->btn_remove_language->Text = S"Remove";
			this->btn_remove_language->Click += new System::EventHandler(this, btn_remove_language_Click);
			// 
			// btn_add_language
			// 
			this->btn_add_language->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_language->Location = System::Drawing::Point(275, 165);
			this->btn_add_language->Name = S"btn_add_language";
			this->btn_add_language->Size = System::Drawing::Size(95, 25);
			this->btn_add_language->TabIndex = 15;
			this->btn_add_language->Text = S"Add Language";
			this->btn_add_language->Click += new System::EventHandler(this, btn_add_language_Click);
			// 
			// lstv_languages_known
			// 
			this->lstv_languages_known->FullRowSelect = true;
			this->lstv_languages_known->Location = System::Drawing::Point(405, 5);
			this->lstv_languages_known->MultiSelect = false;
			this->lstv_languages_known->Name = S"lstv_languages_known";
			this->lstv_languages_known->Size = System::Drawing::Size(225, 360);
			this->lstv_languages_known->TabIndex = 14;
			this->lstv_languages_known->View = System::Windows::Forms::View::Details;
			// 
			// lstv_languages
			// 
			this->lstv_languages->FullRowSelect = true;
			this->lstv_languages->Location = System::Drawing::Point(5, 5);
			this->lstv_languages->MultiSelect = false;
			this->lstv_languages->Name = S"lstv_languages";
			this->lstv_languages->Size = System::Drawing::Size(225, 360);
			this->lstv_languages->TabIndex = 13;
			this->lstv_languages->View = System::Windows::Forms::View::Details;
			// 
			// ckb_masterwork
			// 
			this->ckb_masterwork->Location = System::Drawing::Point(5, 85);
			this->ckb_masterwork->Name = S"ckb_masterwork";
			this->ckb_masterwork->TabIndex = 23;
			this->ckb_masterwork->Text = S"Masterwork";
			this->ckb_masterwork->CheckedChanged += new System::EventHandler(this, ckb_masterwork_CheckedChanged);
			// 
			// comb_item_magic
			// 
			this->comb_item_magic->Location = System::Drawing::Point(5, 35);
			this->comb_item_magic->Name = S"comb_item_magic";
			this->comb_item_magic->Size = System::Drawing::Size(95, 21);
			this->comb_item_magic->TabIndex = 22;
			this->comb_item_magic->Text = S"Magic Weapon";
			this->comb_item_magic->SelectedIndexChanged += new System::EventHandler(this, comb_item_magic_SelectedIndexChanged);
			// 
			// comb_item_type
			// 
			this->comb_item_type->Location = System::Drawing::Point(5, 5);
			this->comb_item_type->Name = S"comb_item_type";
			this->comb_item_type->Size = System::Drawing::Size(95, 21);
			this->comb_item_type->TabIndex = 21;
			this->comb_item_type->Text = S"Weapon";
			this->comb_item_type->SelectedIndexChanged += new System::EventHandler(this, comb_item_type_SelectedIndexChanged);
			// 
			// label_lb
			// 
			this->label_lb->Location = System::Drawing::Point(615, 330);
			this->label_lb->Name = S"label_lb";
			this->label_lb->Size = System::Drawing::Size(17, 15);
			this->label_lb->TabIndex = 20;
			this->label_lb->Text = S"lb.";
			this->label_lb->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label_load
			// 
			this->label_load->Location = System::Drawing::Point(425, 355);
			this->label_load->Name = S"label_load";
			this->label_load->Size = System::Drawing::Size(105, 15);
			this->label_load->TabIndex = 19;
			this->label_load->Text = S"Load:";
			this->label_load->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_total_wieght
			// 
			this->label_total_wieght->Location = System::Drawing::Point(400, 330);
			this->label_total_wieght->Name = S"label_total_wieght";
			this->label_total_wieght->Size = System::Drawing::Size(135, 15);
			this->label_total_wieght->TabIndex = 18;
			this->label_total_wieght->Text = S"Total Wieght Carried:";
			this->label_total_wieght->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// txtb_load
			// 
			this->txtb_load->Location = System::Drawing::Point(540, 350);
			this->txtb_load->Name = S"txtb_load";
			this->txtb_load->Size = System::Drawing::Size(75, 20);
			this->txtb_load->TabIndex = 17;
			this->txtb_load->Text = S"Light";
			this->txtb_load->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_total_wieght
			// 
			this->txtb_total_wieght->Location = System::Drawing::Point(540, 325);
			this->txtb_total_wieght->Name = S"txtb_total_wieght";
			this->txtb_total_wieght->Size = System::Drawing::Size(75, 20);
			this->txtb_total_wieght->TabIndex = 16;
			this->txtb_total_wieght->Text = S"0.0";
			this->txtb_total_wieght->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_item_not_carried
			// 
			this->btn_item_not_carried->BackColor = System::Drawing::SystemColors::Control;
			this->btn_item_not_carried->Location = System::Drawing::Point(115, 355);
			this->btn_item_not_carried->Name = S"btn_item_not_carried";
			this->btn_item_not_carried->Size = System::Drawing::Size(95, 20);
			this->btn_item_not_carried->TabIndex = 15;
			this->btn_item_not_carried->Text = S"Item Not Carried";
			this->btn_item_not_carried->Click += new System::EventHandler(this, btn_item_not_carried_Click);
			// 
			// btn_item_carried
			// 
			this->btn_item_carried->BackColor = System::Drawing::SystemColors::Control;
			this->btn_item_carried->Location = System::Drawing::Point(115, 325);
			this->btn_item_carried->Name = S"btn_item_carried";
			this->btn_item_carried->Size = System::Drawing::Size(95, 20);
			this->btn_item_carried->TabIndex = 14;
			this->btn_item_carried->Text = S"Item Carried";
			this->btn_item_carried->Click += new System::EventHandler(this, btn_item_carried_Click);
			// 
			// label_buy_cp
			// 
			this->label_buy_cp->Location = System::Drawing::Point(80, 330);
			this->label_buy_cp->Name = S"label_buy_cp";
			this->label_buy_cp->Size = System::Drawing::Size(20, 15);
			this->label_buy_cp->TabIndex = 13;
			this->label_buy_cp->Text = S"CP";
			// 
			// label_buy_sp
			// 
			this->label_buy_sp->Location = System::Drawing::Point(80, 300);
			this->label_buy_sp->Name = S"label_buy_sp";
			this->label_buy_sp->Size = System::Drawing::Size(20, 15);
			this->label_buy_sp->TabIndex = 12;
			this->label_buy_sp->Text = S"SP";
			// 
			// label_buy_gp
			// 
			this->label_buy_gp->Location = System::Drawing::Point(80, 270);
			this->label_buy_gp->Name = S"label_buy_gp";
			this->label_buy_gp->Size = System::Drawing::Size(25, 15);
			this->label_buy_gp->TabIndex = 11;
			this->label_buy_gp->Text = S"GP";
			// 
			// label_buy_pp
			// 
			this->label_buy_pp->Location = System::Drawing::Point(80, 240);
			this->label_buy_pp->Name = S"label_buy_pp";
			this->label_buy_pp->Size = System::Drawing::Size(20, 15);
			this->label_buy_pp->TabIndex = 10;
			this->label_buy_pp->Text = S"PP";
			// 
			// ckb_buy_free
			// 
			this->ckb_buy_free->Location = System::Drawing::Point(5, 165);
			this->ckb_buy_free->Name = S"ckb_buy_free";
			this->ckb_buy_free->TabIndex = 9;
			this->ckb_buy_free->Text = S"Buy/Sell for free";
			this->ckb_buy_free->CheckedChanged += new System::EventHandler(this, ckb_buy_free_CheckedChanged);
			// 
			// txtb_buy_cp
			// 
			this->txtb_buy_cp->Location = System::Drawing::Point(10, 325);
			this->txtb_buy_cp->Name = S"txtb_buy_cp";
			this->txtb_buy_cp->Size = System::Drawing::Size(70, 20);
			this->txtb_buy_cp->TabIndex = 8;
			this->txtb_buy_cp->Text = S"0";
			this->txtb_buy_cp->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtb_buy_sp
			// 
			this->txtb_buy_sp->Location = System::Drawing::Point(10, 295);
			this->txtb_buy_sp->Name = S"txtb_buy_sp";
			this->txtb_buy_sp->Size = System::Drawing::Size(70, 20);
			this->txtb_buy_sp->TabIndex = 7;
			this->txtb_buy_sp->Text = S"0";
			this->txtb_buy_sp->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtb_buy_gp
			// 
			this->txtb_buy_gp->Location = System::Drawing::Point(10, 265);
			this->txtb_buy_gp->Name = S"txtb_buy_gp";
			this->txtb_buy_gp->Size = System::Drawing::Size(70, 20);
			this->txtb_buy_gp->TabIndex = 6;
			this->txtb_buy_gp->Text = S"0";
			this->txtb_buy_gp->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtb_buy_pp
			// 
			this->txtb_buy_pp->Location = System::Drawing::Point(10, 235);
			this->txtb_buy_pp->Name = S"txtb_buy_pp";
			this->txtb_buy_pp->Size = System::Drawing::Size(70, 20);
			this->txtb_buy_pp->TabIndex = 5;
			this->txtb_buy_pp->Text = S"0";
			this->txtb_buy_pp->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btn_new_item
			// 
			this->btn_new_item->BackColor = System::Drawing::SystemColors::Control;
			this->btn_new_item->Location = System::Drawing::Point(5, 115);
			this->btn_new_item->Name = S"btn_new_item";
			this->btn_new_item->Size = System::Drawing::Size(85, 20);
			this->btn_new_item->TabIndex = 4;
			this->btn_new_item->Text = S"Magic Items";
			this->btn_new_item->Click += new System::EventHandler(this, btn_new_item_Click);
			// 
			// btn_sell
			// 
			this->btn_sell->BackColor = System::Drawing::SystemColors::Control;
			this->btn_sell->Location = System::Drawing::Point(5, 190);
			this->btn_sell->Name = S"btn_sell";
			this->btn_sell->Size = System::Drawing::Size(85, 20);
			this->btn_sell->TabIndex = 3;
			this->btn_sell->Text = S"Sell";
			this->btn_sell->Click += new System::EventHandler(this, btn_sell_Click);
			// 
			// btn_buy
			// 
			this->btn_buy->BackColor = System::Drawing::SystemColors::Control;
			this->btn_buy->Location = System::Drawing::Point(5, 140);
			this->btn_buy->Name = S"btn_buy";
			this->btn_buy->Size = System::Drawing::Size(85, 20);
			this->btn_buy->TabIndex = 2;
			this->btn_buy->Text = S"Buy";
			this->btn_buy->Click += new System::EventHandler(this, btn_buy_Click);
			// 
			// lst_user_items
			// 
			this->lst_user_items->Location = System::Drawing::Point(115, 165);
			this->lst_user_items->Name = S"lst_user_items";
			this->lst_user_items->Size = System::Drawing::Size(520, 155);
			this->lst_user_items->TabIndex = 1;
			this->lst_user_items->View = System::Windows::Forms::View::Details;
			// 
			// lstv_store_items
			// 
			this->lstv_store_items->Location = System::Drawing::Point(115, 5);
			this->lstv_store_items->Name = S"lstv_store_items";
			this->lstv_store_items->Size = System::Drawing::Size(520, 155);
			this->lstv_store_items->TabIndex = 0;
			this->lstv_store_items->View = System::Windows::Forms::View::Details;
			// 
			// nud_equip_group
			// 
			this->nud_equip_group->Location = System::Drawing::Point(125, 180);
			System::Int32 __mcTemp__28[] = new System::Int32[4];
			__mcTemp__28[0] = 1;
			__mcTemp__28[1] = 0;
			__mcTemp__28[2] = 0;
			__mcTemp__28[3] = 0;
			this->nud_equip_group->Minimum = System::Decimal(__mcTemp__28);
			this->nud_equip_group->Name = S"nud_equip_group";
			this->nud_equip_group->Size = System::Drawing::Size(65, 20);
			this->nud_equip_group->TabIndex = 5;
			System::Int32 __mcTemp__29[] = new System::Int32[4];
			__mcTemp__29[0] = 1;
			__mcTemp__29[1] = 0;
			__mcTemp__29[2] = 0;
			__mcTemp__29[3] = 0;
			this->nud_equip_group->Value = System::Decimal(__mcTemp__29);
			this->nud_equip_group->ValueChanged += new System::EventHandler(this, nud_equip_group_ValueChanged);
			// 
			// btn_equip_group
			// 
			this->btn_equip_group->BackColor = System::Drawing::SystemColors::Control;
			this->btn_equip_group->Location = System::Drawing::Point(5, 180);
			this->btn_equip_group->Name = S"btn_equip_group";
			this->btn_equip_group->Size = System::Drawing::Size(110, 25);
			this->btn_equip_group->TabIndex = 4;
			this->btn_equip_group->Text = S"Equip in Group";
			this->btn_equip_group->Click += new System::EventHandler(this, btn_equip_group_Click);
			// 
			// btn_unequip
			// 
			this->btn_unequip->BackColor = System::Drawing::SystemColors::Control;
			this->btn_unequip->Location = System::Drawing::Point(5, 215);
			this->btn_unequip->Name = S"btn_unequip";
			this->btn_unequip->Size = System::Drawing::Size(110, 25);
			this->btn_unequip->TabIndex = 3;
			this->btn_unequip->Text = S"Unequip";
			this->btn_unequip->Click += new System::EventHandler(this, btn_unequip_Click);
			// 
			// btn_equip
			// 
			this->btn_equip->BackColor = System::Drawing::SystemColors::Control;
			this->btn_equip->Location = System::Drawing::Point(5, 145);
			this->btn_equip->Name = S"btn_equip";
			this->btn_equip->Size = System::Drawing::Size(110, 25);
			this->btn_equip->TabIndex = 2;
			this->btn_equip->Text = S"Equip";
			this->btn_equip->Click += new System::EventHandler(this, btn_equip_Click);
			// 
			// lstv_equiped
			// 
			this->lstv_equiped->Location = System::Drawing::Point(125, 210);
			this->lstv_equiped->Name = S"lstv_equiped";
			this->lstv_equiped->Size = System::Drawing::Size(505, 165);
			this->lstv_equiped->TabIndex = 1;
			this->lstv_equiped->View = System::Windows::Forms::View::Details;
			// 
			// lstv_unequiped
			// 
			this->lstv_unequiped->Location = System::Drawing::Point(125, 5);
			this->lstv_unequiped->Name = S"lstv_unequiped";
			this->lstv_unequiped->Size = System::Drawing::Size(505, 165);
			this->lstv_unequiped->TabIndex = 0;
			this->lstv_unequiped->View = System::Windows::Forms::View::Details;
			// 
			// txtb_domain_points
			// 
			this->txtb_domain_points->Location = System::Drawing::Point(305, 240);
			this->txtb_domain_points->Name = S"txtb_domain_points";
			this->txtb_domain_points->Size = System::Drawing::Size(25, 20);
			this->txtb_domain_points->TabIndex = 10;
			this->txtb_domain_points->Text = S"";
			// 
			// label_domian_points
			// 
			this->label_domian_points->Location = System::Drawing::Point(260, 215);
			this->label_domian_points->Name = S"label_domian_points";
			this->label_domian_points->Size = System::Drawing::Size(100, 15);
			this->label_domian_points->TabIndex = 9;
			this->label_domian_points->Text = S"Points";
			this->label_domian_points->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ckb_domain_enforce
			// 
			this->ckb_domain_enforce->Location = System::Drawing::Point(285, 380);
			this->ckb_domain_enforce->Name = S"ckb_domain_enforce";
			this->ckb_domain_enforce->Size = System::Drawing::Size(95, 30);
			this->ckb_domain_enforce->TabIndex = 8;
			this->ckb_domain_enforce->Text = S"Enforce Prerequisites";
			this->ckb_domain_enforce->CheckedChanged += new System::EventHandler(this, ckb_domain_enforce_CheckedChanged);
			// 
			// btn_remove_remove
			// 
			this->btn_remove_remove->BackColor = System::Drawing::SystemColors::Control;
			this->btn_remove_remove->Location = System::Drawing::Point(275, 340);
			this->btn_remove_remove->Name = S"btn_remove_remove";
			this->btn_remove_remove->Size = System::Drawing::Size(80, 25);
			this->btn_remove_remove->TabIndex = 7;
			this->btn_remove_remove->Text = S"Remove";
			this->btn_remove_remove->Click += new System::EventHandler(this, btn_remove_remove_Click);
			// 
			// btn_add_domain
			// 
			this->btn_add_domain->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_domain->Location = System::Drawing::Point(275, 305);
			this->btn_add_domain->Name = S"btn_add_domain";
			this->btn_add_domain->Size = System::Drawing::Size(80, 25);
			this->btn_add_domain->TabIndex = 6;
			this->btn_add_domain->Text = S"Add";
			this->btn_add_domain->Click += new System::EventHandler(this, btn_add_domain_Click);
			// 
			// lstv_domain_have
			// 
			this->lstv_domain_have->Location = System::Drawing::Point(375, 205);
			this->lstv_domain_have->Name = S"lstv_domain_have";
			this->lstv_domain_have->Size = System::Drawing::Size(255, 160);
			this->lstv_domain_have->TabIndex = 5;
			this->lstv_domain_have->View = System::Windows::Forms::View::Details;
			// 
			// lstv_domain_list
			// 
			this->lstv_domain_list->Location = System::Drawing::Point(5, 210);
			this->lstv_domain_list->Name = S"lstv_domain_list";
			this->lstv_domain_list->Size = System::Drawing::Size(245, 155);
			this->lstv_domain_list->TabIndex = 4;
			this->lstv_domain_list->View = System::Windows::Forms::View::Details;
			// 
			// btn_remove_god
			// 
			this->btn_remove_god->BackColor = System::Drawing::SystemColors::Control;
			this->btn_remove_god->Location = System::Drawing::Point(275, 40);
			this->btn_remove_god->Name = S"btn_remove_god";
			this->btn_remove_god->Size = System::Drawing::Size(80, 25);
			this->btn_remove_god->TabIndex = 3;
			this->btn_remove_god->Text = S"Remove";
			this->btn_remove_god->Click += new System::EventHandler(this, btn_remove_god_Click);
			// 
			// btn_add_god
			// 
			this->btn_add_god->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_god->Location = System::Drawing::Point(275, 5);
			this->btn_add_god->Name = S"btn_add_god";
			this->btn_add_god->Size = System::Drawing::Size(80, 25);
			this->btn_add_god->TabIndex = 2;
			this->btn_add_god->Text = S"Add";
			this->btn_add_god->Click += new System::EventHandler(this, btn_add_god_Click);
			// 
			// lstv_god_worship
			// 
			this->lstv_god_worship->Location = System::Drawing::Point(380, 5);
			this->lstv_god_worship->Name = S"lstv_god_worship";
			this->lstv_god_worship->Size = System::Drawing::Size(250, 170);
			this->lstv_god_worship->TabIndex = 1;
			this->lstv_god_worship->View = System::Windows::Forms::View::Details;
			// 
			// lstv_god_list
			// 
			this->lstv_god_list->Location = System::Drawing::Point(5, 5);
			this->lstv_god_list->Name = S"lstv_god_list";
			this->lstv_god_list->Size = System::Drawing::Size(245, 195);
			this->lstv_god_list->TabIndex = 0;
			this->lstv_god_list->View = System::Windows::Forms::View::Details;
			// 
			// label_cp_funds
			// 
			this->label_cp_funds->Location = System::Drawing::Point(120, 255);
			this->label_cp_funds->Name = S"label_cp_funds";
			this->label_cp_funds->Size = System::Drawing::Size(100, 12);
			this->label_cp_funds->TabIndex = 13;
			this->label_cp_funds->Text = S"CP";
			// 
			// label_sp_funds
			// 
			this->label_sp_funds->Location = System::Drawing::Point(120, 225);
			this->label_sp_funds->Name = S"label_sp_funds";
			this->label_sp_funds->Size = System::Drawing::Size(100, 12);
			this->label_sp_funds->TabIndex = 12;
			this->label_sp_funds->Text = S"SP";
			// 
			// label_gp_funds
			// 
			this->label_gp_funds->Location = System::Drawing::Point(120, 195);
			this->label_gp_funds->Name = S"label_gp_funds";
			this->label_gp_funds->Size = System::Drawing::Size(100, 12);
			this->label_gp_funds->TabIndex = 11;
			this->label_gp_funds->Text = S"GP";
			// 
			// label_pp_funds
			// 
			this->label_pp_funds->Location = System::Drawing::Point(120, 165);
			this->label_pp_funds->Name = S"label_pp_funds";
			this->label_pp_funds->Size = System::Drawing::Size(100, 12);
			this->label_pp_funds->TabIndex = 10;
			this->label_pp_funds->Text = S"PP";
			// 
			// label_total_funds
			// 
			this->label_total_funds->Location = System::Drawing::Point(5, 140);
			this->label_total_funds->Name = S"label_total_funds";
			this->label_total_funds->Size = System::Drawing::Size(100, 15);
			this->label_total_funds->TabIndex = 9;
			this->label_total_funds->Text = S"Total Funds";
			// 
			// label_add_subtract_funds
			// 
			this->label_add_subtract_funds->Location = System::Drawing::Point(10, 10);
			this->label_add_subtract_funds->Name = S"label_add_subtract_funds";
			this->label_add_subtract_funds->Size = System::Drawing::Size(155, 15);
			this->label_add_subtract_funds->TabIndex = 8;
			this->label_add_subtract_funds->Text = S"Add / Subtract Funds";
			// 
			// btn_subtract_funds
			// 
			this->btn_subtract_funds->BackColor = System::Drawing::SystemColors::Control;
			this->btn_subtract_funds->Location = System::Drawing::Point(335, 30);
			this->btn_subtract_funds->Name = S"btn_subtract_funds";
			this->btn_subtract_funds->Size = System::Drawing::Size(70, 25);
			this->btn_subtract_funds->TabIndex = 7;
			this->btn_subtract_funds->Text = S"Subtract";
			this->btn_subtract_funds->Click += new System::EventHandler(this, btn_subtract_funds_Click);
			// 
			// btn_add_funds
			// 
			this->btn_add_funds->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_funds->Location = System::Drawing::Point(255, 30);
			this->btn_add_funds->Name = S"btn_add_funds";
			this->btn_add_funds->Size = System::Drawing::Size(70, 25);
			this->btn_add_funds->TabIndex = 6;
			this->btn_add_funds->Text = S"Add";
			this->btn_add_funds->Click += new System::EventHandler(this, btn_add_funds_Click);
			// 
			// comb_add_type
			// 
			this->comb_add_type->Location = System::Drawing::Point(145, 30);
			this->comb_add_type->Name = S"comb_add_type";
			this->comb_add_type->Size = System::Drawing::Size(50, 21);
			this->comb_add_type->TabIndex = 5;
			this->comb_add_type->Text = S"GP";
			// 
			// nud_add_funds
			// 
			this->nud_add_funds->Location = System::Drawing::Point(15, 30);
			System::Int32 __mcTemp__30[] = new System::Int32[4];
			__mcTemp__30[0] = 10000;
			__mcTemp__30[1] = 0;
			__mcTemp__30[2] = 0;
			__mcTemp__30[3] = 0;
			this->nud_add_funds->Maximum = System::Decimal(__mcTemp__30);
			this->nud_add_funds->Name = S"nud_add_funds";
			this->nud_add_funds->Size = System::Drawing::Size(105, 20);
			this->nud_add_funds->TabIndex = 4;
			this->nud_add_funds->ValueChanged += new System::EventHandler(this, nud_add_funds_ValueChanged);
			// 
			// txtb_cp_funds
			// 
			this->txtb_cp_funds->BackColor = System::Drawing::Color::White;
			this->txtb_cp_funds->Enabled = false;
			this->txtb_cp_funds->Location = System::Drawing::Point(15, 255);
			this->txtb_cp_funds->Name = S"txtb_cp_funds";
			this->txtb_cp_funds->ReadOnly = true;
			this->txtb_cp_funds->Size = System::Drawing::Size(105, 20);
			this->txtb_cp_funds->TabIndex = 3;
			this->txtb_cp_funds->Text = S"0";
			this->txtb_cp_funds->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtb_sp_funds
			// 
			this->txtb_sp_funds->BackColor = System::Drawing::Color::White;
			this->txtb_sp_funds->Enabled = false;
			this->txtb_sp_funds->Location = System::Drawing::Point(15, 225);
			this->txtb_sp_funds->Name = S"txtb_sp_funds";
			this->txtb_sp_funds->ReadOnly = true;
			this->txtb_sp_funds->Size = System::Drawing::Size(105, 20);
			this->txtb_sp_funds->TabIndex = 2;
			this->txtb_sp_funds->Text = S"0";
			this->txtb_sp_funds->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtb_gp_funds
			// 
			this->txtb_gp_funds->BackColor = System::Drawing::Color::White;
			this->txtb_gp_funds->Enabled = false;
			this->txtb_gp_funds->Location = System::Drawing::Point(15, 195);
			this->txtb_gp_funds->Name = S"txtb_gp_funds";
			this->txtb_gp_funds->ReadOnly = true;
			this->txtb_gp_funds->Size = System::Drawing::Size(105, 20);
			this->txtb_gp_funds->TabIndex = 1;
			this->txtb_gp_funds->Text = S"0";
			this->txtb_gp_funds->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// txtb_pp_funds
			// 
			this->txtb_pp_funds->BackColor = System::Drawing::Color::White;
			this->txtb_pp_funds->Enabled = false;
			this->txtb_pp_funds->Location = System::Drawing::Point(15, 165);
			this->txtb_pp_funds->Name = S"txtb_pp_funds";
			this->txtb_pp_funds->ReadOnly = true;
			this->txtb_pp_funds->Size = System::Drawing::Size(105, 20);
			this->txtb_pp_funds->TabIndex = 0;
			this->txtb_pp_funds->Text = S"0";
			this->txtb_pp_funds->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_spell_level_9
			// 
			this->label_spell_level_9->Location = System::Drawing::Point(505, 340);
			this->label_spell_level_9->Name = S"label_spell_level_9";
			this->label_spell_level_9->Size = System::Drawing::Size(30, 15);
			this->label_spell_level_9->TabIndex = 39;
			this->label_spell_level_9->Text = S"9th";
			this->label_spell_level_9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtb_spells_per_day_9
			// 
			this->txtb_spells_per_day_9->BackColor = System::Drawing::Color::White;
			this->txtb_spells_per_day_9->Enabled = false;
			this->txtb_spells_per_day_9->Location = System::Drawing::Point(505, 390);
			this->txtb_spells_per_day_9->Name = S"txtb_spells_per_day_9";
			this->txtb_spells_per_day_9->ReadOnly = true;
			this->txtb_spells_per_day_9->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_per_day_9->TabIndex = 38;
			this->txtb_spells_per_day_9->Text = S"0";
			this->txtb_spells_per_day_9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_known_9
			// 
			this->txtb_spells_known_9->BackColor = System::Drawing::Color::White;
			this->txtb_spells_known_9->Enabled = false;
			this->txtb_spells_known_9->Location = System::Drawing::Point(505, 360);
			this->txtb_spells_known_9->Name = S"txtb_spells_known_9";
			this->txtb_spells_known_9->ReadOnly = true;
			this->txtb_spells_known_9->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_known_9->TabIndex = 37;
			this->txtb_spells_known_9->Text = S"0";
			this->txtb_spells_known_9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label_spell_level_8
			// 
			this->label_spell_level_8->Location = System::Drawing::Point(460, 340);
			this->label_spell_level_8->Name = S"label_spell_level_8";
			this->label_spell_level_8->Size = System::Drawing::Size(30, 15);
			this->label_spell_level_8->TabIndex = 36;
			this->label_spell_level_8->Text = S"8th";
			this->label_spell_level_8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_spell_level_6
			// 
			this->label_spell_level_6->Location = System::Drawing::Point(370, 340);
			this->label_spell_level_6->Name = S"label_spell_level_6";
			this->label_spell_level_6->Size = System::Drawing::Size(30, 15);
			this->label_spell_level_6->TabIndex = 34;
			this->label_spell_level_6->Text = S"6th";
			this->label_spell_level_6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_spell_level_5
			// 
			this->label_spell_level_5->Location = System::Drawing::Point(325, 340);
			this->label_spell_level_5->Name = S"label_spell_level_5";
			this->label_spell_level_5->Size = System::Drawing::Size(30, 15);
			this->label_spell_level_5->TabIndex = 33;
			this->label_spell_level_5->Text = S"5th";
			this->label_spell_level_5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_spell_level_4
			// 
			this->label_spell_level_4->Location = System::Drawing::Point(280, 340);
			this->label_spell_level_4->Name = S"label_spell_level_4";
			this->label_spell_level_4->Size = System::Drawing::Size(30, 15);
			this->label_spell_level_4->TabIndex = 32;
			this->label_spell_level_4->Text = S"4th";
			this->label_spell_level_4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_spell_level_3
			// 
			this->label_spell_level_3->Location = System::Drawing::Point(235, 340);
			this->label_spell_level_3->Name = S"label_spell_level_3";
			this->label_spell_level_3->Size = System::Drawing::Size(30, 15);
			this->label_spell_level_3->TabIndex = 31;
			this->label_spell_level_3->Text = S"3rd";
			this->label_spell_level_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_spell_level_2
			// 
			this->label_spell_level_2->Location = System::Drawing::Point(190, 340);
			this->label_spell_level_2->Name = S"label_spell_level_2";
			this->label_spell_level_2->Size = System::Drawing::Size(30, 15);
			this->label_spell_level_2->TabIndex = 30;
			this->label_spell_level_2->Text = S"2nd";
			this->label_spell_level_2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_spell_level_1
			// 
			this->label_spell_level_1->Location = System::Drawing::Point(145, 340);
			this->label_spell_level_1->Name = S"label_spell_level_1";
			this->label_spell_level_1->Size = System::Drawing::Size(30, 15);
			this->label_spell_level_1->TabIndex = 29;
			this->label_spell_level_1->Text = S"1st";
			this->label_spell_level_1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_spell_level_0
			// 
			this->label_spell_level_0->Location = System::Drawing::Point(100, 340);
			this->label_spell_level_0->Name = S"label_spell_level_0";
			this->label_spell_level_0->Size = System::Drawing::Size(30, 15);
			this->label_spell_level_0->TabIndex = 28;
			this->label_spell_level_0->Text = S"0th";
			this->label_spell_level_0->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_spells_per_day
			// 
			this->label_spells_per_day->Location = System::Drawing::Point(5, 395);
			this->label_spells_per_day->Name = S"label_spells_per_day";
			this->label_spells_per_day->Size = System::Drawing::Size(85, 15);
			this->label_spells_per_day->TabIndex = 26;
			this->label_spells_per_day->Text = S"Spells Per Day:";
			this->label_spells_per_day->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_spells_known
			// 
			this->label_spells_known->Location = System::Drawing::Point(10, 365);
			this->label_spells_known->Name = S"label_spells_known";
			this->label_spells_known->Size = System::Drawing::Size(80, 15);
			this->label_spells_known->TabIndex = 25;
			this->label_spells_known->Text = S"Spells Known:";
			this->label_spells_known->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label_spell_points
			// 
			this->label_spell_points->Location = System::Drawing::Point(335, 10);
			this->label_spell_points->Name = S"label_spell_points";
			this->label_spell_points->Size = System::Drawing::Size(75, 15);
			this->label_spell_points->TabIndex = 24;
			this->label_spell_points->Text = S"Spell Points";
			this->label_spell_points->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtb_spells_per_day_8
			// 
			this->txtb_spells_per_day_8->BackColor = System::Drawing::Color::White;
			this->txtb_spells_per_day_8->Enabled = false;
			this->txtb_spells_per_day_8->Location = System::Drawing::Point(460, 390);
			this->txtb_spells_per_day_8->Name = S"txtb_spells_per_day_8";
			this->txtb_spells_per_day_8->ReadOnly = true;
			this->txtb_spells_per_day_8->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_per_day_8->TabIndex = 23;
			this->txtb_spells_per_day_8->Text = S"0";
			this->txtb_spells_per_day_8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_per_day_7
			// 
			this->txtb_spells_per_day_7->BackColor = System::Drawing::Color::White;
			this->txtb_spells_per_day_7->Enabled = false;
			this->txtb_spells_per_day_7->Location = System::Drawing::Point(415, 390);
			this->txtb_spells_per_day_7->Name = S"txtb_spells_per_day_7";
			this->txtb_spells_per_day_7->ReadOnly = true;
			this->txtb_spells_per_day_7->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_per_day_7->TabIndex = 22;
			this->txtb_spells_per_day_7->Text = S"0";
			this->txtb_spells_per_day_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_per_day_6
			// 
			this->txtb_spells_per_day_6->BackColor = System::Drawing::Color::White;
			this->txtb_spells_per_day_6->Enabled = false;
			this->txtb_spells_per_day_6->Location = System::Drawing::Point(370, 390);
			this->txtb_spells_per_day_6->Name = S"txtb_spells_per_day_6";
			this->txtb_spells_per_day_6->ReadOnly = true;
			this->txtb_spells_per_day_6->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_per_day_6->TabIndex = 21;
			this->txtb_spells_per_day_6->Text = S"0";
			this->txtb_spells_per_day_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_per_day_5
			// 
			this->txtb_spells_per_day_5->BackColor = System::Drawing::Color::White;
			this->txtb_spells_per_day_5->Enabled = false;
			this->txtb_spells_per_day_5->Location = System::Drawing::Point(325, 390);
			this->txtb_spells_per_day_5->Name = S"txtb_spells_per_day_5";
			this->txtb_spells_per_day_5->ReadOnly = true;
			this->txtb_spells_per_day_5->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_per_day_5->TabIndex = 20;
			this->txtb_spells_per_day_5->Text = S"0";
			this->txtb_spells_per_day_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_per_day_4
			// 
			this->txtb_spells_per_day_4->BackColor = System::Drawing::Color::White;
			this->txtb_spells_per_day_4->Enabled = false;
			this->txtb_spells_per_day_4->Location = System::Drawing::Point(280, 390);
			this->txtb_spells_per_day_4->Name = S"txtb_spells_per_day_4";
			this->txtb_spells_per_day_4->ReadOnly = true;
			this->txtb_spells_per_day_4->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_per_day_4->TabIndex = 19;
			this->txtb_spells_per_day_4->Text = S"0";
			this->txtb_spells_per_day_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_per_day_3
			// 
			this->txtb_spells_per_day_3->BackColor = System::Drawing::Color::White;
			this->txtb_spells_per_day_3->Enabled = false;
			this->txtb_spells_per_day_3->Location = System::Drawing::Point(235, 390);
			this->txtb_spells_per_day_3->Name = S"txtb_spells_per_day_3";
			this->txtb_spells_per_day_3->ReadOnly = true;
			this->txtb_spells_per_day_3->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_per_day_3->TabIndex = 18;
			this->txtb_spells_per_day_3->Text = S"0";
			this->txtb_spells_per_day_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_per_day_2
			// 
			this->txtb_spells_per_day_2->BackColor = System::Drawing::Color::White;
			this->txtb_spells_per_day_2->Enabled = false;
			this->txtb_spells_per_day_2->Location = System::Drawing::Point(190, 390);
			this->txtb_spells_per_day_2->Name = S"txtb_spells_per_day_2";
			this->txtb_spells_per_day_2->ReadOnly = true;
			this->txtb_spells_per_day_2->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_per_day_2->TabIndex = 17;
			this->txtb_spells_per_day_2->Text = S"0";
			this->txtb_spells_per_day_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_per_day_1
			// 
			this->txtb_spells_per_day_1->BackColor = System::Drawing::Color::White;
			this->txtb_spells_per_day_1->Enabled = false;
			this->txtb_spells_per_day_1->Location = System::Drawing::Point(145, 390);
			this->txtb_spells_per_day_1->Name = S"txtb_spells_per_day_1";
			this->txtb_spells_per_day_1->ReadOnly = true;
			this->txtb_spells_per_day_1->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_per_day_1->TabIndex = 16;
			this->txtb_spells_per_day_1->Text = S"0";
			this->txtb_spells_per_day_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_per_day_0
			// 
			this->txtb_spells_per_day_0->BackColor = System::Drawing::Color::White;
			this->txtb_spells_per_day_0->Enabled = false;
			this->txtb_spells_per_day_0->Location = System::Drawing::Point(100, 390);
			this->txtb_spells_per_day_0->Name = S"txtb_spells_per_day_0";
			this->txtb_spells_per_day_0->ReadOnly = true;
			this->txtb_spells_per_day_0->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_per_day_0->TabIndex = 15;
			this->txtb_spells_per_day_0->Text = S"0";
			this->txtb_spells_per_day_0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_known_8
			// 
			this->txtb_spells_known_8->BackColor = System::Drawing::Color::White;
			this->txtb_spells_known_8->Enabled = false;
			this->txtb_spells_known_8->Location = System::Drawing::Point(460, 360);
			this->txtb_spells_known_8->Name = S"txtb_spells_known_8";
			this->txtb_spells_known_8->ReadOnly = true;
			this->txtb_spells_known_8->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_known_8->TabIndex = 14;
			this->txtb_spells_known_8->Text = S"0";
			this->txtb_spells_known_8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_known_7
			// 
			this->txtb_spells_known_7->BackColor = System::Drawing::Color::White;
			this->txtb_spells_known_7->Enabled = false;
			this->txtb_spells_known_7->Location = System::Drawing::Point(415, 360);
			this->txtb_spells_known_7->Name = S"txtb_spells_known_7";
			this->txtb_spells_known_7->ReadOnly = true;
			this->txtb_spells_known_7->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_known_7->TabIndex = 13;
			this->txtb_spells_known_7->Text = S"0";
			this->txtb_spells_known_7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_known_6
			// 
			this->txtb_spells_known_6->BackColor = System::Drawing::Color::White;
			this->txtb_spells_known_6->Enabled = false;
			this->txtb_spells_known_6->Location = System::Drawing::Point(370, 360);
			this->txtb_spells_known_6->Name = S"txtb_spells_known_6";
			this->txtb_spells_known_6->ReadOnly = true;
			this->txtb_spells_known_6->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_known_6->TabIndex = 12;
			this->txtb_spells_known_6->Text = S"0";
			this->txtb_spells_known_6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_known_5
			// 
			this->txtb_spells_known_5->BackColor = System::Drawing::Color::White;
			this->txtb_spells_known_5->Enabled = false;
			this->txtb_spells_known_5->Location = System::Drawing::Point(325, 360);
			this->txtb_spells_known_5->Name = S"txtb_spells_known_5";
			this->txtb_spells_known_5->ReadOnly = true;
			this->txtb_spells_known_5->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_known_5->TabIndex = 11;
			this->txtb_spells_known_5->Text = S"0";
			this->txtb_spells_known_5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_known_4
			// 
			this->txtb_spells_known_4->BackColor = System::Drawing::Color::White;
			this->txtb_spells_known_4->Enabled = false;
			this->txtb_spells_known_4->Location = System::Drawing::Point(280, 360);
			this->txtb_spells_known_4->Name = S"txtb_spells_known_4";
			this->txtb_spells_known_4->ReadOnly = true;
			this->txtb_spells_known_4->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_known_4->TabIndex = 10;
			this->txtb_spells_known_4->Text = S"0";
			this->txtb_spells_known_4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_known_3
			// 
			this->txtb_spells_known_3->BackColor = System::Drawing::Color::White;
			this->txtb_spells_known_3->Enabled = false;
			this->txtb_spells_known_3->Location = System::Drawing::Point(235, 360);
			this->txtb_spells_known_3->Name = S"txtb_spells_known_3";
			this->txtb_spells_known_3->ReadOnly = true;
			this->txtb_spells_known_3->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_known_3->TabIndex = 9;
			this->txtb_spells_known_3->Text = S"0";
			this->txtb_spells_known_3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_known_2
			// 
			this->txtb_spells_known_2->BackColor = System::Drawing::Color::White;
			this->txtb_spells_known_2->Enabled = false;
			this->txtb_spells_known_2->Location = System::Drawing::Point(190, 360);
			this->txtb_spells_known_2->Name = S"txtb_spells_known_2";
			this->txtb_spells_known_2->ReadOnly = true;
			this->txtb_spells_known_2->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_known_2->TabIndex = 8;
			this->txtb_spells_known_2->Text = S"0";
			this->txtb_spells_known_2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_known_1
			// 
			this->txtb_spells_known_1->BackColor = System::Drawing::Color::White;
			this->txtb_spells_known_1->Enabled = false;
			this->txtb_spells_known_1->Location = System::Drawing::Point(145, 360);
			this->txtb_spells_known_1->Name = S"txtb_spells_known_1";
			this->txtb_spells_known_1->ReadOnly = true;
			this->txtb_spells_known_1->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_known_1->TabIndex = 7;
			this->txtb_spells_known_1->Text = S"0";
			this->txtb_spells_known_1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_spells_known_0
			// 
			this->txtb_spells_known_0->BackColor = System::Drawing::Color::White;
			this->txtb_spells_known_0->Enabled = false;
			this->txtb_spells_known_0->Location = System::Drawing::Point(100, 360);
			this->txtb_spells_known_0->Name = S"txtb_spells_known_0";
			this->txtb_spells_known_0->ReadOnly = true;
			this->txtb_spells_known_0->Size = System::Drawing::Size(30, 20);
			this->txtb_spells_known_0->TabIndex = 6;
			this->txtb_spells_known_0->Text = S"0";
			this->txtb_spells_known_0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_remove_spell
			// 
			this->btn_remove_spell->BackColor = System::Drawing::SystemColors::Control;
			this->btn_remove_spell->Location = System::Drawing::Point(340, 100);
			this->btn_remove_spell->Name = S"btn_remove_spell";
			this->btn_remove_spell->Size = System::Drawing::Size(65, 25);
			this->btn_remove_spell->TabIndex = 5;
			this->btn_remove_spell->Text = S"Remove";
			this->btn_remove_spell->Click += new System::EventHandler(this, btn_remove_spell_Click);
			// 
			// btn_add_spell
			// 
			this->btn_add_spell->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_spell->Location = System::Drawing::Point(340, 70);
			this->btn_add_spell->Name = S"btn_add_spell";
			this->btn_add_spell->Size = System::Drawing::Size(65, 25);
			this->btn_add_spell->TabIndex = 4;
			this->btn_add_spell->Text = S"Add";
			this->btn_add_spell->Click += new System::EventHandler(this, btn_add_spell_Click);
			// 
			// lstv_spells_known
			// 
			this->lstv_spells_known->Location = System::Drawing::Point(445, 5);
			this->lstv_spells_known->Name = S"lstv_spells_known";
			this->lstv_spells_known->Size = System::Drawing::Size(200, 325);
			this->lstv_spells_known->TabIndex = 3;
			this->lstv_spells_known->View = System::Windows::Forms::View::Details;
			// 
			// lstv_spell_list
			// 
			this->lstv_spell_list->HideSelection = false;
			this->lstv_spell_list->Location = System::Drawing::Point(100, 5);
			this->lstv_spell_list->MultiSelect = false;
			this->lstv_spell_list->Name = S"lstv_spell_list";
			this->lstv_spell_list->Size = System::Drawing::Size(200, 325);
			this->lstv_spell_list->TabIndex = 2;
			this->lstv_spell_list->View = System::Windows::Forms::View::Details;
			// 
			// txtb_spell_points
			// 
			this->txtb_spell_points->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_spell_points->Enabled = false;
			this->txtb_spell_points->ForeColor = System::Drawing::Color::Gray;
			this->txtb_spell_points->Location = System::Drawing::Point(355, 35);
			this->txtb_spell_points->Name = S"txtb_spell_points";
			this->txtb_spell_points->Size = System::Drawing::Size(40, 20);
			this->txtb_spell_points->TabIndex = 1;
			this->txtb_spell_points->Text = S"3";
			this->txtb_spell_points->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// comb_spell_level
			// 
			this->comb_spell_level->Location = System::Drawing::Point(5, 25);
			this->comb_spell_level->Name = S"comb_spell_level";
			this->comb_spell_level->Size = System::Drawing::Size(85, 21);
			this->comb_spell_level->TabIndex = 0;
			this->comb_spell_level->SelectedIndexChanged += new System::EventHandler(this, comb_spell_level_SelectedIndexChanged);
			// 
			// label_spell_level_7
			// 
			this->label_spell_level_7->Location = System::Drawing::Point(415, 340);
			this->label_spell_level_7->Name = S"label_spell_level_7";
			this->label_spell_level_7->Size = System::Drawing::Size(30, 15);
			this->label_spell_level_7->TabIndex = 35;
			this->label_spell_level_7->Text = S"7th";
			this->label_spell_level_7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_companion_benifits_description
			// 
			this->label_companion_benifits_description->Location = System::Drawing::Point(270, 165);
			this->label_companion_benifits_description->Name = S"label_companion_benifits_description";
			this->label_companion_benifits_description->Size = System::Drawing::Size(350, 195);
			this->label_companion_benifits_description->TabIndex = 5;
			// 
			// label_companion_benifits
			// 
			this->label_companion_benifits->Location = System::Drawing::Point(265, 145);
			this->label_companion_benifits->Name = S"label_companion_benifits";
			this->label_companion_benifits->Size = System::Drawing::Size(295, 15);
			this->label_companion_benifits->TabIndex = 4;
			this->label_companion_benifits->Text = S"Benifits:";
			// 
			// btn_remove_compainon
			// 
			this->btn_remove_compainon->BackColor = System::Drawing::SystemColors::Control;
			this->btn_remove_compainon->Location = System::Drawing::Point(265, 40);
			this->btn_remove_compainon->Name = S"btn_remove_compainon";
			this->btn_remove_compainon->Size = System::Drawing::Size(90, 25);
			this->btn_remove_compainon->TabIndex = 3;
			this->btn_remove_compainon->Text = S"Remove";
			this->btn_remove_compainon->Click += new System::EventHandler(this, btn_remove_compainon_Click);
			// 
			// btn_add_companion
			// 
			this->btn_add_companion->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_companion->Location = System::Drawing::Point(265, 5);
			this->btn_add_companion->Name = S"btn_add_companion";
			this->btn_add_companion->Size = System::Drawing::Size(90, 25);
			this->btn_add_companion->TabIndex = 2;
			this->btn_add_companion->Text = S"Add";
			this->btn_add_companion->Click += new System::EventHandler(this, btn_add_companion_Click);
			// 
			// lstv_companion
			// 
			this->lstv_companion->Location = System::Drawing::Point(375, 5);
			this->lstv_companion->Name = S"lstv_companion";
			this->lstv_companion->Size = System::Drawing::Size(260, 130);
			this->lstv_companion->TabIndex = 1;
			this->lstv_companion->View = System::Windows::Forms::View::Details;
			// 
			// lstv_companions
			// 
			this->lstv_companions->Location = System::Drawing::Point(5, 5);
			this->lstv_companions->Name = S"lstv_companions";
			this->lstv_companions->Size = System::Drawing::Size(235, 360);
			this->lstv_companions->TabIndex = 0;
			this->lstv_companions->View = System::Windows::Forms::View::Details;
			// 
			// btn_levelup
			// 
			this->btn_levelup->BackColor = System::Drawing::SystemColors::Control;
			this->btn_levelup->Location = System::Drawing::Point(150, 45);
			this->btn_levelup->Name = S"btn_levelup";
			this->btn_levelup->Size = System::Drawing::Size(75, 20);
			this->btn_levelup->TabIndex = 5;
			this->btn_levelup->Text = S"Level Up";
			this->btn_levelup->Click += new System::EventHandler(this, btn_levelup_Click);
			// 
			// lstv_hp_levels
			// 
			this->lstv_hp_levels->Location = System::Drawing::Point(10, 210);
			this->lstv_hp_levels->Name = S"lstv_hp_levels";
			this->lstv_hp_levels->Size = System::Drawing::Size(220, 200);
			this->lstv_hp_levels->TabIndex = 4;
			this->lstv_hp_levels->View = System::Windows::Forms::View::Details;
			// 
			// nud_xp
			// 
			this->nud_xp->Location = System::Drawing::Point(10, 10);
			System::Int32 __mcTemp__31[] = new System::Int32[4];
			__mcTemp__31[0] = 1000000;
			__mcTemp__31[1] = 0;
			__mcTemp__31[2] = 0;
			__mcTemp__31[3] = 0;
			this->nud_xp->Maximum = System::Decimal(__mcTemp__31);
			this->nud_xp->Name = S"nud_xp";
			this->nud_xp->Size = System::Drawing::Size(115, 20);
			this->nud_xp->TabIndex = 3;
			this->nud_xp->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->nud_xp->ValueChanged += new System::EventHandler(this, nud_xp_ValueChanged);
			// 
			// btn_subtract_xp
			// 
			this->btn_subtract_xp->BackColor = System::Drawing::SystemColors::Control;
			this->btn_subtract_xp->Location = System::Drawing::Point(235, 10);
			this->btn_subtract_xp->Name = S"btn_subtract_xp";
			this->btn_subtract_xp->Size = System::Drawing::Size(75, 20);
			this->btn_subtract_xp->TabIndex = 2;
			this->btn_subtract_xp->Text = S"Subtract";
			this->btn_subtract_xp->Click += new System::EventHandler(this, btn_subtract_xp_Click);
			// 
			// btn_add_xp
			// 
			this->btn_add_xp->BackColor = System::Drawing::SystemColors::Control;
			this->btn_add_xp->Location = System::Drawing::Point(150, 10);
			this->btn_add_xp->Name = S"btn_add_xp";
			this->btn_add_xp->Size = System::Drawing::Size(75, 20);
			this->btn_add_xp->TabIndex = 1;
			this->btn_add_xp->Text = S"Add";
			this->btn_add_xp->Click += new System::EventHandler(this, btn_add_xp_Click);
			// 
			// txtb_xp_total
			// 
			this->txtb_xp_total->BackColor = System::Drawing::SystemColors::Window;
			this->txtb_xp_total->Enabled = false;
			this->txtb_xp_total->ForeColor = System::Drawing::Color::Gray;
			this->txtb_xp_total->Location = System::Drawing::Point(10, 45);
			this->txtb_xp_total->Name = S"txtb_xp_total";
			this->txtb_xp_total->Size = System::Drawing::Size(115, 20);
			this->txtb_xp_total->TabIndex = 0;
			this->txtb_xp_total->Text = S"0";
			this->txtb_xp_total->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label_dm_note
			// 
			this->label_dm_note->BackColor = System::Drawing::SystemColors::Control;
			this->label_dm_note->Location = System::Drawing::Point(5, 25);
			this->label_dm_note->Name = S"label_dm_note";
			this->label_dm_note->Size = System::Drawing::Size(640, 380);
			this->label_dm_note->TabIndex = 1;
			// 
			// label_dm_note_title
			// 
			this->label_dm_note_title->Location = System::Drawing::Point(5, 5);
			this->label_dm_note_title->Name = S"label_dm_note_title";
			this->label_dm_note_title->Size = System::Drawing::Size(100, 15);
			this->label_dm_note_title->TabIndex = 0;
			this->label_dm_note_title->Text = S"DM Notes:";
			// 
			// ofd_load
			// 
			this->ofd_load->Filter = S"\"d2o files| *.xml|All files|*.*\"";
			this->ofd_load->Title = S"Load Character";
			this->ofd_load->HelpRequest += new System::EventHandler(this, ofd_load_HelpRequest);
			this->ofd_load->FileOk += new System::ComponentModel::CancelEventHandler(this, ofd_load_FileOk);
			// 
			// tabc_character
			// 
			this->tabc_character->Controls->Add(this->tabp_class);
			this->tabc_character->Controls->Add(this->tabp_character_features);
			this->tabc_character->Controls->Add(this->tabp_stats);
			this->tabc_character->Controls->Add(this->tabp_abilities);
			this->tabc_character->Controls->Add(this->tabp_skills);
			this->tabc_character->Controls->Add(this->tabp_feats);
			this->tabc_character->Controls->Add(this->tabp_equipment);
			this->tabc_character->Controls->Add(this->tabp_spells);
			this->tabc_character->Controls->Add(this->tabp_xp);
			this->tabc_character->Controls->Add(this->tabp_notes);
			this->tabc_character->Location = System::Drawing::Point(140, 75);
			this->tabc_character->Name = S"tabc_character";
			this->tabc_character->SelectedIndex = 0;
			this->tabc_character->Size = System::Drawing::Size(660, 445);
			this->tabc_character->TabIndex = 128;
			this->tabc_character->SelectedIndexChanged += new System::EventHandler(this, tabc_Selected_Index_Changed);
			// 
			// tabp_class
			// 
			this->tabp_class->BackColor = System::Drawing::SystemColors::Control;
			this->tabp_class->Controls->Add(this->label_race_description);
			this->tabp_class->Controls->Add(this->label_class_description);
			this->tabp_class->Controls->Add(this->btn_add_class);
			this->tabp_class->Controls->Add(this->lstv_class_list);
			this->tabp_class->Controls->Add(this->btn_class_ok);
			this->tabp_class->Controls->Add(this->lstv_class_level);
			this->tabp_class->Controls->Add(this->label_race_benifits);
			this->tabp_class->Controls->Add(this->label_class_requirements);
			this->tabp_class->Controls->Add(this->btn_remove_class);
			this->tabp_class->Controls->Add(this->comb_alignment_selector);
			this->tabp_class->Controls->Add(this->btn_class_cancel);
			this->tabp_class->Controls->Add(this->comb_race_selector);
			this->tabp_class->Location = System::Drawing::Point(4, 22);
			this->tabp_class->Name = S"tabp_class";
			this->tabp_class->Size = System::Drawing::Size(652, 419);
			this->tabp_class->TabIndex = 0;
			this->tabp_class->Text = S"Class";
			this->tabp_class->Paint += new System::Windows::Forms::PaintEventHandler(this, tabp_class_Paint);
			// 
			// tabp_character_features
			// 
			this->tabp_character_features->Controls->Add(this->tabc_character_features);
			this->tabp_character_features->Location = System::Drawing::Point(4, 22);
			this->tabp_character_features->Name = S"tabp_character_features";
			this->tabp_character_features->Size = System::Drawing::Size(652, 419);
			this->tabp_character_features->TabIndex = 3;
			this->tabp_character_features->Text = S"Character Features";
			// 
			// tabc_character_features
			// 
			this->tabc_character_features->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabc_character_features->Controls->Add(this->tabp_bio);
			this->tabc_character_features->Controls->Add(this->tabp_features);
			this->tabc_character_features->Controls->Add(this->tabp_languages);
			this->tabc_character_features->Controls->Add(this->tabp_gods);
			this->tabc_character_features->Controls->Add(this->tabp_companions);
			this->tabc_character_features->Location = System::Drawing::Point(5, 5);
			this->tabc_character_features->Name = S"tabc_character_features";
			this->tabc_character_features->SelectedIndex = 0;
			this->tabc_character_features->Size = System::Drawing::Size(645, 410);
			this->tabc_character_features->TabIndex = 0;
			// 
			// tabp_bio
			// 
			this->tabp_bio->Controls->Add(this->label_hair_colour);
			this->tabp_bio->Controls->Add(this->txtb_hair_colour);
			this->tabp_bio->Controls->Add(this->label_eye_colour);
			this->tabp_bio->Controls->Add(this->txtb_eye_colour);
			this->tabp_bio->Controls->Add(this->label_inches);
			this->tabp_bio->Controls->Add(this->label_feet);
			this->tabp_bio->Controls->Add(this->nud_inches);
			this->tabp_bio->Controls->Add(this->label_weight);
			this->tabp_bio->Controls->Add(this->label_height);
			this->tabp_bio->Controls->Add(this->label_age);
			this->tabp_bio->Controls->Add(this->label_campaign);
			this->tabp_bio->Controls->Add(this->label_characters_name);
			this->tabp_bio->Controls->Add(this->label_players_name);
			this->tabp_bio->Controls->Add(this->txtb_campaign);
			this->tabp_bio->Controls->Add(this->lstv_character_image);
			this->tabp_bio->Controls->Add(this->picb_character_image);
			this->tabp_bio->Controls->Add(this->nud_weight);
			this->tabp_bio->Controls->Add(this->nud_feet);
			this->tabp_bio->Controls->Add(this->nud_age);
			this->tabp_bio->Controls->Add(this->txtb_characters_name);
			this->tabp_bio->Controls->Add(this->txtb_players_name);
			this->tabp_bio->Location = System::Drawing::Point(4, 25);
			this->tabp_bio->Name = S"tabp_bio";
			this->tabp_bio->Size = System::Drawing::Size(637, 381);
			this->tabp_bio->TabIndex = 0;
			this->tabp_bio->Text = S"Bio";
			this->tabp_bio->Paint += new System::Windows::Forms::PaintEventHandler(this, tabp_bio_Paint);
			// 
			// tabp_features
			// 
			this->tabp_features->Controls->Add(this->btn_racial_prof);
			this->tabp_features->Controls->Add(this->txtb_racial_prof);
			this->tabp_features->Controls->Add(this->btn_rogue_special);
			this->tabp_features->Controls->Add(this->label_racial_prof);
			this->tabp_features->Controls->Add(this->txtb_rogue_special);
			this->tabp_features->Controls->Add(this->btn_bard_prof);
			this->tabp_features->Controls->Add(this->label_rogue_special);
			this->tabp_features->Controls->Add(this->txtb_bard_prof);
			this->tabp_features->Controls->Add(this->btn_ranger_enemie);
			this->tabp_features->Controls->Add(this->label_bard_prof);
			this->tabp_features->Controls->Add(this->txtb_ranger_enemie);
			this->tabp_features->Controls->Add(this->trev_features);
			this->tabp_features->Controls->Add(this->label_ranger_enemie);
			this->tabp_features->Controls->Add(this->comb_feature_type);
			this->tabp_features->Location = System::Drawing::Point(4, 25);
			this->tabp_features->Name = S"tabp_features";
			this->tabp_features->Size = System::Drawing::Size(637, 381);
			this->tabp_features->TabIndex = 1;
			this->tabp_features->Text = S"Features";
			// 
			// tabp_languages
			// 
			this->tabp_languages->Controls->Add(this->ckb_language_negative);
			this->tabp_languages->Controls->Add(this->label_language_skill_points);
			this->tabp_languages->Controls->Add(this->txtb_language_skill_points);
			this->tabp_languages->Controls->Add(this->txtb_language_points);
			this->tabp_languages->Controls->Add(this->label_language_points);
			this->tabp_languages->Controls->Add(this->btn_add_language_skill);
			this->tabp_languages->Controls->Add(this->btn_remove_language);
			this->tabp_languages->Controls->Add(this->btn_add_language);
			this->tabp_languages->Controls->Add(this->lstv_languages_known);
			this->tabp_languages->Controls->Add(this->lstv_languages);
			this->tabp_languages->Location = System::Drawing::Point(4, 25);
			this->tabp_languages->Name = S"tabp_languages";
			this->tabp_languages->Size = System::Drawing::Size(637, 381);
			this->tabp_languages->TabIndex = 2;
			this->tabp_languages->Text = S"Languages";
			this->tabp_languages->Paint += new System::Windows::Forms::PaintEventHandler(this, tabp_languages_Paint);
			// 
			// tabp_gods
			// 
			this->tabp_gods->Controls->Add(this->lstv_domain_have);
			this->tabp_gods->Controls->Add(this->lstv_domain_list);
			this->tabp_gods->Controls->Add(this->btn_remove_god);
			this->tabp_gods->Controls->Add(this->txtb_domain_points);
			this->tabp_gods->Controls->Add(this->label_domian_points);
			this->tabp_gods->Controls->Add(this->ckb_domain_enforce);
			this->tabp_gods->Controls->Add(this->btn_remove_remove);
			this->tabp_gods->Controls->Add(this->btn_add_domain);
			this->tabp_gods->Controls->Add(this->btn_add_god);
			this->tabp_gods->Controls->Add(this->lstv_god_worship);
			this->tabp_gods->Controls->Add(this->lstv_god_list);
			this->tabp_gods->Location = System::Drawing::Point(4, 25);
			this->tabp_gods->Name = S"tabp_gods";
			this->tabp_gods->Size = System::Drawing::Size(637, 381);
			this->tabp_gods->TabIndex = 3;
			this->tabp_gods->Text = S"Gods & Domains";
			// 
			// tabp_companions
			// 
			this->tabp_companions->Controls->Add(this->label_companion_benifits_description);
			this->tabp_companions->Controls->Add(this->label_companion_benifits);
			this->tabp_companions->Controls->Add(this->btn_remove_compainon);
			this->tabp_companions->Controls->Add(this->btn_add_companion);
			this->tabp_companions->Controls->Add(this->lstv_companion);
			this->tabp_companions->Controls->Add(this->lstv_companions);
			this->tabp_companions->Location = System::Drawing::Point(4, 25);
			this->tabp_companions->Name = S"tabp_companions";
			this->tabp_companions->Size = System::Drawing::Size(637, 381);
			this->tabp_companions->TabIndex = 4;
			this->tabp_companions->Text = S"Companions";
			// 
			// tabp_stats
			// 
			this->tabp_stats->Controls->Add(this->label_base_speed);
			this->tabp_stats->Controls->Add(this->txtb_base_speed);
			this->tabp_stats->Controls->Add(this->label_ac_natural);
			this->tabp_stats->Controls->Add(this->txtb_ranged_total);
			this->tabp_stats->Controls->Add(this->txtb_melee_total);
			this->tabp_stats->Controls->Add(this->label_attack_misc);
			this->tabp_stats->Controls->Add(this->label_ranged_plus_4);
			this->tabp_stats->Controls->Add(this->txtb_ranged_misc);
			this->tabp_stats->Controls->Add(this->label_melee_plus_4);
			this->tabp_stats->Controls->Add(this->txtb_melee_misc);
			this->tabp_stats->Controls->Add(this->label_ac_mod);
			this->tabp_stats->Controls->Add(this->label_ac_base);
			this->tabp_stats->Controls->Add(this->label_ac_plus_3);
			this->tabp_stats->Controls->Add(this->label_ac_plus_2);
			this->tabp_stats->Controls->Add(this->label_ac_plus_1);
			this->tabp_stats->Controls->Add(this->txtb_ac_mod);
			this->tabp_stats->Controls->Add(this->label_will_plus_1);
			this->tabp_stats->Controls->Add(this->txtb_ac_natural);
			this->tabp_stats->Controls->Add(this->txtb_ac_base);
			this->tabp_stats->Controls->Add(this->label_will_plus_2);
			this->tabp_stats->Controls->Add(this->txtb_will_mod);
			this->tabp_stats->Controls->Add(this->txtb_ref_mod);
			this->tabp_stats->Controls->Add(this->txtb_will_base);
			this->tabp_stats->Controls->Add(this->label_ref_plus_2);
			this->tabp_stats->Controls->Add(this->label_ref_plus_1);
			this->tabp_stats->Controls->Add(this->label_saves_base);
			this->tabp_stats->Controls->Add(this->txtb_ref_base);
			this->tabp_stats->Controls->Add(this->label_saves_mod);
			this->tabp_stats->Controls->Add(this->label_fort_plus_2);
			this->tabp_stats->Controls->Add(this->label_fort_plus_1);
			this->tabp_stats->Controls->Add(this->txtb_fort_mod);
			this->tabp_stats->Controls->Add(this->label_ranged_plus_2);
			this->tabp_stats->Controls->Add(this->txtb_fort_base);
			this->tabp_stats->Controls->Add(this->label_ranged_plus_3);
			this->tabp_stats->Controls->Add(this->label_ranged_plus_1);
			this->tabp_stats->Controls->Add(this->label_ranged_equals);
			this->tabp_stats->Controls->Add(this->txtb_ranged_size);
			this->tabp_stats->Controls->Add(this->label_attack_mod);
			this->tabp_stats->Controls->Add(this->txtb_ranged_mod);
			this->tabp_stats->Controls->Add(this->txtb_ranged_base);
			this->tabp_stats->Controls->Add(this->txtb_ranged_base_total);
			this->tabp_stats->Controls->Add(this->label_ranged);
			this->tabp_stats->Controls->Add(this->label_attack_size);
			this->tabp_stats->Controls->Add(this->label_attack_base);
			this->tabp_stats->Controls->Add(this->label_melee_plus_3);
			this->tabp_stats->Controls->Add(this->label_melee_plus_2);
			this->tabp_stats->Controls->Add(this->label_melee_plus_1);
			this->tabp_stats->Controls->Add(this->label_melee_equals);
			this->tabp_stats->Controls->Add(this->txtb_melee_size);
			this->tabp_stats->Controls->Add(this->label_ac_user);
			this->tabp_stats->Controls->Add(this->txtb_melee_mod);
			this->tabp_stats->Controls->Add(this->txtb_melee_base);
			this->tabp_stats->Controls->Add(this->txtb_melee_base_total);
			this->tabp_stats->Controls->Add(this->label_melee);
			this->tabp_stats->Controls->Add(this->label_ac_misc);
			this->tabp_stats->Controls->Add(this->label_ac_magic);
			this->tabp_stats->Controls->Add(this->label_ac_armor);
			this->tabp_stats->Controls->Add(this->label_ac_plus_6);
			this->tabp_stats->Controls->Add(this->label_ac_plus_5);
			this->tabp_stats->Controls->Add(this->label_ac_plus_4);
			this->tabp_stats->Controls->Add(this->label_ac_equals);
			this->tabp_stats->Controls->Add(this->nud_ac_user);
			this->tabp_stats->Controls->Add(this->txtb_ac_misc);
			this->tabp_stats->Controls->Add(this->txtb_ac_magic);
			this->tabp_stats->Controls->Add(this->label_will_plus_5);
			this->tabp_stats->Controls->Add(this->txtb_ac_armor);
			this->tabp_stats->Controls->Add(this->txtb_ac_total);
			this->tabp_stats->Controls->Add(this->label_ac);
			this->tabp_stats->Controls->Add(this->label_will_plus_4);
			this->tabp_stats->Controls->Add(this->label_will_plus_3);
			this->tabp_stats->Controls->Add(this->label_will_equals);
			this->tabp_stats->Controls->Add(this->nud_will_user);
			this->tabp_stats->Controls->Add(this->txtb_will_misc);
			this->tabp_stats->Controls->Add(this->label_ref_plus_5);
			this->tabp_stats->Controls->Add(this->txtb_will_magic);
			this->tabp_stats->Controls->Add(this->txtb_will_race);
			this->tabp_stats->Controls->Add(this->txtb_will_total);
			this->tabp_stats->Controls->Add(this->label_will);
			this->tabp_stats->Controls->Add(this->label_ref_plus_4);
			this->tabp_stats->Controls->Add(this->label_ref_plus_3);
			this->tabp_stats->Controls->Add(this->label_ref_equals);
			this->tabp_stats->Controls->Add(this->nud_ref_user);
			this->tabp_stats->Controls->Add(this->txtb_ref_misc);
			this->tabp_stats->Controls->Add(this->label_saves_misc);
			this->tabp_stats->Controls->Add(this->txtb_ref_magic);
			this->tabp_stats->Controls->Add(this->txtb_ref_race);
			this->tabp_stats->Controls->Add(this->txtb_ref_total);
			this->tabp_stats->Controls->Add(this->label_ref);
			this->tabp_stats->Controls->Add(this->label_saves_user);
			this->tabp_stats->Controls->Add(this->label_saves_magic);
			this->tabp_stats->Controls->Add(this->label_saves_race);
			this->tabp_stats->Controls->Add(this->label_fort_plus_5);
			this->tabp_stats->Controls->Add(this->label_fort_plus_4);
			this->tabp_stats->Controls->Add(this->label_fort_plus_3);
			this->tabp_stats->Controls->Add(this->label_fort_equals);
			this->tabp_stats->Controls->Add(this->nud_fort_user);
			this->tabp_stats->Controls->Add(this->txtb_fort_misc);
			this->tabp_stats->Controls->Add(this->label_init_user);
			this->tabp_stats->Controls->Add(this->txtb_fort_magic);
			this->tabp_stats->Controls->Add(this->txtb_fort_race);
			this->tabp_stats->Controls->Add(this->txtb_fort_total);
			this->tabp_stats->Controls->Add(this->label_fort);
			this->tabp_stats->Controls->Add(this->label_init_magic);
			this->tabp_stats->Controls->Add(this->label_init_feats);
			this->tabp_stats->Controls->Add(this->label_init_mod);
			this->tabp_stats->Controls->Add(this->label_init_plus_3);
			this->tabp_stats->Controls->Add(this->label_init_plus_2);
			this->tabp_stats->Controls->Add(this->label_init_plus_1);
			this->tabp_stats->Controls->Add(this->label_init_equals);
			this->tabp_stats->Controls->Add(this->nud_init_user);
			this->tabp_stats->Controls->Add(this->txtb_init_magic);
			this->tabp_stats->Controls->Add(this->txtb_init_feats);
			this->tabp_stats->Controls->Add(this->txtb_init_mod);
			this->tabp_stats->Controls->Add(this->txtb_init_total);
			this->tabp_stats->Controls->Add(this->label_init);
			this->tabp_stats->Location = System::Drawing::Point(4, 22);
			this->tabp_stats->Name = S"tabp_stats";
			this->tabp_stats->Size = System::Drawing::Size(652, 419);
			this->tabp_stats->TabIndex = 2;
			this->tabp_stats->Text = S"Stats";
			this->tabp_stats->Paint += new System::Windows::Forms::PaintEventHandler(this, tabp_stats_Paint);
			// 
			// tabp_abilities
			// 
			this->tabp_abilities->Controls->Add(this->txtb_cha_misc);
			this->tabp_abilities->Controls->Add(this->label_wis_plus_02);
			this->tabp_abilities->Controls->Add(this->txtb_wis_misc);
			this->tabp_abilities->Controls->Add(this->txt_int_misc);
			this->tabp_abilities->Controls->Add(this->txt_con_misc);
			this->tabp_abilities->Controls->Add(this->txt_dex_misc);
			this->tabp_abilities->Controls->Add(this->label_ability_misc);
			this->tabp_abilities->Controls->Add(this->txt_str_misc);
			this->tabp_abilities->Controls->Add(this->label_cha_plus_02);
			this->tabp_abilities->Controls->Add(this->label_int_plus_02);
			this->tabp_abilities->Controls->Add(this->label_con_plus_02);
			this->tabp_abilities->Controls->Add(this->label_dex_plus_02);
			this->tabp_abilities->Controls->Add(this->label_str_plus_02);
			this->tabp_abilities->Controls->Add(this->label_earned_information);
			this->tabp_abilities->Controls->Add(this->label_ability_information);
			this->tabp_abilities->Controls->Add(this->btn_remove_abilities);
			this->tabp_abilities->Controls->Add(this->btn_apply_abilities);
			this->tabp_abilities->Controls->Add(this->btn_cancel_abilities);
			this->tabp_abilities->Controls->Add(this->btn_add_inherent);
			this->tabp_abilities->Controls->Add(this->btn_add_earned);
			this->tabp_abilities->Controls->Add(this->label_inherent_abilities_at);
			this->tabp_abilities->Controls->Add(this->label_earned_abilities_at);
			this->tabp_abilities->Controls->Add(this->label_inherent_abilities_to);
			this->tabp_abilities->Controls->Add(this->label_earned_abilities_to);
			this->tabp_abilities->Controls->Add(this->nud_inherent_abilities_level);
			this->tabp_abilities->Controls->Add(this->txb_label_earned_abilities_level);
			this->tabp_abilities->Controls->Add(this->comb_earned_abilities);
			this->tabp_abilities->Controls->Add(this->comb_inherent_abilities);
			this->tabp_abilities->Controls->Add(this->txtb_earned_abilities_total);
			this->tabp_abilities->Controls->Add(this->label_inherent_abilities);
			this->tabp_abilities->Controls->Add(this->label_earned_abilities);
			this->tabp_abilities->Controls->Add(this->nud_inherent_abilities_total);
			this->tabp_abilities->Controls->Add(this->txtb_inherent_abilities);
			this->tabp_abilities->Controls->Add(this->nud_cha);
			this->tabp_abilities->Controls->Add(this->txtb_earned_abilities);
			this->tabp_abilities->Controls->Add(this->lstv_abilities);
			this->tabp_abilities->Controls->Add(this->nud_wis);
			this->tabp_abilities->Controls->Add(this->nud_int);
			this->tabp_abilities->Controls->Add(this->nud_con);
			this->tabp_abilities->Controls->Add(this->nud_dex);
			this->tabp_abilities->Controls->Add(this->nud_str);
			this->tabp_abilities->Controls->Add(this->label_ability_rolls);
			this->tabp_abilities->Controls->Add(this->label_ability_total);
			this->tabp_abilities->Controls->Add(this->txtb_cha_race);
			this->tabp_abilities->Controls->Add(this->txt_str_race);
			this->tabp_abilities->Controls->Add(this->txtb_wis_race);
			this->tabp_abilities->Controls->Add(this->txt_int_race);
			this->tabp_abilities->Controls->Add(this->txt_con_race);
			this->tabp_abilities->Controls->Add(this->txt_dex_race);
			this->tabp_abilities->Controls->Add(this->label_ability_race);
			this->tabp_abilities->Controls->Add(this->txtb_cha_mods);
			this->tabp_abilities->Controls->Add(this->label_cha_plus_01);
			this->tabp_abilities->Controls->Add(this->txt_int_mods);
			this->tabp_abilities->Controls->Add(this->label_wis_plus_01);
			this->tabp_abilities->Controls->Add(this->txtb_wis_mods);
			this->tabp_abilities->Controls->Add(this->label_int_plus_01);
			this->tabp_abilities->Controls->Add(this->txtb_cha_total);
			this->tabp_abilities->Controls->Add(this->label_cha_equals);
			this->tabp_abilities->Controls->Add(this->txtb_wis_total);
			this->tabp_abilities->Controls->Add(this->label_ability_cha);
			this->tabp_abilities->Controls->Add(this->label_wis_equals);
			this->tabp_abilities->Controls->Add(this->label_int_equals);
			this->tabp_abilities->Controls->Add(this->label_ability_wis);
			this->tabp_abilities->Controls->Add(this->txt_int_total);
			this->tabp_abilities->Controls->Add(this->label_con_plus_01);
			this->tabp_abilities->Controls->Add(this->label_ability_int);
			this->tabp_abilities->Controls->Add(this->txt_con_mods);
			this->tabp_abilities->Controls->Add(this->txt_dex_mods);
			this->tabp_abilities->Controls->Add(this->label_dex_plus_01);
			this->tabp_abilities->Controls->Add(this->label_ability_mods);
			this->tabp_abilities->Controls->Add(this->label_str_plus_01);
			this->tabp_abilities->Controls->Add(this->txt_str_mods);
			this->tabp_abilities->Controls->Add(this->txt_con_total);
			this->tabp_abilities->Controls->Add(this->label_con_equals);
			this->tabp_abilities->Controls->Add(this->txt_dex_total);
			this->tabp_abilities->Controls->Add(this->label_ability_con);
			this->tabp_abilities->Controls->Add(this->label_dex_equals);
			this->tabp_abilities->Controls->Add(this->label_str_equals);
			this->tabp_abilities->Controls->Add(this->label_ability_dex);
			this->tabp_abilities->Controls->Add(this->txt_str_total);
			this->tabp_abilities->Controls->Add(this->label_ability_str);
			this->tabp_abilities->Location = System::Drawing::Point(4, 22);
			this->tabp_abilities->Name = S"tabp_abilities";
			this->tabp_abilities->Size = System::Drawing::Size(652, 419);
			this->tabp_abilities->TabIndex = 1;
			this->tabp_abilities->Text = S"Abilities";
			this->tabp_abilities->Paint += new System::Windows::Forms::PaintEventHandler(this, tabp_abilities_Paint);
			// 
			// tabp_skills
			// 
			this->tabp_skills->Controls->Add(this->btn_remove_skill);
			this->tabp_skills->Controls->Add(this->btn_add_skill);
			this->tabp_skills->Controls->Add(this->btn_max_skills);
			this->tabp_skills->Controls->Add(this->ckb_enforce_max_skills);
			this->tabp_skills->Controls->Add(this->txtb_skill_points);
			this->tabp_skills->Controls->Add(this->lstv_skills);
			this->tabp_skills->Controls->Add(this->label_skill_points);
			this->tabp_skills->Location = System::Drawing::Point(4, 22);
			this->tabp_skills->Name = S"tabp_skills";
			this->tabp_skills->Size = System::Drawing::Size(652, 419);
			this->tabp_skills->TabIndex = 4;
			this->tabp_skills->Text = S"Skills";
			this->tabp_skills->Paint += new System::Windows::Forms::PaintEventHandler(this, tabp_skills_Paint);
			// 
			// tabp_feats
			// 
			this->tabp_feats->Controls->Add(this->label_feat_requirements_description);
			this->tabp_feats->Controls->Add(this->label_feat_requirements_title);
			this->tabp_feats->Controls->Add(this->ckb_negative_feats);
			this->tabp_feats->Controls->Add(this->ckb_disable_feats);
			this->tabp_feats->Controls->Add(this->label_bonus_feat_points);
			this->tabp_feats->Controls->Add(this->txtb_bonus_feat_points);
			this->tabp_feats->Controls->Add(this->txtb_feat_points);
			this->tabp_feats->Controls->Add(this->label_feat_points);
			this->tabp_feats->Controls->Add(this->btn_remove_feat);
			this->tabp_feats->Controls->Add(this->btn_add_bonus_feat);
			this->tabp_feats->Controls->Add(this->btn_add_feat);
			this->tabp_feats->Controls->Add(this->lstv_feats_known);
			this->tabp_feats->Controls->Add(this->lstv_feats);
			this->tabp_feats->Location = System::Drawing::Point(4, 22);
			this->tabp_feats->Name = S"tabp_feats";
			this->tabp_feats->Size = System::Drawing::Size(652, 419);
			this->tabp_feats->TabIndex = 5;
			this->tabp_feats->Text = S"Feats";
			this->tabp_feats->Paint += new System::Windows::Forms::PaintEventHandler(this, tabp_feats_Paint);
			// 
			// tabp_equipment
			// 
			this->tabp_equipment->Controls->Add(this->tabc_equipment);
			this->tabp_equipment->Location = System::Drawing::Point(4, 22);
			this->tabp_equipment->Name = S"tabp_equipment";
			this->tabp_equipment->Size = System::Drawing::Size(652, 419);
			this->tabp_equipment->TabIndex = 6;
			this->tabp_equipment->Text = S"Equipment";
			// 
			// tabc_equipment
			// 
			this->tabc_equipment->Appearance = System::Windows::Forms::TabAppearance::Buttons;
			this->tabc_equipment->Controls->Add(this->tabp_purchases);
			this->tabc_equipment->Controls->Add(this->tabp_equip);
			this->tabc_equipment->Controls->Add(this->tabp_funds);
			this->tabc_equipment->Location = System::Drawing::Point(5, 5);
			this->tabc_equipment->Name = S"tabc_equipment";
			this->tabc_equipment->SelectedIndex = 0;
			this->tabc_equipment->Size = System::Drawing::Size(650, 410);
			this->tabc_equipment->TabIndex = 0;
			// 
			// tabp_purchases
			// 
			this->tabp_purchases->Controls->Add(this->ckb_masterwork);
			this->tabp_purchases->Controls->Add(this->comb_item_magic);
			this->tabp_purchases->Controls->Add(this->comb_item_type);
			this->tabp_purchases->Controls->Add(this->label_lb);
			this->tabp_purchases->Controls->Add(this->label_load);
			this->tabp_purchases->Controls->Add(this->label_total_wieght);
			this->tabp_purchases->Controls->Add(this->txtb_load);
			this->tabp_purchases->Controls->Add(this->btn_item_carried);
			this->tabp_purchases->Controls->Add(this->txtb_total_wieght);
			this->tabp_purchases->Controls->Add(this->btn_item_not_carried);
			this->tabp_purchases->Controls->Add(this->label_buy_cp);
			this->tabp_purchases->Controls->Add(this->label_buy_sp);
			this->tabp_purchases->Controls->Add(this->label_buy_gp);
			this->tabp_purchases->Controls->Add(this->label_buy_pp);
			this->tabp_purchases->Controls->Add(this->ckb_buy_free);
			this->tabp_purchases->Controls->Add(this->txtb_buy_cp);
			this->tabp_purchases->Controls->Add(this->txtb_buy_sp);
			this->tabp_purchases->Controls->Add(this->btn_sell);
			this->tabp_purchases->Controls->Add(this->txtb_buy_gp);
			this->tabp_purchases->Controls->Add(this->txtb_buy_pp);
			this->tabp_purchases->Controls->Add(this->btn_new_item);
			this->tabp_purchases->Controls->Add(this->btn_buy);
			this->tabp_purchases->Controls->Add(this->lst_user_items);
			this->tabp_purchases->Controls->Add(this->lstv_store_items);
			this->tabp_purchases->Location = System::Drawing::Point(4, 25);
			this->tabp_purchases->Name = S"tabp_purchases";
			this->tabp_purchases->Size = System::Drawing::Size(642, 381);
			this->tabp_purchases->TabIndex = 0;
			this->tabp_purchases->Text = S"Purchases";
			// 
			// tabp_equip
			// 
			this->tabp_equip->Controls->Add(this->nud_equip_group);
			this->tabp_equip->Controls->Add(this->btn_equip_group);
			this->tabp_equip->Controls->Add(this->btn_unequip);
			this->tabp_equip->Controls->Add(this->btn_equip);
			this->tabp_equip->Controls->Add(this->lstv_equiped);
			this->tabp_equip->Controls->Add(this->lstv_unequiped);
			this->tabp_equip->Location = System::Drawing::Point(4, 25);
			this->tabp_equip->Name = S"tabp_equip";
			this->tabp_equip->Size = System::Drawing::Size(642, 381);
			this->tabp_equip->TabIndex = 1;
			this->tabp_equip->Text = S"Equip";
			// 
			// tabp_funds
			// 
			this->tabp_funds->Controls->Add(this->label_cp_funds);
			this->tabp_funds->Controls->Add(this->label_sp_funds);
			this->tabp_funds->Controls->Add(this->label_gp_funds);
			this->tabp_funds->Controls->Add(this->label_pp_funds);
			this->tabp_funds->Controls->Add(this->label_total_funds);
			this->tabp_funds->Controls->Add(this->label_add_subtract_funds);
			this->tabp_funds->Controls->Add(this->btn_subtract_funds);
			this->tabp_funds->Controls->Add(this->btn_add_funds);
			this->tabp_funds->Controls->Add(this->comb_add_type);
			this->tabp_funds->Controls->Add(this->nud_add_funds);
			this->tabp_funds->Controls->Add(this->txtb_cp_funds);
			this->tabp_funds->Controls->Add(this->txtb_sp_funds);
			this->tabp_funds->Controls->Add(this->txtb_gp_funds);
			this->tabp_funds->Controls->Add(this->txtb_pp_funds);
			this->tabp_funds->Location = System::Drawing::Point(4, 25);
			this->tabp_funds->Name = S"tabp_funds";
			this->tabp_funds->Size = System::Drawing::Size(642, 381);
			this->tabp_funds->TabIndex = 2;
			this->tabp_funds->Text = S"Funds";
			// 
			// tabp_spells
			// 
			this->tabp_spells->Controls->Add(this->label_spell_level_9);
			this->tabp_spells->Controls->Add(this->txtb_spells_per_day_9);
			this->tabp_spells->Controls->Add(this->label_spell_level_6);
			this->tabp_spells->Controls->Add(this->txtb_spells_known_9);
			this->tabp_spells->Controls->Add(this->label_spell_level_8);
			this->tabp_spells->Controls->Add(this->label_spell_level_5);
			this->tabp_spells->Controls->Add(this->label_spell_level_4);
			this->tabp_spells->Controls->Add(this->label_spell_level_3);
			this->tabp_spells->Controls->Add(this->label_spell_level_2);
			this->tabp_spells->Controls->Add(this->label_spell_level_1);
			this->tabp_spells->Controls->Add(this->label_spell_level_0);
			this->tabp_spells->Controls->Add(this->label_spells_per_day);
			this->tabp_spells->Controls->Add(this->label_spells_known);
			this->tabp_spells->Controls->Add(this->label_spell_points);
			this->tabp_spells->Controls->Add(this->txtb_spells_per_day_8);
			this->tabp_spells->Controls->Add(this->btn_add_spell);
			this->tabp_spells->Controls->Add(this->txtb_spells_per_day_7);
			this->tabp_spells->Controls->Add(this->txtb_spells_per_day_6);
			this->tabp_spells->Controls->Add(this->txtb_spells_per_day_5);
			this->tabp_spells->Controls->Add(this->txtb_spells_per_day_4);
			this->tabp_spells->Controls->Add(this->txtb_spells_per_day_3);
			this->tabp_spells->Controls->Add(this->txtb_spells_per_day_2);
			this->tabp_spells->Controls->Add(this->txtb_spells_per_day_1);
			this->tabp_spells->Controls->Add(this->txtb_spells_per_day_0);
			this->tabp_spells->Controls->Add(this->txtb_spells_known_8);
			this->tabp_spells->Controls->Add(this->txtb_spells_known_7);
			this->tabp_spells->Controls->Add(this->txtb_spells_known_6);
			this->tabp_spells->Controls->Add(this->txtb_spells_known_5);
			this->tabp_spells->Controls->Add(this->txtb_spells_known_4);
			this->tabp_spells->Controls->Add(this->txtb_spells_known_3);
			this->tabp_spells->Controls->Add(this->txtb_spells_known_2);
			this->tabp_spells->Controls->Add(this->txtb_spells_known_1);
			this->tabp_spells->Controls->Add(this->txtb_spells_known_0);
			this->tabp_spells->Controls->Add(this->btn_remove_spell);
			this->tabp_spells->Controls->Add(this->lstv_spells_known);
			this->tabp_spells->Controls->Add(this->lstv_spell_list);
			this->tabp_spells->Controls->Add(this->txtb_spell_points);
			this->tabp_spells->Controls->Add(this->label_spell_level_7);
			this->tabp_spells->Controls->Add(this->comb_spell_level);
			this->tabp_spells->Location = System::Drawing::Point(4, 22);
			this->tabp_spells->Name = S"tabp_spells";
			this->tabp_spells->Size = System::Drawing::Size(652, 419);
			this->tabp_spells->TabIndex = 7;
			this->tabp_spells->Text = S"Spells";
			this->tabp_spells->Paint += new System::Windows::Forms::PaintEventHandler(this, tabp_spells_Paint);
			// 
			// tabp_xp
			// 
			this->tabp_xp->Controls->Add(this->label_hp);
			this->tabp_xp->Controls->Add(this->label_hp_roll);
			this->tabp_xp->Controls->Add(this->label_hp_misc);
			this->tabp_xp->Controls->Add(this->label_hp_mod);
			this->tabp_xp->Controls->Add(this->label_hp_plus_2);
			this->tabp_xp->Controls->Add(this->label_hp_plus_1);
			this->tabp_xp->Controls->Add(this->label_hp_equals);
			this->tabp_xp->Controls->Add(this->nud_hp_roll);
			this->tabp_xp->Controls->Add(this->txtb_hp_misc);
			this->tabp_xp->Controls->Add(this->txtb_hp_mod);
			this->tabp_xp->Controls->Add(this->txtb_hp);
			this->tabp_xp->Controls->Add(this->btn_hp_apply);
			this->tabp_xp->Controls->Add(this->btn_levelup);
			this->tabp_xp->Controls->Add(this->lstv_hp_levels);
			this->tabp_xp->Controls->Add(this->nud_xp);
			this->tabp_xp->Controls->Add(this->btn_subtract_xp);
			this->tabp_xp->Controls->Add(this->btn_add_xp);
			this->tabp_xp->Controls->Add(this->txtb_xp_total);
			this->tabp_xp->Location = System::Drawing::Point(4, 22);
			this->tabp_xp->Name = S"tabp_xp";
			this->tabp_xp->Size = System::Drawing::Size(652, 419);
			this->tabp_xp->TabIndex = 8;
			this->tabp_xp->Text = S"XP & HP";
			this->tabp_xp->Paint += new System::Windows::Forms::PaintEventHandler(this, tabp_xp_Paint);
			// 
			// label_hp
			// 
			this->label_hp->BackColor = System::Drawing::Color::Transparent;
			this->label_hp->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label_hp->Location = System::Drawing::Point(260, 205);
			this->label_hp->Name = S"label_hp";
			this->label_hp->Size = System::Drawing::Size(35, 15);
			this->label_hp->TabIndex = 260;
			this->label_hp->Text = S"HP";
			this->label_hp->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_hp_roll
			// 
			this->label_hp_roll->Location = System::Drawing::Point(465, 205);
			this->label_hp_roll->Name = S"label_hp_roll";
			this->label_hp_roll->Size = System::Drawing::Size(45, 13);
			this->label_hp_roll->TabIndex = 259;
			this->label_hp_roll->Text = S"roll";
			this->label_hp_roll->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_hp_misc
			// 
			this->label_hp_misc->Location = System::Drawing::Point(390, 205);
			this->label_hp_misc->Name = S"label_hp_misc";
			this->label_hp_misc->Size = System::Drawing::Size(35, 13);
			this->label_hp_misc->TabIndex = 258;
			this->label_hp_misc->Text = S"misc";
			this->label_hp_misc->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_hp_mod
			// 
			this->label_hp_mod->Location = System::Drawing::Point(330, 205);
			this->label_hp_mod->Name = S"label_hp_mod";
			this->label_hp_mod->Size = System::Drawing::Size(35, 13);
			this->label_hp_mod->TabIndex = 256;
			this->label_hp_mod->Text = S"mod";
			this->label_hp_mod->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_hp_plus_2
			// 
			this->label_hp_plus_2->Location = System::Drawing::Point(435, 225);
			this->label_hp_plus_2->Name = S"label_hp_plus_2";
			this->label_hp_plus_2->Size = System::Drawing::Size(15, 13);
			this->label_hp_plus_2->TabIndex = 255;
			this->label_hp_plus_2->Text = S"+";
			// 
			// label_hp_plus_1
			// 
			this->label_hp_plus_1->Location = System::Drawing::Point(370, 225);
			this->label_hp_plus_1->Name = S"label_hp_plus_1";
			this->label_hp_plus_1->Size = System::Drawing::Size(15, 13);
			this->label_hp_plus_1->TabIndex = 253;
			this->label_hp_plus_1->Text = S"+";
			// 
			// label_hp_equals
			// 
			this->label_hp_equals->Location = System::Drawing::Point(300, 225);
			this->label_hp_equals->Name = S"label_hp_equals";
			this->label_hp_equals->Size = System::Drawing::Size(15, 13);
			this->label_hp_equals->TabIndex = 252;
			this->label_hp_equals->Text = S"=";
			// 
			// nud_hp_roll
			// 
			this->nud_hp_roll->Location = System::Drawing::Point(460, 225);
			this->nud_hp_roll->Name = S"nud_hp_roll";
			this->nud_hp_roll->Size = System::Drawing::Size(60, 20);
			this->nud_hp_roll->TabIndex = 251;
			// 
			// txtb_hp_misc
			// 
			this->txtb_hp_misc->BackColor = System::Drawing::Color::White;
			this->txtb_hp_misc->Enabled = false;
			this->txtb_hp_misc->ForeColor = System::Drawing::Color::Gray;
			this->txtb_hp_misc->Location = System::Drawing::Point(390, 225);
			this->txtb_hp_misc->Name = S"txtb_hp_misc";
			this->txtb_hp_misc->ReadOnly = true;
			this->txtb_hp_misc->Size = System::Drawing::Size(35, 20);
			this->txtb_hp_misc->TabIndex = 250;
			this->txtb_hp_misc->Text = S"0";
			this->txtb_hp_misc->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_hp_mod
			// 
			this->txtb_hp_mod->BackColor = System::Drawing::Color::White;
			this->txtb_hp_mod->Enabled = false;
			this->txtb_hp_mod->ForeColor = System::Drawing::Color::Gray;
			this->txtb_hp_mod->Location = System::Drawing::Point(330, 225);
			this->txtb_hp_mod->Name = S"txtb_hp_mod";
			this->txtb_hp_mod->ReadOnly = true;
			this->txtb_hp_mod->Size = System::Drawing::Size(35, 20);
			this->txtb_hp_mod->TabIndex = 248;
			this->txtb_hp_mod->Text = S"0";
			this->txtb_hp_mod->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_hp
			// 
			this->txtb_hp->BackColor = System::Drawing::Color::White;
			this->txtb_hp->Enabled = false;
			this->txtb_hp->Location = System::Drawing::Point(260, 225);
			this->txtb_hp->Name = S"txtb_hp";
			this->txtb_hp->ReadOnly = true;
			this->txtb_hp->Size = System::Drawing::Size(35, 20);
			this->txtb_hp->TabIndex = 247;
			this->txtb_hp->Text = S"0";
			this->txtb_hp->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_hp_apply
			// 
			this->btn_hp_apply->BackColor = System::Drawing::SystemColors::Control;
			this->btn_hp_apply->Location = System::Drawing::Point(550, 225);
			this->btn_hp_apply->Name = S"btn_hp_apply";
			this->btn_hp_apply->Size = System::Drawing::Size(75, 20);
			this->btn_hp_apply->TabIndex = 6;
			this->btn_hp_apply->Text = S"Apply";
			this->btn_hp_apply->Click += new System::EventHandler(this, btn_hp_apply_Click);
			// 
			// tabp_notes
			// 
			this->tabp_notes->Controls->Add(this->label_dm_note);
			this->tabp_notes->Controls->Add(this->label_dm_note_title);
			this->tabp_notes->Location = System::Drawing::Point(4, 22);
			this->tabp_notes->Name = S"tabp_notes";
			this->tabp_notes->Size = System::Drawing::Size(652, 419);
			this->tabp_notes->TabIndex = 9;
			this->tabp_notes->Text = S"DM Notes";
			// 
			// d2o_characters
			// 
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(804, 525);
			this->Controls->Add(this->tabc_character);
			this->Controls->Add(this->txtb_ability_modifier_cha);
			this->Controls->Add(this->txtb_ability_score_cha);
			this->Controls->Add(this->txtb_ability_modifier_wis);
			this->Controls->Add(this->txtb_ability_score_wis);
			this->Controls->Add(this->txtb_display_total_hp);
			this->Controls->Add(this->txtb_ability_modifier_int);
			this->Controls->Add(this->txtb_ability_score_int);
			this->Controls->Add(this->txtb_ability_modifier_con);
			this->Controls->Add(this->txtb_ability_score_con);
			this->Controls->Add(this->txtb_ability_modifier_dex);
			this->Controls->Add(this->txtb_ability_score_dex);
			this->Controls->Add(this->txtb_ability_modifier_str);
			this->Controls->Add(this->txtb_ability_score_str);
			this->Controls->Add(this->label_display_ability_mods);
			this->Controls->Add(this->label_display_ability_score);
			this->Controls->Add(this->label_display_total_hp);
			this->Controls->Add(this->label_display_ability_cha);
			this->Controls->Add(this->label_display_ability_wis);
			this->Controls->Add(this->label_display_ability_int);
			this->Controls->Add(this->label_display_ability_con);
			this->Controls->Add(this->label_display_ability_dex);
			this->Controls->Add(this->label_display_ability_str);
			this->Controls->Add(this->grpb_alignment);
			this->Controls->Add(this->grpb_gender);
			this->Controls->Add(this->grpb_size);
			this->Controls->Add(this->grpb_race);
			this->Controls->Add(this->grpb_classes);
			this->Controls->Add(this->grpb_level);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->Menu = this->mnu_flie;
			this->Name = S"d2o_characters";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = S"d2o Character Generator";
			this->Load += new System::EventHandler(this, d2o_characters_Load);
			this->Paint += new System::Windows::Forms::PaintEventHandler(this, d2o_characters_Paint);
			this->grpb_alignment->ResumeLayout(false);
			this->grpb_gender->ResumeLayout(false);
			this->grpb_size->ResumeLayout(false);
			this->grpb_race->ResumeLayout(false);
			this->grpb_classes->ResumeLayout(false);
			this->grpb_level->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_ac_user))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_will_user))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_ref_user))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_fort_user))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_init_user))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_inherent_abilities_level))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_inherent_abilities_total))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_cha))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_wis))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_int))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_con))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_dex))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_str))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_inches))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_weight))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_feet))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_age))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_equip_group))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_add_funds))->EndInit();
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_xp))->EndInit();
			this->tabc_character->ResumeLayout(false);
			this->tabp_class->ResumeLayout(false);
			this->tabp_character_features->ResumeLayout(false);
			this->tabc_character_features->ResumeLayout(false);
			this->tabp_bio->ResumeLayout(false);
			this->tabp_features->ResumeLayout(false);
			this->tabp_languages->ResumeLayout(false);
			this->tabp_gods->ResumeLayout(false);
			this->tabp_companions->ResumeLayout(false);
			this->tabp_stats->ResumeLayout(false);
			this->tabp_abilities->ResumeLayout(false);
			this->tabp_skills->ResumeLayout(false);
			this->tabp_feats->ResumeLayout(false);
			this->tabp_equipment->ResumeLayout(false);
			this->tabc_equipment->ResumeLayout(false);
			this->tabp_purchases->ResumeLayout(false);
			this->tabp_equip->ResumeLayout(false);
			this->tabp_funds->ResumeLayout(false);
			this->tabp_spells->ResumeLayout(false);
			this->tabp_xp->ResumeLayout(false);
			(__try_cast<System::ComponentModel::ISupportInitialize *  >(this->nud_hp_roll))->EndInit();
			this->tabp_notes->ResumeLayout(false);
			this->ResumeLayout(false);

		}		


		System::Void d2o_characters_Load(System::Object *  sender, System::EventArgs *  e)
				{
					character_details = new profile;
					character_details->initialise();

					// Add all the skills to the list
					char_int_group* skills = character_details->get_skills();

					// Set properties
					//lstv_skills->set_FullRowSelect(true);
					//lstv_skills->set_MultiSelect(false);
					tabp_abilities->set_Enabled(false);
					tabp_skills->set_Enabled(false);
					tabp_stats->set_Enabled(false);
					tabp_feats->set_Enabled(false);
					tabp_character_features->set_Enabled(false);
					tabp_equipment->set_Enabled(false);
					tabp_spells->set_Enabled(false);
					tabp_xp->set_Enabled(false);
					tabp_notes->set_Enabled(false);
					
					// Add Columns
					lstv_skills->Columns->Add(S"Name", -2, HorizontalAlignment::Left);
					lstv_skills->Columns->Add(S"Total", -2, HorizontalAlignment::Center);
					lstv_skills->Columns->Add(S"Ability Modifier", -2, HorizontalAlignment::Center);
					lstv_skills->Columns->Add(S"Ranks", -2, HorizontalAlignment::Center);
					lstv_skills->Columns->Add(S"", -2, HorizontalAlignment::Left);

					// Begin adding skills to list
					lstv_skills->BeginUpdate();

					for (int i=0; i<skills->get_num_pairs();i++)
					{
						char char_skill_name[128];
						strcpy(char_skill_name, skills->get_pointer(i)->get_name());
						String *skill_name = new String(char_skill_name);
						ListViewItem* skill = new ListViewItem(skill_name);
						skill->SubItems->Add(skills->get_value(i).ToString());
						skill->SubItems->Add(skills->get_pointer(i)->get_modifier("Ability Modifier").ToString());
						skill->SubItems->Add(skills->get_pointer(i)->get_modifier("Ranks").ToString());

						lstv_skills->Items->Add(skill);
					}
					lstv_skills->EndUpdate();

					// Add the class list
					race_selector* class_list = character_details->get_list_classes();

					lstv_class_list->Columns->Add(S"Class Name",165, HorizontalAlignment::Left);
					lstv_class_level->Columns->Add(S"Class Name",165, HorizontalAlignment::Left);
					lstv_class_list->BeginUpdate();
					for (int i=0;i<class_list->get_num_races();i++)
					{
						char char_class_name[128];
						strcpy(char_class_name, class_list->get_race(i));
						String *class_name = new String(char_class_name);
						ListViewItem* class_item = new ListViewItem(class_name);
						lstv_class_list->Items->Add(class_item);
					}
					lstv_class_list->EndUpdate();
					

					// Add the feats list
					feat_list* full_feats = character_details->get_full_feats();
					feat_list* feats = character_details->get_feats();

					lstv_feats->Columns->Add(S"Feats Available", -2, HorizontalAlignment::Left);

					lstv_feats->BeginUpdate();
					for (int i=0;i<full_feats->get_num_feats();i++)
					{
						char char_feat_name[128];
						strcpy(char_feat_name, full_feats->get_feat_name(i));
						String *feat_string = new String(char_feat_name);
						ListViewItem* feat = new ListViewItem(feat_string);
						lstv_feats->Items->Add(feat);
					}
					lstv_feats->EndUpdate();

					// Add the spells list
					Spell_list* full_spells = character_details->get_full_spells();
					Spell_list* spells = character_details->get_spells();

					lstv_spell_list->Columns->Add(S"Spells Available", -2, HorizontalAlignment::Left);

					lstv_spell_list->BeginUpdate();
					for (int i=0;i<full_spells->get_num_spells();i++)
					{
						char char_spell_name[128];
						strcpy(char_spell_name, full_spells->get_spell_name(i));
						String *spell_string = new String(char_spell_name);
						ListViewItem* spell = new ListViewItem(spell_string);
						lstv_spell_list->Items->Add(spell);
					}
					lstv_spell_list->EndUpdate();

					// Mark the combo box selector
					comb_alignment_selector->set_SelectedIndex(0);

					// Add the race list
					race_selector* race_list = character_details->get_race_list();

					comb_race_selector->Items->Add(S"Race");
					for (int i=0;i<race_list->get_num_races();i++)
					{
						char char_race_name[128];
						strcpy(char_race_name, race_list->get_race(i));
						String *race_name = new String(char_race_name);
						comb_race_selector->Items->Add(race_name);
					}
					comb_race_selector->set_SelectedIndex(0);

					this->Refresh();

				}

		System::Void mnui_close_Click(System::Object *  sender, System::EventArgs *  e)
				{
					//  Close the current form
					this->Close();
				}

//Numeric Up Down Functions
		System::Void nud_ac_user_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
					char_int_group* combat_stats = character_details->get_combat_stats();
					int value;

					value = Convert::ToInt32(nud_ac_user->get_Value());

					//value = Convert::ToInt32(nud_init_user->get_Text());
					combat_stats->get_pointer("Armor Class")->set_modifier("User Modifier", value);

					tabp_stats->Refresh();
				}

		System::Void nud_add_funds_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_age_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_cha_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_con_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_dex_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_equip_group_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_feet_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_fort_user_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
					char_int_group* combat_stats = character_details->get_combat_stats();
					int value;

					value = Convert::ToInt32(nud_fort_user->get_Value());

					//value = Convert::ToInt32(nud_init_user->get_Text());
					combat_stats->get_pointer("Fortitude Save")->set_modifier("User Modifier", value);

					tabp_stats->Refresh();
				}

		System::Void nud_inches_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_inherent_abilities_level_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_inherent_abilities_total_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_init_user_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
					char_int_group* combat_stats = character_details->get_combat_stats();
					int value;

					value = Convert::ToInt32(nud_init_user->get_Value());

					//value = Convert::ToInt32(nud_init_user->get_Text());
					combat_stats->get_pointer("Initiative")->set_modifier("User Modifier", value);

					tabp_stats->Refresh();
				}

		System::Void nud_int_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_ref_user_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
					char_int_group* combat_stats = character_details->get_combat_stats();
					int value;

					value = Convert::ToInt32(nud_ref_user->get_Value());

					//value = Convert::ToInt32(nud_init_user->get_Text());
					combat_stats->get_pointer("Reflex Save")->set_modifier("User Modifier", value);

					tabp_stats->Refresh();
				}

		System::Void nud_str_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_will_user_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
					char_int_group* combat_stats = character_details->get_combat_stats();
					int value;

					value = Convert::ToInt32(nud_will_user->get_Value());

					//value = Convert::ToInt32(nud_init_user->get_Text());
					combat_stats->get_pointer("Will Save")->set_modifier("User Modifier", value);

					tabp_stats->Refresh();
				}

		System::Void nud_wis_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_xp_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void nud_weight_ValueChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}


		//button functions
		System::Void btn_new_item_Click(System::Object *  sender, System::EventArgs *  e)
				{
					//  Open the New Items form in Dialog Mode
				d2o_new_items* frm = new d2o_new_items();
				frm->ShowDialog(this);
				}

		System::Void btn_add_bonus_feat_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_add_class_Click(System::Object *  sender, System::EventArgs *  e)
				{
					if (lstv_class_list->get_SelectedItems()->get_Count() == 1)
					{
						class_list* my_classes = character_details->get_my_classes();
						char_class* current_class = new char_class();
						String* class_name = lstv_class_list->get_SelectedItems()->get_Item(0)->get_Text();
						current_class->read_from_xml("xml\\classes.xml", (char*)(void*)Marshal::StringToHGlobalAnsi(class_name));
						my_classes->add_class(current_class);

						btn_add_class->set_Enabled(false);

						this->Refresh();
					}
						
				}

		System::Void btn_add_companion_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_add_domain_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_add_earned_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_add_feat_Click(System::Object *  sender, System::EventArgs *  e)
				{
					feat_list* all_feats = character_details->get_full_feats();
					feat_list* feats = character_details->get_feats();
					
					int feat_points = character_details->get_num_feat_points();

					if (lstv_feats->get_SelectedItems()->get_Count() == 1)
					{
						if (feat_points > 0)
						{
							String* class_name = lstv_feats->get_SelectedItems()->get_Item(0)->get_Text();
							if (feats->get_pointer((char*)(void*)Marshal::StringToHGlobalAnsi(class_name)) == NULL)
							{
								feats->add_feat(all_feats->get_pointer((char*)(void*)Marshal::StringToHGlobalAnsi(class_name))->get_feat_string());
								feat_points--;
							}
						}
						character_details->set_num_feat_points(feat_points);
						txtb_feat_points->set_Text(feat_points.ToString());
					}


					tabp_feats->Refresh();

				}

		System::Void btn_add_funds_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_add_god_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_add_inherent_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_add_language_Click(System::Object *  sender, System::EventArgs *  e)
				{
					race* racial = character_details->get_racial();
					
					int language_points = character_details->get_num_language_points();
					//int language_points = Convert::ToInt32(txtb_language_points->get_Text());

					if (lstv_languages->get_SelectedItems()->get_Count() == 1)
					{
						if (language_points > 0)
						{
							String* class_name = lstv_languages->get_SelectedItems()->get_Item(0)->get_Text();
							racial->add_language((char*)(void*)Marshal::StringToHGlobalAnsi(class_name));
							lstv_languages->Items->RemoveAt(lstv_languages->get_SelectedIndices()->get_Item(0));
							language_points--;
						}
						character_details->set_num_language_points(language_points);
						txtb_language_points->set_Text(language_points.ToString());
					}


					tabp_languages->Refresh();
				}

		System::Void btn_add_language_skill_Click(System::Object *  sender, System::EventArgs *  e)
				{
					race* racial = character_details->get_racial();
					
					int language_points = character_details->get_skills()->get_pointer("Speak Language")->get_modifier("Ranks");

					if (lstv_languages->get_SelectedItems()->get_Count() == 1)
					{
						if (language_points > 0)
						{
							String* class_name = lstv_languages->get_SelectedItems()->get_Item(0)->get_Text();
							racial->add_language((char*)(void*)Marshal::StringToHGlobalAnsi(class_name));
							lstv_languages->Items->RemoveAt(lstv_languages->get_SelectedIndices()->get_Item(0));
							language_points--;
							character_details->get_skills()->get_pointer("Speak Language")->decrement_modifier("Ranks");
						}
						txtb_language_points->set_Text(language_points.ToString());
					}


					tabp_languages->Refresh();
				}

		System::Void btn_add_skill_Click(System::Object *  sender, System::EventArgs *  e)
				{
					char_int_group* skills = character_details->get_skills();
					int skill_points = character_details->get_num_skill_points();
					if (skill_points > 0)
					{
						String *skill_name = lstv_skills->get_SelectedItems()->get_Item(0)->get_Text();
						if (ckb_enforce_max_skills->get_Checked())
						{
							if (skills->get_pointer((char*)(void*)Marshal::StringToHGlobalAnsi(skill_name))->get_modifier("Ranks") < (character_details->get_my_classes()->get_total_level()+3))
							{
								skills->get_pointer((char*)(void*)Marshal::StringToHGlobalAnsi(skill_name))->increment_modifier("Ranks");
								skill_points--;
								character_details->set_num_skill_points(skill_points);
							}
						}
						else
						{
							skills->get_pointer((char*)(void*)Marshal::StringToHGlobalAnsi(skill_name))->increment_modifier("Ranks");
							skill_points--;
							character_details->set_num_skill_points(skill_points);
						}
					}
					
					tabp_skills->Refresh();
				}

		System::Void btn_add_spell_Click(System::Object *  sender, System::EventArgs *  e)
				{
					Spell_list* all_spells = character_details->get_full_spells();
					Spell_list* spells = character_details->get_spells();
										
					//int spell_points = character_details->get_num_spell_points();
					int spell_points = Convert::ToInt32(txtb_spell_points->get_Text());

					if (lstv_spell_list->get_SelectedItems()->get_Count() == 1)
					{
						if (spell_points > 0)
						{
							String* class_name = lstv_spell_list->get_SelectedItems()->get_Item(0)->get_Text();
							if (spells->get_pointer((char*)(void*)Marshal::StringToHGlobalAnsi(class_name)) == NULL)
							{
								Spell* new_spell = new Spell;
								new_spell->set_name((char*)(void*)Marshal::StringToHGlobalAnsi(class_name));
								new_spell->set_school(all_spells->get_pointer((char*)(void*)Marshal::StringToHGlobalAnsi(class_name))->get_school());
								new_spell->set_type(all_spells->get_pointer((char*)(void*)Marshal::StringToHGlobalAnsi(class_name))->get_type());

								spells->add_spell(new_spell);
								spell_points--;
							}
						}
						character_details->set_num_spell_points(spell_points);
						txtb_spell_points->set_Text(spell_points.ToString());
					}


					tabp_spells->Refresh();
				}

		System::Void btn_add_xp_Click(System::Object *  sender, System::EventArgs *  e)
				{
					xp* experience = character_details->get_xp();
					long adjust_value = Convert::ToInt32(nud_xp->get_Value());

					experience->adjust_xp(adjust_value);

					nud_xp->set_Text(S"0");

					tabp_xp->Refresh();
				}

		System::Void btn_apply_abilities_Click(System::Object *  sender, System::EventArgs *  e)
				{
					char_int_group* abilities = character_details->get_abilities();
					int value;
					int rolls[6];

					// Get the rolls
					// (Stored in alphabetical order)
					rolls[0] = Convert::ToInt32(nud_cha->get_Text())+1;
					rolls[1] = Convert::ToInt32(nud_con->get_Text())+1;
					rolls[2] = Convert::ToInt32(nud_dex->get_Text())+1;
					rolls[3] = Convert::ToInt32(nud_int->get_Text())+1;
					rolls[4] = Convert::ToInt32(nud_str->get_Text())+1;
					rolls[5] = Convert::ToInt32(nud_wis->get_Text())+1;

					// Get random ability scores
					srand((int)time(NULL));
					value = abilities->get_num_pairs();
					for (int i=0; i<value; i++)
					{
						char modifier_name[]="Base Value";
						abilities->get_pointer(i)->add_modifier(modifier_name, character_details->get_rand_ability_score(rolls[i]));
						//cout << abilities->get_pointer(i)->get_name() << ": " << abilities[i] << endl;
					}

					btn_apply_abilities->Hide();
					btn_cancel_abilities->Hide();
					nud_str->set_Enabled(false);
					nud_dex->set_Enabled(false);
					nud_int->set_Enabled(false);
					nud_con->set_Enabled(false);
					nud_cha->set_Enabled(false);
					nud_wis->set_Enabled(false);

					race* race_info = character_details->get_racial();
					class_list* my_classes = character_details->get_my_classes();

					if (strcmp(race_info->get_name(), "Human")==0)
						value = 4;
					else
						value = 0;
					if (my_classes->get_total_level() == 1)
						character_details->set_num_skill_points(((my_classes->get_tail()->get_skill_points()+abilities->get_pointer("Intelligence")->get_modifier("Modifier"))*4)+value);
					else
					{
						if (value > 0)
							value = 1;
						character_details->set_num_skill_points(my_classes->get_tail()->get_skill_points()+abilities->get_pointer("Intelligence")->get_modifier("Modifier")+value);
					}


					this->Refresh();

				}

		System::Void btn_bard_prof_Click(System::Object *  sender, System::EventArgs *  e)
				{
				//  Open the New Items form in Dialog Mode
				d2o_misc* frm = new d2o_misc();
				frm->ShowDialog(this);
				}

		System::Void btn_buy_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_cancel_abilities_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_class_cancel_Click(System::Object *  sender, System::EventArgs *  e)
				{
					lstv_class_level->Clear();
					comb_race_selector->set_SelectedIndex(0);
					comb_alignment_selector->set_SelectedIndex(0);
					lstv_class_list->Clear();

					// Add the class list
					race_selector* list_classes = character_details->get_list_classes();

					lstv_class_list->Columns->Add(S"Class Name",165, HorizontalAlignment::Left);
					lstv_class_level->Columns->Add(S"Class Name",165, HorizontalAlignment::Left);
					lstv_class_list->BeginUpdate();
					for (int i=0;i<list_classes->get_num_races();i++)
					{
						char char_class_name[128];
						strcpy(char_class_name, list_classes->get_race(i));
						String *class_name = new String(char_class_name);
						ListViewItem* class_item = new ListViewItem(class_name);
						lstv_class_list->Items->Add(class_item);
					}
					lstv_class_list->EndUpdate();

					class_list* my_classes = character_details->get_my_classes();
					if (!my_classes->is_solid())
						my_classes->remove_from_tail();

					tabp_class->Refresh();

				}

		System::Void btn_class_ok_Click(System::Object *  sender, System::EventArgs *  e)
				{

					if (comb_race_selector->get_Text()->Equals(S"Race"))
					{
						MessageBox::Show(S"A Race needs to be selected", this->Text, MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					else
					{
						race* race_info = character_details->get_racial();

						race_info->read_file("xml\\race.xml", (char*)(void*)Marshal::StringToHGlobalAnsi(comb_race_selector->get_Text()));
					
						if (comb_alignment_selector->get_Text()->Equals(S"Alignment"))
						{
							MessageBox::Show(S"An alignment needs to be selected", this->Text, MessageBoxButtons::OK, MessageBoxIcon::Error);
						}
						else
						{
							physical* physical_prop = character_details->get_physical();
							physical_prop->set_alignment((char*)(void*)Marshal::StringToHGlobalAnsi(comb_alignment_selector->get_Text()));
						
						
							class_list* my_classes = character_details->get_my_classes();
							if (my_classes->is_solid())
							{
								MessageBox::Show(S"A Class needs to be added", this->Text, MessageBoxButtons::OK, MessageBoxIcon::Error);
							}
							else
							{
								// Add the selected class to the players list
								my_classes->solidify();
								char_int_group* combat = character_details->get_combat_stats();
								char_int_group* abilities = character_details->get_abilities();
								int value;
								value = (my_classes->get_tail()->get_save_fortitude()?(my_classes->get_total_level()/2)+2:(my_classes->get_total_level()/3));
								combat->get_pointer("Fortitude Save")->add_modifier("Race Modifier", value);
								value = (my_classes->get_tail()->get_save_reflex()?(my_classes->get_total_level()/2)+2:(my_classes->get_total_level()/3));
								combat->get_pointer("Reflex Save")->add_modifier("Race Modifier", value);
								value = (my_classes->get_tail()->get_save_will()?(my_classes->get_total_level()/2)+2:(my_classes->get_total_level()/3));
								combat->get_pointer("Will Save")->add_modifier("Race Modifier", value);

								if ((my_classes->get_total_level() == 1) || (my_classes->get_total_level() % 3 == 0))
								{
									if ((my_classes->get_total_level() == 1) && (strcmp(race_info->get_name(), "Human")==0))
										character_details->set_num_feat_points(2);
									else
										character_details->set_num_feat_points(1);
								}

								// Add language column headers
								lstv_languages->Columns->Add(S"Languages To Choose From", 220, HorizontalAlignment::Left);
								lstv_languages_known->Columns->Add(S"Languages Known", 220, HorizontalAlignment::Left);
								lstv_languages->BeginUpdate();
								for (int i=0; i<race_info->get_languages_length();i++)
								{
									char language_name[128];
									strcpy(language_name, race_info->get_languages()[i]);
									String *language_string = new String(language_name);
									lstv_languages->Items->Add(language_string);
								}
								lstv_languages->EndUpdate();

								lstv_languages_known->BeginUpdate();
								for(int i=0;i<race_info->get_languages_choice_length();i++)
								{
									char language_name[128];
									strcpy(language_name, race_info->get_languages_choice()[i]);
									String* language_string = new String(language_name);
									lstv_languages_known->Items->Add(language_string);
								}
								lstv_languages_known->EndUpdate();

								comb_alignment_selector->set_Enabled(false);
								comb_race_selector->set_Enabled(false);
								btn_add_class->set_Enabled(false);
								btn_remove_class->set_Enabled(false);
								btn_class_ok->set_Enabled(false);
								tabc_character->set_SelectedIndex(1);

								tabp_abilities->set_Enabled(true);
								tabp_skills->set_Enabled(true);
								tabp_stats->set_Enabled(true);
								tabp_feats->set_Enabled(true);
								tabp_character_features->set_Enabled(true);
								tabp_equipment->set_Enabled(true);
								tabp_spells->set_Enabled(true);
								tabp_xp->set_Enabled(true);
								tabp_notes->set_Enabled(true);
							}
						}
					}

					this->Refresh();
				}

		System::Void btn_equip_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_equip_group_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_item_carried_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_item_not_carried_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_levelup_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_max_skills_Click(System::Object *  sender, System::EventArgs *  e)
				{
					char_int_group* skills = character_details->get_skills();
					int skill_points = character_details->get_num_skill_points();
					if (skill_points > 0)
					{
						String *skill_name = lstv_skills->get_SelectedItems()->get_Item(0)->get_Text();
						int max_ranks = character_details->get_my_classes()->get_total_level()+3;
						char_int_pair* skill_pair = skills->get_pointer((char*)(void*)Marshal::StringToHGlobalAnsi(skill_name));
						while ((skill_pair->get_modifier("Ranks") < max_ranks) && (skill_points>0))
						{
							skill_pair->increment_modifier("Ranks");
							skill_points--;
						}
						character_details->set_num_skill_points(skill_points);
					}
					
					tabp_skills->Refresh();
				}

		System::Void btn_racial_prof_Click(System::Object *  sender, System::EventArgs *  e)
				{
				//  Open the New Items form in Dialog Mode
				d2o_misc* frm = new d2o_misc();
				frm->ShowDialog(this);
				}

		System::Void btn_ranger_enemie_Click(System::Object *  sender, System::EventArgs *  e)
				{
				//  Open the New Items form in Dialog Mode
				d2o_misc* frm = new d2o_misc();
				frm->ShowDialog(this);
				}

		System::Void btn_remove_abilities_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_remove_class_Click(System::Object *  sender, System::EventArgs *  e)
				{
					class_list* my_classes = character_details->get_my_classes();

					if (lstv_class_level->Items->IndexOf(lstv_class_level->get_SelectedItems()->get_Item(0)) != (lstv_class_level->Items->get_Count()-1))
						MessageBox::Show(S"You can only remove the class you just added", this->get_Text(), MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					else
					{
						if (!my_classes->is_solid())
						{
							my_classes->remove_from_tail();
							btn_add_class->set_Enabled(true);
						}
						tabp_class->Refresh();
					}
				}

		System::Void btn_remove_compainon_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_remove_feat_Click(System::Object *  sender, System::EventArgs *  e)
				{
					feat_list* feats = character_details->get_feats();
					
					int feat_points = character_details->get_num_feat_points();

					if (lstv_feats_known->get_SelectedItems()->get_Count() == 1)
					{
						String* feat_name = lstv_feats_known->get_SelectedItems()->get_Item(0)->get_Text();
						feats->remove_feat((char*)(void*)Marshal::StringToHGlobalAnsi(feat_name));
						feat_points++;
						character_details->set_num_feat_points(feat_points);
						txtb_feat_points->set_Text(feat_points.ToString());
					}


					tabp_feats->Refresh();
				}

		System::Void btn_remove_god_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_remove_language_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_remove_remove_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_remove_skill_Click(System::Object *  sender, System::EventArgs *  e)
				{
					char_int_group* skills = character_details->get_skills();
					String *skill_name = lstv_skills->get_SelectedItems()->get_Item(0)->get_Text();

					if (skills->get_pointer((char*)(void*)Marshal::StringToHGlobalAnsi(skill_name))->get_modifier("Ranks") > 0)
					{
						skills->get_pointer((char*)(void*)Marshal::StringToHGlobalAnsi(skill_name))->decrement_modifier("Ranks");
						character_details->set_num_skill_points(character_details->get_num_skill_points()+1);
					}
					
					tabp_skills->Refresh();
				}

		System::Void btn_remove_spell_Click(System::Object *  sender, System::EventArgs *  e)
				{
					Spell_list* spell = character_details->get_spells();
					
					int spell_points = character_details->get_num_spell_points();

					if (lstv_spells_known->get_SelectedItems()->get_Count() == 1)
					{
						String* spell_name = lstv_spells_known->get_SelectedItems()->get_Item(0)->get_Text();
						spell->remove_spell((char*)(void*)Marshal::StringToHGlobalAnsi(spell_name));
						spell_points++;
						character_details->set_num_spell_points(spell_points);
						txtb_spell_points->set_Text(spell_points.ToString());
					}


					tabp_spells->Refresh();
				}

		System::Void btn_rogue_special_Click(System::Object *  sender, System::EventArgs *  e)
				{
				//  Open the New Items form in Dialog Mode
				d2o_misc* frm = new d2o_misc();
				frm->ShowDialog(this);
				}

		System::Void btn_sell_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_subtract_funds_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void btn_subtract_xp_Click(System::Object *  sender, System::EventArgs *  e)
				{
					xp* experience = character_details->get_xp();
					long adjust_value = Convert::ToInt32(nud_xp->get_Value());

					experience->adjust_xp(-adjust_value);

					nud_xp->set_Text(S"0");

					tabp_xp->Refresh();
				}

		System::Void btn_unequip_Click(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void ckb_buy_free_CheckedChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void ckb_disable_feats_CheckedChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void ckb_domain_enforce_CheckedChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void ckb_enforce_max_skills_CheckedChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void ckb_language_negative_CheckedChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void ckb_masterwork_CheckedChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void ckb_negative_feats_CheckedChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void comb_feature_type_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void comb_item_magic_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void comb_item_type_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void comb_race_selector_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void comb_spell_level_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}

		System::Void comb_classes_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
				{
				}





		System::Void mnui_load_Click(System::Object *  sender, System::EventArgs *  e)
				{
					//StreamReader* ts;

					try
					{

						ofd_load->CheckFileExists = true;

						ofd_load->CheckPathExists = true;

						ofd_load->DefaultExt = S"xml";

						ofd_load->DereferenceLinks = true;

						ofd_load->Filter = S"XML files (*.xml)|*.xml|All files (*.*)|*.*";

						ofd_load->Multiselect = false;

						ofd_load->RestoreDirectory = true;

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

		System::Void ofd_load_FileOk(System::Object *  sender, System::ComponentModel::CancelEventArgs *  e)
				{
					if (MessageBox::Show(S"Do you want to open a new file?", this->Text, MessageBoxButtons::YesNo, MessageBoxIcon::Question) != DialogResult::Yes) 
						e->Cancel = true;
				}
		System::Void ofd_load_HelpRequest(System::Object *  sender, System::EventArgs *  e)
				{
			 			MessageBox::Show(S"Please select your character file (*.xml)", this->Text, MessageBoxButtons::OK, MessageBoxIcon::Information);
				}

		System::Void mnui_save_Click(System::Object *  sender, System::EventArgs *  e)
				{
					//StreamWriter* sw;

					physical* physical_prop = character_details->get_physical();

					physical_prop->set_char_name((char*)(void*)Marshal::StringToHGlobalAnsi(txtb_characters_name->get_Text()));
					physical_prop->set_player_name((char*)(void*)Marshal::StringToHGlobalAnsi(txtb_players_name->get_Text()));
					physical_prop->set_alignment((char*)(void*)Marshal::StringToHGlobalAnsi(txtb_alignment->get_Text()));
					physical_prop->set_eyes((char*)(void*)Marshal::StringToHGlobalAnsi(txtb_eye_colour->get_Text()));
					physical_prop->set_gender((char*)(void*)Marshal::StringToHGlobalAnsi(comb_gender->get_Text()));
					physical_prop->set_hair((char*)(void*)Marshal::StringToHGlobalAnsi(txtb_hair_colour->get_Text()));
					char height[10];
					strcpy(height, (char*)(void*)Marshal::StringToHGlobalAnsi(nud_feet->get_Text()));
					strcat(height, "\' ");
					strcat(height, (char*)(void*)Marshal::StringToHGlobalAnsi(nud_inches->get_Text()));
					strcat(height, "\"");
                    physical_prop->set_height(height);
					physical_prop->set_weight((char*)(void*)Marshal::StringToHGlobalAnsi(nud_weight->get_Text()));

					try
					{
						sfd_save->AddExtension = true;

						sfd_save->CheckPathExists = true;
						//  The default is false.
						sfd_save->CreatePrompt = false;
						//  The default is true.
						sfd_save->OverwritePrompt = true;
						//  The default is true.
						sfd_save->ValidateNames = true;
						//  The default is false.
						sfd_save->ShowHelp = true;

						sfd_save->DefaultExt = S"xml";

						sfd_save->Filter = S"d20 files (*.d20)|*.d20|All files (*.*)|*.*";
						
						sfd_save->FilterIndex = 1;

						if (sfd_save->ShowDialog() == DialogResult::OK) 
						{
							String *FileName = sfd_save->get_FileName();
							//sw = new StreamWriter(FileName);
							//sw->Write(txtFileContents->Text);
							character_details->save_character((char*)(void*)Marshal::StringToHGlobalAnsi(FileName));
						}
					}
					catch (Exception* exp)
					{
						MessageBox::Show(exp->Message, this->Text, MessageBoxButtons::OK, MessageBoxIcon::Error);
					}
					/*__finally
					{
						if (sw) 
							sw->Close();
					}*/
				}

	private: System::Void tabc_Selected_Index_Changed(System::Object *  sender, System::EventArgs *  e)
			 {
				 class_list* char_class_list = character_details->get_my_classes();

                 if (char_class_list->get_num_solid() == 0)
				 {
					if (tabc_character->get_SelectedIndex() != 0)
						tabc_character->set_SelectedIndex(0);
				 }
			 }

private: System::Void tabp_class_Paint(System::Object *  sender, System::Windows::Forms::PaintEventArgs *  e)
		 {
			class_list* my_classes = character_details->get_my_classes();

			lstv_class_level->Clear();

			lstv_class_level->Columns->Add(S"Class Name",115, HorizontalAlignment::Left);
			lstv_class_level->Columns->Add(S"Level", 50, HorizontalAlignment::Center);
			lstv_class_level->BeginUpdate();
			for (int i=0;i<my_classes->get_num_classes();i++)
			{
				char char_class_name[128];
				strcpy(char_class_name, my_classes->get_class(i));
				String *class_name = new String(char_class_name);
				ListViewItem* class_item = new ListViewItem(class_name);
				class_item->SubItems->Add(my_classes->get_num_specific_class(char_class_name).ToString());
				lstv_class_level->Items->Add(class_item);
			}
			lstv_class_level->EndUpdate();

		 }

private: System::Void tabp_abilities_Paint(System::Object *  sender, System::Windows::Forms::PaintEventArgs *  e)
		 {
			 char_int_group* abilities = character_details->get_abilities();
			 int value;

			 value = abilities->get_value("Strength");
			 txt_str_total->set_Text(value.ToString());
			 value = abilities->get_value("Strength>Modifier");
			 txt_str_mods->set_Text(value.ToString());
			 value = abilities->get_value("Strength>Racial Modifier");
			 txt_str_race->set_Text(value.ToString());
			 value = abilities->get_value("Strength") - abilities->get_value("Strength>Racial Modifier") - abilities->get_value("Strength>Base Value");
			 txt_str_misc->set_Text(value.ToString());

			 value = abilities->get_value("Dexterity");
			 txt_dex_total->set_Text(value.ToString());
			 value = abilities->get_value("Dexterity>Modifier");
			 txt_dex_mods->set_Text(value.ToString());
			 value = abilities->get_value("Dexterity>Racial Modifier");
			 txt_dex_race->set_Text(value.ToString());
			 value = abilities->get_value("Dexterity") - abilities->get_value("Dexterity>Racial Modifier") - abilities->get_value("Dexterity>Base Value");
			 txt_dex_misc->set_Text(value.ToString());

			 value = abilities->get_value("Intelligence");
			 txt_int_total->set_Text(value.ToString());
			 value = abilities->get_value("Intelligence>Modifier");
			 txt_int_mods->set_Text(value.ToString());
			 value = abilities->get_value("Intelligence>Racial Modifier");
			 txt_int_race->set_Text(value.ToString());
			 value = abilities->get_value("Intelligence") - abilities->get_value("Intelligence>Racial Modifier") - abilities->get_value("Intelligence>Base Value");
			 txt_int_misc->set_Text(value.ToString());

			 value = abilities->get_value("Constitution");
			 txt_con_total->set_Text(value.ToString());
			 value = abilities->get_value("Constitution>Modifier");
			 txt_con_mods->set_Text(value.ToString());
			 value = abilities->get_value("Constitution>Racial Modifier");
			 txt_con_race->set_Text(value.ToString());
			 value = abilities->get_value("Constitution") - abilities->get_value("Constitution>Racial Modifier") - abilities->get_value("Constitution>Base Value");
			 txt_con_misc->set_Text(value.ToString());

			 value = abilities->get_value("Charisma");
			 txtb_cha_total->set_Text(value.ToString());
			 value = abilities->get_value("Charisma>Modifier");
			 txtb_cha_mods->set_Text(value.ToString());
			 value = abilities->get_value("Charisma>Racial Modifier");
			 txtb_cha_race->set_Text(value.ToString());
			 value = abilities->get_value("Charisma") - abilities->get_value("Charisma>Racial Modifier") - abilities->get_value("Charisma>Base Value");
			 txtb_cha_misc->set_Text(value.ToString());

			 value = abilities->get_value("Wisdom");
			 txtb_wis_total->set_Text(value.ToString());
			 value = abilities->get_value("Wisdom>Modifier");
			 txtb_wis_mods->set_Text(value.ToString());
			 value = abilities->get_value("Wisdom>Racial Modifier");
			 txtb_wis_race->set_Text(value.ToString());
			 value = abilities->get_value("Wisdom") - abilities->get_value("Wisdom>Racial Modifier") - abilities->get_value("Wisdom>Base Value");
			 txtb_wis_misc->set_Text(value.ToString());
		 }

private: System::Void d2o_characters_Paint(System::Object *  sender, System::Windows::Forms::PaintEventArgs *  e)
		 {
			int value;

			// Display values
			char_int_group* abilities = character_details->get_abilities();

			// Change Strength Value
			value = abilities->get_value("Strength");
			txtb_ability_score_str->set_Text(value.ToString());
			value = abilities->get_value("Strength>Modifier");
			txtb_ability_modifier_str->set_Text(value.ToString());

			value = abilities->get_value("Dexterity");
			txtb_ability_score_dex->set_Text(value.ToString());
			value = abilities->get_value("Dexterity>Modifier");
			txtb_ability_modifier_dex->set_Text(value.ToString());

			value = abilities->get_value("Constitution");
			txtb_ability_score_con->set_Text(value.ToString());
			value = abilities->get_value("Constitution>Modifier");
			txtb_ability_modifier_con->set_Text(value.ToString());

			value = abilities->get_value("Intelligence");
			txtb_ability_score_int->set_Text(value.ToString());
			value = abilities->get_value("Intelligence>Modifier");
			txtb_ability_modifier_int->set_Text(value.ToString());

			value = abilities->get_value("Wisdom");
			txtb_ability_score_wis->set_Text(value.ToString());
			value = abilities->get_value("Wisdom>Modifier");
			txtb_ability_modifier_wis->set_Text(value.ToString());

			value = abilities->get_value("Charisma");
			txtb_ability_score_cha->set_Text(value.ToString());
			value = abilities->get_value("Charisma>Modifier");
			txtb_ability_modifier_cha->set_Text(value.ToString());

			char_int_group* combat = character_details->get_combat_stats();
			value = combat->get_value("Hit Points");
			txtb_display_total_hp->set_Text(value.ToString());

			physical* physical_prop = character_details->get_physical();
			race* racial = character_details->get_racial();

			if (physical_prop->get_alignment() != NULL)
			{
				char alignment_char[128];
				strcpy(alignment_char, physical_prop->get_alignment());
				String *alignment_string = new String(alignment_char);
				txtb_alignment->set_Text(alignment_string);
			}

			if (racial->get_name() != NULL)
			{
				char race_char[128];
				strcpy(race_char, racial->get_name());
				String *race_string = new String(race_char);
				txtb_race->set_Text(race_string);
			}

			if (racial->get_name() != NULL)
			{
				char body_size[128];
				strcpy(body_size, racial->get_size());
				String *body_string = new String(body_size);
				txtb_size->set_Text(body_string);
			}

			// Level info
			class_list* my_classes = character_details->get_my_classes();

			txtb_level->set_Text(my_classes->get_total_level().ToString());

			comb_classes->Items->Clear();
			for (int i=0; i<my_classes->get_num_unique();i++)
			{
                char new_class[128];
				strcpy(new_class, my_classes->get_unique_class(i));
				String* new_class_string = new String(new_class);
				comb_classes->Items->Add(new_class_string);
			}
			if (comb_classes->Items->get_Count() > 0)
			{
				comb_classes->set_SelectedIndex(0);
			}

		 }

private: System::Void tabp_skills_Paint(System::Object *  sender, System::Windows::Forms::PaintEventArgs *  e)
		 {
			
			char_int_group* skills = character_details->get_skills();

			txtb_skill_points->set_Text(character_details->get_num_skill_points().ToString());

			lstv_skills->BeginUpdate();

			//lstv_skills->Items->Clear();
			for (int i=0; i<skills->get_num_pairs();i++)
			{
				//char char_skill_name[128];
				//strcpy(char_skill_name, skills->get_pointer(i)->get_name());
				//String *skill_name = new String(char_skill_name);
				//ListViewItem* skill = new ListViewItem(skill_name);
				ListViewItem* skill = lstv_skills->Items->get_Item(i);
				skill->SubItems->RemoveAt(1);
				skill->SubItems->RemoveAt(1);
				skill->SubItems->RemoveAt(1);
				skill->SubItems->Add(skills->get_value(i).ToString());
				//skill->SubItems->Insert(1, total);
				skill->SubItems->Add(skills->get_pointer(i)->get_modifier("Ability Modifier").ToString());
				skill->SubItems->Add(skills->get_pointer(i)->get_modifier("Ranks").ToString());

				//lstv_skills->Items->Add(skill);
			}

			lstv_skills->EndUpdate();
			 
			if (lstv_skills->get_SelectedItems()->get_Count() == 0)
			{
				btn_add_skill->set_Enabled(false);
				btn_remove_skill->set_Enabled(false);
			}
			else
			{
				btn_add_skill->set_Enabled(true);
				btn_remove_skill->set_Enabled(true);
			}
		 }

private: System::Void lstv_skills_SelectedIndexChanged(System::Object *  sender, System::EventArgs *  e)
		 {
			if (lstv_skills->get_SelectedItems()->get_Count() == 0)
			{
				btn_add_skill->set_Enabled(false);
				btn_remove_skill->set_Enabled(false);
			}
			else
			{
				btn_add_skill->set_Enabled(true);
				btn_remove_skill->set_Enabled(true);
			}
		 }



private: System::Void tabp_stats_Paint(System::Object *  sender, System::Windows::Forms::PaintEventArgs *  e)
		 {
			char_int_group* combat_stats = character_details->get_combat_stats();
			int total, feat, magic, mod, base, race_val, misc, armor, natural;

			// Get values for all the initiative text boxes
			total = combat_stats->get_value("Initiative");
			txtb_init_total->set_Text(total.ToString());
			feat = combat_stats->get_pointer("Initiative")->get_modifier("Feat Modifier");
			txtb_init_feats->set_Text(feat.ToString());
			magic = combat_stats->get_pointer("Initiative")->get_modifier("Magic Modifier");
			txtb_init_magic->set_Text(magic.ToString());
			mod = total - feat - magic - combat_stats->get_pointer("Initiative")->get_modifier("User Modifier");
			txtb_init_mod->set_Text(mod.ToString());

			// Get values for all the fortitude text boxes
			total = combat_stats->get_value("Fortitude Save");
			txtb_fort_total->set_Text(total.ToString());
			base = combat_stats->get_pointer("Fortitude Save")->get_modifier("Base Value");
			txtb_fort_base->set_Text(base.ToString());
			magic = combat_stats->get_pointer("Fortitude Save")->get_modifier("Magic Modifier");
			txtb_fort_magic->set_Text(magic.ToString());
			mod = total - base - magic - combat_stats->get_pointer("Fortitude Save")->get_modifier("User Modifier");
			txtb_fort_mod->set_Text(mod.ToString());
			race_val = combat_stats->get_pointer("Fortitude Save")->get_modifier("Race Modifier");
			txtb_fort_race->set_Text(race_val.ToString());
			misc = 0;
			txtb_fort_misc->set_Text(misc.ToString());

			// Get values for all the reflex text boxes
			total = combat_stats->get_value("Reflex Save");
			txtb_ref_total->set_Text(total.ToString());
			base = combat_stats->get_pointer("Reflex Save")->get_modifier("Base Value");
			txtb_ref_base->set_Text(base.ToString());
			magic = combat_stats->get_pointer("Reflex Save")->get_modifier("Magic Modifier");
			txtb_ref_magic->set_Text(magic.ToString());
			mod = total - base - magic - combat_stats->get_pointer("Reflex Save")->get_modifier("User Modifier");
			txtb_ref_mod->set_Text(mod.ToString());
			race_val = combat_stats->get_pointer("Reflex Save")->get_modifier("Race Modifier");
			txtb_ref_race->set_Text(race_val.ToString());
			misc = 0;
			txtb_ref_misc->set_Text(misc.ToString());

			// Get values for all the will text boxes
			total = combat_stats->get_value("Will Save");
			txtb_will_total->set_Text(total.ToString());
			base = combat_stats->get_pointer("Will Save")->get_modifier("Base Value");
			txtb_will_base->set_Text(base.ToString());
			magic = combat_stats->get_pointer("Will Save")->get_modifier("Magic Modifier");
			txtb_will_magic->set_Text(magic.ToString());
			mod = total - base - magic - combat_stats->get_pointer("Will Save")->get_modifier("User Modifier");
			txtb_will_mod->set_Text(mod.ToString());
			race_val = combat_stats->get_pointer("Will Save")->get_modifier("Race Modifier");
			txtb_will_race->set_Text(race_val.ToString());
			misc = 0;
			txtb_will_misc->set_Text(misc.ToString());

			// Get values for all the armor class text boxes
			total = combat_stats->get_value("Armor Class");
			txtb_ac_total->set_Text(total.ToString());
			base = combat_stats->get_pointer("Armor Class")->get_modifier("Base Value");
			txtb_ac_base->set_Text(base.ToString());
			magic = combat_stats->get_pointer("Armor Class")->get_modifier("Magic Modifier");
			txtb_ac_magic->set_Text(magic.ToString());
			mod = total - base - magic - combat_stats->get_pointer("Armor Class")->get_modifier("User Modifier");
			txtb_ac_mod->set_Text(mod.ToString());
			misc = 0;
			txtb_ac_misc->set_Text(misc.ToString());
			armor = combat_stats->get_pointer("Armor Class")->get_modifier("Armor Modifier");
			txtb_ac_armor->set_Text(armor.ToString());
            natural = combat_stats->get_pointer("Armor Class")->get_modifier("Natural Modifier");
			txtb_ac_natural->set_Text(natural.ToString());

			// Get values for all the melee text boxes
			total = combat_stats->get_value("Melee");
			txtb_melee_total->set_Text(total.ToString());
			base = combat_stats->get_pointer("Melee")->get_modifier("Base Value");
			txtb_melee_base_total->set_Text(base.ToString());
			mod = total - base - magic - combat_stats->get_pointer("Melee")->get_modifier("User Modifier");
			txtb_melee_mod->set_Text(mod.ToString());
			misc = 0;
			txtb_melee_misc->set_Text(misc.ToString());
			armor = combat_stats->get_pointer("Melee")->get_modifier("Size Modifier");
			txtb_melee_size->set_Text(armor.ToString());

			// Get values for all the Ranged text boxes
			total = combat_stats->get_value("Ranged");
			txtb_ranged_total->set_Text(total.ToString());
			base = combat_stats->get_pointer("Ranged")->get_modifier("Base Value");
			txtb_ranged_base_total->set_Text(base.ToString());
			mod = total - base - magic - combat_stats->get_pointer("Ranged")->get_modifier("User Modifier");
			txtb_ranged_mod->set_Text(mod.ToString());
			misc = 0;
			txtb_ranged_misc->set_Text(misc.ToString());
			armor = combat_stats->get_pointer("Ranged")->get_modifier("Size Modifier");
			txtb_ranged_size->set_Text(armor.ToString());

			race* racial = character_details->get_racial();

			if (racial->get_base_speed() != NULL)
			{
				txtb_base_speed->set_Text(racial->get_base_speed().ToString());
			}
		 }

private: System::Void tabp_feats_Paint(System::Object *  sender, System::Windows::Forms::PaintEventArgs *  e)
		 {
			feat_list* feat = character_details->get_feats();

			txtb_feat_points->set_Text(character_details->get_num_feat_points().ToString());

			lstv_feats_known->BeginUpdate();
			lstv_feats_known->Clear();
			lstv_feats_known->Columns->Add(S"Feats Known", 220, HorizontalAlignment::Left);
			for (int i=0; i<feat->get_num_feats();i++)
			{
				char feat_name_char[128];
				strcpy(feat_name_char, feat->get_feat_name(i));
				String *feat_name_string = new String(feat_name_char);
				lstv_feats_known->Items->Add(feat_name_string);
			}
			lstv_feats_known->EndUpdate();
		 }

private: System::Void tabp_spells_Paint(System::Object *  sender, System::Windows::Forms::PaintEventArgs *  e)
		 {
			Spell_list* spell = character_details->get_spells();

			//txtb_spell_points->set_Text(character_details->get_num_spell_points().ToString());

			lstv_spells_known->BeginUpdate();
			lstv_spells_known->Clear();
			lstv_spells_known->Columns->Add(S"Spells Known", 220, HorizontalAlignment::Left);
			for (int i=0; i<spell->get_num_spells();i++)
			{
				char spell_name_char[128];
				strcpy(spell_name_char, spell->get_spell_name(i));
				String *spell_name_string = new String(spell_name_char);
				lstv_spells_known->Items->Add(spell_name_string);
			}
			lstv_spells_known->EndUpdate();
		 }

private: System::Void tabp_xp_Paint(System::Object *  sender, System::Windows::Forms::PaintEventArgs *  e)
		 {
			xp* experience = character_details->get_xp();

			txtb_xp_total->set_Text(experience->get_xp().ToString());

			char_int_group* combat = character_details->get_combat_stats();
			int value;

			value = combat->get_value("Hit Points");
			txtb_hp->set_Text(value.ToString());
			

		 }

private: System::Void tabp_bio_Paint(System::Object *  sender, System::Windows::Forms::PaintEventArgs *  e)
		 {

		 }

private: System::Void tabp_languages_Paint(System::Object *  sender, System::Windows::Forms::PaintEventArgs *  e)
		 {
			char_int_group* skills = character_details->get_skills();
			race* race_info = character_details->get_racial();

            txtb_language_skill_points->set_Text(skills->get_pointer("Speak Language")->get_modifier("Ranks").ToString());
			txtb_language_points->set_Text(character_details->get_num_language_points().ToString());

			lstv_languages_known->BeginUpdate();
			lstv_languages_known->Clear();
			lstv_languages_known->Columns->Add(S"Languages Known", 220, HorizontalAlignment::Left);
			for(int i=0;i<race_info->get_languages_choice_length();i++)
			{
				char language_name[128];
				strcpy(language_name, race_info->get_languages_choice()[i]);
				String* language_string = new String(language_name);
				lstv_languages_known->Items->Add(language_string);
			}
			lstv_languages_known->EndUpdate();
		 }

private: System::Void btn_hp_apply_Click(System::Object *  sender, System::EventArgs *  e)
		 {
			class_list* my_classes = character_details->get_my_classes();
			int die, value;

			if (my_classes->get_num_classes() > 0)
			{
				die = my_classes->get_tail()->get_hit_die();
				if (die != 0)
				{
					value = character_details->roll_dice(die);

					char_int_group* combat = character_details->get_combat_stats();
					char level_char[128];
					strcpy(level_char, "Level Upgrade ");
					strcat(level_char, int_to_string(my_classes->get_total_level()));
					combat->get_pointer("Hit Points")->add_modifier(level_char, value);
				}
				this->Refresh();
			}
		 }

};



}
