#include <iostream>
#include "myclass.h"

using namespace std;

int main () {

  int a = 1;
  int b = 5;
  int temp = a; 
  a = b;
  b = temp;

  cout << "What!" << endl;

  MyClass a(5);
  cout << a.getX() << endl;
}
