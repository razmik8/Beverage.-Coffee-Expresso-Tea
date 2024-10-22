#include "../header/mocha.h"
Mocha::Mocha(Beverage* bev) : AddOnDecorator(bev)
{

}
double Mocha::cost() const
{
    return m_beverage->cost() + 0.05;
}
std::string Mocha::getDescription() const 
{
    return m_beverage->getDescription() + " Mocha";
}