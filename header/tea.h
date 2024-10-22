#ifndef TEA_H
#define TEA_H
#include "beverage.h"
class Tea : public Beverage
{
public:
    std::string getDescription() const override;
    double cost() const override;
    ~Tea() = default;
};
#endif