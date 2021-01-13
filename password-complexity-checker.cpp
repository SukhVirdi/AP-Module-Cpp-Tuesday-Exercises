//https://repl.it/join/jxcozqcp-sukhvirdi7
//I started by initalising the variables and recieving user input, then an if statement that loops and also increments with indexes. What I found difficult was creating the nested if statements for each of the levels of complexity for the passwords, but I managed to successfully finish the program and print the correct output.

#include <iostream>
using namespace std;

//driver input 
int main() {
  //initialising variables
  int letter = 0, digit = 0, special = 0;
  string str;
  //user input
  cout << "Enter your password" << endl;

  cin >> str;
  int l = str.length(), i;
  //loop containing indexes and functions 
  for (i = 0; i < l; i++) {
    if (isalpha(str[i]))
      letter++;
    if (isdigit(str[i]))
      digit++;
    if (!isalpha(str[i]) && !isdigit(str[i]))
      special++;
  }
  //nested if statements and a variety of operators used
  //at least 8 characters, with 2 numbers, at least 4 letters and 1 special
  if (letter >= 4 && digit >= 2 && special >= 1 && l >= 8)
    cout << "The password '" << str << "' is a Very Strong password." << endl;
  //at least 8 characters, with 2 numbers, at least 4 letters
  else if (letter >= 4 && digit >= 2 && l >= 8)
    cout << "The password '" << str << "' is a Strong password" << endl;
  //at least 4 characters not weak strong or very strong
  else if (letter >= 1 && digit >= 1 && l >= 4)
    cout << "The password '" << str << "' is a Moderate" << endl;
  //only numbers or letters
  else
    cout << "The password '" << str << "' is a Weak" << endl;
  return 0;
}
