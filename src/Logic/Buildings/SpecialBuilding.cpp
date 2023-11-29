#include "SpecialBuilding.hpp"
#include <algorithm>
#include <iostream>

namespace cs::game::buildings
{
    bool SpecialBuilding::build(
        Storage<std::shared_ptr<buildings::zones::IZone>> &zones,
        Storage<geometry::Rect> &colliders,
        map::infos::Population &population
    ) {
        geometry::Rect t = *this;

        if (!ABuilding::build(zones, colliders, population)) {
            return false;
        }
        if (NearRoad::build(colliders, t)) {
            colliders.add(t);
            return true;
        }
        return false;
    }
} // namespace cs::game::buildings
