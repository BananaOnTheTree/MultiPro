// DerivedClass.cpp
#define chk(x) ((x) > 3)
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

DerivedClass* DerivedClass::getNewArray() {
    return new DerivedClass;
}

void DerivedClass::call(BaseClass base[]) {
    base[0].display();
}

template <class T> T DerivedClass::templateFunc(T x) {
    return x;
}

void DerivedClass::testCall() {
    DerivedClass a, b;
    DerivedClass derived[] = {a, b};
    //call(derived);
    //call(getNewArray());
    try {
        if (chk(6)) {
            call(templateFunc<DerivedClass*> (newArr()));
        }
    } catch (int x) {
        this->display();
    }
}
