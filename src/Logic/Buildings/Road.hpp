#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/ABuilding.hpp"

namespace cs::game::buildings
{
    class Road : public ABuilding {
    public:
        Road();
        Road(int x, int y);
        void build() override;
    };
} // namespace cs::game::buildings
