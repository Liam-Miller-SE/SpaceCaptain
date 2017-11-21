#include "../Headers/material.h"

Material::Material()
{
    name = "DEFAULT_NAME";
}

Material::Material(float _density)
{
    name = "DEFAULT_NAME";
    density = _density;
}

Material::Material(string _name)
{
    name = _name;
}

Material::Material(string _name, float _density)
{
    name = _name;
    density = _density;
}

Material::Material(string _name,
                   float _density,
                   bool _isAirtight,
                   bool _isFlamible,
                   bool _isConductive,
                   bool _isTransparent)
{
    name = _name;
    density = _density;
    isAirtight = _isAirtight;
    isFlamible = _isFlamible;
    isConductive = _isConductive;
    isTransparent = _isTransparent;
}

string Material::getName()
{
    return name;
}

float Material::getDensity()
{
    return density;
}