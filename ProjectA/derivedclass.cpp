// DerivedClass.cpp
#define chk(x) ((x) != nullptr)
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

int DerivedClass::staticFunc() {
    return 1;
}

void DerivedClass::testCall() {
    DerivedClass a, b;
    DerivedClass derived[] = {a, b};
    //call(derived);
    //call(getNewArray());
    try {
        if (chk(newArr()) && staticFunc()){
            call(templateFunc<DerivedClass*> (newArr()));
        } else {
            macroCall(newArr());
            std::cout << privateMethod();
        }
    } catch (int x) {
        this->display();
        this->doSomething();
    }
}
