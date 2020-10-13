#ifndef TEA_H
#define TEA_H

#include "caffeinebeverage.h"

class Tea : public CaffeineBeverage{
public:
    Tea();
    virtual void prepareRecipe();
    void steepTeaBag();
    void addLemon();
};

#endif // TEA_H
