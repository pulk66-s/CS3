#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/ABuilding.hpp"

namespace cs::game::buildings
{
    class House : public ABuilding {
    public:
        House();
        House(int x, int y);
        House(int x, int y, int w, int h);
        House(geometry::Point position, geometry::Point size);
        bool build(
            Storage<std::shared_ptr<buildings::zones::IZone>> &zones,
            Storage<geometry::Rect> &colliders,
            map::infos::Population &population
        ) override;

    private:
        int population = 4;
    };
} // namespace cs::game::buildings
