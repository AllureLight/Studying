#include <string>
#include <cmath>

//Playing with digits

class DigPow
{
public:
  static int digPow(int n, int p){
    std::string s = std::to_string(n);
    int total = 0;
    
    for(char c : s){
      int num = c - '0';
      total += pow(num, p);
      p++;
    }
    
    if(total % n == 0)
      return total/n;
    else
      return -1;
  }
};