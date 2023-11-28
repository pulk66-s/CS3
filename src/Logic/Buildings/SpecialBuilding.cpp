#include "SpecialBuilding.hpp"
#include <algorithm>
#include <iostream>

namespace cs::game::buildings
{
    bool SpecialBuilding::build(map::Infos &infos)
    {
        for (geometry::Rect r : infos.colliders()) {
            if (r.collide(*this)) {
                return false;
            }
        }
        infos.colliders().add(*this);
        return true;
    }
} // namespace cs::game::buildings
