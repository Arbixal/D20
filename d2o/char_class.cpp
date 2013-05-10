/*********************************************************\
* char_class.cpp                                          *
* ============                                            *
* Project: D20 Character Generation                       *
* Created By: Mark Hellmund                               *
* Last Edited By:Mark Hellmund		                      *
* Last Edited:10/10/04				                      *
* Description: Functions to manipulate the character      *
*									                      *
\*********************************************************/

//#include <fstream>
//#include <iostream>
//#include <cstring>
#include "stdafx.h"
#include <atlstr.h>
#using <mscorlib.dll>
#using <System.xml.dll>
using namespace std;
using namespace System;
using namespace System::Xml;

#include "char_class.h"

char_class::char_class()
{
name=NULL;
primary_ability=NULL;
special_feats=NULL;
class_skills=NULL;

}

char_class::~char_class()
{
	if(name != NULL)
		delete [] name;
	if(primary_ability != NULL)
		delete [] primary_ability;
	if(special_feats != NULL)
		delete [] special_feats;
	if(class_skills != NULL)
		delete [] class_skills;

}

void char_class::set_name(char* c_name)
{
	if (name != NULL)
		delete [] name;
	name = new char[strlen(c_name)+1];
	strcpy(name, c_name);
}

void char_class::set_primary_ability(char* c_primary_ability)
{
	if (primary_ability != NULL)
		delete [] primary_ability;
	primary_ability= new char[strlen(c_primary_ability)+1];
	strcpy(primary_ability,c_primary_ability);
}


void char_class::set_special_feats(char* c_special_feats)
{
	if (special_feats != NULL)
		delete [] special_feats;
	special_feats = new char[strlen(c_special_feats)+1];
	strcpy(special_feats,c_special_feats);
}

void char_class::set_class_skills(char* c_class_skills)
{
	if (class_skills != NULL)
		delete [] class_skills;
	class_skills = new char[strlen(c_class_skills)+1];
	strcpy(class_skills,c_class_skills);
}


void char_class::set_level(int c_level)
{
	level=c_level;
}

void char_class::set_hit_die(int c_hit_die)
{
	hit_die=c_hit_die;
}

void char_class::set_base_attack(int c_base_attack)
{
	base_attack=c_base_attack;
}

void char_class::set_skill_points(int c_skill_points)
{
	skill_points=c_skill_points;
}

void char_class::set_spells_day(int c_spells_day)
{
	spells_day=c_spells_day;
}

void char_class::set_spells_known(int c_spells_known)
{
	spells_known=c_spells_known;
}

void char_class::set_feats(int c_feats)
{
	feats=c_feats;
}

void char_class::set_skills(int c_skills)
{
	skills=c_skills;
}


void char_class::set_save_fortitude(bool c_save_fortitude)
{
	save_fortitude=c_save_fortitude;
}

void char_class::set_save_reflex(bool c_save_reflex)
{
	save_reflex=c_save_reflex;
}

void char_class::set_save_will(bool c_save_will)
{
	save_will=c_save_will;
}

char* char_class::get_name()
{
	return name;
}

char* char_class::get_primary_ability()
{
	return primary_ability;
}

char* char_class::get_special_feats()
{
	return special_feats;
}

char* char_class::get_class_skills()
{
	return class_skills;
}

int char_class::get_level()
{
	return level;
}

int char_class::get_hit_die()
{
	return hit_die;
}

int char_class::get_base_attack()
{
	return base_attack;
}

int char_class::get_skill_points()
{
	return skill_points;
}

int char_class::get_spells_day()
{
	return spells_day;
}

int char_class::get_spells_known()
{
	return spells_known;
}

int char_class::get_feats()
{
	return feats;
}

int char_class::get_skills()
{
	return skills;
}


bool char_class::get_save_fortitude()
{
	return save_fortitude;
}

bool char_class::get_save_reflex()
{
	return save_reflex;
}

bool char_class::get_save_will()
{
	return save_will;
}







	

void char_class::write_to_file(char* filehandle)
{

	ofstream fout;
	fout.open(filehandle);
	if(!fout)
	{
		//cerr<<"couldn't open "<<filehandle<<"for reading"<<endl;
		exit(0);
	}

	fout<<name<<endl;
	fout<<primary_ability<<endl;
	fout<<name<<endl;
	fout<<primary_ability<<endl;
	fout<<special_feats<<endl;
	fout<<class_skills<<endl;
	fout<<level<<endl;
	fout<<hit_die<<endl;
	fout<<base_attack<<endl;
	fout<<skill_points<<endl;
	fout<<spells_day<<endl;
	fout<<spells_known<<endl;
	fout<<feats<<endl;
	fout<<skills<<endl;
	fout<<save_fortitude<<endl;
	fout<<save_reflex<<endl;
	fout<<save_will<<endl;

	fout.close();
}

