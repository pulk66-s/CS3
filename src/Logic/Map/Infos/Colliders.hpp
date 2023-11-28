#pragma once

#include "Logic/namespace.hpp"
#include "Logic/MyIterator.hpp"
#include "Logic/Geometry.hpp"
#include <vector>
#include <algorithm>

namespace cs::game::map::infos
{
    class Colliders : public MyIterator<geometry::Rect> {
    public:
        void add(geometry::Rect rect) { _colliders.push_back(rect); };
        void remove(geometry::Rect rect) { _colliders.erase(std::remove(_colliders.begin(), _colliders.end(), rect), _colliders.end()); };

        Iterator begin() { return Iterator(&_colliders[0]); };
        Iterator end() { return Iterator(&_colliders[_colliders.size()]); };
    private:
        std::vector<geometry::Rect> _colliders = {};
    };
} // namespace cs::game::map::infos
