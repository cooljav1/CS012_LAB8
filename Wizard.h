//
// Created by eddie on 2/25/2020.
//

#ifndef __WIZARD_H__
#define __WIZARD_H__

#include "Character.h"

class Wizard : public Character{
private:
    int rank;
public:
    Wizard(string name, double hp, double atk, int rank);
    void attack(Character& enemy);

};

#endif //LAB8_WIZARD_H
