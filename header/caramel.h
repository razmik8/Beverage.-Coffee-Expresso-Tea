#ifndef CARAMEL_H
#define CARAMEL_H
#include "add_on_decorator.h"
class Caramel : public AddOnDecorator
{
public:
    std::string getDescription() const override;
    double cost() const override;
    explicit Caramel(Beverage*);
};
#endif