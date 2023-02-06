/*
Author: Frida Mesa
Course: CSCI-135
Instructor: 
Assignment: E4.8
Wrote a program that reads a word and prints each character of the word on a separate line.
*/

#include <iostream>
using namespace std;

int main ()
{
  string word;
  
  cout << "Enter a word: " << endl;
  cin >> word;
  
  for ( int i = 0; i < word.length(); i++ )
  {
    cout << word[i] << endl;
  }
  return 0;
}
