#include "Character.h"

Character::Character()
{
}

Character::Character(const char* name, float health, float damage, float defense)
{
	m_name = name;
	m_health = health;
	m_damage = damage;
	m_defense = defense;
}

float Character::takeDamage(float damage)
{
	float totalDamage = damage - getDefense();
	
	if (totalDamage < 0)
		totalDamage = 0;

	setHealth(getHealth() - totalDamage);
	return totalDamage;
}

float Character::attack(Character* other)
{
	return other->takeDamage(m_damage);
}
