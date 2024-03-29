#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Storage.hpp"
#include "Logic/Geometry.hpp"
#include <vector>
#include <algorithm>

namespace cs::game::map::infos
{
    class Colliders : public Storage<geometry::Rect> {
    };
} // namespace cs::game::map::infos
