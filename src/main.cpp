#include "../header/coffee.h"
#include "../header/tea.h"
#include "../header/expresso.h"
#include "../header/milk.h"
#include "../header/mocha.h"
#include "../header/caramel.h"
#include "../header/sugar.h"
#include "../header/whiped_cream.h"
//#include <iostream>

int main()
{
    std::cout << "Chose any drink:" << std::endl << "1)Coffee" << std::endl << "2)Espresso" << std::endl << "3)Tea" << std::endl;
    int drink = 0;
    do{

        std::cout << "Enter 1,2 or 3 for coffee." << std::endl << "Or enter 4 for exit." << std::endl << "Ansver: ";
        std::cin >> drink;
    }
    while(drink < 0 || drink > 4);
    if(drink == 4)
    {
        return 0;
    }
    Beverage* bev;
    if(drink == 1)
    {
        // std::cout << "cofa" << std::endl;
       bev = new Coffee;
    }
    else if(drink == 2)
    {
        // std::cout << "expres" << std::endl;
       bev = new Expresso;
    }
    else 
    {
        // std::cout << "cay" << std::endl;
        bev = new Tea;
    }
    int with = 0;
    std::cout << "What you want with tour drink?" << std::endl 
              << "1)Milk" << std::endl << "2)Caramel" << std::endl << "3)Mocha" << std::endl << "4)Sugar" << std::endl << "5)Whiped cream" << std::endl;
    bool b_milk = false;
    bool b_caramel = false;
    bool b_mocha = false;
    bool b_sugar = false;
    bool b_whiped = false;
    do
    {
        std::cout << "Chose 1,2,3,4,5 or 6 for simple or if you chose yet." << std::endl << "Ansver: ";
        std::cin >> with;
        
        if(with == 6)
        {
            break;
        }
        if(with == 1)
        {
            if(!b_milk)
            {
                bev = new Milk(bev);
            }
            else
            {
                std::cout << "You alredy choose milk, choose another." << std::endl;
            }
            b_milk = true;
        }
        else if(with == 2)
        {
            if(!b_caramel)
            {
                bev = new Caramel(bev);
            }
            else
            {
                std::cout << "You alredy choose caramel, choose another." << std::endl;
            }
            b_caramel = true;
        }
        else if(with == 3)
        {
            if(!b_mocha)
            {
                bev = new Mocha(bev);
            }
            else
            {
                std::cout << "You alredy choose mocha, choose another." << std::endl;
            }
            b_mocha = true;
        }
        else if(with == 4)
        {
            if(!b_sugar)
            {
                bev = new Sugar(bev);
            }
            else
            {
                std::cout << "You alredy choose sugar, choose another." << std::endl;
            }
            b_sugar = true;
        }
        else if(with == 5)
        {
            if(!b_whiped)
            {
                bev = new WhipedCream(bev);
            }
            else
            {
                std::cout << "You alredy choose whiped cream, choose another." << std::endl;
            }
            b_whiped = true;
        }
    }
    while(drink != 6);
    std::cout << "You chose " << bev->getDescription() << '.' << std::endl << "Pay" << bev->cost() << '$';

    return 0;
}