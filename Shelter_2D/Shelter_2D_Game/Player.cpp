#include "Player.h"

Player::Player()
    : zdorovie(100.0f),
    sytost(100.0f),
    temperaturaTela(100.0f),
    vlazhnost(0.0f)
{
}

float Player::getSytost() const
{
    return sytost;
}