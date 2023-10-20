#include <iostream>
#include <stdio.h>
#include <iostream>
#include <Windows.h>           //libraries for programs
#include "hero.cpp"                   
#include"inventory.cpp"
#include "Armor.cpp"


using namespace std;

struct World {      //World structure in the game 
    string history;
    string name;
    string type;
    short difficultyLevel;
    bool magicWorld;

    //Constructor for initializing a structure
    World() : history(""), name(""), type(""), difficultyLevel(7), magicWorld(false) {}
};
class Settings {
public:                             
    string tip;
    string name;
    short health;
    short agility;
    short intellect;
    short strong;

    Settings(string t, string n, short h, short ag, short intel, short s) : tip(t), name(n), health(h), agility(ag), intellect(intel), strong(s) {

    }


};

class Knight : public Settings {    //Knight class and its initialization
public:
    short armor;
    short damage;

    Knight(string t, string n, short h, short ag, short in, short s, short a, short d) : Settings(t, n, h, ag, in, s) {
        armor = a;
        damage = d;
    }
    void naEkran() {
        std::cout << "\nName:" << name << endl;
        std::cout << "Class:" << tip << endl;
        std::cout << "Health:" << health << endl;
        std::cout << "Armor:" << armor << endl;
        std::cout << "Damage:" << damage << endl;
        std::cout << "Agility:" << agility << endl;
        std::cout << "Strong:" << strong << endl;
        std::cout << "Intellect" << intellect << endl;
    }
};
class Wizard : public Settings {  //wizard class and its initialization
public:
    short mana;
    short damage;
    short armor;

    Wizard(string t, string n, short h, short ag, short m, short d, short a, short in, short s) : Settings(t, n, h, ag, in, s) {
        mana = m;
        damage = d;
        armor = a;

    }
    void naEkran() {
        std::cout << "Name:" << name << endl;
        std::cout << "Class:" << tip << endl;
        std::cout << "Health:" << health << endl;
        std::cout << "Armor:" << armor << endl;
        std::cout << "Damage:" << damage << endl;
        std::cout << "Armor:" << agility << endl;
        std::cout << "Strong:" << strong << endl;
        std::cout << "Mana:" << mana << endl;

    }

};

