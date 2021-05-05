#include <iostream>
#include <string>

using namespace std;

class Person {
public:
  Person() { // default constructor
    mName = "anonymous";
  }

  Person(string cName) { // regular constructor
    mName = cName;
  }

  Person(const Person& rcOther) { // copy constructor
    mName = rcOther.mName;
  }

  ~Person() {}; // destructor

  Person& operator=(Person cOther) { // copy assignment operator
  //void operator=(Person cOther) {
    mName = cOther.mName;
    return *this; // this is a pointer to the object - *this dereferences the this pointer, in other words
                  // *this is the object
  }
  
private:
  string mName;
};

int main() {
  Person cMe("Shereen"); // regular constructor
  Person cInstructor = cMe; // copy constructor
  Person cYou; // default constructor
  Person cThem;

  cYou = Person("Layla"); // regular constructor then copy assignment operator
  cMe = cInstructor; // copy assignment operator

  int i = 9, j = 3, k = 5;
  i = j = k; // What are the values of i, j, k? All be 5

  cThem = cYou = cMe; // All be "Shereen"

  return EXIT_SUCCESS;
}