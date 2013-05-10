/*********************************************************\
* utilities.h                                             *
* ===========                                             *
* Project: D20 Character Generation                       *
* Created By: Caleb Avery                                 *
* Last Edited By: Caleb Avery                             *
* Last Edited: 20/05/04                                   *
* Description: Contains utility functions that may be used*
*           during program, that aren't part of a class   *
\*********************************************************/

#ifndef _UTILITIES_H_
#define _UTILITIES_H_

//#include <fstream>
//#include <cmath>
using namespace std;

void int_to_string(int value, bool show_sign, int num_digits, char* output);
int create_index_array(long* &index_array, char* filename, char seperator);
char* long_to_string(long num);
char* int_to_string(int num);
char digit_to_char(int digit);

#endif
