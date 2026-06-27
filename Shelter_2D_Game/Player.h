#pragma once

class Player
{
public:
    Player();

    void update(float deltaTime);

    float getHealth() const;
    float getSatiety() const;
    float getTemperature() const;
    float getWetness() const;

private:
    float health;
    float satiety;
    float temperature;
    float wetness;

    void clampStats();
};