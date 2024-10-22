#ifndef MOCHA_H
#define MOCHA_H
#include "add_on_decorator.h"
class Mocha : public AddOnDecorator
{
public:
    std::string getDescription() const override;
    double cost() const override;
    explicit Mocha(Beverage*);
};
#endif