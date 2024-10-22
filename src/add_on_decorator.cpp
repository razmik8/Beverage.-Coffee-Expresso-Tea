#include "../header/add_on_decorator.h"
AddOnDecorator::AddOnDecorator(Beverage* beverage) : m_beverage(beverage)
{

}
AddOnDecorator::~AddOnDecorator()
{
    delete m_beverage;
}
