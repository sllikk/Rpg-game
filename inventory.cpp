#include <string>
#include <iostream>

using namespace std;

class Weapon {       //general class of settings for weapons
protected:
	string type;
	short damage;
	short range;
	short durability;
public:
	Weapon(string t, short d, short r, short dur) : type(t), damage(d), range(r), durability(dur) {}

	void displayWeapon() {
		cout << "Type:" << type << endl;
		cout << "Damage:" << damage << endl;
		cout << "Range:" << range << endl;
		cout << "Durability:" << durability << endl;
	}
};

class Sword : public Weapon {
public:
	Sword()
		:Weapon("One-Handed Sword", 35, 2, 85) {}
};

class Axe : public Weapon {
public:
	Axe()
		:Weapon("Two - Handed Axe", 55, 1, 65) {}
};

class Magic_stick : public Weapon {
public:
	Magic_stick()
		:Weapon("Magic Stick", 35, 2, 85) {}
};

class Magic_scroll : public Weapon {
public:
	Magic_scroll()
		:Weapon("Magic scroll", 55, 1, 65) {}
};