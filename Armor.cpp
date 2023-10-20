#include <iostream>
#include<string>

using namespace std;
//general armor settings class
class Armor {
protected:
	string type;
	string description;
	short  durability;
public:
	Armor(string t, string d, short dur) : type(t), durability(dur), description(d) {}

	virtual void display_Armor() {
		cout << "Type:" << type << endl;
		cout << "Durability:" << endl;
	}
};
//armor class for knight
class Cuirass : public Armor {
private:
	short defense;
public:
	Cuirass(string t, string d, short def, short dur) : Armor(t, d, dur), defense(def) {}

	void display_Cuirass() {
		cout << "Defense:" << defense << endl;
	}
	void display_Armor() override {
		cout << "Type:" << type << endl;
		cout << "Durability:" << defense << endl;

	}
	void opis() {
		cout << type << description;
	}
};

class Helmet : public Armor {
private:
	short head_defense;
public:
	Helmet(string t, string d, short dur, short hd) : Armor(t, d, dur), head_defense(hd) {}
	void display_head() {
		cout << "Head defense:" << head_defense << endl;
	}
	void display_Armor() override {
		cout << "Type:" << type << endl;
		cout << "Durability:" << head_defense << endl;

	}
	void opis() {
		cout << type << description;
	}
};

class Gauntlets : public Armor {
private:
	short hand_defense;
public:
	Gauntlets(string t, string d, short dur, short hand) : Armor(t, d, dur), hand_defense(hand) {}
	void display_hand() {
		cout << "Hand Defense:" << hand_defense << endl;
	}
	void display_Armor() override {
		cout << "Type:" << type << endl;
		cout << "Durability:" << hand_defense << endl;

	}
	void opis() {
		cout << type << description;
	}
};

class Leggins : public Armor {
private:
	short legs_defense;
public:
	Leggins(string t, string d, short dur, short ld) : Armor(t, d, dur), legs_defense(ld) {}
	void legs_display() {
		cout << "Leg Defense:" << legs_defense << endl;
	}
	void display_Armor() override {
		cout << "Type:" << type << endl;
		cout << "Durability:" << legs_defense << endl;

	}
	void opis() {
		cout << type << description;
	}
};

//armor class for wizard

class Mantle : public Armor {
private:
	short defense;
public:
	Mantle(string t, string d, short def, short dur) : Armor(t, d, dur), defense(def) {}

	void display_mantle() {
		cout << "Defense:" << defense << endl;
	}
	void display_Armor() override {
		cout << "Type:" << type << endl;
		cout << "Durability:" << defense << endl;

	}
	void opis() {
		cout << type << description;
	}
};

class  Hat : public Armor {
private:
	short head_defense;
public:
	Hat(string t, string d, short dur, short hd) : Armor(t, d, dur), head_defense(hd) {}
	void display_Hat() {
		cout << "Head defense:" << head_defense << endl;
	}
	void display_Armor() override {
		cout << "Type:" << type << endl;
		cout << "Durability:" << head_defense << endl;

	}
	void opis() {
		cout << type << description;
	}
};

class Gloves : public Armor {
private:
	short hand_defense;
public:
	Gloves(string t, string d, short dur, short hand) : Armor(t, d, dur), hand_defense(hand) {}
	void display_Gloves() {
		cout << "Hand defense:" << hand_defense << endl;
	}
	void display_Armor() override {
		cout << "Type:" << type << endl;
		cout << "Durability:" << hand_defense << endl;

	}
	void opis() {
		cout << type << description;
	}
};

class Boots : public Armor {
private:
	short legs_defense;
public:
	Boots(string t, string d, short dur, short ld) : Armor(t, d, dur), legs_defense(ld) {}
	void display_Boots() {
		cout << "Leg defense:" << legs_defense << endl;
	}
	void display_Armor() override {
		cout << "Type:" << type << endl;
		cout << "Durability:" << legs_defense << endl;

	}
	void opis() {
		cout << type << description;
	}
};