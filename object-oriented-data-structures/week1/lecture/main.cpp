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
    return 0;
};