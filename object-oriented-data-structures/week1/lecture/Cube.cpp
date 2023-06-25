#include "Cube.h"

namespace uiuc {
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

