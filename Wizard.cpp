//
// Created by eddie on 2/25/2020.
//
#include "Wizard.h"
#include <iostream>

using namespace std;

Wizard::Wizard(string name, double hp, double atk, int rank) : Character(WIZARD, name, hp, atk), rank(rank){
}

void Wizard::attack(Character &enemy) {
    double dmg;
    if(enemy.getType() == WIZARD){
        Wizard &opp = dynamic_cast<Wizard &>(enemy);
        dmg = attackStrength * ((double)rank/opp.rank);
    }
    else {
        dmg = attackStrength;
    }
    cout << "Wizard " << name << " attacks " << enemy.getName() << " --- POOF!!" << endl;
    cout << enemy.getName() << " takes " << dmg << " damage." << endl;
    enemy.damage(dmg);
}
