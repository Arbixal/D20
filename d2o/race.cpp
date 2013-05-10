// The assignment of special and languages and language_choice needs to
// be finished sorry I will get it done as soon as I can.

//May need to edit the class so that I can find the length language arrays.
/***************************************
* Race.cpp                             *
* ========                             *
* Project: D20 Character Generation    *
* Created By: Michael Tonini           *
* Last Edited By: Michael Tonini       *
* Last Edited: 25/09/2004              *
* Description:  Contains the race class*
* This reads stores and manages race   *
* info.                                *
***************************************/
//SPECIAL NEEDS TO BE IMPLEMENTED
//READ FUNCTIONS DO NOT HANDLE SPECIAL WITH CONTENT ATM.
#include "stdafx.h"
#include "race.h"
#include "utilities.h"
//#include <iostream>
//#include <fstream>
//#include <cstring>
#include <atlstr.h>
#using <mscorlib.dll>
#using <System.xml.dll>
using namespace std;
using namespace System;
using namespace System::Xml;

/**************************************
* Race::Race ()                       *
* default constructor                 *
* no return                           *
**************************************/
race::race()
{
	name = NULL;
	size = NULL;
	base_speed = 0;
	languages = NULL;
	languages_choice = NULL;
	fav_class = NULL;
    special = NULL;
	dm_notes = NULL;
	languages_length = 0;
	languages_choice_length = 0;
}

