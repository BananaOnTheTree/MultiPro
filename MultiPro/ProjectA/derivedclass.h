// DerivedClass.h
#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H
#define newArr() getNewArray()
#define macroCall(base) do {       \
    call(base);        \
} while (0)
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
    static int staticFunc();
};

#endif // DERIVEDCLASS_H
