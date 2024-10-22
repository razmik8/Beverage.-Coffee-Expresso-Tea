#ifndef MILK_H
#define MILK_H
#include "add_on_decorator.h"
class Milk : public AddOnDecorator
{
public:
    std::string getDescription() const override;
    double cost() const override;
    explicit Milk(Beverage*);
};
#endif