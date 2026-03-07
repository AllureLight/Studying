#include <string>

//Remove First and Last Character 

std::string sliceString (std::string str )
{
  // your code is here ... Hope You Enjoy !!
  str.erase(0,1);
  str.erase(str.length() - 1, 1);
  return str ; 
}