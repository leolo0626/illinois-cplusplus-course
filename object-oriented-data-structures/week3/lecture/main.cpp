#include <iostream>
#include "Cube.h"

//  g++ -std=c++11 main.cpp Cube.cpp -o cube

int main() {
    int length;
    std::cout << "Please input length of cube :" ;
    std::cin >> length;
    uiuc::Cube c; 
    c.setLength(length);
    std::cout << "Volume: " << c.getVolume() << std::endl;
    std::cout << "Surface Area: " << c.getSurfaceArea() << std::endl;

    //default constructor
    uiuc::Cube unit_cube;
    std::cout << "Volume of Unit Cube: " << unit_cube.getVolume() << std::endl;

    //custom constructor
    uiuc::Cube custom_cube(2);
    std::cout << "Volume of custom cube with length 2: " << custom_cube.getVolume() << std::endl;

    

    return 0;
};