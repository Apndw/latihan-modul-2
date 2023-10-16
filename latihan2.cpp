#include <string>
#include <iostream>

using std::cin;
using std::hex;
using std::cout;
using std::endl;
using std::string;

int main() {
  int number;
  char character;
  string text;

  cout << "Please input a number: ";
  cin >> number;

  cout << "Please input a character: ";
  cin >> character;

  cout << "Please input a text: ";
  cin >> text;

  cout << "Number: " << hex << number << endl;
  cout << "Character: " << character << endl;
  cout << "Text: " << text << endl;

  return 0;
}