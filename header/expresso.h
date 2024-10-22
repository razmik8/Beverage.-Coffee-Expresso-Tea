#ifndef EXPRESSO_H
#define EXPRESSO_H
#include "beverage.h"
class Expresso : public Beverage
{
public:
    std::string getDescription() const override;
    double cost() const override;
    ~Expresso() = default;
};
#endif