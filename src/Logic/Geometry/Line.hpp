#pragma once

#include "Logic/namespace.hpp"
#include "Point.hpp"
#include <iostream>

namespace cs::game::geometry
{
    class Line {
    public:
        Line(Point a, Point b): _a(a), _b(b) {}
        Line(Line const& l): _a(l._a), _b(l._b) {}

        bool contains(Point p) const;
        int scalarProduct(Line l);
        friend std::ostream &operator<<(std::ostream &os, Line const& line)
        {
            os << "Line(" << line._a << ", " << line._b << ")";
            return os;
        }
    protected:
        Point _a;
        Point _b;
    };
} // namespace cs::game::geometry
