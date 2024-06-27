// DerivedClass.h
#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H

#include "baseclass.h"

class DerivedClass : public BaseClass {
public:
    DerivedClass();
    ~DerivedClass();
    void display() override;
};

#endif // DERIVEDCLASS_H
