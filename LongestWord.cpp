#include <iostream>

std::string LongestWord(std::string input){
    
    std::string output("");
    std::string current("");

    for(int k = 0; k < input.size(); k++){
        if(('a' <= input[k] && input[k] <= 'z') || ('A' <= input[k] && input[k] <= 'Z')){current += input[k];}
        else{
            if(current.size() > output.size()){output = current;}
            current = "";
        }
    }
    if(current.size() > output.size()){output = current;}

    return output;

}
int main() { 
  
  std::cout << LongestWord(gets(stdin));
  return 0;
    
}
