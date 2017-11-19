#include "material.h"

class Material
{
    Material::Material(char* _name)
    {
        Material::name = _name;
    }

    Material::Material(char* _name, float _density)
    {
        Material::name = _name;
        Material::density = _density;
    }

    Material::Material(char* _name, 
        float _density,
        bool _isAirtight, 
        bool _isFlamible,
        bool _isConductive,
        bool _isTransparent);
    {
        Material::name = _name;
        Material::density = _density;
        Material::isAirtight = _isAirtight; 
        Material::isFlamible = _isFlamible;
        Material::isConductive = _isConductive;
        Material::isTransparent = _isTransparent;
    }

    char* Material::getName()
    {
        return Material::name;
    }

    float Material::getDensity()
    {
        return Material::density;
    }
};