// DerivedClass.h
#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H

#include "baseclass.h"

class DerivedClass : public BaseClass {
public:
    DerivedClass();
    ~DerivedClass();
    virtual void display() override;
    void call(BaseClass base[]);
    void testCall();
    DerivedClass* getNewArray();
    template <class T> T templateFunc(T x);
};

#endif // DERIVEDCLASS_H
