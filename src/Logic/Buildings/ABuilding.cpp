#include "ABuilding.hpp"

namespace cs::game::buildings
{
    ABuilding::ABuilding(int x, int y) {
        this->position(geometry::Point(x, y));
        this->size(geometry::Point(1, 1));
    }
} // namespace cs::game::buildings
