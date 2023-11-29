#pragma once

#include "Logic/namespace.hpp"
#include <iostream>

namespace cs::game::geometry
{
    class Point {
    public:
        Point(int x, int y): _x(x), _y(y) {}
        Point(): _x(0), _y(0) {}

        int x() const { return _x; };
        int y() const { return _y; };
        void x(int x) { _x = x; };
        void y(int y) { _y = y; };

        void addX(int x) { _x += x; };
        void addY(int y) { _y += y; };
        void add(int x, int y) { addX(x); addY(y); };
        void add(Point point) { add(point.x(), point.y()); };

        void removeX(int x) { _x -= x; };
        void removeY(int y) { _y -= y; };
        void remove(int x, int y) { removeX(x); removeY(y); };
        void remove(Point point) { remove(point.x(), point.y()); };

        friend bool operator==(Point const& a, Point const& b) { return a.x() == b.x() && a.y() == b.y(); }
        friend Point operator+(Point const& a, Point const& b) { return Point(a.x() + b.x(), a.y() + b.y()); }
        friend std::ostream &operator<<(std::ostream &os, Point const& point) {
            os << "Point(" << point.x() << ", " << point.y() << ")";
            return os;
        }
    protected:
        int _x, _y;
    };
} // namespace cs::game::geometry

