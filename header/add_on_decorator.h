#ifndef ADD_DECORATOR_H
#define ADD_DECORATOR_H
#include "beverage.h"
class AddOnDecorator : public Beverage
{
public:
    AddOnDecorator(Beverage*);
    virtual ~AddOnDecorator();

protected:
    Beverage* m_beverage;
};
#endif