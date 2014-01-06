#include <iostream>
using namespace std;

string CheckNums(int num1, int num2) { 

  if(num1 < num2){return "true";}
  else if(num1 > num2){return "false";}
  return "-1";
      
}

int main() { 
  
  cout << CheckNums(gets(stdin));
  return 0;
    
}  
