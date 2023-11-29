#include "AZone.hpp"
#include <memory>

namespace cs::game::buildings::zones
{
    AZone::AZone(geometry::Point position, geometry::Point size) {
        this->position(position);
        this->size(size);
    }

    AZone::AZone(const AZone &other): AZone(other.position(), other.size()) {}

    AZone::AZone(geometry::Rect r): AZone(r.position(), r.size()) {}

    AZone::AZone(int x,int y, int w, int h): AZone(geometry::Point(x, y), geometry::Point(w, h)) {}

    AZone::AZone(int x, int y): AZone(geometry::Point(x, y), geometry::Point(1, 1)) {}

    AZone::AZone(): AZone(0, 0) {}

    bool AZone::build(
        Storage<std::shared_ptr<buildings::zones::IZone>> zones,
        Storage<geometry::Rect> colliders
    ) {
        if (!NearRoad::build(colliders, *this)) {
            return false;
        }
        std::shared_ptr<IZone> t = std::make_shared<AZone>(*this);
        zones.add(t);
        return true;
    }
} // namespace cs::game::buildings::zones
