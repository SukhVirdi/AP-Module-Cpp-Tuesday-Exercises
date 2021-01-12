//https://repl.it/join/dbloerfi-sukhvirdi7
//Started by getting user input and proceeding to write an if statement to check for the account, then a seperate function 
//Finally i used the output of my login function to determine if the user succesfully logs in or not

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
int login(string username, string password, account users[]) {
  //loop to check username/password matches the accounts in account users
  for (int i = 0; i <= sizeof(users); i++) {
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
  //hardcoded user accounts that were provided in the ADA Doc
  account users[] = {
    {
      "Mike",
      "mike@ada.ac",
      "AdaRocks"
    },
    {
      "Casper",
      "Casper@ada.ac",
      "AdaRocks"
    }
  };
  string username, password;
  int loginUserId;

  //retrieving user input (username and password)
  cout << "Username: ";
  cin >> username;
  cout << "Password: ";
  cin >> password;

  //checks whether the login user id matches 
  loginUserId = login(username, password, users);
  if (loginUserId != -1) {
    cout << "\nWelcome " << users[loginUserId].name;
  } else {
    cout << "\nFailed to Authenticate";
  }
  return 0;
}
