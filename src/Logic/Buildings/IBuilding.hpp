#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Geometry.hpp"
#include "Logic/Entity.hpp"
#include "Logic/Name.hpp"
#include "Logic/Storage.hpp"
#include "Logic/Map/Infos/Population.hpp"

namespace cs::game::buildings
{
    class IBuilding :
        public geometry::Rect,
        public Entity,
        public Name {
    public:
        virtual bool build(
            Storage<std::shared_ptr<buildings::zones::IZone>> &zones,
            Storage<geometry::Rect> &colliders,
            map::infos::Population &population
        ) = 0;
    };
} // namespace cs::game::buildings
