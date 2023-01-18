  // lab4.cpp 
// Determine how many brownies will fit in specific baking pans
// Marc Jacques mjacque5@asu.edu 
// Write a preprocessor directive below which enables you to perform I/O 
#include <iostream>
using namespace std;

int main() 
{
    // Below, declare all the variables you will use and make certain to give each variable a descriptive name which explains what the variable represents. 
  int length, width, small_brownies, large_brownies;
    
  // Write a statement to output a prompt for the information the program needs to get from the user. 
  cout << "How long is the pan?" << endl;
  cin >> length;
  cout << "How wide is the pan?" << endl;
  cin >> width;
 
  // Write a statement here to read the input from the user and save it in a variable. 
 
    // Write statements below which will perform the required computations and 
    // assign the results to variables. 
  small_brownies = length * width;
  large_brownies = small_brownies/4;
 
    // Write statements below which will output the requested information.
  cout << "A " << length << "X" << width << " inch pan can hold " << small_brownies << " small brownies or " << large_brownies << " large brownies.";
 
  return 0;
}