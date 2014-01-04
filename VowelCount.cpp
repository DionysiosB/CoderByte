#include <iostream>
using namespace std;

int VowelCount(string str) { 

  int output(0);
  for(int k = 0; k < str.size(); k++){
    char c = str[k];
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){++output;}
    else if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){++output;}
  }
  return output; 
            
}

int main() { 
  
  // keep this function call here
  cout << VowelCount(gets(stdin));
  return 0;
    
}
