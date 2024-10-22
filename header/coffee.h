#ifndef COFFEE_H
#define COFFEE_H
#include "beverage.h"
class Coffee : public Beverage
{
public:
    std::string getDescription() const override;
    double cost() const override;
    ~Coffee() = default;
};
#endif