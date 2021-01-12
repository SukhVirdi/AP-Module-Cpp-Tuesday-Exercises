//https://repl.it/join/bnczwzlb-sukhvirdi7
//I wanted to make this application very simple to read by having two main parts, the first part contains the driver code and the second part toggle the cases of a string.
//As the inputted sentence has uppercase characters then convert it to lowercase using tolower() function.

#include <iostream>
#include <cstring>

using namespace std;
//function to toggle cases of a string 
void toggle(string & str) {
  int length = str.length();
  for (int i = 0; i < length; i++) {
    int c = str[i];
    if (isupper(c))
      str[i] = tolower(c);
  }
}

//Driver Code 
int main() {
  
  string word;
  //retrieves user input 
  cout << "Please enter a word: ";
  cin >> word;
  string str = word;
  toggle(str);
  //displays the converted sentence in lowercase characters
  cout << word << " converted to lower case is: " << str;
  return 0;
}
