#include "Logic/Geometry/Segment.hpp"

namespace cs::game::geometry
{
    bool Segment::contains(Point p) {
        Line l(_a, p);

        if (!((p.x() >= _a.x() && p.x() <= _b.x()) || (p.x() <= _a.x() && p.x() >= _b.x())))
            return false;
        if (this->scalarProduct(l) != 0)
            return false;
        return true;
    }
} // namespace cs::game::geometry
