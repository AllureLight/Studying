//Remove First and Last Character
#include <string>

using namespace std; 

string sliceString (string str )
{
  // your code is here ... Hope You Enjoy !!
  str.erase(0,1);
  str.erase(str.length() - 1, 1);
  return str ; 
}