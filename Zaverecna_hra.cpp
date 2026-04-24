#include <iostream>
using namespace std;
#include <ctime>
#include <cmath>

int secti(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0, int f = 0, int g = 0, int h = 0){

return a+b+c+d+e+f+g+h;

}
void goblin(){
    goblin.name = "Goblin";
    goblin.hp = 20;
    goblin.attack = 2;
    goblin.goldDrop = 3;
}

void bigboss(){
    bigbos.name = "Rostliný parazit";
    bigbos.hp = 100;
}
int main(){

srand(time(0));
int vyber_posatvy;
int vyber_ve_vesnici;

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


struct Monster {
string name;
int hp;
int attack;
int goldDrop;
bool isBoss;
}goblin, minibos, bigbos;

do{ 

cout << "Zadej cislo sve postavy: " << "1, Utocnik; 2, Obrance; 3, Carodej; 4, Medic: ";
cout << endl;
cin >> vyber_posatvy;

switch (vyber_posatvy){

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
cout << "Mate k dispozici tyto schopnosti: " << utocnik.ability << endl;
cout << "Mate " << utocnik.hp << " zivotu a " << utocnik.mana << " many" << endl;
cout << "Mate " << utocnik.gold << " goldu" << endl;
cout << "Mate " << utocnik.xp << " zkusenosti" << endl;
cout << "Mate " << utocnik.level << " level" << endl;
break;

case 2:

cout << "Zvolil jsi Obrance!" << endl << endl;
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
cout << "Mate k dispozici tyto schopnosti: " << obrance.ability << endl;
cout << "Mate " << obrance.hp << " zivotu a " << obrance.mana << " many" << endl;
cout << "Mate " << obrance.gold << " goldu" << endl;
cout << "Mate " << obrance.xp << " zkusenosti" << endl;
cout << "Mate " << obrance.level << " level" << endl;
break;

case 3:

cout << "Zvolil jsi Carodeje!" << endl << endl;
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
cout << "Mate k dispozici tyto schopnosti: " << carodej.ability << endl;
cout << "Mate " << carodej.hp << " zivotu a " << carodej.mana << " many" << endl;
cout << "Mate " << carodej.gold << " goldu" << endl;
cout << "Mate " << carodej.xp << " zkusenosti" << endl;
cout << "Mate " << carodej.level << " level" << endl;
break;

case 4:

cout << "Zvolil jsi Medika!" << endl << endl;
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
cout << "Mate k dispozici tyto schopnosti: " << medic.ability << endl;
cout << "Mate " << medic.hp << " zivotu a " << medic.mana << " many" << endl;
cout << "Mate " << medic.gold << " goldu" << endl;
cout << "Mate " << medic.xp << " zkusenosti" << endl;
cout << "Mate " << medic.level << " level" << endl;
break;

default: cout << "Neplate cislo, zkus to znovu" << endl;

}while(vyber_postavy < 1 || vyber_postsvy > 5);



}
do{

cout << "Dosel jsi do vesnice," << " muzes si: 1: Doplnit zivoty(3 goldy)" << endl << "                                " << "2: Zvetsit maximalni pocet zivotu o 2(5 goldu)" << endl << "                                " << "3: Zvetsit maximalni manu o 5(5 goldu)" << endl << "                                " << "4: Vylepsit utok(5 goldu)" << endl << "                                " << "5: Pokracovat do boje" << endl;
cin >> vyber_ve_vesnici;

if(vyber_ve_vesnici == 1){

uticnik.hp = utocnik.hp + 5;
utocnik.gold = utocnik.gold - 3;
obrance.hp = obrance.hp + 5;
obrance.gold = obrance.gold - 3;
carodej.hp = carodej.hp + 5;
carodej.gold = carodej.gold - 3;
medic.hp = medic.hp + 5;
medic.gold = medic.gold - 3;

}else if(vyber_ve_vesnici == 2){

utocnik.maxHp = utocnik.maxHp + 2;
utocnik.gold = utocnik.gold - 5;
obrance.maxHp = obrance.maxHp + 2;
obrance.gold = obrance.gold - 5;
carodej.maxHp = carodej.maxHp + 2;
carodej.gold = carodej.gold - 5;
medic.maxHp = medic.maxHp + 2;
medic.gold = medic.gold - 5;

}else if(vyber_ve_vesnici == 3){

utocnik.maxMana = utocnik.maxMana + 5;
utocnik.gold = utocnik.gold - 5;
obrance.maxMana = obrance.maxMana + 5;
obrance.gold = obrance.gold - 5;
carodej.maxMana = carodej.maxMana + 5;
carodej.gold = carodej.gold - 5;
medic.maxMana = medic.maxMana + 5;
medic.gold = medic.gold - 5;

}else if(vyber_ve_vesnici == 4){

}else{cout << "Chyba zadali jste neeplatne cislo";}

}while(vyber_ve_vesnici < 1 || vyber_ve_vesnici > 5);

cout << "Narazil jsi na monstrum, musíš s ním bojovat, jako abilitu chceš použít: ";
cin >>




}   