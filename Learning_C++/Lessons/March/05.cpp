#include <string>
#include <cctype>

//Complete the method/function so that it converts dash/underscore delimited 
//words into camel casing. The first word within the output should be capitalized
// only if the original word was capitalized (known as Upper Camel Case, also often
// referred to as Pascal case). The next words should be always capitalized.
//"the-stealth-warrior" gets converted to "theStealthWarrior"

std::string to_camel_case(std::string text) {
  int i = 0;
  for(char c : text){
    if(c == '_' || c == '-'){
      text.erase(i, 1);
      if (i < text.size()) {
          text[i] = std::toupper(text[i]);
      }
    }
    i++;
  }
  return text;
}