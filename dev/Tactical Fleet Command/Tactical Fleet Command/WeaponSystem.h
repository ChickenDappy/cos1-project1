#pragma once
#include <string>

class WeaponSystem
{
private:
	std::string name;
	int damage;
	int range;

public:
	WeaponSystem(const std::string& weapsonName = "Laser Cannon", int weaponDamage = 15, int weaponRange = 3);

	std::string GetName() const;
	int GetDamage() const;
	int GetRange() const;

};