/**************************************
* Race::Race (char*)                  *
* Initialisation constructor          *
* This constructor takes the racename *
* and searches the race file for the  *
* race name and sets all the content  *
* of the race. Fails if xml is will   *
* constructed                         *
* no return                           *
**************************************/
// The assignment of special  needs to
// be finished sorry I will get it done as soon as I can
race::race(char* racename)
{
  try
  {
	 //Reading from a file with XML
     XmlTextReader* reader = new XmlTextReader("race.xml");
     String* namestring;

	 int complete;
	 complete = 0;

     while(reader ->Read())
     {
		 if(complete == 0)
		 {
			 if(XmlNodeType::Element == reader->NodeType)
			 {
				 namestring = reader->Name;
				 if(strcmp((CString)namestring,"Name")==0)
				 {
					 //get name element
					 reader ->Read();

					 //test if it is the desired class
					 if(strcmp((CString)reader->Value,(CString)racename)==0)
					 {
						 name = new char[strlen(racename)+1];
						 strcpy(name,racename);
						 //Get the rest of the data.
						 reader->Read(); //end of name element
                         reader->Read(); //newline
						 reader->Read(); //next element name
						 namestring = reader->Name;

						 if(strcmp((CString)namestring,"size")==0)
						 {
				             reader->Read(); //text or end element
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   size = new char[reader->Value->Length+1];
							   strcpy(size,(CString)reader->Value);
							   reader->Read(); //endElement
							   reader->Read(); //newline
							   reader->Read(); //next element
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"BaseSpeed")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read(); //newline
							     reader->Read(); //next element
							 }
							 else
							 {
							   base_speed = atoi((CString)reader->Value);
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"languages")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read(); //endElement
							     reader->Read();
							 }
							 else
							 {
                               int start = 0;
							   int end = 0;
							   int count = 0;

							   //Count the number of languages
                               for(int i=0;i<reader->Value->Length;i++)
							   {
								   if(strcmp((CString)reader->Value->Substring(i,1),(CString)":") == 0)
									   count++;
							   }

							   //Set size of languages array.
                               languages = new char*[count+1];
                               languages_length=count+1;
							   //get languages
							   int item=0;
							   while(item < count+1)
							   {
								   //Set the start of the string to the end of the last string
								   start=end;
								   bool notfound = true;

                                   //if start is not at the start of the main string add one
								   //to skip the ':'.
								   if(start != 0)
									   start = end+1;
								   int j = start;
								   while(j<reader->Value->Length && notfound)
								   {
									   //if j has reached the end set end to j+1 and
									   //get the remaining language string.
									   if(j==reader->Value->Length-1)
									   {
										   end =j+1;
										   languages[item] = new char[end-start+1];
										   strcpy(languages[item],(CString)reader->Value->Substring(start,end-start));
										   notfound = false;
									   }
									   else if(strcmp((CString)reader->Value->Substring(j,1),(CString)":") == 0)
									   {
										   end = j;
										   languages[item] = new char[end-start+1];
										   strcpy(languages[item],(CString)reader->Value->Substring(start,end-start));
										   notfound = false;
									   }
									   j++;
								   }
								   item++;
							   }
							   reader->Read(); //endElement
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"languages_choice")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
                               int start = 0;
							   int end = 0;
							   int count = 0;

							   //Count the number of languages
                               for(int i=0;i<reader->Value->Length;i++)
							   {
								   if(strcmp((CString)reader->Value->Substring(i,1),(CString)":") == 0)
									   count++;
							   }

							   //Set size of languages array.
                               languages_choice = new char*[count+1];
                               //Set how many languages there are
							   languages_choice_length=count+1;
							   //get languages
							   int item=0;
							   while(item < count+1)
							   {
								   //Set the start of the string to the end of the last string
								   start=end;
								   bool notfound = true;

                                   //if start is not at the start of the main string add one
								   //to skip the ':'.
								   if(start != 0)
									   start = end+1;
								   int j = start;
								   while(j<reader->Value->Length && notfound)
								   {
									   //if j has reached the end set end to j+1 and
									   //get the remaining language string.
									   if(j==reader->Value->Length-1)
									   {
										   end =j+1;
										   languages_choice[item] = new char[end-start+1];
										   strcpy(languages_choice[item],(CString)reader->Value->Substring(start,end-start));
										   notfound = false;
									   }
									   else if(strcmp((CString)reader->Value->Substring(j,1),(CString)":") == 0)
									   {
										   end = j;
										   languages_choice[item] = new char[end-start+1];
										   strcpy(languages_choice[item],(CString)reader->Value->Substring(start,end-start));
										   notfound = false;
									   }
									   j++;
								   }
								   item++;
							   }
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"FavClass")==0)
						 {
				             reader->Read();
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   fav_class = new char[reader->Value->Length+1];
							   strcpy(fav_class,(CString)reader->Value);
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"Special")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"DmNotes")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   dm_notes = new char[reader->Value->Length+1];
							   strcpy(dm_notes,(CString)reader->Value);
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

	     /*switch(reader->NodeType)
	     {
	        case XmlNodeType::Element: namestring = reader->Name; //The node is an element
			                           if(namestring == S"Name")
			   //while(reader->MoveToNextAttribute())
			   //	   Console::Write("{0} = {1}\n",reader->Name,reader->Value);
			   //throw Exception345;
		    break;
		    case XmlNodeType::Text: //Display the text value in each element.
			   Console::Write("{0}\n",reader->Value);
		    break;
		    case XmlNodeType::EndElement: //Display the end element.
			   //if(String::Compare(reader->Name,(System::String *)"DataString1")==0) cout << "It worked!!!\n";
				   Console::Write("</{0}", reader->Name);
			   Console::WriteLine(">");
		   break;
	     }*/
       }
	}
     /*CString str3(teststring);
     printf(str3);
     strcpy(chararray,str3);
     cout << chararray << endl;*/
  }
  catch(...)
  {
	  //cerr << "Error ocurred in initialising function.\n";
  }

	/*char temp[256];
	char temp_Lang[256];
	//char temp_Lang_C[256];
	char c;
	int length;

	ifstream infile;
	infile.open(FILENAME);

	if(!infile)
		cerr << "Error opening race file.";

	//Check file syntax is correct. If racename
	//matches assign data else read to next !.
	infile >> c;
	if(c == '!')
	{
		while(infile)
		{
			c = 'a';
			infile.getline(temp,256);
			if(strcmp(temp,racename) == 0)
			{
				//Read in race details
				//Really crappy reading temporary while researching xml
				length = strlen(temp)+1;
				name = new char[length];
				strcpy(name,temp);

				infile.getline(temp,256);
				length = strlen(temp)+1;
				size = new char[length];
				strcpy(size,temp);

				infile.getline(temp,256);
				base_speed = atoi(temp);

				infile.getline(temp_Lang,256);

				//20 language limit for the prototype more crappy coding
				languages = new char*[20];
				for(int i=0;i<20;i++)
					languages[i]= NULL;
				languages[0] = new char[100];
				strcpy(languages[0],strtok(temp_Lang,":"));

				i=0;
				while(i < 3)
				{
				   cout << "loop";
			       i++;
				   languages[i]=strtok(NULL,":");
				}
			}
			else
				while(c != '!' && infile)
					infile >> c;
		}
		infile.close();
	}
	else
		cerr << "Race file is corrupt";*/

}

