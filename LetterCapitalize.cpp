#include <iostream>

std::string LetterCapitalize(std::string str){ 
  
  bool state(0);
  for(int k = 0; k < str.size(); k++){
    if(state == 0 && 'a' <= tolower(str[k]) && tolower(str[k]) <= 'z'){str[k] = toupper(str[k]); state = 1;}
    else if(tolower(str[k]) < 'a' || tolower(str[k]) > 'z'){state = 0;}
  }
   
  return str;           
}

int main() { 
  
  std::cout << LetterCapitalize(gets(stdin));
  return 0;
    
}
