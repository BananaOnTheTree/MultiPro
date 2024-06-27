// DerivedClass.cpp
#include <iostream>
#include "derivedclass.h"

DerivedClass::DerivedClass() {
    // Constructor
}

DerivedClass::~DerivedClass() {
    // Destructor
}

void DerivedClass::display() {
    std::cout << "This is the derived class." << std::endl;
}

void DerivedClass::call(BaseClass base[]) {
    base[0].display();
}

void DerivedClass::testCall() {
    DerivedClass derived[3];
    call(derived);
}
