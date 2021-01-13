//https://repl.it/join/dbloerfi-sukhvirdi7
//I thoroughly enjoyed completing this exercise as I firstly aimed in retrieving user input,then creating the structure and driver code containing the user accounts. Finally writing the if statement to check if the user input matches the existing user structure data.
#include <iostream>
using namespace std;

//account structure containg first name, username and password
struct User {
  string firstName;
  string username;
  string password;
};

//driver code
int main() {
  string userName;
  string userPassword;
  //hardcoded user account that was provided in the ADA Doc
  User mike = {
    "Mike",
    "mike@ada.ac.uk",
    "AdaRocks"
  };
  User casper = {
    "Casper",
    "casper@ada.ac.uk",
    "AdaRocks"
  };
  //retrieving user input (username and password)
  cout << "Username: ";
  cin >> userName;
  cout << "Password: ";
  cin >> userPassword;
  //if statement to check if the user login matches the exists data
  if (userName == mike.username && userPassword == mike.password) {
    cout << "Welcome " << mike.firstName << "!\n";

  } else if (userName == casper.username && userPassword == casper.password) {
    cout << "Welcome " << casper.firstName << "!\n";

  } else {
    cout << "Failed to Authenticate.\n" << '\n';
  }
  return 0;
}
