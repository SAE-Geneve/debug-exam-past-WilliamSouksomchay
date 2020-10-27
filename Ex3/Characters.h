//
//  Characters.hpp
//  Test
//
//  Created by Elias Farhan on 14/12/16.
//  Copyright © 2016 Elias Farhan. All rights reserved.
//

#ifndef Characters_hpp
#define Characters_hpp
#pragma once
#include <iostream>

class Character;

class Monster : public Character
{
    
public:
    Monster(int,int,int,int);
    bool isAlive();
    void takeDamage(int damage);
    void fight(Hero*);
    void death();
   };

class Hero : Character
{
public:
    Hero(int,int,int,int);
    void takeDamage(int damage);
    void fight(Monster*);
    void death();
};

class Character
{
public:
    Character(int,int,int,int);
    void takeDamage(int damage);
    bool isAlive();
    virtual void death() = 0;
    
    int getHealth();
    int getDefense();
protected:
    int health;
    int attack;
    int defense;
    int strength;
};


#endif /* Characters_hpp */
