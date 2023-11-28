#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Map/Infos/Population.hpp"
#include "Logic/Map/Infos/Colliders.hpp"

namespace cs::game::map
{
    class Infos {
    public:
        infos::Population &pop() { return _pop; };
        infos::Colliders &colliders() { return _colliders; };

    private:
        infos::Population _pop;
        infos::Colliders _colliders;
    };
} // namespace cs::game::map