/**************************************
* Race::Race (char*,char*,int,char**, *
*           char**,char*,char**,char*)*
* no return                           *
* Initialisation constructor  2       *
* This constructor takes all the      *
* members of the race class and       *
* assigns them.                       *
**************************************/
race::race(char* nm,char* sz,int bs,char** lang,char** lang_c,char* fav_cl,char** spec,char* dn)
{
	name = nm;
	size = sz;
	base_speed = bs;
	languages = lang;
	languages_choice = lang_c;
	fav_class = fav_cl;
	special = spec;
	dm_notes = dn;
}

/**************************************
* Race::~Race ()                      *
* Destructor                          *
* No return                           *
**************************************/
race::~race()
{
	delete name;
	delete size;
	for (int i=0; i<languages_length; i++)
	{
		delete [] languages[i];
	}
    delete languages;
	for (int i=0; i<languages_choice_length; i++)
	{
		delete [] languages_choice[i];
	}
	delete languages_choice;
	delete fav_class;
    delete special;
	delete dm_notes;
}

/**************************************
* Race::get_name ()                   *
* return char* name of race name      *
**************************************/
char* race::get_name()
{
	return name;
}

/**************************************
* Race::get_size ()                   *
* return char* size of race           *
**************************************/
char* race::get_size()
{
	return size;
}

/**************************************
* Race::get_base_speed()              *
* return char* race base speed        *
**************************************/
int race::get_base_speed()
{
	return base_speed;
}

/**************************************
* Race::get_languages()               *
* return char* race languages         *
**************************************/
char** race::get_languages()
{
	return languages;
}

/**************************************
* Race::get_language_choice()         *
* return char* race language choice   *
**************************************/
char** race::get_languages_choice()
{
	return languages_choice;
}

/*********************************************************\
* void race::add_language(char*)                          *
* ------------------------------------------------------- *
* Created By: Michael Tonini                              *
* Last Edited By:                                         *
* Last Edited: 10/10/04                                   *
* Return Value: void                                      *
* Description: Adds a languages to the language_choice    *
* member.                                                 *
\*********************************************************/
void race::add_language(char* language)
{
   char** temp_language = new char*[languages_choice_length+1];

   for(int i=0;i<languages_choice_length;i++)
   {
	   temp_language[i] = new char[strlen(languages_choice[i])+1];
	   strcpy(temp_language[i],languages_choice[i]);
   }
   //copy in new string
   temp_language[languages_choice_length] = new char[strlen(language)+1];
   strcpy(temp_language[languages_choice_length],language);

   //delete old languages_choice
   for (int i=0; i<languages_choice_length; i++)
   {
      delete [] languages_choice[i];
   }
   delete languages_choice;

   //assign new string and add one to length
   languages_choice = temp_language;
   languages_choice_length++;
   
}

/**************************************
* Race::get_fav_class()               *
* return char* race favoured class    *
**************************************/
char* race::get_fav_class()
{
	return fav_class;
}

/**************************************
* Race::get_special ()                *
* return char* race special           *
**************************************/
char** race::get_special()
{
	return special;
}

/**************************************
* Race::get_dm_notes()                *
* return char* race dm notes          *
**************************************/
char* race::get_dm_notes()
{
	return dm_notes;
}

/**************************************
* int Race::get_languages_length()    *
* return int which is the number      *
* of languages in the languages array *
**************************************/
int race::get_languages_length()
{
	return languages_length;
}

/******************************************
* int Race::get_languages_choice_length() *
* return int which is the number          *
* of languages  in the languages_choice   *
* array.                                  *
******************************************/
int race::get_languages_choice_length()
{
	return languages_choice_length;
}