int main() {

    World myWorld;

    myWorld.name = "Reylindor";
    myWorld.type = "Fantasy";             //settings for world and type
    myWorld.magicWorld = true;

    int number;

    cout << "Enter 0 to start\n";
    cout << "Enter 1 to exit\n";                      //start of the program
    cout << "Confim your choise by entering 0 \n";
    std::cin >> number;

    if (number == 0) {
        cout << "Are you ready to begin?" << "\n";
        std::cin >> number;
    }
    else {
        cout << "Closing the program...\n";
        Sleep(7000);
        return 0;

    }
    std::cout << "In the world of \"Reylindor,\" darkness and chaos reigned long ago. The land was subjected to devastating wars between magical kingdoms and ancient demonic forces. At the most critical moment in the world's history, a legend emerged about a mysterious hero known as the \"Keeper of Secrets.\"" << std::endl;
    std::cout << "It was known that the Keeper of Secrets possessed an ancient artifact known as the \"Crystal of Eternity,\" which granted him unique magical abilities. He united disparate kingdoms and peoples to confront the demonic forces that threatened the world." << std::endl;
    std::cout << "Through battles and sacrifices, the Keeper of Secrets and his allies managed to seal the demonic dimension and restore peace and tranquility to Reylindor. After fulfilling his mission, the Keeper of Secrets disappeared into obscurity, forever becoming a part of Reylindor's legends." << std::endl;
    std::cout << "As time passed, the world faced new challenges and adventures, and players embarked on a journey through \"Reylindor\" to explore its history, uncover mysteries, and create their own legends." << std::endl;

    cout << "Location Name : " << myWorld.name << "\n";
    cout << "World Type: " << myWorld.type << "\n";                                //world structure settings
    cout << "Location Difficulty on a Scale of 12: " << myWorld.difficultyLevel << "\n";
    cout << "Magic in the Location: " << (myWorld.magicWorld ? "Yep" : "No") << "\n";
    cout << "Now let's choose a character" << "\n";

    std::cin >> number;



    //character settings
    Knight myKnight("Knight", "Edward the Great", 100, 65, 55, 75, 80, 35);
    Wizard myWizard("Wizard", "Mysterious Merlin", 100, 65, 70, 55, 75, 80, 35);

    cout << "\nCharacter's Background:" << endl;
    string text = "\nEdward the Great was a mighty knight with incredible strength and agility. His physical abilities and health allowed him to fight tirelessly for hours. He was also very intelligent and analytical, making him a tactical asset on the battlefield. ";
    string text2 = "\nEdward wielded a two-handed sword that inflicted devastating damage, and his armor was designed to protect against enemy attacks. In the history of his kingdom, he was recognized as one of the most distinguished knights of all time.";
    cout << text << text2 << endl;
    cout << "\nХарактеристики героя:" << endl;
    myKnight.naEkran();

    cout << "Character's Background:" << endl;
    string text1 = "\nMysterious Merlin was a wizard with unparalleled magical power. His magic manifested the ability to control extraordinary natural phenomena. He was agile and adept at maneuvering on the battlefield, creating magical barriers for protection. His health was robust thanks to healing spells. ";
    string text3 = "\nMerlin's intellect made him a strategist, and he could predict the future. Merlin inflicted devastating magical damage using his magical staff. His armor consisted of magical amulets and cuffs to defend against enemy spells. The legend of his magical mastery lived on in the kingdom's history. ";
    cout << text1 << text3 << endl;
    cout << "\nCharacter's Stats:" << endl;
    myWizard.naEkran();

    cout << "\nWhich character will you choose?";
    cout << "\nIf Knight, press: 0" << "\n";      //character choice
    cout << "If Wizard, press: 1" << "\n";
    std::cin >> number;

    if (number == 0) {
        cout << "Let's check our knight's inventory:";                 //knight inventory settings
        //Examples of creating and using items:
        HealthPotion myHealthpotion;
        myHealthpotion.name = "Health Potion";
        myHealthpotion.healingAmount = 50;
        myHealthpotion.description = "A flask filled with healing elixir.";

        MagicPotion myMagicPotion;
        myMagicPotion.name = "Magic Potion";
        myMagicPotion.magicBoost = 15;
        myMagicPotion.magicReplenish = 35;
        myMagicPotion.description = "A flask with magical elixir to replenish mana.";

        Provision myProvision;
        myProvision.name = "Provision";
        myProvision.enduranceBoost = 20;
        myProvision.energyReplenish = 30;
        myProvision.description = "A hearty meal and a refreshing drink for energy replenishment.";

        Coin myCoin;
        myCoin.name = "Gold Coins";
        myCoin.value = 1000;
        myCoin.description = "A shiny gold coin with a crown imprint.";

        Artifact myArtifact;
        myArtifact.name = "Enchanted Amulet";
        myArtifact.power = "Provides protection against dark magic.";
        myArtifact.description = "An ornate amulet with glowing runes.";

        QuestItem myQuestItem;
        myQuestItem.name = "Ancient Scroll";
        myQuestItem.description = "A mysterious scroll with unknown inscriptions";

        //Output of item descriptions:
        cout << "\nHealth Potion" << " - " << myHealthpotion.description;
        cout << "\nDescription:";
        myHealthpotion.use();
        cout << "\nMagic Potion" << " - " << myMagicPotion.description << endl;
        cout << ":\nDescription";
        myMagicPotion.use();
        cout << "\nProvision" << " - " << myProvision.description << endl;
        cout << "Description:";
        myProvision.use();
        cout << "\nGold Coins" << " - " << myCoin.description << endl;
        cout << "Artifacts" << " - " << myArtifact.description << endl;
        cout << "Quest Item" << " - " << myQuestItem.description << endl;

    }

    else if (number == 1) {                                             //inventory settings for a wizard
        cout << "Let's check our wizard's inventory:";
        //Examples of creating and using items:
        HealthPotion myHealthpotion;
        myHealthpotion.name = "Health Potion";
        myHealthpotion.healingAmount = 50;
        myHealthpotion.description = "A flask filled with healing elixir.";

        MagicPotion myMagicPotion;
        myMagicPotion.name = "Magic Potion";
        myMagicPotion.magicBoost = 15;
        myMagicPotion.magicReplenish = 35;
        myMagicPotion.description = "A flask with magical elixir to replenish mana.";

        Provision myProvision;
        myProvision.name = "Provision";
        myProvision.enduranceBoost = 20;
        myProvision.energyReplenish = 30;
        myProvision.description = "A hearty meal and a refreshing drink for energy replenishment.";

        Coin myCoin;
        myCoin.name = "Gold Coins";
        myCoin.value = 1000;
        myCoin.description = "A shiny gold coin with a crown imprint.";

        Artifact myArtifact;
        myArtifact.name = "Enchanted Amulet";
        myArtifact.power = "Provides protection against dark magic.";
        myArtifact.description = "An ornate amulet with glowing runes.";

        QuestItem myQuestItem;
        myQuestItem.name = "Ancient Scroll";
        myQuestItem.description = "A mysterious scroll with unknown inscriptions";

        //Output of item descriptions:
        cout << "\nnHealth Potion" << " - " << myHealthpotion.description;
        cout << "\nDescription:";
        myHealthpotion.use();
        cout << "\nMagic Potion" << " - " << myMagicPotion.description << endl;
        cout << "Description:\n";
        myMagicPotion.use();
        cout << "\nProvision" << " - " << myProvision.description << endl;
        cout << "Description:";
        myProvision.use();
        cout << "\nGold Coins" << " - " << myCoin.description << endl;
        cout << "Artifacts" << " - " << myArtifact.description << endl;
        cout << "Quest Item" << " - " << myQuestItem.description << endl;

    }
    else
    {
        cout << "Please enter a valid number:)";
        return 0;
    }
    cout << "Let's check the weapons and armor set" << "\n";
    std::cin >> number;

    if (number == 0) {
        Sword mySword;
        Axe myAxe;

        cout << "Sword:" << endl;
        mySword.displayWeapon();
        cout << "Axe:" << endl;
        myAxe.displayWeapon();
    }

    else if (number == 1) {
        Magic_stick magicStick;
        Magic_scroll magicScroll;

        cout << "Magic Staff:" << endl;
        magicStick.displayWeapon();
        cout << "Magic Scroll:" << endl;
        magicScroll.displayWeapon();
    }

    else
    {
        cout << "Please enter a valid number:)\n";
        return 0;
    }

    cout << "Now let's check the armor:" << endl;    //armor class settings and output
    cin >> number;
    if (number == 0) {                                                                  // if a knight then the armor class for him is performed
        Cuirass cuirass("Huge Iron Cuirass", "\nMassive cuirass made of sturdy iron, providing high-level protection for the knight.", 80, 90);
        Helmet helmet("Knight's Helmet", "\nHeavy helmet with a visor, protecting the knight's head from blows and arrows.", 75, 90);
        Gauntlets gauntlets("Iron Gauntlets", "\nGloves and gauntlets made of brass armor, protecting the knight's hands.", 50, 90);
        Leggins leggins("Iron Greaves", "\nHeavy iron leg and thigh armor, protecting the knight's legs and thighs.", 35, 90);

        cout << "Cuirass" << endl;
        cuirass.display_Armor();
        cuirass.display_Cuirass();
        cuirass.opis();
        cout << "\nHelmet" << endl;
        helmet.display_Armor();
        helmet.display_head();
        helmet.opis();
        cout << "\nGauntlets" << endl;
        gauntlets.display_Armor();
        gauntlets.display_hand();
        gauntlets.opis();
        cout << "\nLeggings" << endl;
        leggins.display_Armor();
        leggins.legs_display();
        leggins.opis();
    }
    else if (number == 1) {             //if a wizard then the armor class for him is performed
        Mantle mantle("Elegant Mantle", "\nElegant mantle made from mysterious fabric that grants the wearer magical abilities and enhances protection.", 65, 60);
        Hat hat("Magical Hat", "\nA magical hat that allows the wearer to penetrate hidden places and use magic.", 40, 60);
        Gloves gloves("Magic Gloves", "\nGloves with runes that amplify spells and enable nimble manipulation of magical energies.", 35, 60);
        Boots boots("Boots", "\nBoots made of a special material that enables silent and fast movement, as well as increased movement speed.", 25, 60);

        cout << "Mantle:" << endl;
        mantle.display_Armor();
        mantle.display_mantle();
        mantle.opis();
        cout << "\nHat:" << endl;
        hat.display_Armor();
        hat.display_Hat();
        hat.opis();
        cout << "\nGloves:" << endl;
        gloves.display_Armor();
        gloves.display_Gloves();
        gloves.opis();
        cout << "\nBoots:" << endl;
        boots.display_Armor();
        boots.display_Boots();
        boots.opis();
    }

    else
    {
        cout << "Please enter a valid number:)";
        return 0;
    }



    Sleep(4000);
    return 0;
}






















