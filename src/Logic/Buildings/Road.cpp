#include "Logic/Buildings/Road.hpp"
#include <iostream>

namespace cs::game::buildings
{
    Road::Road(): Road(0, 0) {}

    Road::Road(int x, int y) : SpecialBuilding(x, y) {
        this->setName("Road");
    }
} // namespace cs::game::buildings
