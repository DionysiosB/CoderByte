#include <iostream>

std::string FirstReverse(std::string str) { 

  std::string output("");
  for(int k = 0; k < str.size(); k++){output += str[str.size() - 1 - k];}
  return output; 
            
}

int main() { 
  
  // keep this function call here
  std::cout << FirstReverse(gets(stdin));
  return 0;
    
}           
