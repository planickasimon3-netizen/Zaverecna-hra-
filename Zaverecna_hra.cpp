#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

int secti(int a = 0, int b = 0, int c = 0, int d = 0, int e = 0, int f = 0, int g = 0, int h = 0){

return a+b+c+d+e+f+g+h;

}

int main(){

    srand(time(0));
    int vyber_utoku;
    int vyber_ability;
    int vyber_postavy;
    int vyber_ve_vesnici;
    int random_cislo_powerhit;
    int random_cislo_uhyb;

    struct postava{

    string povolani;
    string abilityName[3];
    string ability;
    int maxHp, hp;
    int maxMana, mana;
    int gold;
    int level;
    int xp;
    int attack;
    int abilityManaCost [3] = {1,2,3};
    int abilityDamage [3] = { 0,1,2};

    }hrac;


    struct Monster {
    string name;
    int hp;
    int attack;
    int powerhit;
    int goldDrop;
    int xpdrop;
    bool isBoss;
    }goblin, goblin1, goblin2, minibos, bigbos;

    bigbos.name = "Rostliny parazit";
    bigbos.hp = 100;

    goblin.name = "Goblin";
    goblin.hp = 20;
    goblin.attack = 2;
    goblin.powerhit = 5;
    goblin.goldDrop = 3;
    goblin.xpdrop = 5;

    goblin1.name = "Goblin";
    goblin1.hp = 20;
    goblin1.attack = 2;
    goblin1.powerhit = 5;
    goblin1.goldDrop = 3;
    goblin1.xpdrop = 5;

    goblin2.name = "Goblin";
    goblin2.hp = 20;
    goblin2.attack = 2;
    goblin2.powerhit = 5;
    goblin2.goldDrop = 3;
    goblin2.xpdrop = 5;


    do {
        cout << "Zadej cislo sve postavy: 1. Utocnik, 2. Obrance, 3. Carodej, 4. Medic: " << endl;
        cin >> vyber_postavy;

        switch (vyber_postavy) {
            case 1:
                cout << "Zvolil jsi Utocnika!" << endl;
                hrac.povolani = "Utocnik";
                hrac.maxHp = 20; hrac.hp = 20;
                hrac.maxMana = 15; hrac.mana = 15;
                hrac.gold = 5; hrac.level = 1; hrac.xp = 0; hrac.attack = 10;
                hrac.ability = "1, Powerhit - cena(3 mana, 5 damage) 2, Basic attack - cena(0 mana, 2 damage) 3, Ultimate - cena(5 mana, 10 damage)";
                hrac.abilityName[0] = "Powerhit"; hrac.abilityName[1] = "Basic attack"; hrac.abilityName[2] = "Ultimate";
                hrac.abilityManaCost[0] = 3; hrac.abilityManaCost[1] = 0; hrac.abilityManaCost[2] = 5;
                hrac.abilityDamage[0] = 5; hrac.abilityDamage[1] = 2; hrac.abilityDamage[2] = 10;
                break;

            case 2:
                cout << "Zvolil jsi Obrance!" << endl << endl;
                hrac.povolani = "Obrance";
                hrac.maxHp = 25; hrac.hp = 25;
                hrac.maxMana = 10; hrac.mana = 10;
                hrac.gold = 5; hrac.level = 1; hrac.xp = 0;
                hrac.ability = "1, Shield - cena(2 mana, obrana na jedno kolo) 2, Defend attack - cena(0 mana, 2 damage) 3, Ultimate - cena(5 mana, 10 damage)";
                hrac.abilityName[0] = "Shield"; hrac.abilityName[1] = "Defend attack"; hrac.abilityName[2] = "Ultimate";
                hrac.abilityManaCost[0] = 2; hrac.abilityManaCost[1] = 0; hrac.abilityManaCost[2] = 5;
                hrac.abilityDamage[0] = 0; hrac.abilityDamage[1] = 2; hrac.abilityDamage[2] = 10;
                break;

            case 3:
                cout << "Zvolil jsi Carodeje!" << endl << endl;
                hrac.povolani = "Carodej";
                hrac.maxHp = 15; hrac.hp = 15;
                hrac.maxMana = 25; hrac.mana = 25;
                hrac.gold = 5; hrac.level = 1; hrac.xp = 0;
                hrac.ability = "1, Fireball - cena(5 mana, 10 damage) 2, Heal - cena(2 mana, 5 hp) 3, Ultimate - cena(10 mana, 20 damage)";

                hrac.abilityName[0] = "Fireball"; hrac.abilityName[1] = "Heal"; hrac.abilityName[2] = "Ultimate";
                hrac.abilityManaCost[0] = 5; hrac.abilityManaCost[1] = 2; hrac.abilityManaCost[2] = 10;

                hrac.abilityDamage[0] = 10; hrac.abilityDamage[1] = -5; hrac.abilityDamage[2] = 20;
                break;

            case 4:
                cout << "Zvolil jsi Medika!" << endl << endl;
                hrac.povolani = "Medic";
                hrac.maxHp = 18; hrac.hp = 18;
                hrac.maxMana = 20; hrac.mana = 20;
                hrac.gold = 5; hrac.level = 1; hrac.xp = 0;
                hrac.ability = "1, Heal - cena(3 mana, 5 hp) 2, Attack - cena(0 mana, 2 damage) 3, Ultimate - cena(7 mana, 15 damage)";

                hrac.abilityName[0] = "Heal"; hrac.abilityName[1] = "Attack"; hrac.abilityName[2] = "Ultimate";
                hrac.abilityManaCost[0] = 3; hrac.abilityManaCost[1] = 0; hrac.abilityManaCost[2] = 7;

                hrac.abilityDamage[0] = -5; hrac.abilityDamage[1] = 2; hrac.abilityDamage[2] = 15;
                break;

            default:
                cout << "Neplatne cislo, zkus to znovu." << endl;
        }

        if (vyber_postavy >= 1 && vyber_postavy <= 4) {
            cout << "Mate k dispozici tyto schopnosti: " << hrac.ability << endl;
            cout << "Mate " << hrac.hp << " zivotu a " << hrac.mana << " many." << endl;
            cout << "Mate " << hrac.gold << " goldu." << endl;
            cout << "Mate " << hrac.xp << " zkusenosti." << endl;
            cout << "Mate level " << hrac.level << "." << endl << endl;
        }

    }while(vyber_postavy < 1 || vyber_postavy > 4);


    do {
        cout << "Dosel jsi do vesnice, muzes si: 1: Doplnit zivoty(3 goldy)" << endl
             << "                                2: Zvetsit maximalni pocet zivotu o 2(5 goldu)" << endl
             << "                                3: Zvetsit maximalni manu o 5(5 goldu)" << endl
             << "                                4: Pokracovat do boje" << endl;
        cin >> vyber_ve_vesnici;

        if (vyber_ve_vesnici == 1) {
            hrac.hp = hrac.hp + 5;
            hrac.gold = hrac.gold - 3;
        } else if (vyber_ve_vesnici == 2) {
            hrac.maxHp = hrac.maxHp + 2;
            hrac.hp = hrac.hp + 2;
            hrac.gold = hrac.gold - 5;
        } else if (vyber_ve_vesnici == 3) {
            hrac.maxMana = hrac.maxMana + 5;
            hrac.mana = hrac.mana + 5;
            hrac.gold = hrac.gold - 5;
        } else if (vyber_ve_vesnici == 4) {
            cout << endl << "Pokracujes do boje se vsemi goldiky" << endl << endl;
        }else{cout << "Chyba zadali jste neplatne cislo" << endl;}


    } while(vyber_ve_vesnici < 1 || vyber_ve_vesnici > 5);

    /* --- První souboj s Goblinem ---  */

    cout << "Narazil jsi na monstrum, musis s nim bojovat, jako abilitu chces pouzit: " << hrac.ability << endl;
    goblin.hp = 20;
    goblin1.hp = 20;
    goblin2.hp = 20;

    do {
        do {
            cout << endl << "Co mu provedeme ted: ";
            cin >> vyber_ability;
            random_cislo_powerhit = rand() % 100 + 1;
            random_cislo_uhyb = rand() % 100 + 1;

            if (vyber_postavy == 1) { // Útočník
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Powerhit a udelil jsi " << hrac.abilityDamage[0] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin.hp = goblin.hp - hrac.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Basic attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin.hp = goblin.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin.hp = goblin.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 2) { // Obránce
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Shield a obranil jsi se na jedno kolo" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin.attack = 0; goblin.powerhit = 0;
                        goblin1.attack = 0; goblin1.powerhit = 0;
                        goblin2.attack = 0; goblin2.powerhit = 0;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Defend attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin.hp = goblin.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin.hp = goblin.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 3) { // Čaroděj
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Fireball a udelil jsi " << hrac.abilityDamage[0] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin.hp = goblin.hp - hrac.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -hrac.abilityDamage[1] << " hp" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        hrac.hp = hrac.hp - hrac.abilityDamage[1]; // Minus a minus dává plus (léčení)
                        cout << "Tobě zbylo " << hrac.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin.hp = goblin.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 4) { // Medik
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -hrac.abilityDamage[0] << " hp" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        hrac.hp = hrac.hp - hrac.abilityDamage[0];
                        cout << "Tobě zbylo " << hrac.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin.hp = goblin.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin.hp = goblin.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 15) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin.attack;
                }
                if (random_cislo_uhyb >= 55) {
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                    hrac.hp = hrac.hp + 2; // Tady jsi v originále přidával HP všem postavám, teď stačí přidat jen hráči
                }
            }

            cout << "Zbylo ti: " << hrac.hp << "hp" << endl;
            cout << "Mas " << hrac.mana << " many" << endl;

        } while(vyber_ability < 1 || vyber_ability > 3);
    } while(goblin.hp > 0);

    hrac.mana = hrac.mana + 5;
    hrac.xp = hrac.xp + goblin.xpdrop;
    hrac.gold = hrac.gold + goblin.goldDrop;


    /*   ---Souboj s druhým goblinem---*/

    cout << "Narazil jsi na monstrum, musis s nim bojovat, jako abilitu chces pouzit: " << hrac.ability << endl;
    goblin.hp = 20;
    goblin1.hp = 20;
    goblin2.hp = 20;

    do {
        do {
            cout << endl << "Co mu provedeme ted: ";
            cin >> vyber_ability;
            random_cislo_powerhit = rand() % 100 + 1;
            random_cislo_uhyb = rand() % 100 + 1;

            if (vyber_postavy == 1) { // Útočník
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Powerhit a udelil jsi " << hrac.abilityDamage[0] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin.hp = goblin.hp - hrac.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Basic attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin.hp = goblin.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin.hp = goblin.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 2) { // Obránce
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Shield a obranil jsi se na jedno kolo" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin.attack = 0; goblin.powerhit = 0;
                        goblin1.attack = 0; goblin1.powerhit = 0;
                        goblin2.attack = 0; goblin2.powerhit = 0;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Defend attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin.hp = goblin.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin.hp = goblin.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 3) { // Čaroděj
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Fireball a udelil jsi " << hrac.abilityDamage[0] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin.hp = goblin.hp - hrac.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -hrac.abilityDamage[1] << " hp" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        hrac.hp = hrac.hp - hrac.abilityDamage[1]; // Minus a minus dává plus (léčení)
                        cout << "Tobě zbylo " << hrac.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin.hp = goblin.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 4) { // Medik
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -hrac.abilityDamage[0] << " hp" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        hrac.hp = hrac.hp - hrac.abilityDamage[0];
                        cout << "Tobě zbylo " << hrac.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin.hp = goblin.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin.hp = goblin.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 15) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin.attack;
                }
                if (random_cislo_uhyb >= 55) {
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                    hrac.hp = hrac.hp + 2; // Tady jsi v originále přidával HP všem postavám, teď stačí přidat jen hráči
                }
            }

            cout << "Zbylo ti: " << hrac.hp << "hp" << endl;
            cout << "Mas " << hrac.mana << " many" << endl;

        } while(vyber_ability < 1 || vyber_ability > 3);
    } while(goblin.hp > 0);

    hrac.mana = hrac.mana + 10;
    hrac.xp = hrac.xp + goblin.xpdrop;
    hrac.gold = hrac.gold + goblin.goldDrop;


    /*   ---Třetí souboj se třemi Gobliny---   */

    cout << "Narazil jsi na 3 monstra, musis s nim bojovat, jako abilitu chces pouzit: " << hrac.ability << endl;
    goblin.hp = 20;
    goblin1.hp = 20;
    goblin2.hp = 20;

