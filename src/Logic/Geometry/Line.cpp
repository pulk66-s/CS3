#include "Line.hpp"

namespace cs::game::geometry
{
    bool Line::contains(Point p) const
    {
        if (_a.x() == _b.x())
            return p.x() == _a.x();
        int a = (_b.y() - _a.y()) / (_b.x() - _a.x());
        int b = -a * _a.x() + _a.y();
        return p.y() == a * p.x() + b;
    }

    int Line::scalarProduct(Line l)
    {
        return (_b.x() - _a.x()) * (l._b.x() - l._a.x())
            + (_b.y() - _a.y()) * (l._b.y() - l._a.y());
    }
} // namespace cs::game::geometry
