#include "Logic/Buildings/Road.hpp"
#include <iostream>

namespace cs::game::buildings
{
    Road::Road(): Road(0, 0) {}

    Road::Road(int x, int y) : SpecialBuilding(x, y) {
        this->setName("Road");
    }

    bool Road::build(map::Infos &infos) {
        if (!ABuilding::build(infos)) {
            return false;
        }
        infos.colliders().add(*this);
        return true;
    }
} // namespace cs::game::buildings
