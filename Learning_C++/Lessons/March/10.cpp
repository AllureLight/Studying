#include <iostream>
#include <vector>

//return indexes of the two numbers such that they add up to a specific target

//two_sum({1, 2, 3}, 4); // returns {0, 2} or {2, 0}
//two_sum({3, 2, 4}, 6); // returns {1, 2} or {2, 1}

std::pair<std::size_t, std::size_t> two_sum(const std::vector<int>& numbers, int target) {
  for(std::size_t i = 0; i < numbers.size(); i++){
      for(std::size_t j = 0; j < numbers.size(); j++){
        if(j != i && numbers[i] + numbers[j] == target){
            return {i, j};
        }
      }
  }
    return {0, 0};
}