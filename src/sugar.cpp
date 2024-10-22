#include "../header/sugar.h"
Sugar::Sugar(Beverage* bev) : AddOnDecorator(bev)
{

}
double Sugar::cost() const
{
    return m_beverage->cost() + 0.05;
}
std::string Sugar::getDescription() const 
{
    return m_beverage->getDescription() + " Sugar";
}