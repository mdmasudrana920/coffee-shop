#include <iostream>
#include <string>

using namespace std;

bool isValid(string str) {
  if (str.length() < 2) {
    return false;
  }
  return (str[0] == 'a' && str[str.length() - 1] == 'a');
}

int main() {
  string input;

  cout << "Enter a string: ";
  getline(cin, input);

  if (isValid(input)) {
    cout << "The string is valid." << endl;
  } else {
    cout << "The string is not valid." << endl;
  }

  return 0;
}