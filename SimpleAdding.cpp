#include <iostream>
using namespace std;

int SimpleAdding(int num){return num * (num + 1) / 2;}

int main() { 
  
  // keep this function call here
  cout << SimpleAdding(gets(stdin));
  return 0;
    
}           
