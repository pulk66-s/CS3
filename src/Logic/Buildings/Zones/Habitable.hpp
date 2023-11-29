#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Buildings/Zones/AZone.hpp"

namespace cs::game::buildings::zones
{
    class Habitable : public AZone {
    public:
        Habitable(): Habitable(0, 0) {};
        Habitable(int x, int y): Habitable(x, y, 1, 1) {};
        Habitable(int x, int y, int w, int h): AZone(x, y, w, h) {
            this->setName("Habitable");
        };
    };
} // namespace cs::game::buildings::zones
