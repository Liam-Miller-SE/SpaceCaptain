#include <string>
using namespace std;

#ifndef fuel_h
#define fuel_h

class Fuel
{
    public:
    enum State 
    {
        LIQUID,
        SOLID,
        GAS,
        ELECTRICAL,
        NONE
    } ;

    private:
    string name;
    float volume;
    Fuel::State state;
    float joulesPerUnitVolume;

    public:
    Fuel(string _name);
    Fuel(string _name, float _volume);
    Fuel(string _name,
        float _volume,
        State _state,
        float _joulesPerUnitVolume);

    string getName();
    float getVolume();
    float changeVolume(float amount);
    float consumeVolume(float amount);
};
#endif