bool char_class::read_from_file(char* filehandle)
{
	
	char buffer[128];
	ifstream fin;
	fin.open(filehandle);
	if (!fin)
	{
		//cerr<<"couldn't open "<<filehandle<<"for reading"<<endl;
		return false;
	}
	
	
	
		fin.getline(buffer,128);
		this->set_name(buffer);

		fin.getline(buffer,128);
		this->set_primary_ability(buffer);
	
		fin.getline(buffer,128);
		this->set_special_feats(buffer);
	
		fin.getline(buffer,128);
		this->set_class_skills(buffer);
	
		fin.getline(buffer,128);
		this->set_level(atoi(buffer));
	
		fin.getline(buffer,128);
		this->set_hit_die(atoi(buffer));
	
		fin.getline(buffer,128);
		this->set_skill_points(atoi(buffer));
	
		fin.getline(buffer,128);
		this->set_spells_day(atoi(buffer));	

		fin.getline(buffer,128);
		this->set_spells_known(atoi(buffer));

		fin.getline(buffer,128);
		this->set_feats(atoi(buffer));

		fin.getline(buffer,128);
		this->set_skills(atoi(buffer));

		fin.getline(buffer,128);
		this->set_save_fortitude(atoi(buffer));
		save_fortitude=atoi(buffer);
	
		fin.getline(buffer,128);
		this->set_save_reflex(atoi(buffer));

		fin.getline(buffer,128);
		this->set_save_will(atoi(buffer));
	
	fin.close();
	return true;
}


bool char_class::read_from_xml(char* filename, char* class_name)
{
  try
  {
	 //Reading from a file with XML
     XmlTextReader* reader = new XmlTextReader(filename);
     String* namestring;

	 int complete;
	 complete = 0;

     while(reader ->Read())
     {
		 if(!complete)
		 {
			 if(XmlNodeType::Element == reader->NodeType)
			 {
				 namestring = reader->Name;
				 if(strcmp((CString)namestring,"Name")==0)
				 {
					 //get name element
					 reader ->Read();

					 //test if it is the desired class
					 if(strcmp((CString)reader->Value,class_name)==0)
					 {
						 if (name != NULL)
								   delete [] name;
						 name = new char[reader->Value->Length+1];
						 strcpy(name,(CString)reader->Value);
						 //Get the rest of the data.
						 reader->Read(); //end of name element
                         reader->Read(); //newline
						 reader->Read(); //next element name
						 namestring = reader->Name;

						 if(strcmp((CString)namestring,"primaryAbility")==0)
						 {
				             reader->Read(); //text or end element
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   if (primary_ability != NULL)
								   delete [] primary_ability;
							   primary_ability = new char[reader->Value->Length+1];
							   strcpy(primary_ability,(CString)reader->Value);
							   reader->Read(); //endElement
							   reader->Read(); //newline
							   reader->Read(); //next element
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"specialFeats")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read(); //newline
							     reader->Read(); //next element
							 }
							 else
							 {
							   if (special_feats != NULL)
								   delete [] special_feats;
							   special_feats = new char[reader->Value->Length+1];
							   strcpy(special_feats,(CString)reader->Value);
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"classSkills")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read(); //endElement
							     reader->Read();
							 }
							 else
							 {
							   if (class_skills != NULL)
								   delete [] class_skills;
							   class_skills = new char[reader->Value->Length+1];
                               strcpy(class_skills,(CString)reader->Value);
							   reader->Read(); //endElement
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"level")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
                               level = atoi((CString)reader->Value);
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"hitDie")==0)
						 {
				             reader->Read();
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   hit_die = atoi((CString)reader->Value);
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"baseAttack")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   base_attack = atoi((CString)reader->Value);
							   reader->Read(); 
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"skillPoints")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   skill_points = atoi((CString)reader->Value);
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
 						 if(strcmp((CString)namestring,"spellsDay")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   spells_day = atoi((CString)reader->Value);
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
  						 if(strcmp((CString)namestring,"spellsKnown")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   spells_known = atoi((CString)reader->Value);
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
   						 if(strcmp((CString)namestring,"skills")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   skills = atoi((CString)reader->Value);
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
    					 if(strcmp((CString)namestring,"feats")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   feats = atoi((CString)reader->Value);
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
    					 if(strcmp((CString)namestring,"saveFortitude")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   save_fortitude = (bool)(atoi((CString)reader->Value));
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
    					 if(strcmp((CString)namestring,"saveReflex")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   save_reflex = (bool)(atoi((CString)reader->Value));
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
    						 if(strcmp((CString)namestring,"saveWill")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   save_will = (bool)(atoi((CString)reader->Value));
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 complete = 1;
					 }
				 }
			 }
       }
	}
  }
  catch(...)
  {
	  return false;
  }
  return true;
}



/*
int main()
{
	char_class temp;
	/*temp.set_name("c_name");
	temp.set_primary_ability("c_primary_ability");
	temp.set_special_feats("c_special_feats");
	temp.set_class_skills("c_class_skills");
	temp.set_level(1);
	temp.set_hit_die(2);
	temp.set_base_attack(3);
	temp.set_skill_points(4);
	temp.set_spells_day(5);
	temp.set_spells_known(6);
	temp.set_feats(7);
	temp.set_skills(8);
	temp.set_save_fortitude(false);
	temp.set_save_reflex(true);
	temp.set_save_will(false);

	temp.write_to_file("char_class.txt");
	temp.read_from_file("char_class.txt");
	cout<<temp.get_name()<<endl;
	system("pause");
	return 0;
}
*/