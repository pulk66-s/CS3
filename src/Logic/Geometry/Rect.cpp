#include "Rect.hpp"

namespace cs::game::geometry
{
    bool Rect::collide(Rect r)
    {
        Point rp = r.position(), rs = r.size();
        Point p = position(), s = size();

        if (rp.x() >= p.x() + s.x() || rp.x() + rs.x() <= p.x())
            return false;
        if (rp.y() >= p.y() + s.y() || rp.y() + rs.y() <= p.y())
            return false;
        return true;
    }

    bool operator==(Rect const& a, Rect const& b) {
        return a.position() == b.position() && a.size() == b.size();
    }
} // namespace cs::game::geometry
