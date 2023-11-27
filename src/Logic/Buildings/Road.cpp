#include "Logic/Buildings/Road.hpp"
#include <iostream>

namespace cs::game::buildings
{
    Road::Road() {
        this->setName("Road");
    }

    Road::Road(int x, int y) : ABuilding(x, y) {
        this->setName("Road");
    }

    void Road::build()
    {
        std::cout << "Road::build()" << std::endl;
    }
} // namespace cs::game::buildings
