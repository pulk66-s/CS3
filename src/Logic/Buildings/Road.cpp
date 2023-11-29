#include "Logic/Buildings/Road.hpp"
#include <iostream>

namespace cs::game::buildings
{
    Road::Road(): Road(0, 0) {}

    Road::Road(int x, int y) : SpecialBuilding(x, y) {
        this->setName("Road");
    }

    bool Road::build(
        Storage<std::shared_ptr<buildings::zones::IZone>> &zones,
        Storage<geometry::Rect> &colliders,
        map::infos::Population &population
    ) {
        if (!ABuilding::build(zones, colliders, population)) {
            return false;
        }
        colliders.add(*this);
        return true;
    }
} // namespace cs::game::buildings
