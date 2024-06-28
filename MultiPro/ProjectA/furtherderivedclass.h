#ifndef FURTHERDERIVEDCLASS_H
#define FURTHERDERIVEDCLASS_H

#include "derivedclass.h"

class FurtherDerivedClass : public DerivedClass {
public:
    FurtherDerivedClass();
    ~FurtherDerivedClass();
    void display() override;
};

#endif // FURTHERDERIVEDCLASS_H
