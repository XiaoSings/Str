// THIS FILE HOLDS THE IMPLEMENTION OF THE MAIN FILE CALLED: Str.h
// THIS FILE ISN'T MIGHT BE LINKED WITH YOUR  MAIN FILE!
// LINK THE HEADER NAME: Str.h

#include <iostream>
#include <map>
#include <iterator>
#include <sstream>
#include "Str.h"

namespace Str
{
	// PRIAVTE CONSTRUCTOE!
	namespace
	{
		std::map<char, std::string> ToLowerCase_Alphabets_Key_Pair_Object;
		std::map<char, char> CToLowerCase_Alphabets_Key_Pair_Object;

		std::map<char, char> CToUpperCase_Alphabets_Key_Pair_Object;
		std::map<char, std::string> ToUpperCase_Alphabets_Key_Pair_Object;
		void Init_Maps() {
			//ADDING LETTERS TO THE CHAR TABLE OF UPPER CASE
			CToUpperCase_Alphabets_Key_Pair_Object['a'] = 'A'; CToUpperCase_Alphabets_Key_Pair_Object['e'] = 'E';
			CToUpperCase_Alphabets_Key_Pair_Object['b'] = 'B'; CToUpperCase_Alphabets_Key_Pair_Object['f'] = 'F';
			CToUpperCase_Alphabets_Key_Pair_Object['c'] = 'C'; CToUpperCase_Alphabets_Key_Pair_Object['g'] = 'G';
			CToUpperCase_Alphabets_Key_Pair_Object['d'] = 'D'; CToUpperCase_Alphabets_Key_Pair_Object['h'] = 'H';
			//-----
			CToUpperCase_Alphabets_Key_Pair_Object['i'] = 'I'; CToUpperCase_Alphabets_Key_Pair_Object['m'] = 'M';
			CToUpperCase_Alphabets_Key_Pair_Object['j'] = 'J'; CToUpperCase_Alphabets_Key_Pair_Object['n'] = 'N';
			CToUpperCase_Alphabets_Key_Pair_Object['k'] = 'K'; CToUpperCase_Alphabets_Key_Pair_Object['o'] = 'O';
			CToUpperCase_Alphabets_Key_Pair_Object['l'] = 'L'; CToUpperCase_Alphabets_Key_Pair_Object['p'] = 'P';
			//--
			CToUpperCase_Alphabets_Key_Pair_Object['q'] = 'Q'; CToUpperCase_Alphabets_Key_Pair_Object['u'] = 'U';
			CToUpperCase_Alphabets_Key_Pair_Object['r'] = 'R'; CToUpperCase_Alphabets_Key_Pair_Object['v'] = 'V';
			CToUpperCase_Alphabets_Key_Pair_Object['s'] = 'S'; CToUpperCase_Alphabets_Key_Pair_Object['w'] = 'W';
			CToUpperCase_Alphabets_Key_Pair_Object['t'] = 'T'; CToUpperCase_Alphabets_Key_Pair_Object['x'] = 'X';
			CToUpperCase_Alphabets_Key_Pair_Object['y'] = 'Y'; CToUpperCase_Alphabets_Key_Pair_Object['z'] = 'Z';
			//ADDING LETTERS TO THE STRING TABLE OF UPPER CASE
			ToUpperCase_Alphabets_Key_Pair_Object['a'] = "A"; ToUpperCase_Alphabets_Key_Pair_Object['e'] = "E";
			ToUpperCase_Alphabets_Key_Pair_Object['b'] = "B"; ToUpperCase_Alphabets_Key_Pair_Object['f'] = "F";
			ToUpperCase_Alphabets_Key_Pair_Object['c'] = "C"; ToUpperCase_Alphabets_Key_Pair_Object['g'] = "G";
			ToUpperCase_Alphabets_Key_Pair_Object['d'] = "D"; ToUpperCase_Alphabets_Key_Pair_Object['h'] = "H";
			//-----
			ToUpperCase_Alphabets_Key_Pair_Object['i'] = "I"; ToUpperCase_Alphabets_Key_Pair_Object['m'] = "M";
			ToUpperCase_Alphabets_Key_Pair_Object['j'] = "J"; ToUpperCase_Alphabets_Key_Pair_Object['n'] = "N";
			ToUpperCase_Alphabets_Key_Pair_Object['k'] = "K"; ToUpperCase_Alphabets_Key_Pair_Object['o'] = "O";
			ToUpperCase_Alphabets_Key_Pair_Object['l'] = "L"; ToUpperCase_Alphabets_Key_Pair_Object['p'] = "P";
			//--
			ToUpperCase_Alphabets_Key_Pair_Object['q'] = "Q"; ToUpperCase_Alphabets_Key_Pair_Object['u'] = "U";
			ToUpperCase_Alphabets_Key_Pair_Object['r'] = "R"; ToUpperCase_Alphabets_Key_Pair_Object['v'] = "V";
			ToUpperCase_Alphabets_Key_Pair_Object['s'] = "S"; ToUpperCase_Alphabets_Key_Pair_Object['w'] = "W";
			ToUpperCase_Alphabets_Key_Pair_Object['t'] = "T"; ToUpperCase_Alphabets_Key_Pair_Object['x'] = "X";
			ToUpperCase_Alphabets_Key_Pair_Object['y'] = "Y"; ToUpperCase_Alphabets_Key_Pair_Object['z'] = "Z";
			//ADDING LETTERS TO THE CHAR TABLE OF LOWER CASE
			CToLowerCase_Alphabets_Key_Pair_Object['A'] = 'a'; CToLowerCase_Alphabets_Key_Pair_Object['E'] = 'e';
			CToLowerCase_Alphabets_Key_Pair_Object['B'] = 'b'; CToLowerCase_Alphabets_Key_Pair_Object['F'] = 'f';
			CToLowerCase_Alphabets_Key_Pair_Object['C'] = 'c'; CToLowerCase_Alphabets_Key_Pair_Object['G'] = 'g';
			CToLowerCase_Alphabets_Key_Pair_Object['D'] = 'd'; CToLowerCase_Alphabets_Key_Pair_Object['H'] = 'h';
			//-----
			CToLowerCase_Alphabets_Key_Pair_Object['I'] = 'i'; CToLowerCase_Alphabets_Key_Pair_Object['M'] = 'm';
			CToLowerCase_Alphabets_Key_Pair_Object['J'] = 'j'; CToLowerCase_Alphabets_Key_Pair_Object['N'] = 'n';
			CToLowerCase_Alphabets_Key_Pair_Object['K'] = 'k'; CToLowerCase_Alphabets_Key_Pair_Object['O'] = 'o';
			CToLowerCase_Alphabets_Key_Pair_Object['L'] = 'l'; CToLowerCase_Alphabets_Key_Pair_Object['P'] = 'p';
			//--
			CToLowerCase_Alphabets_Key_Pair_Object['Q'] = 'q'; CToLowerCase_Alphabets_Key_Pair_Object['U'] = 'u';
			CToLowerCase_Alphabets_Key_Pair_Object['R'] = 'r'; CToLowerCase_Alphabets_Key_Pair_Object['V'] = 'v';
			CToLowerCase_Alphabets_Key_Pair_Object['S'] = 's'; CToLowerCase_Alphabets_Key_Pair_Object['W'] = 'w';
			CToLowerCase_Alphabets_Key_Pair_Object['T'] = 't'; CToLowerCase_Alphabets_Key_Pair_Object['X'] = 'x';
			CToLowerCase_Alphabets_Key_Pair_Object['Y'] = 'y'; CToLowerCase_Alphabets_Key_Pair_Object['Z'] = 'z';
			//ADDING LETTERS TO THE STRING TABLE OF LOWER CASE
			ToLowerCase_Alphabets_Key_Pair_Object['A'] = "a"; ToLowerCase_Alphabets_Key_Pair_Object['E'] = "e";
			ToLowerCase_Alphabets_Key_Pair_Object['B'] = "b"; ToLowerCase_Alphabets_Key_Pair_Object['F'] = "f";
			ToLowerCase_Alphabets_Key_Pair_Object['C'] = "c"; ToLowerCase_Alphabets_Key_Pair_Object['G'] = "g";
			ToLowerCase_Alphabets_Key_Pair_Object['D'] = "d"; ToLowerCase_Alphabets_Key_Pair_Object['H'] = "h";
			//-----
			ToLowerCase_Alphabets_Key_Pair_Object['I'] = "i"; ToLowerCase_Alphabets_Key_Pair_Object['M'] = "m";
			ToLowerCase_Alphabets_Key_Pair_Object['J'] = "j"; ToLowerCase_Alphabets_Key_Pair_Object['N'] = "n";
			ToLowerCase_Alphabets_Key_Pair_Object['K'] = "k"; ToLowerCase_Alphabets_Key_Pair_Object['O'] = "o";
			ToLowerCase_Alphabets_Key_Pair_Object['L'] = "l"; ToLowerCase_Alphabets_Key_Pair_Object['P'] = "p";
			//--
			ToLowerCase_Alphabets_Key_Pair_Object['Q'] = "q"; ToLowerCase_Alphabets_Key_Pair_Object['U'] = "u";
			ToLowerCase_Alphabets_Key_Pair_Object['R'] = "r"; ToLowerCase_Alphabets_Key_Pair_Object['V'] = "v";
			ToLowerCase_Alphabets_Key_Pair_Object['S'] = "s"; ToLowerCase_Alphabets_Key_Pair_Object['W'] = "w";
			ToLowerCase_Alphabets_Key_Pair_Object['T'] = "t"; ToLowerCase_Alphabets_Key_Pair_Object['X'] = "x";
			ToLowerCase_Alphabets_Key_Pair_Object['Y'] = "y"; ToLowerCase_Alphabets_Key_Pair_Object['Z'] = "z";
		}
		// This function reads through the table, and just returns a boolean value
		// if a character exists inside the table :) !
		bool ToLowerCase_Alphabets_Exists(char val)
		{
			Init_Maps();
			bool r = false;
			for (std::map<char, std::string>::iterator it = ToLowerCase_Alphabets_Key_Pair_Object.begin(); it != ToLowerCase_Alphabets_Key_Pair_Object.end(); ++it) {
				char key = it->first;
				if (key == val) {
					r = true;
					break;
				}
			}
			return r;
		}
		// THIS FUNCTION CHECKS WHETHER THE CHAR IS INSIDE THE UPPER_CASE TABLE
		bool IsIncludedInUpperT(std::string value) {
			bool result = false;
			for (std::map<char, std::string>::iterator it = ToUpperCase_Alphabets_Key_Pair_Object.begin(); it != ToUpperCase_Alphabets_Key_Pair_Object.end(); ++it) {
				std::string val = it->second;
				if (val == value) {
					result = true;
					break;
				}
			}
			return result;
		}
		// CHAR TYPE
		bool IsIncludedInUpperT(char value) {
			bool result = false;
			for (std::map<char, char>::iterator it = CToUpperCase_Alphabets_Key_Pair_Object.begin(); it != CToUpperCase_Alphabets_Key_Pair_Object.end(); ++it) {
				char val = it->second;
				if (val == value) {
					result = true;
					break;
				}
			}
			return result;
		}

