#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/ABuilding.hpp"
#include "Logic/Buildings/NearRoad.hpp"

namespace cs::game::buildings
{
    class SpecialBuilding : public ABuilding, public NearRoad {
    public:
        SpecialBuilding(int x, int y): ABuilding(x, y) {};

        bool build(
            Storage<std::shared_ptr<buildings::zones::IZone>> &zones,
            Storage<geometry::Rect> &colliders,
            map::infos::Population &population
        ) override;
    };
} // namespace cs::game::buildings
