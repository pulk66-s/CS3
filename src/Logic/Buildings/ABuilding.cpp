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

    bool ABuilding::build(
        __attribute__((unused)) Storage<std::shared_ptr<buildings::zones::IZone>> &zones,
        Storage<geometry::Rect> &colliders,
        __attribute__((unused)) map::infos::Population &population
    ) {
        for (geometry::Rect r : colliders) {
            if (r.overlap(*this)) {
                return false;
            }
        }
        return true;
    }
} // namespace cs::game::buildings
