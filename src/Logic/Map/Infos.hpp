#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Map/Infos/Population.hpp"

namespace cs::game::map
{
    class Infos {
    public:
        infos::Population &pop() { return _pop; };

    private:
        infos::Population _pop;
    };
} // namespace cs::game::map
