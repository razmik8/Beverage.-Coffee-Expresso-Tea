#include "../header/caramel.h"
Caramel::Caramel(Beverage* bev) : AddOnDecorator(bev)
{

}
double Caramel::cost() const
{
    return m_beverage->cost() + 0.05;
}
std::string Caramel::getDescription() const 
{
    return m_beverage->getDescription() + " Caramel";
}