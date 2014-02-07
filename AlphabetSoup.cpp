#include <iostream>
#include <string>
#include <algorithm>

std::string AlphabetSoup(std::string input){
    char * cstr = new char[input.length()+1];
    std::strcpy (cstr, input.c_str());    
    std::sort(cstr, cstr + input.length());
    return std::string(cstr);
}

int main() { 
    
  std::cout << AlphabetSoup(gets(stdin));
  return 0;
} 
