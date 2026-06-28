#include "Player.h"

Player::Player()
{
    float zdorovie = 100.0;        // здоровье игрока
    float sytost = 100.0;          // сытость
    float temperaturaTela = 100.0; // температура тела
    float vlazhnost = 0.0;       // влажность / намокание
}
float Player::getSytost() const
{
    return sytost;
}
