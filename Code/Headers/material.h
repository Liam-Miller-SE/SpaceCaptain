using namespace std;

class Material
{
    private:
    char* name;
    float density;
    bool isAirtight;
    bool isFlamible;
    bool isConductive;
    bool isTransparent;

    public:
    Material(char* _name);
    Material(char* _name, float _density);
    Material(char* _name, 
        float _density,
        bool _isAirtight, 
        bool _isFlamible,
        bool _isConductive,
        bool _isTransparent);
    
    char* getName();
    float getDensity();
};