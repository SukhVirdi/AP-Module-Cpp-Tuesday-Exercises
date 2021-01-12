//PRIMER 4
//https://repl.it/join/dbloerfi-sukhvirdi7
//Started by getting user input and then proceeded to write an if statement to check whether the account existed, then a seperate function to analyse the login credentials etc.
//Then I wanted to finish my outputting my login function to give the user confirmation on where there authentication has gone through or if its invalid

#include <iostream>
using namespace std;

//account structure containg name, username and password
struct account {
  //name is added as when you successfuly login it in greets you with ur account name 
  string name;
  string username;
  string password;

};

//function containing the username password and account users
int login(string username, string password, account users[], int numUsers) {
  //loop to check username/password matches the accounts in account users
  for (int i = 0; i <= numUsers; i++) {
    if (users[i].username == username) {
      //fetches the index if its found
      if (users[i].password == password) {
        return i; 
      }
    }
  }
  //for an incorrect login it returns -1
  return -1;
}

//driver code
int main() {
  //hardcoded user account that was provided in the ADA Doc
  account users[] = {
    {
      "Mike",
      "mike@ada.ac",
      "AdaRocks"
    },
  };
  string username, password;
  int loginUserId;
  int numUsers;

  //retrieving user input (username and password)
  cout << "Username: ";
  cin >> username;
  cout << "Password: ";
  cin >> password;

  //checks whether the login user id matches 
  loginUserId = login(username, password, users, numUsers);
  if (loginUserId != -1) {
    cout << "\nWelcome " << users[loginUserId].name;
  } else {
    cout << "\nFailed to Authenticate";
  }
  return 0;
}
