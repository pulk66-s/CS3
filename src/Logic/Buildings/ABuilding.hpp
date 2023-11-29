#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/IBuilding.hpp"

namespace cs::game::buildings
{
    class ABuilding : public IBuilding {
    public:
        ABuilding();
        ABuilding(int x, int y);
        ABuilding(int x, int y, int w, int h);
        ABuilding(geometry::Point position, geometry::Point size);

        bool build(
            __attribute__((unused)) Storage<std::shared_ptr<buildings::zones::IZone>> &zones,
            Storage<geometry::Rect> &colliders,
            __attribute__((unused)) map::infos::Population &population
        ) override;
    };
} // namespace cs::game::buildings
