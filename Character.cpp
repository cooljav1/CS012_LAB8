//
// Created by Eddie Segura on 2/25/2020.
//
#include "Character.h"

using namespace std;

Character::Character(HeroType tp,
                    const string &name,
                    double hp,
                    double atk) :type(tp), name(name), health(hp), attackStrength(atk) {
}

HeroType Character::getType() const {
    return type;
}

const string& Character::getName() const {
    return name;
}

int Character::getHealth() const {
    int hp;
    hp = health;
    return hp;
}

void Character::setHealth(double h) {
    health = h;
}

void Character::damage(double d) {
    health -= d;
}

bool Character::isAlive() const {
    return health > 0;
}
