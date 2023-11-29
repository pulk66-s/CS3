#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Storage.hpp"
#include "Logic/Geometry.hpp"
#include <iostream>

namespace cs::game::buildings
{
    class NearRoad  {
    public:
        bool build(Storage<geometry::Rect> storage, geometry::Rect t) {
            for (geometry::Rect r : storage) {
                if (r.isNext(t)) {
                    return true;
                }
            }
            return false;
        }
    };
} // namespace cs::game::buildings
