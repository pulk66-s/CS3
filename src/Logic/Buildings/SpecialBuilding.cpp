#include "SpecialBuilding.hpp"
#include <algorithm>
#include <iostream>

namespace cs::game::buildings
{
    bool SpecialBuilding::build(map::Infos &infos)
    {
        std::cout << "SpecialBuilding::build" << std::endl;
        geometry::Rect t = *this;

        if (!ABuilding::build(infos)) {
            std::cout << "ABuilding::build(infos) == false" << std::endl;
            return false;
        }
        for (geometry::Rect r : infos.colliders()) {
            if (r.isNext(t)) {
                std::cout << "is next" << std::endl;
                infos.colliders().add(t);
                return true;
            }
        }
        std::cout << "is not next" << std::endl;
        return false;
    }
} // namespace cs::game::buildings
