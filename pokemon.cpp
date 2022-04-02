#include "pokemon.h"

int pokemon::GetMaxHP()
{
    return (int)Math.Floor((decimal)(syuzokuMaxHP + kotaichiMaxHP) * 2 + (decimal)(Level / 100)) + Level + 10;
}

int pokemon::GetKougeki()
{
    return GetStatus(syuzokuKougeki, kotaichiKougeki);
}

int pokemon::GetSubayasa()
{
    return GetStatus(syuzokuSubayasa, kotaichiSubayasa);
}

int pokemon::GetStatus(int syuzokuchi, int kotaichi)
{
    return (int)Math.Floor((decimal)(syuzokuchi + kotaichi) * 2 + (decimal)(Level / 100)) + 5;
}