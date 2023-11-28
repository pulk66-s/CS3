#include "Rect.hpp"

namespace cs::game::geometry
{
    bool Rect::collide(Rect r)
    {
        Point rp = r.position(), rs = r.size();
        Point p = position(), s = size();

        std::cout << "rp " << rp << " rs " << rs << " p " << p << " s " << s << std::endl;

        if (rp.x() >= p.x() + s.x() || rp.x() + rs.x() <= p.x())
            return false;
        if (rp.y() >= p.y() + s.y() || rp.y() + rs.y() <= p.y())
            return false;
        return true;
    }

    bool Rect::isNext(Rect r)
    {
        Point rp = r.position(), rs = r.size();
        Point p = position(), s = size();

        std::cout << "rp " << rp << " rs " << rs << " p " << p << " s " << s << std::endl;

        if (rp.x() == p.x() + s.x() || rp.x() + rs.x() == p.x())
            return true;
        if (rp.y() == p.y() + s.y() || rp.y() + rs.y() == p.y())
            return true;
        return false;
    }

    bool operator==(Rect const& a, Rect const& b) {
        return a.position() == b.position() && a.size() == b.size();
    }
} // namespace cs::game::geometry
