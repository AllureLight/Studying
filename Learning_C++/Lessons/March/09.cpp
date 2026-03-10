#include <string>

std::string createPhoneNumber(const int arr [10]){
  //your code here
  std::string number = "(";
  for(int i = 0; i < 10; i++){
    number += std::to_string(arr[i]);
    if(i == 2)
      number += ") ";
    if(i == 5)
      number += "-";
  }
  return number;
}