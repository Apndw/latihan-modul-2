#include <iomanip>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

int main() {
  float number;

  cout << "Please input a number: ";
  cin >> number;

  cout << "Number: " << fixed << setprecision(2) << number << endl;

  return 0;
}