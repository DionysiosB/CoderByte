#include <iostream>

std::string SimpleSymbols(std::string str){
  
  if('a' <= tolower(str[0]) && tolower(str[0]) <= 'z'){return "false";}
  else if('a' <= tolower(str[str.size() - 1]) && tolower(str[str.size() - 1]) <= 'z'){return "false";}
  for(int k = 1; k < str.size() - 1; k++){
    if('a' <= tolower(str[k]) && tolower(str[k]) <= 'z' && (str[k - 1] != '+' || str[k + 1] != '+')){return "false";}
  }                                             
  return "true"; 
            
}
int main() { 
  
  std::cout << SimpleSymbols(gets(stdin));
  
  return 0;
}  
