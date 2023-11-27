#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Geometry.hpp"
#include "Logic/Entity.hpp"
#include "Logic/Name.hpp"
#include "Logic/Map/Infos.hpp"

namespace cs::game::buildings
{
    class IBuilding :
        public geometry::Rect,
        public Entity,
        public Name {
    public:
        virtual void build(map::Infos &infos) = 0;
    };
} // namespace cs::game::buildings
