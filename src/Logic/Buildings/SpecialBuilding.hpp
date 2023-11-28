#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/ABuilding.hpp"

namespace cs::game::buildings
{
    class SpecialBuilding : public ABuilding {
    public:
        SpecialBuilding(int x, int y): ABuilding(x, y) {};

        bool build(map::Infos &infos) override;
    };
} // namespace cs::game::buildings
