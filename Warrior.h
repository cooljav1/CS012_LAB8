//
// Created by Eddie Segura on 2/25/2020.
//

#ifndef __WARRIOR_H__
#define __WARRIOR_H__

#include "Character.h"

class Warrior : public Character {
private:
    string allegiance;

public:
    Warrior(string& name, double& health, double& attackStrength, string& allegiance);
    const string& getAl();
    void attack(Character &enemy) override;
};



#endif //_WARRIOR_H
