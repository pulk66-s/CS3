#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Geometry.hpp"
#include "Logic/Entity.hpp"
#include "Logic/Name.hpp"

namespace cs::game::buildings
{
    class IBuilding :
        public geometry::Rect,
        public Entity,
        public Name {
    };
} // namespace cs::game::buildings
