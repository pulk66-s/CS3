#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Map/Infos.hpp"

namespace cs::game::map
{
    class Map {
    public:
        Infos &infos() { return _infos; }
    private:
        Infos _infos;
    };
} // namespace cs::game::map
