#ifndef CAFFEINEBEVERAGE_H
#define CAFFEINEBEVERAGE_H

#include <iostream>

using namespace std;

class CaffeineBeverage
{
public:
    CaffeineBeverage();
    virtual void prepareRecipe() = 0;
    void boilWater();
    void pourInCup();
};

#endif // CAFFEINEBEVERAGE_H
