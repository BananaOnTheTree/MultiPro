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
    virtual void call(BaseClass base[]);
    virtual void testCall();
    DerivedClass* getNewArray();
    template <class T> T templateFunc(T x);
    static int staticFunc();
protected:
    int protectedAttribute;
private:
    int privateMethod() {
        return -1;
    }
};
typedef DerivedClass dc;
#endif // DERIVEDCLASS_H
