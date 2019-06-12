// Creator: Xiao sings
// created date [6/11/2019]
// finish date [created date]
// Find me @Xiao_sings {Instagram}
// Find me @Xiao_sings {Twitter}
// Find me @Xiao_sings {Soundcloud}
// Find me @XiaoSings4Real {FaceBook}
// THANKS FOR USING MY PROGRAM !
// YOU ROCK DUDE
// HOPE I MADE YOUR LIEF EASIER :)


/**THIS FILE IS THE MAIN SOURCE ON*/
/**GO TO Str.cpp If You Want To See The Implementation*/

#pragma once

#ifndef STR_H
#define STR_H
#include <iostream>
namespace Str
{
	/** THIS IS A LOWERCASE FUNCTION*/
	std::string ToLowerCase(std::string value);
	/**CHAR TYPE*/
	char ToLowerCase(char value);
	/**THIS IS UPPERCASE FUNCTION*/
	std::string ToUpperCase(std::string value);
	/** CHAR TYPE*/
	char ToUpperCase(char value);
	/**THIS FUNCTION IS USED TO CHECK WHETHER A STRING/CHAR {IS}->UPPER CASE LETTER*/
	bool IsUpperType(std::string value);
	/**CHAR TYPE*/
	bool IsUpperType(char value);


	/**THIS FUNCTION IS USED TO CHECK WHETHER A STRING/CHAR {IS}->LOWER CASE LETTER*/
	bool IsLowerType(std::string value);
	/**CHAR TYPE*/
	bool IsLowerType(char value);

	/**THIS FUNCTION IS USED TO CHECK WHETHER A STRING/CHAR DOES HAVE A UPPER LETTEER*/
	bool IncludesUpper(std::string value);
	/**CHAR TYPE*/
	bool IncludesUpper(char value);

	/**THIS FUNCTION IS USED TO CHECK WHETHER A STRING/CHAR DOES HAVE A LOWER LETTEWR*/
	bool IncludesLower(std::string value);
	/**CHAR TYPE*/
	bool IncludesLower(char value);
}
#endif // STR_H
