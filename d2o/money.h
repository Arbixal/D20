/***************************************
* Money.h                              *
* ========                             *
* Project: D20 Character Generation    *
* Created By: Michael Tonini           *
* Last Edited By: Michael Tonini       *
* Last Edited: 25/09/2004              *
* Description:  Contains money class   *
* and related structures               *
***************************************/

#ifndef _MONEY_H
#define _MONEY_H

struct unit_currency
{
   char* name;
   int value;
   long amount;
};


class money
{
   private:
      unit_currency* money_record;
	  int size;

   public:
      money();
      money(char*);
      ~money();
      void read_file(char*);

      bool adjust_money(char* money_name, long amount_to_change);
      long operator[] (char* money_name);
      long operator[] (int i);
	  long get_value (char* money_name);
	  bool read_from_xml(char* filename);
};

//const char* MONEY_FILENAME="money.xml";
#endif