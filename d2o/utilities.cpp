/*********************************************************\
* utilities.cpp                                           *
* =============                                           *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 29/06/04                                   *
* Description: Contains utility functions that may be used*
*           during program, that aren't part of a class   *
\*********************************************************/
#include "stdafx.h"
#include "utilities.h"

/*********************************************************\
* void int_to_string(int, bool, int, char*)               *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 20/05/04                                   *
* Return Value: void                                      *
* Parameter 1: Integer storing the value to be converted  *
*              into a string                              *
* Parameter 2: Boolean value specifying whether the sign  *
*              of the number should be displayed if the   *
*              number is positive                         *
* Parameter 3: Integer specifying the number of digits to *
*              be displayed. Digits are displayed from the*
*              rightmost and extra digits are 0's         *
* Parameter 4: Character array that the string gets       *
*              written to. There is no checking to see if *
*              the string is going to fit                 *
* Description: The function takes an integer value and    *
*              expresses it as a string, complete with    *
*              sign and preceeding 0's if specified       *
\*********************************************************/
void int_to_string(int value, bool show_sign, int num_digits, char* output)
{
	int current_value=value, digit_column=1, temp, output_start=0;

	// Create dynamic array of digits
	int *digits = new int[num_digits];

	// Setup the digit column
	for (int i=0; i<num_digits-1; i++)
	{
		digit_column *= 10;
	}

	// Add the sign to the front if specified
	if (value<0)
	{
		output[0] = '-';
		output_start++;
	}
	else
	{
		if (show_sign)
		{
			output[0] = '+';
			output_start++;
		}
	}

	// If the number has more digits than the user specified
	// only show the number of digits specified
	if (current_value >= digit_column*10)
	{
		current_value = current_value % (digit_column*10);
	}

	// Seperate into unit columns
	for (int j=0; j<num_digits; j++)
	{
		temp = current_value / digit_column;
		current_value -= (temp*digit_column);	// minus a minus is plus
		// Get the absolute value
		if (temp < 0)
			temp = -temp;
		output[output_start+j] = (char)(temp + 48);
		digit_column /= 10;
	}

	// Add '\0' character to null terminate string
	output[output_start+num_digits] = '\0';

	delete [] digits;

	return;
}


/*********************************************************\
* int create_index_array(long*&, char*, char)             *
* ------------------------------------------------------- *
* Created By: Caleb Avery                                 *
* Last Edited By:                                         *
* Last Edited: 29/06/04                                   *
* Return Value: An integer holding the number of "lines"  *
*               found in the file specified               *
* Parameter 1: A long integer pointer, which is allocated *
*              dynamic memory to form an array where all  *
*              the index values are to be stored. It is   *
*              passed by reference so that the calling    *
*              function can use the index after the       *
*              memory is allocated                        *
* Parameter 2: A character array which holds the name of  *
*              the file to be indexed.                    *
* Parameter 3: A character that is to be used as the      *
*              seperator. A new "line" is assumed after   *
*              one of these characters is encountered     *
* Description: The function takes a filename and a        *
*              seperator character, turning it into a long*
*              integer array, specifying the beginning of *
*              a new line. The number of "lines" found is *
*              then returned.                             *
\*********************************************************/
int create_index_array(long* &index_array, char* filename, char seperator)
{
	int number_lines = 1;
	long num_chars;
	ifstream file;

	// Open the file
	file.open(filename);
	if (file.bad() || file.fail() || file.eof())
	{
		return 0;
	}

	// Run once through the file to count the seperators
	file.seekg(0, ios::end);
	num_chars = file.tellg();

	file.seekg(0, ios::beg);

	for (long file_char_count=0; file_char_count<num_chars; file_char_count++)
	{
		if (file.get() == seperator)
		{
			number_lines++;
		}
	}
	// Clear the error flags for reaching the end of file
	file.clear();
	file.seekg(0, ios::beg);

	// Now allocate the memory
	index_array = new long [number_lines+1];

	// Put the first entry into the array
	index_array[0] = file.tellg();

	// For each line find its position
	for (int line_number=1; line_number<=number_lines; line_number++)
	{
		while ((file.get() != '\n') && (!file.eof()));
		if (file.eof())
		{
			file.clear();
			file.seekg(0, ios::end);
			index_array[line_number] = file.tellg();
		}
		else
		{
			index_array[line_number] = file.tellg();
		}
	}

	// return to the beginning of the file
	file.seekg(index_array[0]);

	return number_lines;
}

