#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Geometry.hpp"
#include "Logic/Buildings/NearRoad.hpp"
#include "Logic/Storage.hpp"
#include "Logic/Name.hpp"
#include "Logic/Entity.hpp"

namespace cs::game::buildings::zones
{
    class IZone 
        : public geometry::Rect,
        public NearRoad,
        public Name,
        public Entity {
    public:
        virtual bool build(
            Storage<std::shared_ptr<buildings::zones::IZone>> zones,
            Storage<geometry::Rect> colliders
        ) = 0;
    };
} // namespace cs::game::buildings::zones
