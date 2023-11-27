#pragma once

#include "Logic/namespace.hpp"
#include <string>

namespace cs::game
{
    class Name {
    public:
        Name(std::string name = "") : _name(name) {};

        void setName(std::string name) { _name = name; }
        std::string name() const { return _name; }
    protected:
        std::string _name;
    };
} // namespace cs::game