		// THIS FUNCTION CHECKS WHETHER THE CHAR IS INSIDE THE LOWER_CASE TABLE
		bool IsIncludedInLowerT(std::string value) {
			bool result = false;
			for (std::map<char, std::string>::iterator it = ToLowerCase_Alphabets_Key_Pair_Object.begin(); it != ToLowerCase_Alphabets_Key_Pair_Object.end(); ++it) {
				std::string val = it->second;
				if (val == value) {
					result = true;
					break;
				}
			}
			return result;
		}
		// CHAR TYPE
		bool IsIncludedInLowerT(char value) {
			bool result = false;
			for (std::map<char, char>::iterator it = CToLowerCase_Alphabets_Key_Pair_Object.begin(); it != CToLowerCase_Alphabets_Key_Pair_Object.end(); ++it) {
				char val = it->second;
				if (val == value) {
					result = true;
					break;
				}
			}
			return result;
		}
		bool CToLowerCase_Alphabets_Exists(char val)
		{
			Init_Maps();
			bool r = false;
			for (std::map<char, char>::iterator it = CToLowerCase_Alphabets_Key_Pair_Object.begin(); it != CToLowerCase_Alphabets_Key_Pair_Object.end(); ++it) {
				char key = it->first;
				if (key == val) {
					r = true;
					break;
				}
			}
			return r;
		}
		// This function reads through the table, and just returns a boolean value
		// if a character exists inside the table :) !
		bool ToUpperCase_Alphabets_Exists(char val)
		{
			Init_Maps();
			bool r = false;
			for (std::map<char, std::string>::iterator it = ToUpperCase_Alphabets_Key_Pair_Object.begin(); it != ToUpperCase_Alphabets_Key_Pair_Object.end(); ++it) {
				char key = it->first;
				if (key == val) {
					r = true;
					break;
				}
			}
			return r;
		}
		bool CToUpperCase_Alphabets_Exists(char val)
		{
			Init_Maps();
			bool r = false;
			for (std::map<char, char>::iterator it = CToUpperCase_Alphabets_Key_Pair_Object.begin(); it != CToUpperCase_Alphabets_Key_Pair_Object.end(); ++it) {
				char key = it->first;
				if (key == val) {
					r = true;
					break;
				}
			}
			return r;
		}

	}
	/** THIS IS A LOWERCASE FUNCTION*/
	std::string ToLowerCase(std::string value)
	{
		Init_Maps();
		// create a table that will hold the alphabets
		// this table has an upper case letter, and a lower case letter
		if (value.length() > 0) {
			// reading from the string
			// inside a for loop!
			// this loop checks if the char inside the string is inside the table
			// if so, then it changes the char to a lower case type
			// and returns the result to the user(caller)
			std::string result = "";
			for (int i = 0; i < value.length(); i++) {
				char character = value[i];
				if (ToLowerCase_Alphabets_Exists(character) == true) {
					std::string r = ToLowerCase_Alphabets_Key_Pair_Object[character];
					result += r;
				}
				else {
					if (value[i] == ' ') {
						result += " ";
					}
					else if (value[i] == '\n') {
						result += "\n";
					}
					else if (value[i] == '\t') {
						result += "\t";
					}
					else if (value[i] == '\r') {
						result += "\r";
					}
					else {
						std::string s;
						std::stringstream mx;
						mx << value[i];
						mx >> s;
						result += s;
					}
				}
			}
			return result;
		}
		else {
			return value;
		}
	}
	/**LOWERCASE CHAR TYPE*/
	char ToLowerCase(char value)
	{
		Init_Maps();
		// create a table that will hold the alphabets
		// this table has an upper case letter, and a lower case letter
		if (value) {
			// reading from the string
			// inside a for loop!
			// this loop checks if the char inside the string is inside the table
			// if so, then it changes the char to a lower case type
			// and returns the result to the user(caller)
			char result;
			if (CToLowerCase_Alphabets_Exists(value) == true) {
				char r = CToLowerCase_Alphabets_Key_Pair_Object[value];
				result = r;
			}
			else {
				result = value;
			}

			return result;
		}
		else {
			return value;
		}
	}
	/**THIS IS UPPERCASE FUNCTION*/
	std::string ToUpperCase(std::string value)
	{
		Init_Maps();
		// create a table that will hold the alphabets
		// this table has an upper case letter, and a lower case letter
		if (value.length() > 0) {
			// reading from the string
			// inside a for loop!
			// this loop checks if the char inside the string is inside the table
			// if so, then it changes the char to a lower case type
			// and returns the result to the user(caller)
			std::string result = "";
			for (int i = 0; i < value.length(); i++) {

				char character = value[i];

				if (ToUpperCase_Alphabets_Exists(character) == true) {
					std::string r = ToUpperCase_Alphabets_Key_Pair_Object[character];
					result += r;
				}
				else {
					if (value[i] == ' ') {
						result += " ";
					}
					else if (value[i] == '\n') {
						result += "\n";
					}
					else if (value[i] == '\t') {
						result += "\t";
					}
					else if (value[i] == '\r') {
						result += "\r";
					}
					else {
						std::string s;
						std::stringstream mx;
						mx << value[i];
						mx >> s;
						result += s;
					}
				}
			}
			return result;
		}
		else {
			return value;
		}
	}
	/**CHAR TYPE*/
	char ToUpperCase(char value)
	{
		Init_Maps();
		// create a table that will hold the alphabets
		// this table has an upper case letter, and a lower case letter
		if (value) {
			// reading from the string
			// inside a for loop!
			// this loop checks if the char inside the string is inside the table
			// if so, then it changes the char to a lower case type
			// and returns the result to the user(caller)
			char result;
			if (CToUpperCase_Alphabets_Exists(value) == true) {
				char r = CToUpperCase_Alphabets_Key_Pair_Object[value];
				result = r;
			}
			else {
				result = value;
			}
			return result;
		}
		else {
			return value;
		}
	}
	/**THIS FUNCTION IS USED TO CHECK WHETHER A STRING/CHAR {IS}->UPPER CASE LETTER(S)*/
	bool IsUpperType(std::string value) {
		Init_Maps();
		bool result = true;
		for (int i = 0; i < value.length(); i++) {
			char character = value[i];
			if (IsIncludedInUpperT(character) == false) {
				result = false;
				break;
			}
		}
		return result;
	}
	/** Char TYPE*/
	bool IsUpperType(char value) {
		Init_Maps();
		bool result = true;
		if (IsIncludedInUpperT(value) == false) {
			result = false;
		}
		return result;
	}
	/**THIS FUNCTION IS USED TO CEHCK WHETHER A STRING/CHAR {IS}->LOWER CASE LETTER(S)*/
	bool IsLowerType(std::string value) {
		Init_Maps();
		bool result = true;
		for (int i = 0; i < value.length(); i++) {
			char character = value[i];
			if (IsIncludedInUpperT(character) == false) {
				result = false;
				break;
			}
		}
		return result;
	}
	/** CHAR TYPE*/
	bool IsLowerType(char value) {
		Init_Maps();
		bool result = true;
		if (IsIncludedInLowerT(value) == false) {
			result = false;
		}
		return result;
	}

	/**THIS FUNCTION IS USED TO CHECK WHETHER A STRING/CHAR DOES HAVE A UPPER LETTEER*/
	bool IncludesUpper(std::string value) {
		Init_Maps();
		bool result = false;
		for (int i = 0; i < value.length(); i++) {
			char character = value[i];
			if (IsIncludedInUpperT(character) == true) {
				result = true;
				break;
			}
		}
		return result;
	}
	/**CHAR TYPE*/
	bool IncludesUpper(char value) {
		Init_Maps();
		bool result = false;
		if (IsIncludedInUpperT(value) == true) {
			result = true;
		}
		return result;
	}

	/**THIS FUNCTION IS USED TO CHECK WHETHER A STRING/CHAR DOES HAVE A LOWER LETTEWR*/
	bool IncludesLower(std::string value) {
		Init_Maps();
		bool result = false;
		for (int i = 0; i < value.length(); i++) {
			char character = value[i];
			if (IsIncludedInLowerT(character) == true) {
				result = true;
				break;
			}
		}
		return result;
	}
	/**CHAR TYPE*/
	bool IncludesLower(char value) {
		Init_Maps();
		bool result = false;
		if (IsIncludedInLowerT(value) == true) {
			result = true;
		}
		return result;
	}
}
