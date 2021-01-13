//https://repl.it/join/gkujafir-sukhvirdi7
//I thought it would be much easier to reuse the code from one of my previous ada exercises that I undertook on one of the previous modules. The hardest part of this challenge involved correctly coding the loop that contained the logic.


#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    //asks for user input
    string input;
    cout << "Enter a word: ";
    cin >> input;
    //this is essentially a loop that looks at the first half of the string and compares the second part to see if they are equal.
    if(equal(input.begin(), input.begin() + input.size()/2, input.rbegin())) {
      cout << input << " is a palindrome.\n";
    } else {
      cout << input << " is not a palindrome.\n";
    }       
}
