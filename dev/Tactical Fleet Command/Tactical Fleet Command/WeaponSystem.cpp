#include "WeaponSystem.h"

WeaponSystem::WeaponSystem(const std::string& weaponName, int weaponDamage, int weaponRange)
	: name(weaponName), damage(weaponDamage), range(weaponRange)
{
}

std::string WeaponSystem::GetName() const { return name; }
int WeaponSystem::GetDamage() const { return damage; }
int WeaponSystem::GetRange() const { return range; }
