#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Map/Infos/Population.hpp"
#include "Logic/Map/Infos/Colliders.hpp"
#include "Logic/Map/Infos/Zones.hpp"
#include "Logic/Map/Infos/Buildings.hpp"

namespace cs::game::map
{
    class Infos {
    public:
        infos::Population &pop() { return _pop; };
        infos::Colliders &colliders() { return _colliders; };
        infos::Zones &zones() { return _zones; };
        infos::Buildings &buildings() { return _buildings; };

    private:
        infos::Population _pop;
        infos::Colliders _colliders;
        infos::Zones _zones;
        infos::Buildings _buildings;
    };
} // namespace cs::game::map
