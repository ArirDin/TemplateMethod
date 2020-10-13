#ifndef TEA_H
#define TEA_H

#include "caffeinebeverage.h"

class Tea : public CaffeineBeverage{
public:
    Tea();
    virtual void brew();
    virtual void addCondiments();
};

#endif // TEA_H
