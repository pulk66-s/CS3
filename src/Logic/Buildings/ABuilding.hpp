#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/IBuilding.hpp"

namespace cs::game::buildings
{
    class ABuilding : public IBuilding {
    public:
        ABuilding() {};
        ABuilding(int x, int y) {
            this->position(geometry::Point(x, y));
            this->size(geometry::Point(1, 1));
        }
        virtual void build() = 0;
    };
} // namespace cs::game::buildings
