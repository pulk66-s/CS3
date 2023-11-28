#include "ABuilding.hpp"

namespace cs::game::buildings
{
    ABuilding::ABuilding() : ABuilding(0, 0) {}

    ABuilding::ABuilding(int x, int y)
        : ABuilding(geometry::Point(x, y), geometry::Point(1, 1)) {}

    ABuilding::ABuilding(int x, int y, int w, int h)
        : ABuilding(geometry::Point(x, y), geometry::Point(w, h)) {}

    ABuilding::ABuilding(geometry::Point position, geometry::Point size) {
        this->position(position);
        this->size(size);
    }

    bool ABuilding::build(map::Infos &infos) {
        for (geometry::Rect r : infos.colliders()) {
            if (r.collide(*this)) {
                return false;
            }
        }
        return true;
    }
} // namespace cs::game::buildings
