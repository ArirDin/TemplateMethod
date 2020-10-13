#ifndef CAFFEINEBEVERAGE_H
#define CAFFEINEBEVERAGE_H

#include <iostream>

using namespace std;

class CaffeineBeverage
{
public:
    CaffeineBeverage();
    void prepareRecipe();
    void boilWater();
    virtual void brew() = 0;
    void pourInCup();
    virtual void addCondiments() = 0;
    virtual bool customerWantsCondiments();
};

#endif // CAFFEINEBEVERAGE_H
