#include <iostream>
using namespace std;
#include <ctime>
#include <cmath>



int main(){
srand(time(0));
string vyberposatvy;

struct postava{
    string jmeno;
    int maxHp, hp;
    int maxMana, mana;
    int gold;
    int level;
    int xp;
    int attack;
    string ability;
    int abilityManaCost [3];
    int abilityDamage [3];
    
}

struct Monster {
    string name;
    int hp;
    int attack;
    int goldDrop;
    bool isBoss;
}

cout << "Zadej jméno své postavy: " << "1, Útočník; 2, Obránce; 3, čaroděj; 4, Medic" << endl;
cin >> vyberposatvy;

switch (vyberpostavy){

case 1:
			cout << "Zvolil jsi útočníka!" << endl;
    		maxHp = 20;
    		hp = 20;
    		maxMana = 15;
    		mana = 15;
    		gold = 5;
    		level = 1;
    		xp = 0;
    		attack = 10;
    		ability = "1, Powerhit - cena(3 mana, 5 damage) 2, Basic attack - cena(0 mana, 2 damage) 3, Ultimate - cena(5 mana, 10 damage)";
    		abilityManaCost[0]={3, 0, 5};
    		abilityDamage[0]={5, 2, 10};
			break;

case 2:
			cout << "Zvolil jsi obránce!" << endl;
    		maxHp = 25;
   		hp = 25;
    		maxMana = 10;
    		mana = 10;
    		gold = 5;
    		level = 1;
    		xp = 0;
    		ability = "1, Shield - cena(2 mana, obrana na jadno kolo) 2, Defend attack - cena(0 mana, 2 damage) 3, Ultimate - cena(5 mana, 10 damage)";
    		abilityManaCost[0]={2, 0, 5};
			abilityDamage[0]={0, 2, 10};
			break;

case 3:
    cout << "Zvolil jsi čaroděje!" << endl;
    maxHp = 15;
    hp = 15;
    maxMana = 25;
    mana = 25;
    gold = 5;
    level = 1;
    xp = 0;
    ability  = "1, Fireball - cena(1 mana, 5 damage) 2, Heal - cena(2 mana, 5 hp) 3, Ultimate - cena(10 mana, 20 damage)";
    abilityManaCost[0]={5, 2, 10};
    abilityDamage[0]={10, 5, 20};
		break;

case 4:

  		cout << "Zvolil jsi medika!" << endl;
    maxHp = 18;
    hp = 18;
    maxMana = 20;
    mana = 20;
    gold = 5;
    level = 1;
    xp = 0;
    ability = "1, Heal - cena(5 mana, 10 hp) 2, Attack - cena(0 mana, 2 damage) 3, Ultimate - cena(7 mana, 15 damage)";
    abilityManaCost[0]={3, 0, 7};
    abilityDamage[0]={-5, 2, 15};

}


}