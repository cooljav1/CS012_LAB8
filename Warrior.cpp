//
// Created by Eddie Segura on 2/25/2020.
//
#include <iostream>
#include "Warrior.h"

Warrior::Warrior(string &name,
                double &hp,
                double &atk,
                string &allegiance) : Character(WARRIOR, name, hp, atk), allegiance(allegiance){
}

void Warrior::attack(Character& enemy) {
    if(enemy.getType() == WARRIOR){
        Warrior &opp = dynamic_cast<Warrior &>(enemy);
        if(allegiance == enemy.getAl()){
            cout << "Warrior " << name  << " does not attack Warrior " << enemy.getName() << "." << endl;
            cout << "They share an allegiance with " << allegiance << "." << endl;
        }
        else{
            double damage = (health/MAX_HEALTH) * attackStrength;
            enemy.damage(damage);
        }
    }
    else{

    }
}

const string &Warrior::getAl() {
    return allegiance;
}
