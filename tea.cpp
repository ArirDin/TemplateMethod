#include "tea.h"

Tea::Tea()
{

}

void Tea::prepareRecipe(){
    boilWater();
    steepTeaBag();
    pourInCup();
    addLemon();
}

void Tea::steepTeaBag(){
    cout << "Steeping the tea" << endl;
}

void Tea::addLemon(){
    cout << "Adding Lemon" << endl;
}
