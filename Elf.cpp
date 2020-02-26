//
// Created by eddie on 2/25/2020.
//
#include <iostream>
#include "Elf.h"

using namespace std;

Elf::Elf(string name, double hp, double atk, string familyName) : Character(ELF, name, hp, atk), familyName(familyName){
}

void Elf::attack(Character &enemy) {
    if(enemy.getType() == ELF){
        Elf &opp = dynamic_cast<Elf &>(enemy);
        if(familyName == opp.familyName){
            cout << "Elf " << name << " does not attack Elf " << enemy.getName() << "." << endl;
            cout << "They are both members of the " << familyName << " family." << endl;
            return;
        }
    }

    double damage = (health/MAX_HEALTH) * attackStrength;
    cout << "Elf " << name << " shoots an arrow at " << enemy.getName() << " --- TWANG!!" << endl;
    cout << enemy.getName() << " takes " << damage << " damage." << endl;
    enemy.damage(damage);

}
