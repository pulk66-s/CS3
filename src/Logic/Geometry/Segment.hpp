#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Geometry/Line.hpp"

namespace cs::game::geometry
{
    class Segment : public Line {
    public:
        Segment(Point a, Point b): Line(a, b) {}
        Segment(Segment const& s): Line(s._a, s._b) {}

        bool contains(Point p);
    };
} // namespace cs::game::geometry
