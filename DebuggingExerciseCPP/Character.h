#pragma once

/// <summary>
/// The base class for all entities.
/// </summary>
class Character
{
public:
	Character();
	Character(const char* name, float health, float damage, float defense);

	/// <summary>
	/// Subtracts health by the given damage amount.
	/// </summary>
	/// <param name="damage">The amount of damage to subtract from this character's health.</param>
	/// <returns>The total damage dealt.</returns>
	virtual float takeDamage(float damage);

	/// <summary>
	/// Callse the takeDamage function for the character passed in.
	/// </summary>
	/// <param name="other">The characterto deal damage to.</param>
	/// <returns>The total damage dealt.</returns>
	virtual float attack(Character* other);

	virtual const char* getName() { return m_name; }
	void setName(const char* value) { m_name = value; }
	virtual float getHealth() { return m_health; }
	void setHealth(float value) { m_health = value; }
	virtual float getDamage() { return m_damage; }
	void setDamage(float value) { m_damage = value; }
	virtual float getDefense() { return m_defense; }
	void setDefense(float value) { m_defense = value; }

private:
	const char* m_name = new char();
	float m_health = 0;
	float m_damage = 0;
	float m_defense = 0;
};

