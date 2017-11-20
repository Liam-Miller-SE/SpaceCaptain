#include <string>
using namespace std;

#ifndef material_h
#define material_h

class Material
{
    private:
    string name;
    float density;
    bool isAirtight;
    bool isFlamible;
    bool isConductive;
    bool isTransparent;

    public:
    Material(string _name);
    Material(string _name, float _density);
    Material(string _name, 
        float _density,
        bool _isAirtight, 
        bool _isFlamible,
        bool _isConductive,
        bool _isTransparent);
    
    string getName();
    float getDensity();
};
#endif