#ifndef SUGAR_H
#define SUGAR_H
#include "add_on_decorator.h"
class Sugar : public AddOnDecorator
{
public:
    std::string getDescription() const override;
    double cost() const override;
    explicit Sugar(Beverage*);
};
#endif