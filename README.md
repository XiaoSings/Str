# Str
---
This is very useful library that you  can us for string/char. For example converting the string to a lowercase/uppercase. and other stuff
---
### HOW TO SET UP:
---
Alright first of course you gonna have to download the files \[Str.h\] and \[Str.cpp\].

After downloading these files and putting them in your project, you then have to include it in your main application file

Which means the main source of the application where the main executation happens from. You can put it anywhere you want

The main application file, or any other file.

Make sure you include the "Str.h" file NOT "Str.cpp"
---
# ToLowerCase() & ToUpperCase():
---
```c++
// this shows you how to convert a character/string to a lower case
#include <iostream>
#include "Str.h"

int main()
{
  std::string name = "XIAO";
  char alphabet = 'X';
  
  // this is the function that is used to convert a character, or string to a lower case
  name = Str::ToLowerCase(name);
  // character
  alphabet = Str::ToLowerCase(alphabet);
  
  // this is just a function that prints to the screen
  std::cout << name << std::endl;
  //Output: xiao
  std::cout << alphabet << std::endl;
  //Output: x
}
```

```c++
// this shows you how to convert a character/string to a upper case
#include <iostream>
#include "Str.h"

int main()
{
  std::string name = "xiao";
  char alphabet = 'x';
  
  // this is the function that is used to convert a character, or string to a upper case
  name = Str::ToUpperCase(name);
  // character
  alphabet = Str::ToUpperCase(alphabet);
  
  //This is just a function that prints to the screen
  std::cout << name << std::endl;
  //Output: XIAO
  std::cout << alphabet << std::endl;
  //Output: X
}
```

Besides those two functions, It has other four functions that can be useful

# Extra:
# IsLowerType() & IsUpperType():
```c++
// This shows you how to check whether the character/string is a upper case type
// which means that it only includes upper case letter(s).. no lower case letter(s)
#include <iostream>
#include "Str.h"

int main()
{
  std::string name = "XIAO";
  char alphabet = 'x'; // this is a lower character, so it wouldn't work.
  
  // this is the function that is used to check if the string/character is a upper case
  if(Str::IsUpperType(name)) {
    std::cout << "THE VALUE IS INDEED AN UPPER CASE VALUE" << std::endl;
  }
  // Character type
  if(Str::IsUpperType(alphabet)){
    std::cout << "THE CHARACTER IS INDEED AN UPPER CASE VALUE !" << std::endl;
  }
}
```

```c++
// This shows you how to check whether the character/string is a lower case type
// which means that it only includes lower case letter(s).. no upper case letter(s)
#include <iostream>
#include "Str.h"

int main()
{
  std::string name = "Xiao" // this does have a upper letter in it, so it wouldn't work
  char alphabet = 'x';
  
  // this is the function that is used to check if the string/character is a lower case
  if(Str::IsLowerType(name)) {
    std::cout << "THE VALUE IS INDEED AN LOWER CASE VALUE" << std::endl;
  }
  // Character type
  if(Str::IsLowerType(alphabet)){
    std::cout << "THE CHARACTER IS INDEED AN LOWER CASE VALUE !" << std::endl;
  }
}
```

You can also check if the string includes a lower case letter, or a upper case letter

```c++
//This shows you how to check whether string/character includes/have a lower case letter
#include <iostream>
#include "Str.h"

int main()
{
  std::string name = "XIAo"; // this does have a lower case letter (o) so it will work.
  char alphabet = 'X'; // This character does not have a lower case letter, so it wouldn't work
  
  // this is the function that is used to check if the string/character is a lower case
  if(Str::IncludesLower(name)) {
    std::cout << "THE VALUE DOES INCLUDE A LOWER CASE LETTER !" << std::endl;
  }
  // Character type
  if(Str::IncludesLower(alphabet)){
    std::cout << "THE CHARACTER ISN'T A LOWER CASE !" << std::endl;
  }
}
```

```c++
//This shows you how to check whether string/character includes/have a upper case letter
#include <iostream>
#include "Str.h"

int main()
{
  std::string name = "xiao"; // this string does not have a upper case letter, it wouldn't work
  char alphabet = 'X'; // this character is a upper case letter, so it will work!
  
  // this is the function that is used to check if the string/character is a upper case
  if(Str::IncludesUpper(name)) {
    std::cout << "THE VALUE DOES INCLUDE A UPPER CASE LETTER !" << std::endl;
  }
  // Character type
  if(Str::IncludesUpper(alphabet)){
    std::cout << "THE CHARACTER IS A UPPER CASE !" << std::endl;
  }
}
```

## NEW RELEASES:
# Split():
---
This function has 4 parameters. 2 of the are optional, and other first, and second parameters are not optional!

The first parameter is the string that holds the text.

The second parameter is the splitter. The splitter is what the program will look for through the string
And try to break from that split, and add the value that it has collected to the list.

The third parameter is the limit of the list! So -1 or <= 0 means infinite list, But if the limit is 1
It will return list of one item in it!.

The fourth parameter is mode. Mode is what the value should be, or should not be.
Default mode is "\[/\*\*/\]" that mode is used if you don't want any mode!

every mode must start with opening braces \[ and closing braces \]

## Split() Modes:
```
! -- not
/*trim*/ -- trim

/*empty*/ -- empty

/**/ -- none

Examples:
![/*empty*/] -  THIS MODE ADDS THE VALUE ONLY IF ITS NOT EMPTY !
[/**/] - THIS MODE DOES NOTHING !
![/**/] - THIS MODE DOES ALL THE MODES, BASICALLY IT'S A REVERSE OF [/**/]
[/*empty*/] - THIS MODE ADDS THE VALUE ONLY IF IT'S EMPTY !
[/*trim*/] - THIS MODE TRIMS THE VALUE !
![/*trim*/] - THIS DOES NOT TRIM THE VALUE !

You can also combine them!
![/*empty*/][/*trim*/] - THIS MODE CHECKS SURE THE VALUE IS NOT EMPTY IS ALSO TRIMMED !

 ALSO MAKE SURE THIS IS A STRING!!!! "[/**/]" !!!
```
# Using Split():
```c++
// With this function you can split strings !
// The result of this function will be "vector" type
// vector is something like an "array", but more better !
// You won't have to include the "vector" type
// Because the "Str.h" already has it included !
// Make sure the type you give the vector is "string"!
#include <iostream>
#include "Str.h"
int main {
  std::string my_text = "Hello, world. This your name";
  std::vector<std::string> my_results;
  my_results = Str::Split(my_text," ");
}



I HOPE I MADE YOUR LIFE EASIER :)

This was a challenge a bit, But i did it !
