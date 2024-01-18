
#include <iostream>

using namespace std;

int sum (int n){
  int add;
  int i = 1;
  while(i < n){
    add = i + n;
    i++;
  }
  return add;
}

int main() {
  cout << "Hello World!" << endl;
  int n;
  cout << "Give me a number, any number: ";
  cin >> n;
  cout << "Your new number is: " << sum(n) << endl;
  return 0;
}
