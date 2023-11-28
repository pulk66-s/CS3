#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/SpecialBuilding.hpp"

namespace cs::game::buildings
{
    class Road : public SpecialBuilding {
    public:
        Road();
        Road(int x, int y);

        bool build(map::Infos &infos) override;
    };
} // namespace cs::game::buildings
