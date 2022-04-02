#ifndef POKEMON_POKEMON_H
#define POKEMON_POKEMON_H

#include <string>

class pokemon
{
protected:
    std::string ZukanNo;
    std::string Name;
    std::string Waza1;
    std::string Waza2;
    std::string Waza3;
    std::string Waza4;
    std::string Type1;
    std::string Type2;
    int Level;

    int syuzokuMaxHP;
    int syuzokuKougeki;
    int syuzokuSubayasa;
    int kotaichiMaxHP;
    int kotaichiKougeki;
    int kotaichiSubayasa;



public:
    int GetMaxHP();
    int GetKougeki();
    int GetSubayasa();
    int GetStatus(int syuzokuchi, int kotaichi);

};



#endif 