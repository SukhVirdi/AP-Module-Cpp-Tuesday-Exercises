# AP-Module-Cpp-Tuesday-Exercises
This repo is part of my 'Advanced Programming' module. It contains all of the Tuesday exercises / challenges.
## Exercise 1: ReverseWord
I created a simple C++ program that reverses a user entered word. The program prompts the user for a single word. Once entered, the program displays the word in reverse. 

This is my own algorithm created by using a while loop to reverse the word and here is the example output:
```
Please enter a word: Programming
Programming spelt backwards is: gnimmargorP
```

## Exercise 2: LowerCase Converter
I created a simple C++ program that converts a user entered word to lower case. The program prompts the user for a single word. Once entered, the program displays the message below and shows the word in lower case.
```
Please enter a word: MaDaM
MaDaM converted to lower case is: madam
```

## Exercise 3: Palindrome Checker
I created a simple C++ program that checks whether a word is a palindrome, i.e., a word that reads the same forwards or backwards. The program prompts the user for a single word. Once entered, the program displays a message indicating whether the word was a palindrome or not.
```
Please enter a word: Company
Sorry, ‘Company’ is not a palindrome.

Please enter a word: RaceCar
Yes, ‘RaceCar’ is a palindrome

Please enter a word: madam
Yes, ‘madam’ is a palindrome
```


## Password Validator
Passwords are validated by comparing a user-provided value with a known, stored value – passwords are either correct or not. I created a simple C++ program that validates user login credentials. This program prompts the user for a username and password and compare them against already known credentials. If the username provided exists and the password matches the program displays “Welcome” followed by the users first name. If the username does not exist or the password is incorrect a “Failed to Authenticate” message is shown.
```
Username: mike@ada.ac
Password: AdaRocks

Welcome Mike

--OR--

Username: casper@ada.ac
Password: AdaRocks

Failed to Authenticate
```

## Employee List Removal
I created a simple C++ program that displays a list of employee names. Once finished, prompts the user for an employee name and remove it for the list; display the remaining names, each on its own line.
```
There are 5 employees:
John Smith
Jaelynn Stuart
Kaley Barajas
Walter Collier
Cale Myers

Enter an employee name to remove: Jaelynn Stuart

There are 4 employees:
John Smith
Kaley Barajas
Walter Collier
Cale Myers
```
