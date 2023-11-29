#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/ABuilding.hpp"
#include "Logic/Buildings/NearRoad.hpp"

namespace cs::game::buildings
{
    class SpecialBuilding : public ABuilding, public NearRoad {
    public:
        SpecialBuilding(int x, int y): ABuilding(x, y) {};

        bool build(map::Infos &infos) override;
    };
} // namespace cs::game::buildings
