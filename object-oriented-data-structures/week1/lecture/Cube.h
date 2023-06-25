#pragma once

namespace uiuc {
    class Cube {
        public:
            int getVolume();
            int getSurfaceArea();
            int getLength();
            void setLength(int l);
        private:
            int length_;
    };
}