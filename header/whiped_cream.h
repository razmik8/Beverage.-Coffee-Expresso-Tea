#ifndef WHIPED_CREAM_H
#define WHIPED_CREAM_H
#include "add_on_decorator.h"
class WhipedCream : public AddOnDecorator
{
public:
    std::string getDescription() const override;
    double cost() const override;
    explicit WhipedCream(Beverage*);
};
#endif