
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
int product (int n){
  int multi;
  int i = 1;
  while(i < n){
    multi = i * n;
    i++;
  }
  return multi;
}

int main() {
  cout << "Hello World!" << endl;
  int n;
  cout << "Give me a number, any number: ";
  cin >> n;
  cout << "Your new sum number is: " << sum(n) << endl;
  cout << "Your new product number is: " << product(n) << endl;
  return 0;
}
