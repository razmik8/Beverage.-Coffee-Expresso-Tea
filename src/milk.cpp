#include "../header/milk.h"
Milk::Milk(Beverage* bev) : AddOnDecorator(bev)
{

}
double Milk::cost() const
{
    return m_beverage->cost() + 0.05;
}
std::string Milk::getDescription() const 
{
    return m_beverage->getDescription() + " Milk";
}