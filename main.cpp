#include<iostream> 
#include "baseChange.cpp"
#include "add.cpp"
#include "divide.cpp"
#include "subtract.cpp"
#include "euclideanAlgorithm.cpp"
#include "remainder.cpp"
#include "multiply.cpp"
#include <map>
#include <unordered_map>
#include<string> // for string class


using namespace std; 
  
// main function - 
// where the execution of program begins 
int main() 
{ 
  
  cout<< "\n Multiply: ";
  string answer = multiply("0", 10, "AF", 16, 10);
  cout<< answer; 
  cout<< "\n Divide: ";
  string answer2 = divide("14", 10, "AF", 16, 10);
  cout<< answer2; 
  cout<< "\n Add: ";
  string answer3 = add("14", 10, "AF", 16, 10);
  cout<< answer3; 
  cout<< "\n Subtract: ";
  string answer4 = subtract("14", 10, "AF", 16, 10);
  cout<< answer4; 
  cout<< "\n rem: ";
  string answer5 = remainder("14", 10, "AF", 16, 10);
  cout<< answer5; 
  cout<< "\n euclid: ";
  string answer6 = euclideanAlgorithm("14", 10, "12", 16, 10);
  cout<< answer6; 
 
  
  
  
 /* int answer = baseChange(2, 8, 7);
  int answer2 = baseChange(2, 8, 10);
  int answer3 = convertFromDecimal(2, 8);
  cout<< answer; 
  cout<< "\n";
  cout<< answer2 ; 
  cout<< "\n";
  cout<< answer; 
  cout<< "\n Adding: \n";
  int answer4 = add(7, 8, 12, 10, 2);
  cout<< answer4;
  cout<< "\n Adding: \n";
  int answer5 = add(7, 8, 10);
  cout<< answer5;
  cout<< "\n Subtracting: \n";
  int answer6 = subtract(5, 7, 8);
  cout<< answer6; 
  cout<< "\n Euclid: \n";
  int answer7 = euclideanAlgorithm(4, 8, 8, 10, 10);
  cout<< answer7; 
  cout<< "\n Rem: \n";
 // int answer8 = remainder(90, 8, 8, 10, 10);
  //cout<< answer8; 
  cout<< "\n hashmap: \n";
  int answer9 = bases[1].at("1");
  cout<< answer9;
  cout<< "\n";
  int answer10 = bases[16].at("F");
  cout<< answer10;
  */
    return 0; 
}
