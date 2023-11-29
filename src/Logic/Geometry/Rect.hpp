#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Geometry/Point.hpp"
#include "Logic/Geometry/Line.hpp"
#include "Logic/Geometry/Segment.hpp"
#include <iostream>

namespace cs::game::geometry
{
    class Rect {
    public:
        Rect(): _position(0, 0), _size(0, 0) {}
        Rect(int x, int y, int width, int height): _position(x, y), _size(width, height) {}
        Rect(Point position, Point size): _position(position), _size(size) {}

        Point size() const { return _size; };
        void size(Point size) { _size = size; };

        Point position() const { return _position; };
        void position(Point position) { _position = position; };
        void addPosition(Point position) { _position.add(position); };
        void addSize(Point size) { _size.add(size); };

        void removePosition(Point position) { _position.remove(position); };

        bool collide(Rect rect);
        bool contains(Point point);
        bool isNext(Rect rect);
        bool overlap(Rect rect);

        friend bool operator==(Rect const& a, Rect const& b);
        friend std::ostream &operator<<(std::ostream &os, Rect const& rect)
        {
            os << "Rect(" << rect.position() << ", " << rect.size() << ")";
            return os;
        }
    protected:
        Point _position;
        Point _size;
    };
} // namespace cs::game::geometry

