#pragma once

#include "Logic/namespace.hpp"

namespace cs::game::map::infos
{
    class Population {
    public:
        int nb() { return _nb; };
        void nb(int nb) { _nb = nb; };
        void add(int nb) { _nb += nb; };
        void remove(int nb) { _nb -= nb; };

    private:
        int _nb = 0;
    };
} // namespace cs::game::map::infos
