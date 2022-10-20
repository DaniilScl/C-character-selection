#include "Boy.h"
# include "AbilityBoy.h"
#include "WeaponBoy.h"
#include <iostream>

void Boy::display()
{
   std::cout<<"Boy created"<<sts::endl;
};

void Boy::getAbility()
{
  ability = new AbilityBoy();
  ability -> displayAb();
  delete ability
};

void Boy ::getWeapon()
{
  weapon = new WeaponBoy();
  weapon -> displayAb();
  delete weapon
};