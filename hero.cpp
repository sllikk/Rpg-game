#include <string>
#include <iostream>
using namespace std;

//inventory item structures

struct HealthPotion {
	string name;
	int healingAmount;
	string description;

	HealthPotion() : name(""), healingAmount(0), description("") {}

	void use() {
		cout << "\nYou consumed " << name << " it restores " << healingAmount << " health" << endl;
	}
};

struct  MagicPotion {
	string name;
	int magicBoost;
	int magicReplenish;
	string description;

	MagicPotion() : name(""), magicBoost(0), magicReplenish(0), description("") {}

	void use() {
		cout << "You consumed " << name << " it increases magic by " << magicBoost << " and replenishes mana by " << magicReplenish << "\n";
	}
};

struct  Provision {
	string name;
	int enduranceBoost;
	int energyReplenish;
	string description;

	Provision() : name(""), enduranceBoost(0), energyReplenish(0), description("") {}

	void use() {
		cout << "\nYou consumed " << name << " it increases endurance by " << enduranceBoost << " and replenishes energy by " << energyReplenish << endl;
	}
};

struct Coin {
	string name;
	int value;
	string description;

	Coin() : name(""), value(0), description("") {}
};

struct Artifact {
	string name;
	string power;
	string description;

	Artifact() : name(""), power(""), description("") {}
};

struct QuestItem {
	string name;
	string description;

	QuestItem() : name(""), description("") {}
};



