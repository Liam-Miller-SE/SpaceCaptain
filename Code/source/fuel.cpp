#include "../include/fuel.h"
using namespace std;

Fuel::Fuel(string _name)
{
    name = _name;
    volume = 0.0;
    state = Fuel::NONE;
    joulesPerUnitVolume = 1.0;
}

Fuel::Fuel(string _name, float _volume)
{
    name = _name;
    volume = _volume;
    state = Fuel::NONE;
    joulesPerUnitVolume = 1.0;
}

Fuel::Fuel(string _name,
        float _volume,
        State _state,
        float _joulesPerUnitVolume)
{
    name = _name;
    volume = _volume;
    state = _state;
    joulesPerUnitVolume = _joulesPerUnitVolume;
}

string Fuel::getName()
{
    return name;
}

float Fuel::changeVolume(float amount)
{
    if (amount + volume < 0)
    {
        amount += volume;
        volume = 0;
        return amount;
    }
    else
    {
        volume += amount;
        return 0;
    }
}

float Fuel::consumeVolume(float amount)
{
    if (amount > volume)
    {
        amount = volume;
    }
    volume -= amount;
    return amount * joulesPerUnitVolume;
}