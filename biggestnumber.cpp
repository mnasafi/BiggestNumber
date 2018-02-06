//Author: Mustafa Nasafi
#include<iostream>

using namespace std; //so we don't need the prefix std::

int main()
{
  
  //declare variables
  int number1;
  int number2;
  int biggest;


  cout << "Please enter a whole number:\n";
  cin >> number1;

  
  cout << "Please enter another whole number:\n";
  cin >> number2; 

    
  //if statement
  
  if(number1>number2) // checks to see if number1 > number2
  {
    biggest = number1; // assigns number1 value to biggest if number1 > number2

  }

  else
  {
    biggest = number2; // assings number2 to biggest if above condition wasn't true.

  }

  
  cout << "Of those two numbers, the biggest is: " << biggest;
  
  
  
  cout << endl << "Thank you for playing.\n";

  return 0;
}


