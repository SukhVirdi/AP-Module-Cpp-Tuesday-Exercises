//https://repl.it/join/dwnbbthm-sukhvirdi7
//Here is my simple solution to reverse a string inputted by a user, I decided to use getline() to take whitespace into consideration and the main logic to this program exists on line 25 where it reverses the string into a reversed string.


#include<iostream> 
#include<cstdlib> 
#include<string> 
 
using namespace std; 
 
int main(){ 
  //initialize c so as to get into while loop 
	char c = 'o'; 
  //result holds the resulting string; 
	string s, result = ""; 
	 
	//prompt the user to read the input string 
	cout << "Please enter a word: "; 
	 
	while(c != '\n'){ 
		//cin reads the input string until the first whitespace is encountered 
		cin >> s; 
		 
		//concatanate the reverse of s into the resulting string with a whitespace 
		result += string(s.rbegin(), s.rend()) + " "; 
		 
		//if c = '\n' terminate the while loop 
		c = getchar(); 
	} 
	 
	//print the resulting string 
	cout << "Programming spelt backwards is: " << result << endl; 
} 
