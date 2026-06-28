#pragma once

class Player
{
public:
    Player();

    void update(float deltaTime);

    float getZdorovie() const;        // получить здоровье игрока
    float getSytost() const;          // получить сытость игрока
    float getTemperaturaTela() const; // получить температуру тела
    float getVlazhnost() const;       // получить влажность / намокание

private:

    float zdorovie;        // здоровье игрока
    float sytost;          // сытость
    float temperaturaTela; // температура тела
    float vlazhnost;       // влажность / намокание

    void ogranichitHarakteristiki();
};