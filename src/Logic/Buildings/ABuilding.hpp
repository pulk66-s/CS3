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

        bool build(map::Infos &infos) override;
    };
} // namespace cs::game::buildings
