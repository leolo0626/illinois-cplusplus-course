#include <iostream>


int main() {
    int num = 7;
    int *p = &num;

    std::cout << "num is " << num << std::endl;
    std::cout << "&num is " << &num << std::endl;

    std::cout << "p: " << p << std::endl; // equal to &num
    std::cout << "&p: " << &p << std::endl; // slightly lower than &num
    std::cout << "*p: " << *p << std::endl; // dereferencing -> *p=7

    *p = 42;

    std::cout << "num: " << num << std::endl;
    std::cout << "*p: " << *p << std::endl;


}