// need to add the finding the class too.
bool race::read_file(char* filename, char* racename)
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
					 if(strcmp((CString)reader->Value,racename)==0)
					 {
						 name = new char[reader->Value->Length+1];
						 strcpy(name,(CString)reader->Value);
						 //Get the rest of the data.
						 reader->Read(); //end of name element
                         reader->Read(); //newline
						 reader->Read(); //next element name
						 namestring = reader->Name;

						 if(strcmp((CString)namestring,"size")==0)
						 {//cout<<"HERE";
				             reader->Read(); //text or end element
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   size = new char[reader->Value->Length+1];
							   strcpy(size,(CString)reader->Value);
							   reader->Read(); //endElement
							   reader->Read(); //newline
							   reader->Read(); //next element
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"BaseSpeed")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read(); //newline
							     reader->Read(); //next element
							 }
							 else
							 {
							   base_speed = atoi((CString)reader->Value);
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"languages")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read(); //endElement
							     reader->Read();
							 }
							 else
							 {
                               int start = 0;
							   int end = 0;
							   int count = 0;

							   //Count the number of languages
                               for(int i=0;i<reader->Value->Length;i++)
							   {
								   if(strcmp((CString)reader->Value->Substring(i,1),(CString)":") == 0)
									   count++;
							   }

							   //Set size of languages array.
                               languages = new char*[count+1];
                               languages_length=count+1;
							   //get languages
							   int item=0;
							   while(item < count+1)
							   {
								   //Set the start of the string to the end of the last string
								   start=end;
								   bool notfound = true;

                                   //if start is not at the start of the main string add one
								   //to skip the ':'.
								   if(start != 0)
									   start = end+1;
								   int j = start;
								   while(j<reader->Value->Length && notfound)
								   {
									   //if j has reached the end set end to j+1 and
									   //get the remaining language string.
									   if(j==reader->Value->Length-1)
									   {
										   end =j+1;
										   languages[item] = new char[end-start+1];
										   strcpy(languages[item],(CString)reader->Value->Substring(start,end-start));
										   notfound = false;
									   }
									   else if(strcmp((CString)reader->Value->Substring(j,1),(CString)":") == 0)
									   {
										   end = j;
										   languages[item] = new char[end-start+1];
										   strcpy(languages[item],(CString)reader->Value->Substring(start,end-start));
										   notfound = false;
									   }
									   j++;
								   }
								   item++;
							   }
							   reader->Read(); //endElement
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"languages_choice")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
                               int start = 0;
							   int end = 0;
							   int count = 0;

							   //Count the number of languages
                               for(int i=0;i<reader->Value->Length;i++)
							   {
								   if(strcmp((CString)reader->Value->Substring(i,1),(CString)":") == 0)
									   count++;
							   }

							   //Set size of languages array.
                               languages_choice = new char*[count+1];
                               //Set how many languages there are
							   languages_choice_length=count+1;
							   //get languages
							   int item=0;
							   while(item < count+1)
							   {
								   //Set the start of the string to the end of the last string
								   start=end;
								   bool notfound = true;

                                   //if start is not at the start of the main string add one
								   //to skip the ':'.
								   if(start != 0)
									   start = end+1;
								   int j = start;
								   while(j<reader->Value->Length && notfound)
								   {
									   //if j has reached the end set end to j+1 and
									   //get the remaining language string.
									   if(j==reader->Value->Length-1)
									   {
										   end =j+1;
										   languages_choice[item] = new char[end-start+1];
										   strcpy(languages_choice[item],(CString)reader->Value->Substring(start,end-start));
										   notfound = false;
									   }
									   else if(strcmp((CString)reader->Value->Substring(j,1),(CString)":") == 0)
									   {
										   end = j;
										   languages_choice[item] = new char[end-start+1];
										   strcpy(languages_choice[item],(CString)reader->Value->Substring(start,end-start));
										   notfound = false;
									   }
									   j++;
								   }
								   item++;
							   }
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"FavClass")==0)
						 {
				             reader->Read();
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   fav_class = new char[reader->Value->Length+1];
							   strcpy(fav_class,(CString)reader->Value);
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"Special")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   reader->Read();
							   reader->Read();
							   reader->Read();
							 }
							 namestring = reader->Name;
						 }
						 if(strcmp((CString)namestring,"DmNotes")==0)
						 {
				             reader->Read(); //text
							 if(XmlNodeType::EndElement == reader->NodeType)
							 {
								 reader->Read();
							     reader->Read();
							 }
							 else
							 {
							   dm_notes = new char[reader->Value->Length+1];
							   strcpy(dm_notes,(CString)reader->Value);
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

	     /*switch(reader->NodeType)
	     {
	        case XmlNodeType::Element: namestring = reader->Name; //The node is an element
			                           if(namestring == S"Name")
			   //while(reader->MoveToNextAttribute())
			   //	   Console::Write("{0} = {1}\n",reader->Name,reader->Value);
			   //throw Exception345;
		    break;
		    case XmlNodeType::Text: //Display the text value in each element.
			   Console::Write("{0}\n",reader->Value);
		    break;
		    case XmlNodeType::EndElement: //Display the end element.
			   //if(String::Compare(reader->Name,(System::String *)"DataString1")==0) cout << "It worked!!!\n";
				   Console::Write("</{0}", reader->Name);
			   Console::WriteLine(">");
		   break;
	     }*/
       }
	}
     /*CString str3(teststring);
     printf(str3);
     strcpy(chararray,str3);
     cout << chararray << endl;*/
  }
  catch(...)
  {
	  return false;
  }

	/*char temp[256];
	char temp_Lang[256];
	//char temp_Lang_C[256];
	char c;
	int length;

	ifstream infile;
	infile.open(FILENAME);

	if(!infile)
		cerr << "Error opening race file.";

	//Check file syntax is correct. If racename
	//matches assign data else read to next !.
	infile >> c;
	if(c == '!')
	{
		while(infile)
		{
			c = 'a';
			infile.getline(temp,256);
			if(strcmp(temp,racename) == 0)
			{
				//Read in race details
				//Really crappy reading temporary while researching xml
				length = strlen(temp)+1;
				name = new char[length];
				strcpy(name,temp);

				infile.getline(temp,256);
				length = strlen(temp)+1;
				size = new char[length];
				strcpy(size,temp);

				infile.getline(temp,256);
				base_speed = atoi(temp);

				infile.getline(temp_Lang,256);

				//20 language limit for the prototype more crappy coding
				languages = new char*[20];
				for(int i=0;i<20;i++)
					languages[i]= NULL;
				languages[0] = new char[100];
				strcpy(languages[0],strtok(temp_Lang,":"));

				i=0;
				while(i < 3)
				{
				   cout << "loop";
			       i++;
				   languages[i]=strtok(NULL,":");
				}
			}
			else
				while(c != '!' && infile)
					infile >> c;
		}
		infile.close();
	}
	else
		cerr << "Race file is corrupt";*/


  return true;
}

