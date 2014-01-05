#include <iostream>

std::string LetterChanges(std::string input){
    
    std::string output("");

    for(int k = 0; k < input.size(); k++){
        if(tolower(input[k]) == 'z'){output += input[k] - 25;}
        else if('a' <= tolower(input[k]) && tolower(input[k]) <= 'y'){output += input[k] + 1;}
        else{output += input[k];}
    }

    for(int k = 0; k < output.size(); k++){
        char c = tolower(output[k]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){output[k] = toupper(output[k]);}
    }

    return output;

}

int main() { 
  
  std::cout << LetterChanges(gets(stdin));
  return 0;
    
}           