//Michaels util functions
/*********************************************************\
* char* long_to_string(long)                              *
* ------------------------------------------------------- *
* Created By: Michael Tonini                              *
* Last Created By:                                        *
* Last Edited: 9/10/04                                    *
* Return Value: A char* (string) of the given integer.    *
* Parameter 1: An integer that is to be converted.        *
* Description: This function takes an integer and returns *
*              the equivalent as a string.                *
\*********************************************************/
char* long_to_string(long num)
{

	char* string_num;
	long tempint = num;
	int numleft;
	int count=0;

	if(num==0)
	{
		return "0";
	}
	//count number of digits
	while(tempint != 0)
	{
       count++;
	   tempint/=10;
	}
	if(num<0)
	{
		num*=-1;
		
		numleft=count-1;
        count+=1;
		string_num= new char [count+1];
		string_num[0]='-';
        for(int i=1;i<count-1;i++)
	    {
           int currentdigit=0;
	       currentdigit=(int)(num/(pow(10.0,numleft)));
	       num-=(int)(currentdigit*pow(10.0,numleft));

	       string_num[i]=digit_to_char(currentdigit);
	       numleft--;
	    }
	}
	else
	{
	   //assign length to char*
	   string_num = new char[count+1];
	
	   //Extract digit and put it in char*
	   numleft=count-1;
       for(int i=0;i<count-1;i++)
	   {
          int currentdigit=0;
	      currentdigit=(int)(num/(pow(10.0,numleft)));
	      num-=(int)(currentdigit*pow(10.0,numleft));

	      string_num[i]=digit_to_char(currentdigit);
	      numleft--;
	   }
	}

	//Get last char*
	string_num[count-1]=digit_to_char(num%10);
	string_num[count]='\0';

    return string_num;
}

/*********************************************************\
* char* int_to_string(int)                                *
* ------------------------------------------------------- *
* Created By: Michael Tonini                              *
* Last Created By:                                        *
* Last Edited: 9/10/04                                    *
* Return Value: A char* (string) of the given integer.    *
* Parameter 1: An integer that is to be converted.        *
* Description: This function takes an integer and returns *
*              the equivalent as a string.                *
\*********************************************************/
char* int_to_string(int num)
{

	char* string_num;
	int tempint = num;
	int numleft;
	int count=0;

	if(num==0)
	{
		return "0";
	}
	//count number of digits
	while(tempint != 0)
	{
       count++;
	   tempint/=10;
	}
	if(num<0)
	{
		num*=-1;
		
		numleft=count-1;
        count+=1;
		string_num= new char [count+1];
		string_num[0]='-';
        for(int i=1;i<count-1;i++)
	    {
           int currentdigit=0;
	       currentdigit=(int)(num/(pow(10.0,numleft)));
	       num-=(int)(currentdigit*pow(10.0,numleft));

	       string_num[i]=digit_to_char(currentdigit);
	       numleft--;
	    }
	}
	else
	{
	   //assign length to char*
	   int length=count+1;
	   string_num= new char [length];
	
	   //Extract digit and put it in char*
	   numleft=count-1;
       for(int i=0;i<count-1;i++)
	   {
          int currentdigit=0;
	      currentdigit=(int)(num/(pow(10.0,numleft)));
	      num-=(int)(currentdigit*pow(10.0,numleft));

	      string_num[i]=digit_to_char(currentdigit);
	      numleft--;
	   }
	}

	//Get last char*
	string_num[count-1]=digit_to_char(num%10);
	string_num[count]='\0';

    return string_num;
}

/*********************************************************\
* char* digit_to_char(int)                                *
* ------------------------------------------------------- *
* Created By: Michael Tonini                              *
* Last Created By:                                        *
* Last Edited: 9/10/04                                    *
* Return Value: A char of the given integer.              *
* Parameter 1: An integer that is to be converted.        *
* Description: This function takes an single numeric digit*
*              and returns th equivalent char             *
\*********************************************************/
char digit_to_char(int digit)
{
	char char_digit;
	switch(digit)
	{
	   case 0: char_digit='0';
		   break;
	   case 1: char_digit='1';
		   break;
	   case 2: char_digit='2';
		   break;
	   case 3: char_digit='3';
		   break;
	   case 4: char_digit='4';
		   break;
	   case 5: char_digit='5';
		   break;
	   case 6: char_digit='6';
		   break;
	   case 7: char_digit='7';
		   break;
	   case 8: char_digit='8';
		   break;
	   case 9: char_digit='9';
		   break;
	   default: char_digit='0';
	}
	return char_digit;
}