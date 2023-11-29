#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/Zones/IZone.hpp"

namespace cs::game::buildings::zones
{
    class AZone : public IZone {
    public:
        AZone();
        AZone(int x, int y);
        AZone(int x, int y, int w, int h);
        AZone(geometry::Point position, geometry::Point size);
        AZone(geometry::Rect rect);
        AZone(const AZone &other);

        int maxDepth() const { return _mdepth; };
        bool build(
            Storage<std::shared_ptr<buildings::zones::IZone>> zones,
            Storage<geometry::Rect> colliders
        ) override;
    private:
        int _mdepth = 4;
    };
} // namespace cs::game::buildings::zones