bool race::write_file(char* filename)
{
   /*<d2o>
<Race>
<Name>Elf</Name>
<size>medium</size>
<BaseSpeed>30</BaseSpeed>
<languages>elvish:common</languages>
<languages_choice>druidic:common</languages_choice>
<FavClass>Druidic</FavClass>
<Special>Night Vision</Special>
<DmNotes>This is an elf</DmNotes>
</Race>*/
   try
   {
	  //Writing to a file with XML
      XmlTextWriter* DataWrite; // Performs the actual data write.

      // Create the data writer.
      DataWrite = new XmlTextWriter(filename,
                 System::Text::Encoding::ASCII);

      // Write the XML header.
      DataWrite->WriteStartDocument(true);
      DataWrite->WriteWhitespace("\r\n");

      // Describe the test file.
      DataWrite->WriteComment("Race Data");
      DataWrite->WriteWhitespace("\r\n");

      // Start the document.
	  DataWrite->WriteStartElement("d2o");
	  DataWrite->WriteWhitespace("\r\n");

	  DataWrite->WriteStartElement("Race");
	  DataWrite->WriteWhitespace("\r\n");

	  //add all elements from the race.
      DataWrite->WriteElementString("Name", name);
	  DataWrite->WriteWhitespace("\r\n");
	  DataWrite->WriteElementString("size", size);
	  DataWrite->WriteWhitespace("\r\n");
	  DataWrite->WriteElementString("BaseSpeed", int_to_string(base_speed));
	  DataWrite->WriteWhitespace("\r\n");

	  //loop languages
	  char* languagestring=NULL;
	  int length=0;
	  int count=0;
	  for(int i =0;i<languages_length;i++)
	  {
         count++;
		 length+=strlen(languages[i]);
	  }

	  length+=count; //add room for : and null
	  languagestring = new char[length];
	  for(i=0;i<languages_length;i++)
	  {
		  if(i==0)
		     strcpy(languagestring,languages[i]);
		  else
		     strcat(languagestring,languages[i]);
		  if(i!=languages_length-1)
			  strcat(languagestring,":");
	  }
      //cout << languagestring << endl;
	  //write the languagestring
	  DataWrite->WriteElementString("languages", languagestring);
	  DataWrite->WriteWhitespace("\r\n");
	  delete languagestring;

	  count=0;
	  length=0;
	  for(int i =0;i<languages_length;i++)
	  {
         count++;
		 length+=strlen(languages[i]);
	  }
	  length+=count; //add room for : and null
	  languagestring = new char[length];
	  for(i=0;i<length;i++)
	  {
		  languagestring[i]='\0';
	  }
	  for(i=0;i<languages_length;i++)
	  {
		  if(i==0)
		     strcpy(languagestring,languages[i]);
		  else
		     strcat(languagestring,languages[i]);
		  if(i!=languages_length-1)
			  strcat(languagestring,":");
	  }
	  DataWrite->WriteElementString("languages_choice", languagestring);
	  DataWrite->WriteWhitespace("\r\n");
	  delete languagestring;

	  DataWrite->WriteElementString("FavClass", fav_class);
	  DataWrite->WriteWhitespace("\r\n");

	  //Special needs to be modified.
	  DataWrite->WriteElementString("Special", "Need to be implemented");
	  DataWrite->WriteWhitespace("\r\n");

	  DataWrite->WriteElementString("DmNotes", dm_notes);
	  DataWrite->WriteWhitespace("\r\n");
      DataWrite->WriteEndElement();
	  DataWrite->WriteWhitespace("\r\n");

      // End the document.
      DataWrite->WriteEndDocument();

      // Close the document.
      DataWrite->Close();

      // Indicate the document is complete.
      //cout << "File generated!\n";
   }
   catch(...)
   {
	  //cerr<<"error occured.";
	  return false;
   }
  return true;
}




