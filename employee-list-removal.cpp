//https://repl.it/join/ukovoibj-sukhvirdi7
//My approach included firstly creating an array to store the values, calculate the size of the array then the number of elements, and assigning a number to each.. then looping through each element and index. Second half of the application involves removing the employee: taking user input and using a loop to find the desired name to replace with an empty value which would advertently remove decrease the count. 

#include <iostream>
#include<string>

using namespace std;

//array store in method with the given employee names for the program
int main() {
  string arr[] = {
    "John Smith",
    "Jaelynn Stuart",
    "Kaley Barajas",
    "Walter Collier",
    "Cale Myers"
  };

  string temp;
  //returns the number of bytes arr[] has then it calculates the number of elements in the array with a counter display this number
  int len = sizeof(arr) / sizeof(arr[0]), counter = 0;
  string removeEmployee;
  //loops through the data and outputs the number of employees 
  while (true) {
    cout << "There are " << len - counter << " employees: \n";
    for (int i = 0; i < len; i++) {
      if (arr[i] == "") {
      } else {
        cout << arr[i] << "\n";
      }
    }

    //asks for an employee to remove which gets parsed into removeEmployee
    cout << "\nEnter an employee name to remove: ";
    getline(cin, removeEmployee);
    
    //loop to remove the employee and replace the array index with a empty value
    for (int i = 0; i < len; i++) {
      if (arr[i] == removeEmployee) {
        arr[i] = "";
        counter++;
      }
    }

    cout << "\n";

  }
}
