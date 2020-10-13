#include "coffee.h"

Coffee::Coffee()
{

}

void Coffee::prepareRecipe(){
    boilWater();
    brewCoffeeGrinds();
    pourInCup();
    addSugarAndMilk();
}

void Coffee::brewCoffeeGrinds(){
    cout << "Dripping Coffee through filter" << endl;
}

void Coffee::addSugarAndMilk(){
    cout << "Adding Sugar and Milk" << endl;
}
