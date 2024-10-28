#include "myclass.h"

MyClass::MyClass() {
}

MyClass::MyClass(int x_) { 
  y = 5;
  x = x_ + y;
}

int MyClass::getX() { 
  return x; 
}
