#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/ABuilding.hpp"

namespace cs::game::buildings
{
    class House : public ABuilding {
    public:
        House();
        House(int x, int y);
        void build(map::Infos &infos);

    private:
        int population = 4;
    };
} // namespace cs::game::buildings
