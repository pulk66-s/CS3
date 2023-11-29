#include "SpecialBuilding.hpp"
#include <algorithm>
#include <iostream>

namespace cs::game::buildings
{
    bool SpecialBuilding::build(map::Infos &infos) {
        geometry::Rect t = *this;

        if (!ABuilding::build(infos)) {
            return false;
        }
        if (NearRoad::build(infos.colliders(), t)) {
            infos.colliders().add(t);
            return true;
        }
        return false;
    }
} // namespace cs::game::buildings
