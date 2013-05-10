/***************************************
* Money.h                              *
* ========                             *
* Project: D20 Character Generation    *
* Created By: Michael Tonini           *
* Last Edited By: Michael Tonini       *
* Last Edited: 25/09/2004              *
* Description:  Contains money class   *
* functions.                           *
***************************************/
#include "stdafx.h"
#include "money.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include <atlstr.h>
#using <mscorlib.dll>
#using <System.xml.dll>
using namespace std;
using namespace System;
using namespace System::Xml;


/*int main()
{
  money testmoney = money("money.xml");
  cout << testmoney["Gold"] << endl;
  cout << testmoney.get_value("Gold") << endl;
}*/

/***************************************
* money::money()                       *
* default constructor                  *
* no return                            *
***************************************/
money::money()
{
	money_record = NULL;
}

/***********************************
* money::money (char* file_name)   *
* initialisation constructor       *
* file_name - The name of the file *
* containing money data.           *
* description - This constructor   *
* reads the file that it is given  *
* and populates an array of data   *
* for use in the money class.      *
* no return                        *
***********************************/
money::money(char* file_name)
{
	read_from_xml(file_name);
  /*try
  {
	 //Find how many money items there are and allocate memory to the array.
	 XmlTextReader* test_reader = new XmlTextReader(file_name);
	int count=0;
	while(test_reader->Read())
	{
		if(XmlNodeType::Element == test_reader->NodeType)
		{
			  if(!strcmp((CString)test_reader->Name,"money"))
				count++;
		}
	}
	size = count;
	money_record = new unit_currency[count];

	//Reading data from XML file
	 XmlTextReader* reader = new XmlTextReader(file_name);
	 String* namestring;
	 int i=0;
	 while(reader->Read())
	 {
		if(XmlNodeType::Element == reader->NodeType)
		{
		 namestring = reader->Name;
		 if(!strcmp((CString)namestring,"name"))
		 {
			 reader->Read();
			//If element is empty skip it.
			if(XmlNodeType::EndElement == reader->NodeType)
			{
				reader->Read();
				reader->Read();
			}
			else
			{
				money_record[i].name = new char[reader->Value->Length+1];
				strcpy(money_record[i].name,(CString)reader->Value);
				reader->Read();
				reader->Read();
				reader->Read();
			}
			 namestring = reader->Name;
		 }
		 if(!strcmp((CString)namestring,"value"))
		 {
			 reader->Read();
			//If element is empty skip it.
			if(XmlNodeType::EndElement == reader->NodeType)
			{
				reader->Read();
				reader->Read();
			}
			else
			{
				money_record[i].value = atoi((CString)reader->Value);
				reader->Read();
				reader->Read();
				reader->Read();
				//Set amount to 0. and increment pointer for next record.
				money_record[i].amount=0;
				i++;
			}
		 }
		}
	}
	 //test loop
	//for(int m=0;m<size;m++)
	//{
	//	cout<< money_record[m].name <<endl;
	//	cout<< money_record[m].value << endl;
	//	cout<< money_record[m].amount << endl;
	//}
  }
  catch(...)
  {
	  cerr << "Error ocurred.\n";
  }*/
}

/***********************************
* money::~money ()                 *
* destructor                       *
* no return                        *
***********************************/
money::~money()
{
	for(int m=0;m<size;m++)
	{
		delete money_record[m].name;
	}
	delete money_record;
}

/****************************************
* void money::read_file(char* file_name)*
* file_name - The name of the file      *
* containing money data.                *
* description - This constructor        *
* reads the file that it is given       *
* and populates an array of data        *
* for use in the money class.           *
* no return                             *
****************************************/
/*void money::read_file(char* filename)
{
  try
  {
    //Find how many money items there are and allocate memory to the array.
    XmlTextReader* test_reader = new XmlTextReader(filename);
	int count=0;
	while(test_reader->Read())
	{
		if(XmlNodeType::Element == test_reader->NodeType)
		{
           if(!strcmp((CString)test_reader->Name,"money"))
			   count++;
		}
	}
	size = count;
	money_record = new unit_currency[count];

	//Reading data from XML file
    XmlTextReader* reader = new XmlTextReader(filename);
    String* namestring;
    int i=0;
    while(reader->Read())
    {
	   if(XmlNodeType::Element == reader->NodeType)
	   {
		 namestring = reader->Name;
		 if(!strcmp((CString)namestring,"name"))
		 {
		    reader->Read();
			//If element is empty skip it.
			if(XmlNodeType::EndElement == reader->NodeType)
			{
			   reader->Read();
			   reader->Read();
			}
			else
			{
			   money_record[i].name = new char[reader->Value->Length+1];
			   strcpy(money_record[i].name,(CString)reader->Value);
			   reader->Read();
			   reader->Read();
			   reader->Read();
			}
		    namestring = reader->Name;
		 }
		 if(!strcmp((CString)namestring,"value"))
		 {
		    reader->Read();
			//If element is empty skip it.
			if(XmlNodeType::EndElement == reader->NodeType)
			{
			   reader->Read();
			   reader->Read();
			}
			else
			{
			   money_record[i].value = atoi((CString)reader->Value);
			   reader->Read();
			   reader->Read();
			   reader->Read();
			   //Set amount to 0. and increment pointer for next record.
			   money_record[i].amount=0;
			   i++;
			}
		 }
	   }
	}
    //test loop
	//for(int m=0;m<size;m++)
	//{
	//	cout<< money_record[m].name <<endl;
	//	cout<< money_record[m].value << endl;
	//	cout<< money_record[m].amount << endl;
	//}
  }
  catch(...)
  {
	  cerr << "Error ocurred.\n";
  }
}*/

