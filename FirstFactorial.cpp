#include <iostream>
using namespace std;

int FirstFactorial(int num) { 

  if(num < 0){return 0;}
  else if(num == 0){return 1;}
  else{return num * FirstFactorial(num - 1);}
            
}

int main() { 
  
  // keep this function call here
  cout << FirstFactorial(gets(stdin));
  return 0;
    
}      
