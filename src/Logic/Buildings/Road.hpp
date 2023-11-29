#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/SpecialBuilding.hpp"

namespace cs::game::buildings
{
    class Road : public SpecialBuilding {
    public:
        Road();
        Road(int x, int y);

        bool build(
            Storage<std::shared_ptr<buildings::zones::IZone>> &zones,
            Storage<geometry::Rect> &colliders,
            map::infos::Population &population
        ) override;
    };
} // namespace cs::game::buildings
