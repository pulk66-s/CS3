#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/IBuilding.hpp"

namespace cs::game::buildings
{
    class ABuilding : public IBuilding {
    public:
        ABuilding() {};
        ABuilding(int x, int y);

        void build(__attribute__((unused)) map::Infos &infos) override {};
    };
} // namespace cs::game::buildings
