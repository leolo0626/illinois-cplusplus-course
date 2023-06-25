#include "Cube.h"

namespace uiuc {
    Cube::Cube() {
        this-> length_ = 1;
    }

    Cube::Cube(int length) {
        this->length_ = length;
    }

    Cube::Cube(const Cube& cube) {
        this->length_ = cube.length_;
    }

    int Cube::getLength() {
        return length_;
    }

    void Cube::setLength(int l) {
        this->length_ = l;
    }

    int Cube::getSurfaceArea() {
        return 6 * length_ * length_;
    }

    int Cube::getVolume() {
        return length_ * length_ * length_;
    }
}