/*******************************************************************
* void money::adjust_money(char* money_name, long amount_to_change)*
* money_name - The name of the money element that will be altered. *
* amount_to_change - a positive or negative value that will change *
* the given money element amount.                                  *
* Note: This function will fail if the given money name does not   *
* exist.                                                           *
* no return                                                        *
*******************************************************************/
bool money::adjust_money(char* money_name, long amount_to_change)
{
	/*for(int i=0;i<size;i++)
	{
		if(strcmp(money_record[i].name,money_name) == 0)
		{
			money_record[i].amount += amount_to_change*money_record[i].value;
		}
	}*/
	/*int total=0;
	int amount;*/
	for(int i=0;i<size;i++)
	{
		//total+=money_record[i].amount;
		if(strcmp(money_record[i].name,money_name) == 0)
		{
			//amount=amount_to_change*money_record[i].value;
			if ((amount_to_change < 0) && (money_record[i].amount < (-amount_to_change)))
			{
				if (i == 0)
					return false;
				else
				{
					if (adjust_money(money_record[i-1].name, -1))
					{
						money_record[i].amount += money_record[i-1].value;
					}
					else
						return false;
				}
			}
			money_record[i].amount+= amount_to_change;
		}
	}


	//if amount is negative and absolute value is greater than total
	//return false
	/*if(amount*-1>total)
	{
		cout << "error:not enough money.\n";
		cout << amount << " " << total << endl;
		return false;
	}
	else
	{
		total+=amount;

		//Reallocate money.
		for(i=0;i<size;i++)
		{
			money_record[i].amount=total/money_record[i].value;
			total-=money_record[i].amount*money_record[i].value;
			money_record[i].amount=money_record[i].amount*money_record[i].value;
		}
	}*/
	return true;
}

/********************************************
* long money::operator [] (char* money_name)*
* money_name - name of the money element    *
* whose value will be displayed.            *
* return (long) money element amount.       *
********************************************/
long money::operator [] (char* money_name)
{
	for(int i=0;i<size;i++)
	{
		if(strcmp(money_record[i].name,money_name) == 0)
			return money_record[i].amount;
	}
	return -1;
}

/********************************************
* long money::operator [] (int i)           *
* i - the value of a currency.              *
* return (long) money element amount.       *
********************************************/
long money::operator [] (int i)
{
	for(int i=0;i<size;i++)
	{
		if(money_record[i].value == i)
			return money_record[i].amount;
	}
	return -1;
}

/********************************************
* long money::operator [] (char*)           *
* money_name - name of the money element    *
* whose value will be displayed.            *
* return (long) money element amount.       *
********************************************/
long money::get_value (char* money_name)
{
	for(int i=0;i<size;i++)
	{
		if(strcmp(money_record[i].name,money_name) == 0)
			return money_record[i].value;
	}
	return -1;
}

/****************************************
* void money::read_file(char* file_name)*
* file_name - The name of the file      *
* containing money data.                *
* description - This constructor        *
* reads the file that it is given       *
* and populates an array of data        *
* for use in the money class.           *
* no return                             *
****************************************/
bool money::read_from_xml(char* filename)
{
  try
  {
	 //Find how many money items there are and allocate memory to the array.
	 XmlTextReader* test_reader = new XmlTextReader(filename);
	int count=0;
	while(test_reader->Read())
	{
		if(XmlNodeType::Element == test_reader->NodeType)
		{
			  if(!strcmp((CString)test_reader->Name,"money"))
				count++;
		}
	}
	size = count;
	money_record = new unit_currency[count];

	//Reading data from XML file
	 XmlTextReader* reader = new XmlTextReader(filename);
	 String* namestring;
	 int i=0;
	 while(reader->Read())
	 {
		if(XmlNodeType::Element == reader->NodeType)
		{
		 namestring = reader->Name;
		 if(!strcmp((CString)namestring,"name"))
		 {
			 reader->Read();
			//If element is empty skip it.
			if(XmlNodeType::EndElement == reader->NodeType)
			{
				reader->Read();
				reader->Read();
			}
			else
			{
				money_record[i].name = new char[reader->Value->Length+1];
				strcpy(money_record[i].name,(CString)reader->Value);
				reader->Read();
				reader->Read();
				reader->Read();
			}
			 namestring = reader->Name;
		 }
		 if(!strcmp((CString)namestring,"value"))
		 {
			 reader->Read();
			//If element is empty skip it.
			if(XmlNodeType::EndElement == reader->NodeType)
			{
				reader->Read();
				reader->Read();
			}
			else
			{
				money_record[i].value = atoi((CString)reader->Value);
				reader->Read();
				reader->Read();
				reader->Read();
				money_record[i].amount = 0;
				i++;
			}
			namestring = reader->Name;
		 }
		 /*if(!strcmp((CString)namestring,"amount"))
		 {
			 reader->Read();
			//If element is empty skip it.
			if(XmlNodeType::EndElement == reader->NodeType)
			{
				reader->Read();
				reader->Read();
				money_record[i].amount=0;
			}
			else
			{
				money_record[i].amount = atoi((CString)reader->Value);
				reader->Read();
				reader->Read();
				reader->Read();
				// increment pointer for next record.
				i++;
			}
		 }*/
		}
	}
	 //test loop
	//for(int m=0;m<size;m++)
	//{
	//	cout<< money_record[m].name <<endl;
	//	cout<< money_record[m].value << endl;
	//	cout<< money_record[m].amount << endl;
	//}
  }
  catch(...)
  {
	  cerr << "Error ocurred.\n";
	  return false;
  }
  return true;
}
