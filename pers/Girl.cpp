#include "Girl.h"
#include "AbilitiGirl.h"
#include "WeaponGirl.h"
#include <iostream>

void Girl::display()
{
  ability = new AbilityGirl();
  ability -> displayAb();
  delete ability
};

void Girl::getWeapon()
{
    weapon = new Weapon();
    weapon -> displayAb();
    delete weapon
}