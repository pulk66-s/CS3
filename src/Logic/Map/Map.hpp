#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Map/Buildings.hpp"
#include "Logic/Map/Infos.hpp"

namespace cs::game::map
{
    class Map {
    public:
        Buildings &buildings() { return _buildings; }
        Infos &infos() { return _infos; }
    private:
        Buildings _buildings;
        Infos _infos;
    };
} // namespace cs::game::map
