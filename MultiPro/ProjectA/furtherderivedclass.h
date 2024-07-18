#ifndef FURTHERDERIVEDCLASS_H
#define FURTHERDERIVEDCLASS_H

#include "derivedclass.h"
typedef BaseClass bc;
class FurtherDerivedClass : public DerivedClass {
public:
    FurtherDerivedClass();
    ~FurtherDerivedClass();
    void display() override;
};

#endif // FURTHERDERIVEDCLASS_H
