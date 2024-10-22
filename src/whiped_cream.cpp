#include "../header/whiped_cream.h"
WhipedCream::WhipedCream(Beverage* bev) : AddOnDecorator(bev)
{

}
double WhipedCream::cost() const
{
    return m_beverage->cost() + 0.05;
}
std::string WhipedCream::getDescription() const 
{
    return m_beverage->getDescription() + " Whiped Cream";
}