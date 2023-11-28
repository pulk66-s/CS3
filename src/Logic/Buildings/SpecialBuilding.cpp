#include "SpecialBuilding.hpp"
#include <algorithm>
#include <iostream>

namespace cs::game::buildings
{
    bool SpecialBuilding::build(map::Infos &infos)
    {
        if (!ABuilding::build(infos)) {
            return false;
        }
        infos.colliders().add(*this);
        return true;
    }
} // namespace cs::game::buildings
