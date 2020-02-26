//
// Created by eddie on 2/25/2020.
//

#ifndef __ELF_H__
#define __ELF_H__

#include "Character.h"

class Elf : public Character{
private:
    string familyName;
public:
    Elf(string name, double hp, double atk, string familyName);
    void attack(Character& enemy) override;


};

#endif //LAB8_ELF_H
