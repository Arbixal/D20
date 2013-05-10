/*********************************************************\
* char_class.h                                            *
* ============                                            *
* Project: D20 Character Generation                       *
* Created By: Mark Hellmund                               *
* Last Edited By:Mark Hellmund		                      *
* Last Edited:10/10/04				                      *
* Description: Functions to manipulate the character      *
*									                      *
\*********************************************************/

#ifndef _CHAR_CLASS_H_
#define _CHAR_CLASS_H_
class char_class
{
private:
char* name;
char* primary_ability;
char* special_feats;
char* class_skills;
int level;
int hit_die;
int base_attack;
int skill_points;
int spells_day;
int spells_known;
int skills;
int feats;
bool save_fortitude;
bool save_reflex;
bool save_will;

public:
char_class();
~char_class();
void set_name(char* c_name);
void set_primary_ability(char* c_primary_ability);
void set_special_feats(char* c_special_feats);
void set_class_skills(char* c_class_skills);
void set_level(int c_level);
void set_hit_die(int c_hit_die);
void set_base_attack(int c_base_attack);
void set_skill_points(int c_skill_points);
void set_spells_day(int c_spells_day);
void set_spells_known(int c_spells_known);
void set_feats(int c_feats);
void set_skills(int c_skills);
void set_save_fortitude(bool c_save_fortitude);
void set_save_reflex(bool c_save_reflex);
void set_save_will(bool c_save_will);

char* get_name();
char* get_primary_ability();
char* get_special_feats();
char* get_class_skills();
int get_level();
int get_hit_die();
int get_base_attack();
int get_skill_points();
int get_spells_day();
int get_spells_known();
int get_feats();
int get_skills();
bool get_save_fortitude();
bool get_save_reflex();
bool get_save_will();

void write_to_file(char* handle);
bool read_from_file(char* handle);
bool read_from_xml(char* filename, char* class_name);

};

#endif