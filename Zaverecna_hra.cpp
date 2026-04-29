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
    int vyber_utoku = 1;
    int vyber_ability = 1;
    int vyber_postavy;
    int vyber_ve_vesnici;
    int random_cislo_powerhit;
    int random_cislo_uhyb;

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

    do{ 

    cout << "Zadej cislo sve postavy: " << "1, Utocnik; 2, Obrance; 3, Carodej; 4, Medic: ";
    cout << endl;
    cin >> vyber_postavy;

    switch (vyber_postavy){

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

    }

    }while(vyber_postavy < 1 || vyber_postavy > 5);


    do{

        cout << "Dosel jsi do vesnice," << " muzes si: 1: Doplnit zivoty(3 goldy)" << endl << "                                " << "2: Zvetsit maximalni pocet zivotu o 2(5 goldu)" << endl << "                                " << "3: Zvetsit maximalni manu o 5(5 goldu)" << endl << "                                " << "4: Vylepsit utok(5 goldu)" << endl << "                                " << "5: Pokracovat do boje" << endl;
        cin >> vyber_ve_vesnici;

        if(vyber_ve_vesnici == 1){

        utocnik.hp = utocnik.hp + 5;
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

    /*První souboj s Goblinem*/

    cout << "Narazil jsi na monstrum, musíš s ním bojovat, jako abilitu chceš použít: " << utocnik.ability << endl;
    cin >> vyber_ability;

    goblin.hp = 20;
    goblin1.hp = 20;
    goblin2.hp = 20;
    do{
        do{
            random_cislo_powerhit = rand() % 100 + 1;
            random_cislo_uhyb = rand() % 100 + 1;

            if(vyber_postavy == 1){


                if (vyber_ability == 1){

                    if(utocnik.mana >= utocnik.abilityManaCost[0]){

                        cout << "Pouzil jsi Powerhit a udelil jsi " << utocnik.abilityDamage[0] << " damage" << endl;
                        utocnik.mana = utocnik.mana - utocnik.abilityManaCost[0];
                        goblin.hp = goblin.hp - utocnik.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(utocnik.mana >= utocnik.abilityManaCost[1]){

                        cout << "Pouzil jsi Basic attack a udelil jsi " << utocnik.abilityDamage[1] << " damage" << endl;
                        utocnik.mana = utocnik.mana - utocnik.abilityManaCost[1];
                        goblin.hp = goblin.hp - utocnik.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(utocnik.mana >= utocnik.abilityManaCost[2]){

                        cout << "Pouzil jsi Ultimate a udelil jsi " << utocnik.abilityDamage[2] << " damage" << endl;
                        utocnik.mana = utocnik.mana - utocnik.abilityManaCost[2];
                        goblin.hp = goblin.hp - utocnik.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;}
                
                    }

                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    utocnik.hp = utocnik.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){

                    cout << "Goblin ti dal normalni utok" << endl;
                    utocnik.hp = utocnik.hp - goblin.attack;
                }

                if (random_cislo_uhyb <= 30){

                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }
                

            }else if(vyber_postavy == 2){


                if (vyber_ability == 1){

                    if(obrance.mana >= obrance.abilityManaCost[0]){

                        cout << "Pouzil jsi Shield a obranil jsi se na jedno kolo" << endl;
                        obrance.mana = obrance.mana - obrance.abilityManaCost[0];
                        goblin.attack = 0;
                        goblin.powerhit = 0;
                        goblin1.attack = 0;
                        goblin1.powerhit = 0;
                        goblin2.attack = 0;
                        goblin2.powerhit = 0;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(obrance.mana >= obrance.abilityManaCost[1]){

                        cout << "Pouzil jsi Defend attack a udelil jsi " << obrance.abilityDamage[1] << " damage" << endl;
                        obrance.mana = obrance.mana - obrance.abilityManaCost[1];
                        goblin.hp = goblin.hp - obrance.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(obrance.mana >= obrance.abilityManaCost[2]){
                        
                        cout << "Pouzil jsi Ultimate a udelil jsi " << obrance.abilityDamage[2] << " damage" << endl;
                        obrance.mana = obrance.mana - obrance.abilityManaCost[2];
                        goblin.hp = goblin.hp - obrance.abilityDamage[2];
                    }
                }
                    
                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    obrance.hp = obrance.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){
                    
                    cout << "Goblin ti dal normalni utok" << endl;
                    obrance.hp = obrance.hp - goblin.attack;
                }
                
                if (random_cislo_uhyb <= 30){
                    
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }

            }else if(vyber_postavy == 3){

                if (vyber_ability == 1){

                    if(carodej.mana >= carodej.abilityManaCost[0]){

                        cout << "Pouzil jsi Fireball a udelil jsi " << carodej.abilityDamage[0] << " damage" << endl;
                        carodej.mana = carodej.mana - carodej.abilityManaCost[0];
                        goblin.hp = goblin.hp - carodej.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(carodej.mana >= carodej.abilityManaCost[1]){

                        cout << "Pouzil jsi Heal a vylecil jsi se o " << carodej.abilityDamage[1] << " hp" << endl;
                        carodej.mana = carodej.mana - carodej.abilityManaCost[1];
                        carodej.hp = carodej.hp + carodej.abilityDamage[1];
                        cout << "Tobě zbylo " << carodej.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(carodej.mana >= carodej.abilityManaCost[2]){

                        cout << "Pouzil jsi Ultimate a udelil jsi " << carodej.abilityDamage[2] << " damage" << endl;
                        carodej.mana = carodej.mana - carodej.abilityManaCost[2];
                        goblin.hp = goblin.hp - carodej.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    }

                }
                    

                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    carodej.hp = carodej.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){
                    
                    cout << "Goblin ti dal normalni utok" << endl;
                    carodej.hp = carodej.hp - goblin.attack;
                }
                
                if (random_cislo_uhyb <= 30){
                    
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }
                    
            }else if(vyber_postavy == 4){
        

                if (vyber_ability == 1){

                    if(medic.mana >= medic.abilityManaCost[0]){

                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -medic.abilityDamage[0] << " hp" << endl;
                        medic.mana = medic.mana - medic.abilityManaCost[0];
                        medic.hp = medic.hp - medic.abilityDamage[0];
                        cout << "Tobě zbylo " << medic.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(medic.mana >= medic.abilityManaCost[1]){

                        cout << "Pouzil jsi Attack a udelil jsi " << medic.abilityDamage[1] << " damage" << endl;
                        medic.mana = medic.mana - medic.abilityManaCost[1];
                        goblin.hp = goblin.hp - medic.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(medic.mana >= medic.abilityManaCost[2]){

                        cout << "Pouzil jsi Ultimate a udelil jsi " << medic.abilityDamage[2] << " damage" << endl;
                        medic.mana = medic.mana - medic.abilityManaCost[2];
                        goblin.hp = goblin.hp - medic.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                        
                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }
                    

                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    medic.hp = medic.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){

                    cout << "Goblin ti dal normalni utok" << endl;
                    medic.hp = medic.hp - goblin.attack;
                }

                if (random_cislo_uhyb <= 30){

                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }
                    
            }
        

        }while(vyber_ability < 1 || vyber_ability > 3);
    }while(goblin.hp > 0);

    utocnik.mana = utocnik.mana + 5;
    utocnik.xp = utocnik.xp + goblin.xpdrop;
    utocnik.gold = utocnik.gold + goblin.goldDrop;

    obrance.mana = obrance.mana + 5;
    obrance.xp = obrance.xp + goblin.xpdrop;
    obrance.gold = obrance.gold + goblin.goldDrop;

    carodej.mana = carodej.mana + 5;
    carodej.xp = carodej.xp + goblin.xpdrop;
    carodej.gold = carodej.gold + goblin.goldDrop;

    medic.mana = medic.mana + 5;
    medic.xp = medic.xp + goblin.xpdrop;
    medic.gold = medic.gold + goblin.goldDrop;


    /*Druhý souboj s Goblinem*/

    cout << "Narazil jsi na monstrum, musis s nim bojovat, jako abilitu chces pouzit: " << utocnik.ability << endl;
    cin >> vyber_ability;

    goblin.hp = 20;
    goblin1.hp = 20;
    goblin2.hp = 20;
    do{
        do{

            random_cislo_powerhit = rand() % 100 + 1;
            random_cislo_uhyb = rand() % 100 + 1;

            if(vyber_postavy == 1){

                if (vyber_ability == 1){

                    if(utocnik.mana >= utocnik.abilityManaCost[0]){

                        cout << "Pouzil jsi Powerhit a udelil jsi " << utocnik.abilityDamage[0] << " damage" << endl;
                        utocnik.mana = utocnik.mana - utocnik.abilityManaCost[0];
                        goblin.hp = goblin.hp - utocnik.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(utocnik.mana >= utocnik.abilityManaCost[1]){

                        cout << "Pouzil jsi Basic attack a udelil jsi " << utocnik.abilityDamage[1] << " damage" << endl;
                        utocnik.mana = utocnik.mana - utocnik.abilityManaCost[1];
                        goblin.hp = goblin.hp - utocnik.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(utocnik.mana >= utocnik.abilityManaCost[2]){

                        cout << "Pouzil jsi Ultimate a udelil jsi " << utocnik.abilityDamage[2] << " damage" << endl;
                        utocnik.mana = utocnik.mana - utocnik.abilityManaCost[2];
                        goblin.hp = goblin.hp - utocnik.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;}
                
                    }

                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    utocnik.hp = utocnik.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){

                    cout << "Goblin ti dal normalni utok" << endl;
                    utocnik.hp = utocnik.hp - goblin.attack;
                }

                if (random_cislo_uhyb <= 30){

                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }
                

            }else if(vyber_postavy == 2){

                if (vyber_ability == 1){

                    if(obrance.mana >= obrance.abilityManaCost[0]){

                        cout << "Pouzil jsi Shield a obranil jsi se na jedno kolo" << endl;
                        obrance.mana = obrance.mana - obrance.abilityManaCost[0];
                        goblin.attack = 0;
                        goblin.powerhit = 0;
                        goblin1.attack = 0;
                        goblin1.powerhit = 0;
                        goblin2.attack = 0;
                        goblin2.powerhit = 0;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(obrance.mana >= obrance.abilityManaCost[1]){

                        cout << "Pouzil jsi Defend attack a udelil jsi " << obrance.abilityDamage[1] << " damage" << endl;
                        obrance.mana = obrance.mana - obrance.abilityManaCost[1];
                        goblin.hp = goblin.hp - obrance.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(obrance.mana >= obrance.abilityManaCost[2]){
                        
                        cout << "Pouzil jsi Ultimate a udelil jsi " << obrance.abilityDamage[2] << " damage" << endl;
                        obrance.mana = obrance.mana - obrance.abilityManaCost[2];
                        goblin.hp = goblin.hp - obrance.abilityDamage[2];
                    }
                }
                    
                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    obrance.hp = obrance.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){
                    
                    cout << "Goblin ti dal normalni utok" << endl;
                    obrance.hp = obrance.hp - goblin.attack;
                }
                
                if (random_cislo_uhyb <= 30){
                    
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }

            }else if(vyber_postavy == 3){

                if (vyber_ability == 1){

                    if(carodej.mana >= carodej.abilityManaCost[0]){

                        cout << "Pouzil jsi Fireball a udelil jsi " << carodej.abilityDamage[0] << " damage" << endl;
                        carodej.mana = carodej.mana - carodej.abilityManaCost[0];
                        goblin.hp = goblin.hp - carodej.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(carodej.mana >= carodej.abilityManaCost[1]){

                        cout << "Pouzil jsi Heal a vylecil jsi se o " << carodej.abilityDamage[1] << " hp" << endl;
                        carodej.mana = carodej.mana - carodej.abilityManaCost[1];
                        carodej.hp = carodej.hp + carodej.abilityDamage[1];
                        cout << "Tobě zbylo " << carodej.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(carodej.mana >= carodej.abilityManaCost[2]){

                        cout << "Pouzil jsi Ultimate a udelil jsi " << carodej.abilityDamage[2] << " damage" << endl;
                        carodej.mana = carodej.mana - carodej.abilityManaCost[2];
                        goblin.hp = goblin.hp - carodej.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    }

                }
                    

                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    carodej.hp = carodej.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){
                    
                    cout << "Goblin ti dal normalni utok" << endl;
                    carodej.hp = carodej.hp - goblin.attack;
                }
                
                if (random_cislo_uhyb <= 30){
                    
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }
                    
            }else if(vyber_postavy == 4){

                if (vyber_ability == 1){

                    if(medic.mana >= medic.abilityManaCost[0]){

                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -medic.abilityDamage[0] << " hp" << endl;
                        medic.mana = medic.mana - medic.abilityManaCost[0];
                        medic.hp = medic.hp - medic.abilityDamage[0];
                        cout << "Tobě zbylo " << medic.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(medic.mana >= medic.abilityManaCost[1]){

                        cout << "Pouzil jsi Attack a udelil jsi " << medic.abilityDamage[1] << " damage" << endl;
                        medic.mana = medic.mana - medic.abilityManaCost[1];
                        goblin.hp = goblin.hp - medic.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(medic.mana >= medic.abilityManaCost[2]){

                        cout << "Pouzil jsi Ultimate a udelil jsi " << medic.abilityDamage[2] << " damage" << endl;
                        medic.mana = medic.mana - medic.abilityManaCost[2];
                        goblin.hp = goblin.hp - medic.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                        
                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }
                    

                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    medic.hp = medic.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){

                    cout << "Goblin ti dal normalni utok" << endl;
                    medic.hp = medic.hp - goblin.attack;
                }

                if (random_cislo_uhyb <= 30){

                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }
                    
            }
        

        }while(vyber_ability < 1 || vyber_ability > 3);
    }while(goblin.hp > 0);

    utocnik.mana = utocnik.mana + 5;
    utocnik.xp = utocnik.xp + goblin.xpdrop;
    utocnik.gold = utocnik.gold + goblin.goldDrop;

    obrance.mana = obrance.mana + 5;
    obrance.xp = obrance.xp + goblin.xpdrop;
    obrance.gold = obrance.gold + goblin.goldDrop;

    carodej.mana = carodej.mana + 5;
    carodej.xp = carodej.xp + goblin.xpdrop;
    carodej.gold = carodej.gold + goblin.goldDrop;

    medic.mana = medic.mana + 5;
    medic.xp = medic.xp + goblin.xpdrop;
    medic.gold = medic.gold + goblin.goldDrop;

    /*Třetí souboj s dvěma Goblinama*/


    goblin.hp = 20;
    goblin1.hp = 20;
    goblin2.hp = 20;
    do{
        
        do{

            if(vyber_utoku == 1){

            random_cislo_powerhit = rand() % 100 + 1;
            random_cislo_uhyb = rand() % 100 + 1;

            if(vyber_postavy == 1){

                cout << "Narazil jsi na monstrum, musíš s ním bojovat, jako abilitu chceš použít: " << utocnik.ability << endl;
                cin >> vyber_ability;

                if (vyber_ability == 1){

                    if(utocnik.mana >= utocnik.abilityManaCost[0]){

                        cout << "Pouzil jsi Powerhit a udelil jsi " << utocnik.abilityDamage[0] << " damage" << endl;
                        utocnik.mana = utocnik.mana - utocnik.abilityManaCost[0];
                        goblin.hp = goblin.hp - utocnik.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(utocnik.mana >= utocnik.abilityManaCost[1]){

                        cout << "Pouzil jsi Basic attack a udelil jsi " << utocnik.abilityDamage[1] << " damage" << endl;
                        utocnik.mana = utocnik.mana - utocnik.abilityManaCost[1];
                        goblin.hp = goblin.hp - utocnik.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(utocnik.mana >= utocnik.abilityManaCost[2]){

                        cout << "Pouzil jsi Ultimate a udelil jsi " << utocnik.abilityDamage[2] << " damage" << endl;
                        utocnik.mana = utocnik.mana - utocnik.abilityManaCost[2];
                        goblin.hp = goblin.hp - utocnik.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;}
                
                    }

                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    utocnik.hp = utocnik.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){

                    cout << "Goblin ti dal normalni utok" << endl;
                    utocnik.hp = utocnik.hp - goblin.attack;
                }

                if (random_cislo_uhyb <= 30){

                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }
                

            }else if(vyber_postavy == 2){

                cout << "Narazil jsi na monstrum, musíš s ním bojovat, jako abilitu chceš použít: " << obrance.ability << endl;
                cin >> vyber_ability;

                if (vyber_ability == 1){

                    if(obrance.mana >= obrance.abilityManaCost[0]){

                        cout << "Pouzil jsi Shield a obranil jsi se na jedno kolo" << endl;
                        obrance.mana = obrance.mana - obrance.abilityManaCost[0];
                        goblin.attack = 0;
                        goblin.powerhit = 0;
                        goblin1.attack = 0;
                        goblin1.powerhit = 0;
                        goblin2.attack = 0;
                        goblin2.powerhit = 0;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(obrance.mana >= obrance.abilityManaCost[1]){

                        cout << "Pouzil jsi Defend attack a udelil jsi " << obrance.abilityDamage[1] << " damage" << endl;
                        obrance.mana = obrance.mana - obrance.abilityManaCost[1];
                        goblin.hp = goblin.hp - obrance.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(obrance.mana >= obrance.abilityManaCost[2]){
                        
                        cout << "Pouzil jsi Ultimate a udelil jsi " << obrance.abilityDamage[2] << " damage" << endl;
                        obrance.mana = obrance.mana - obrance.abilityManaCost[2];
                        goblin.hp = goblin.hp - obrance.abilityDamage[2];
                    }
                }
                    
                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    obrance.hp = obrance.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){
                    
                    cout << "Goblin ti dal normalni utok" << endl;
                    obrance.hp = obrance.hp - goblin.attack;
                }
                
                if (random_cislo_uhyb <= 30){
                    
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }

            }else if(vyber_postavy == 3){

                cout << "Narazil jsi na monstrum, musíš s ním bojovat, jako abilitu chceš použít: " << carodej.ability << endl;
                cin >> vyber_ability;

                if (vyber_ability == 1){

                    if(carodej.mana >= carodej.abilityManaCost[0]){

                        cout << "Pouzil jsi Fireball a udelil jsi " << carodej.abilityDamage[0] << " damage" << endl;
                        carodej.mana = carodej.mana - carodej.abilityManaCost[0];
                        goblin.hp = goblin.hp - carodej.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(carodej.mana >= carodej.abilityManaCost[1]){

                        cout << "Pouzil jsi Heal a vylecil jsi se o " << carodej.abilityDamage[1] << " hp" << endl;
                        carodej.mana = carodej.mana - carodej.abilityManaCost[1];
                        carodej.hp = carodej.hp + carodej.abilityDamage[1];
                        cout << "Tobě zbylo " << carodej.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(carodej.mana >= carodej.abilityManaCost[2]){

                        cout << "Pouzil jsi Ultimate a udelil jsi " << carodej.abilityDamage[2] << " damage" << endl;
                        carodej.mana = carodej.mana - carodej.abilityManaCost[2];
                        goblin.hp = goblin.hp - carodej.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    }

                }
                    

                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    carodej.hp = carodej.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){
                    
                    cout << "Goblin ti dal normalni utok" << endl;
                    carodej.hp = carodej.hp - goblin.attack;
                }
                
                if (random_cislo_uhyb <= 30){
                    
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }
                    
            }else if(vyber_postavy == 4){
                
                cout << "Narazil jsi na monstrum, musíš s ním bojovat, jako abilitu chceš použít: " << medic.ability << endl;
                cin >> vyber_ability;

                if (vyber_ability == 1){

                    if(medic.mana >= medic.abilityManaCost[0]){

                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -medic.abilityDamage[0] << " hp" << endl;
                        medic.mana = medic.mana - medic.abilityManaCost[0];
                        medic.hp = medic.hp - medic.abilityDamage[0];
                        cout << "Tobě zbylo " << medic.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(medic.mana >= medic.abilityManaCost[1]){

                        cout << "Pouzil jsi Attack a udelil jsi " << medic.abilityDamage[1] << " damage" << endl;
                        medic.mana = medic.mana - medic.abilityManaCost[1];
                        goblin.hp = goblin.hp - medic.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(medic.mana >= medic.abilityManaCost[2]){

                        cout << "Pouzil jsi Ultimate a udelil jsi " << medic.abilityDamage[2] << " damage" << endl;
                        medic.mana = medic.mana - medic.abilityManaCost[2];
                        goblin.hp = goblin.hp - medic.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                        
                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }
                    

                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    medic.hp = medic.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){

                    cout << "Goblin ti dal normalni utok" << endl;
                    medic.hp = medic.hp - goblin.attack;
                }

                if (random_cislo_uhyb <= 30){

                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }
                    
            }

            }else if(vyber_utoku == 2){

            random_cislo_powerhit = rand() % 100 + 1;
            random_cislo_uhyb = rand() % 100 + 1;

            if(vyber_postavy == 1){

                cout << "Narazil jsi na monstrum, musíš s ním bojovat, jako abilitu chceš použít: " << utocnik.ability << endl;
                cin >> vyber_ability;

                if (vyber_ability == 1){

                    if(utocnik.mana >= utocnik.abilityManaCost[0]){

                        cout << "Pouzil jsi Powerhit a udelil jsi " << utocnik.abilityDamage[0] << " damage" << endl;
                        utocnik.mana = utocnik.mana - utocnik.abilityManaCost[0];
                        goblin.hp = goblin.hp - utocnik.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(utocnik.mana >= utocnik.abilityManaCost[1]){

                        cout << "Pouzil jsi Basic attack a udelil jsi " << utocnik.abilityDamage[1] << " damage" << endl;
                        utocnik.mana = utocnik.mana - utocnik.abilityManaCost[1];
                        goblin.hp = goblin.hp - utocnik.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(utocnik.mana >= utocnik.abilityManaCost[2]){

                        cout << "Pouzil jsi Ultimate a udelil jsi " << utocnik.abilityDamage[2] << " damage" << endl;
                        utocnik.mana = utocnik.mana - utocnik.abilityManaCost[2];
                        goblin.hp = goblin.hp - utocnik.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;}
                
                    }

                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    utocnik.hp = utocnik.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){

                    cout << "Goblin ti dal normalni utok" << endl;
                    utocnik.hp = utocnik.hp - goblin.attack;
                }

                if (random_cislo_uhyb <= 30){

                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }
                

            }else if(vyber_postavy == 2){

                cout << "Narazil jsi na monstrum, musíš s ním bojovat, jako abilitu chceš použít: " << obrance.ability << endl;
                cin >> vyber_ability;

                if (vyber_ability == 1){

                    if(obrance.mana >= obrance.abilityManaCost[0]){

                        cout << "Pouzil jsi Shield a obranil jsi se na jedno kolo" << endl;
                        obrance.mana = obrance.mana - obrance.abilityManaCost[0];
                        goblin.attack = 0;
                        goblin.powerhit = 0;
                        goblin1.attack = 0;
                        goblin1.powerhit = 0;
                        goblin2.attack = 0;
                        goblin2.powerhit = 0;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(obrance.mana >= obrance.abilityManaCost[1]){

                        cout << "Pouzil jsi Defend attack a udelil jsi " << obrance.abilityDamage[1] << " damage" << endl;
                        obrance.mana = obrance.mana - obrance.abilityManaCost[1];
                        goblin.hp = goblin.hp - obrance.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(obrance.mana >= obrance.abilityManaCost[2]){
                        
                        cout << "Pouzil jsi Ultimate a udelil jsi " << obrance.abilityDamage[2] << " damage" << endl;
                        obrance.mana = obrance.mana - obrance.abilityManaCost[2];
                        goblin.hp = goblin.hp - obrance.abilityDamage[2];
                    }
                }
                    
                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    obrance.hp = obrance.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){
                    
                    cout << "Goblin ti dal normalni utok" << endl;
                    obrance.hp = obrance.hp - goblin.attack;
                }
                
                if (random_cislo_uhyb <= 30){
                    
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }

            }else if(vyber_postavy == 3){

                cout << "Narazil jsi na monstrum, musíš s ním bojovat, jako abilitu chceš použít: " << carodej.ability << endl;
                cin >> vyber_ability;

                if (vyber_ability == 1){

                    if(carodej.mana >= carodej.abilityManaCost[0]){

                        cout << "Pouzil jsi Fireball a udelil jsi " << carodej.abilityDamage[0] << " damage" << endl;
                        carodej.mana = carodej.mana - carodej.abilityManaCost[0];
                        goblin.hp = goblin.hp - carodej.abilityDamage[0];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(carodej.mana >= carodej.abilityManaCost[1]){

                        cout << "Pouzil jsi Heal a vylecil jsi se o " << carodej.abilityDamage[1] << " hp" << endl;
                        carodej.mana = carodej.mana - carodej.abilityManaCost[1];
                        carodej.hp = carodej.hp + carodej.abilityDamage[1];
                        cout << "Tobě zbylo " << carodej.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(carodej.mana >= carodej.abilityManaCost[2]){

                        cout << "Pouzil jsi Ultimate a udelil jsi " << carodej.abilityDamage[2] << " damage" << endl;
                        carodej.mana = carodej.mana - carodej.abilityManaCost[2];
                        goblin.hp = goblin.hp - carodej.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                    }

                }
                    

                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    carodej.hp = carodej.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){
                    
                    cout << "Goblin ti dal normalni utok" << endl;
                    carodej.hp = carodej.hp - goblin.attack;
                }
                
                if (random_cislo_uhyb <= 30){
                    
                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }
                    
            }else if(vyber_postavy == 4){
                
                cout << "Narazil jsi na monstrum, musíš s ním bojovat, jako abilitu chceš použít: " << medic.ability << endl;
                cin >> vyber_ability;

                if (vyber_ability == 1){

                    if(medic.mana >= medic.abilityManaCost[0]){

                        cout << "Pouzil jsi Heal a vylecil jsi se o " << -medic.abilityDamage[0] << " hp" << endl;
                        medic.mana = medic.mana - medic.abilityManaCost[0];
                        medic.hp = medic.hp - medic.abilityDamage[0];
                        cout << "Tobě zbylo " << medic.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 2){

                    if(medic.mana >= medic.abilityManaCost[1]){

                        cout << "Pouzil jsi Attack a udelil jsi " << medic.abilityDamage[1] << " damage" << endl;
                        medic.mana = medic.mana - medic.abilityManaCost[1];
                        goblin.hp = goblin.hp - medic.abilityDamage[1];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;

                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }else if (vyber_ability == 3){

                    if(medic.mana >= medic.abilityManaCost[2]){

                        cout << "Pouzil jsi Ultimate a udelil jsi " << medic.abilityDamage[2] << " damage" << endl;
                        medic.mana = medic.mana - medic.abilityManaCost[2];
                        goblin.hp = goblin.hp - medic.abilityDamage[2];
                        cout << "Goblinovi zbylo " << goblin.hp << " hp" << endl;
                        
                    }else{cout << "Nemate dost many, zvolte jinou abilitu" << endl;}

                }
                    

                if (random_cislo_powerhit <= 20){
                    
                    cout << "Goblin ti dal powerhit" << endl;
                    medic.hp = medic.hp - goblin.powerhit;
                }else if(random_cislo_powerhit > 20){

                    cout << "Goblin ti dal normalni utok" << endl;
                    medic.hp = medic.hp - goblin.attack;
                }

                if (random_cislo_uhyb <= 30){

                    cout << "Uhybl jsi se, goblin ti nedal damage" << endl;
                }
                    
            }
            }
        }while(vyber_ability < 1 || vyber_ability > 3);
    }while(goblin.hp > 0);

    return 0;
}