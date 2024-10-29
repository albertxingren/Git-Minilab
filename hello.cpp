#include <iostream>
#include "myclass.h"

using namespace std;

int main () {

  int a1;
  a1 = 1;
  int b = 5;
  int temp = a1; 
  a1 = b;
  b = temp;

  cout << "Welcome" << endl;

  cout << "What!" << endl;

  MyClass a(5);
  cout << a.getX() << endl;
}
