#include <iostream>

std::string Palindrome(std::string str) { 

  std::string temp("");
  for(int k = 0; k < str.size(); k++){
    if('a' <= tolower(str[k]) && tolower(str[k]) <= 'z'){temp += str[k];}
  }
  
  for(int k = 0; k <= temp.size()/2; k++){
    if(temp[k] != temp[temp.size() - 1 - k]){return "false";}
  }
  return "true"; 
            
}

int main() { 
  
  std::cout << Palindrome(gets(stdin));
  return 0;
    
}           

