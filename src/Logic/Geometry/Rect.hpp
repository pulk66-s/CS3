#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Geometry/Point.hpp"

namespace cs::game::geometry
{
    class Rect {
    public:
        Rect(): _position(0, 0), _size(0, 0) {}
        Rect(int x, int y, int width, int height): _position(x, y), _size(width, height) {}
        Rect(Point position, Point size): _position(position), _size(size) {}

        Point size() { return _size; };
        void size(Point size) { _size = size; };

        Point position() { return _position; };
        void position(Point position) { _position = position; };
        void addPosition(Point position) { _position.add(position); };
        void addSize(Point size) { _size.add(size); };

        void removePosition(Point position) { _position.remove(position); };

    protected:
        Point _position;
        Point _size;
    };
} // namespace cs::game::geometry

