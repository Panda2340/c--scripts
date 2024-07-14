#include <iostream>
#include <string>
using namespace std;
int main() {
  string var; //create a string variable
cout << "Type anything here:"; //give the user a prompt for what to type
cin >> var; //set the value of the variable to the user's input
if (var == "Hi") { //set up an if else statement so something different outputs depending on the user's input
cout << "Hello" //display the word "Hello" if the user types "Hi"
} else {
cout << "You typed:" << var; //display the user's input if they didn't type "Hi"
}
