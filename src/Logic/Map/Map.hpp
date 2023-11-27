#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Map/Buildings.hpp"

namespace cs::game::map
{
    class Map {
    public:
        Buildings &buildings() { return _buildings; }
    private:
        Buildings _buildings;
    };
} // namespace cs::game::map
