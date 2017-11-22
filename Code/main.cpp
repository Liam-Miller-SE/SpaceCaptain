#include "source/material.cpp"
#include "source/fuel.cpp"

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    cout << "Starting";
    string s = "New material";
    Material * m;
    m = new Material();
    cout << m->getName();
    int out;
    cin >> out;
    return out;
}