do{

    do{
        cout << "Na jakeho z nich budes utocit: " << endl;
        cin >> vyber_utoku;


    if(vyber_utoku == 1){


    do {
        do {
            while(goblin.hp > 1){

            cout << endl << "Co mu provedeme ted: ";
            cin >> vyber_ability;
            random_cislo_powerhit = rand() % 100 + 1;
            random_cislo_uhyb = rand() % 100 + 1;

            if (vyber_postavy == 1) { // Útočník
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Powerhit a udelil jsi " << hrac.abilityDamage[0] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin.hp = goblin.hp - hrac.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Basic attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin.hp = goblin.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin.hp = goblin.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 2) { // Obránce
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Shield a obranil jsi se na jedno kolo" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin.attack = 0; goblin.powerhit = 0;
                        goblin1.attack = 0; goblin1.powerhit = 0;
                        goblin2.attack = 0; goblin2.powerhit = 0;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Defend attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin.hp = goblin.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin.hp = goblin.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 3) { // Čaroděj
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Fireball a udelil jsi " << hrac.abilityDamage[0] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin.hp = goblin.hp - hrac.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -hrac.abilityDamage[1] << " hp" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        hrac.hp = hrac.hp - hrac.abilityDamage[1]; // Minus a minus dává plus (léčení)
                        cout << "Tobe zbylo " << hrac.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin.hp = goblin.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 4) { // Medik
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -hrac.abilityDamage[0] << " hp" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        hrac.hp = hrac.hp - hrac.abilityDamage[0];
                        cout << "Tobe zbylo " << hrac.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin.hp = goblin.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin.hp = goblin.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 15) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin.attack;
                }
                if (random_cislo_uhyb >= 55) {
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                    hrac.hp = hrac.hp + 2; // Tady jsi v originále přidával HP všem postavám, teď stačí přidat jen hráči
                }
            }

            cout << "Zbylo ti: " << hrac.hp << "hp" << endl;
            cout << "Mas " << hrac.mana << " many" << endl;
        }
        } while(vyber_ability < 1 || vyber_ability > 3);
    } while(goblin.hp > 0);

    hrac.mana = hrac.mana + 10;
    hrac.xp = hrac.xp + goblin.xpdrop;
    hrac.gold = hrac.gold + goblin.goldDrop;



    }else if(vyber_utoku == 2){



    do {
        do {
            while(goblin1.hp > 1){
            cout << endl << "Co mu provedeme ted: ";
            cin >> vyber_ability;
            random_cislo_powerhit = rand() % 100 + 1;
            random_cislo_uhyb = rand() % 100 + 1;

            if (vyber_postavy == 1) { // Útočník
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Powerhit a udelil jsi " << hrac.abilityDamage[0] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin1.hp = goblin1.hp - hrac.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin1.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Basic attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin1.hp = goblin1.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin1.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin1.hp = goblin1.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin1.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin1.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin1.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 2) { // Obránce
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Shield a obranil jsi se na jedno kolo" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin.attack = 0; goblin.powerhit = 0;
                        goblin1.attack = 0; goblin1.powerhit = 0;
                        goblin2.attack = 0; goblin2.powerhit = 0;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Defend attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin1.hp = goblin1.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin1.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin1.hp = goblin1.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin1.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin1.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin1.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 3) { // Čaroděj
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Fireball a udelil jsi " << hrac.abilityDamage[0] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin1.hp = goblin1.hp - hrac.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin1.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -hrac.abilityDamage[1] << " hp" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        hrac.hp = hrac.hp - hrac.abilityDamage[1];
                        cout << "Tobe zbylo " << hrac.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin1.hp = goblin1.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin1.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin1.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin1.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 4) { // Medik
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -hrac.abilityDamage[0] << " hp" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        hrac.hp = hrac.hp - hrac.abilityDamage[0];
                        cout << "Tobe zbylo " << hrac.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin1.hp = goblin1.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin1.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin1.hp = goblin1.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin1.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 15) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin1.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin1.attack;
                }
                if (random_cislo_uhyb >= 55) {
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                    hrac.hp = hrac.hp + 2;
                }
            }

            cout << "Zbylo ti: " << hrac.hp << "hp" << endl;
            cout << "Mas " << hrac.mana << " many" << endl;
                }
        } while(vyber_ability < 1 || vyber_ability > 3);
    } while(goblin1.hp > 0);

    hrac.mana = hrac.mana + 10;
    hrac.xp = hrac.xp + goblin1.xpdrop;
    hrac.gold = hrac.gold + goblin1.goldDrop;


    }else if(vyber_utoku == 3){


    do {
        do {
            while(goblin2.hp > 1){


            cout << endl << "Co mu provedeme ted: ";
            cin >> vyber_ability;
            random_cislo_powerhit = rand() % 100 + 1;
            random_cislo_uhyb = rand() % 100 + 1;

            if (vyber_postavy == 1) { // Útočník
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Powerhit a udelil jsi " << hrac.abilityDamage[0] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin2.hp = goblin2.hp - hrac.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin2.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Basic attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin2.hp = goblin2.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin2.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin2.hp = goblin2.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin2.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin2.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin2.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 2) { // Obránce
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Shield a obranil jsi se na jedno kolo" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin.attack = 0; goblin.powerhit = 0;
                        goblin1.attack = 0; goblin1.powerhit = 0;
                        goblin2.attack = 0; goblin2.powerhit = 0;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Defend attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin2.hp = goblin2.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin2.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin2.hp = goblin2.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin2.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin2.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin2.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 3) { // Čaroděj
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Fireball a udelil jsi " << hrac.abilityDamage[0] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        goblin2.hp = goblin2.hp - hrac.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin2.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -hrac.abilityDamage[1] << " hp" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        hrac.hp = hrac.hp - hrac.abilityDamage[1];
                        cout << "Tobe zbylo " << hrac.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin2.hp = goblin2.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin2.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 20) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin2.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin2.attack;
                }
                if (random_cislo_uhyb <= 30) { cout << "Uhybl jsi se, goblin ti nedal damage" << endl; }

            } else if (vyber_postavy == 4) { // Medik
                if (vyber_ability == 1) {
                    if (hrac.mana >= hrac.abilityManaCost[0]) {
                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -hrac.abilityDamage[0] << " hp" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[0];
                        hrac.hp = hrac.hp - hrac.abilityDamage[0];
                        cout << "Tobe zbylo " << hrac.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 2) {
                    if (hrac.mana >= hrac.abilityManaCost[1]) {
                        cout << "Pouzil jsi Attack a udelil jsi " << hrac.abilityDamage[1] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[1];
                        goblin2.hp = goblin2.hp - hrac.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin2.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                } else if (vyber_ability == 3) {
                    if (hrac.mana >= hrac.abilityManaCost[2]) {
                        cout << "Pouzil jsi Ultimate a udelil jsi " << hrac.abilityDamage[2] << " damage" << endl;
                        hrac.mana = hrac.mana - hrac.abilityManaCost[2];
                        goblin2.hp = goblin2.hp - hrac.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin2.hp << " hp" << endl;
                    } else { cout << "Nemate dost many, zvolte jinou abilitu" << endl; }
                }

                if (random_cislo_powerhit <= 15) {
                    cout << "Goblin ti dal powerhit" << endl;
                    hrac.hp = hrac.hp - goblin2.powerhit;
                } else if (random_cislo_powerhit > 20) {
                    cout << "Goblin ti dal normalni utok" << endl;
                    hrac.hp = hrac.hp - goblin2.attack;
                }
                if (random_cislo_uhyb >= 55) {
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                    hrac.hp = hrac.hp + 2;
                }
            }

            cout << "Zbylo ti: " << hrac.hp << "hp" << endl;
            cout << "Mas " << hrac.mana << " many" << endl;


    hrac.mana = hrac.mana + 10;
    hrac.xp = hrac.xp + goblin2.xpdrop;
    hrac.gold = hrac.gold + goblin2.goldDrop;
        }
        }while(vyber_ability < 1 || vyber_ability > 3);
    }while(goblin2.hp > 0);

    }

}while(goblin.hp < 1 || goblin1.hp < 1 || goblin2.hp < 1);
}while(vyber_utoku < 1 || vyber_utoku > 3);

}