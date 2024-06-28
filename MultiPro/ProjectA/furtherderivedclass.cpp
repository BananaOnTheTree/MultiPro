#include <iostream>
#include "furtherderivedclass.h"

FurtherDerivedClass::FurtherDerivedClass() {
    // Constructor
}

FurtherDerivedClass::~FurtherDerivedClass() {
    // Destructor
}

void FurtherDerivedClass::display() {
    std::cout << "This is the further derived class." << std::endl;
}
