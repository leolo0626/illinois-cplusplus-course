#pragma once

namespace uiuc {
    class Cube {
        public:
            Cube();
            Cube(int length);
            Cube(const Cube& cube);
            int getVolume();
            int getSurfaceArea();
            int getLength();
            void setLength(int l);
        private:
            int length_;
    };
}