/*int main()
{
    char** test_language;
	char** test_language_choice;
	race testRace = race();
	/*cout << testRace.get_name() << endl;
	cout << testRace.get_size() << endl;
	test_language=testRace.get_languages();
	test_language_choice=testRace.get_languages_choice();
	for(int i=0;i<testRace.get_languages_length();i++)
		cout << test_language[i] << " ";
	cout << endl;
		test_language=testRace.get_languages();
	for(int i=0;i<testRace.get_languages_choice_length();i++)
		cout << test_language_choice[i] << " ";
	cout << endl;
	cout << testRace.get_base_speed() << endl;
	cout << testRace.get_fav_class() << endl;
	cout << testRace.get_dm_notes() << endl;

	testRace.read_file("race.xml", "Human");
	//testRace.write_file("testrace2.xml");

	return 0;
}*/

race_selector::race_selector()
{
	head = NULL;
}

race_selector::race_selector(char* filename)
{
	head = NULL;
	count = 0;
	read_from_file(filename);
}

race_selector::~race_selector()
{
	list_node<char*>* current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		delete [] current->node_value;
		delete current;
	}
}

void race_selector::read_from_file(char* filename)
{
	try
	{
		//Reading from a file with XML
		XmlTextReader* reader = new XmlTextReader(filename);
		String* namestring;
		list_node<char*>* new_race;
		list_node<char*>* current;

	 while(reader ->Read())
		{
			 if(XmlNodeType::Element == reader->NodeType)
			 {
				 namestring = reader->Name;
				 if(strcmp((CString)namestring,"Name")==0)
				 {
					 //get name element
					 reader ->Read();

					 // Add it to the list
					new_race = new list_node<char*>;
					new_race->node_value = new char [128];
					strcpy(new_race->node_value, (CString)reader->Value);
					new_race->next = NULL;

					if (head == NULL)
						head = new_race;
					else
					{
						current = head;
						while (current->next != NULL)
						{
							current = current->next;
						}
						current->next = new_race;
					}
					count++;

					reader->Read();

				 }
			 }
		}
		/*CString str3(teststring);
		printf(str3);
		strcpy(chararray,str3);
		cout << chararray << endl;*/
	}
	catch(...)
	{
		//cerr << "Error ocurred.\n";
	}
}

char* race_selector::get_race(int position)
{
	list_node<char*>* current;
	int i=0;

	current = head;

	while ((current != NULL) && (i < position))
	{
		current = current->next;
		i++;
	}

	return current->node_value;
}

int race_selector::get_num_races()
{
	return count;
}