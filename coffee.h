#ifndef COFFEE_H
#define COFFEE_H

#include "caffeinebeverage.h"

class Coffee : public CaffeineBeverage{
public:
    Coffee();
    virtual void brew();
    virtual void addCondiments();
};

#endif // COFFEE_H
