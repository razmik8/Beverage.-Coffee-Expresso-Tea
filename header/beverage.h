#ifndef BEVERAGE_H
#define BEVERAGE_H
#include <iostream>
class Beverage
{
public:
    virtual std::string getDescription() const = 0;
    virtual double cost() const = 0;
    virtual ~Beverage() = default;
};
#endif