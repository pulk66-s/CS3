#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/SpecialBuilding.hpp"

namespace cs::game::buildings
{
    class Road : public SpecialBuilding {
    public:
        Road();
        Road(int x, int y);
    };
} // namespace cs::game::buildings
