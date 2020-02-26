//
// Created by Eddie Segura on 2/25/2020.
//
#include <iostream>
#include "Warrior.h"

Warrior::Warrior(string name,
                double hp,
                double atk,
                string allegiance) : Character(WARRIOR, name, hp, atk), allegiance(allegiance){
}

void Warrior::attack(Character& enemy) {
    if(enemy.getType() == WARRIOR){
        Warrior &opp = dynamic_cast<Warrior &>(enemy);
        if(allegiance == opp.allegiance){
            cout << "Warrior " << name  << " does not attack Warrior " << enemy.getName() << "." << endl;
            cout << "They share an allegiance with " << allegiance << "." << endl << endl;
        }
    }
    double damage = (health/MAX_HEALTH) * attackStrength;
    cout << "Warrior " << name << " attacks " << enemy.getName() << " --- SLASH!!" << endl;
    cout << enemy.getName() << " takes " << damage << " damage." << endl;
    enemy.damage(damage);

}


