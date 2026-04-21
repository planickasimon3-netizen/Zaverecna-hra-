#include <iostream>
using namespace std;
#include <ctime>
#include <cmath>

int secti(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0, int f = 0, int g = 0, int h = 0){

return a+b+c+d+e+f+g+h;

}


int main(){
srand(time(0));
int vyberposatvy;

struct postava{

string jmeno;
string ability;
int maxHp, hp;
int maxMana, mana;
int gold;
int level;
int xp;
int attack;
int abilityManaCost [3] = {1,2,3};
int abilityDamage [3] = { 0,1,2};

}utocnik, obrance, carodej, medic;

/*
struct Monster {
    string name;
    int hp;
    int attack;
    int goldDrop;
    bool isBoss;
};
*/

cout << "Zadej cislo sve postavy: " << "1, Utocnik; 2, Obrance; 3, Carodej; 4, Medic: " << endl;
cin >> vyberposatvy;

switch (vyberposatvy){

case 1:

cout << "Zvolil jsi Utocnika!" << endl;
utocnik.maxHp = 20;
utocnik.hp = 20;
utocnik.maxMana = 15;
utocnik.mana = 15;
utocnik.gold = 5;
utocnik.level = 1;
utocnik.xp = 0;
utocnik.attack = 10;
utocnik.ability = "1, Powerhit - cena(3 mana, 5 damage) 2, Basic attack - cena(0 mana, 2 damage) 3, Ultimate - cena(5 mana, 10 damage)";
utocnik.abilityManaCost[0] = 3;
utocnik.abilityManaCost[1] = 0;
utocnik.abilityManaCost[2] = 5;
utocnik.abilityDamage[0] = 5;
utocnik.abilityDamage[1] = 2;
utocnik.abilityDamage[2] = 10;
break;

case 2:

cout << "Zvolil jsi Obrance!" << endl;
obrance.maxHp = 25;
obrance.hp = 25;
obrance.maxMana = 10;
obrance.mana = 10;
obrance.gold = 5;
obrance.level = 1;
obrance.xp = 0;
obrance.ability = "1, Shield - cena(2 mana, obrana na jadno kolo) 2, Defend attack - cena(0 mana, 2 damage) 3, Ultimate - cena(5 mana, 10 damage)";
obrance.abilityManaCost[0]= 2;
obrance.abilityManaCost[1]= 0;
obrance.abilityManaCost[2]= 5;
obrance.abilityDamage[0] = 0;
obrance.abilityDamage[1] = 2;
obrance.abilityDamage[2] = 10;
break;

case 3:

cout << "Zvolil jsi Carodeje!" << endl;
carodej.maxHp = 15;
carodej.hp = 15;
carodej.maxMana = 25;
carodej.mana = 25;
carodej.gold = 5;
carodej.level = 1;
carodej.xp = 0;
carodej.ability = "1, Fireball - cena(1 mana, 5 damage) 2, Heal - cena(2 mana, 5 hp) 3, Ultimate - cena(10 mana, 20 damage)";
carodej.abilityManaCost[0] = 5;
carodej.abilityManaCost[1] = 2;
carodej.abilityManaCost[2] = 10;
carodej.abilityDamage[0] = 10;
carodej.abilityDamage[1] = 5;
carodej.abilityDamage[2] = 20;
break;

case 4:

cout << "Zvolil jsi Medika!" << endl;
medic.maxHp = 18;
medic.hp = 18;
medic.maxMana = 20;
medic.mana = 20;
medic.gold = 5;
medic.level = 1;
medic.xp = 0;
medic.ability = "1, Heal - cena(5 mana, 10 hp) 2, Attack - cena(0 mana, 2 damage) 3, Ultimate - cena(7 mana, 15 damage)";
medic.abilityManaCost[0] = 3;
medic.abilityManaCost[1] = 0;
medic.abilityManaCost[2] = 7;
medic.abilityDamage[0] = -5;
medic.abilityDamage[1] = 2;
medic.abilityDamage[2] = 15;

}

cout << "Zvolil jsi postavu: " << endl;
}