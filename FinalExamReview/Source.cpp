#include <iostream>

using namespace std;

class Base {
public:
  // if the function is virtual, then it can be overriden in the subclass, different scope (different class)
  // if the function is NOT virtual, but has the same parameters and return value, then it 
  // can be redefined in the subclass (different classes)
  // if the function is NOT virtual, has different parameters, in the same scope, then it is overloaded

  void show() {
    cout << "Base class" << endl;
  }

  void show(string someText) {
    cout << someText << endl;
  }
};

class Derived : public Base {
public:
  void show() {
    cout << "Derived class" << endl;
  }
};

int main() {
  //Base* b;
  //Derived d;
  //b = &d;
  //b->show(); // calls show on line 12
  //b->show("overloaded"); // calls show on line 16
  //d.show(); // calls show on line 23

  // Q. What is a memory leak?
  // A. Some memory that no longer has anything pointing to it. It is a hole.

  // Q. Create a memory leak.
  //Base* pBase;
  //pBase = new Base(); // allocated new memory on the heap that is being pointed to by pBase
  //pBase = nullptr; // pBase is now pointing to nullptr. Oops the memory created on the previous line is a leak

  // Q. What is a dangling pointer?
  // A. is a pointer that is pointing to something invalid
  //Base* pDangling;
  //pDangling = new Base(); // allocated new memory on the heap that is being pointed to by pDangling
  //pDangling->show();
  //delete pDangling; // pDangling is now a dangling
  ////pDangling->show(); // A dangling pointer calling a function - UNDEFINED
  //pDangling = nullptr;



  return EXIT_SUCCESS;
}