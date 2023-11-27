#pragma once

#include "Logic/namespace.hpp"

namespace cs::game
{
    static int entityCount = 0;

    class Entity {
    public:
        Entity() : _id(entityCount++) {}

        int id() const { return _id; }
    protected:
        int _id;
    };
} // namespace cs::game
