#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Building.hpp"
#include "Logic/MyIterator.hpp"
#include <vector>
#include <memory>

namespace cs::game::map
{
    class Buildings : public MyIterator<std::shared_ptr<buildings::IBuilding>> {
    public:
        void add(std::shared_ptr<buildings::IBuilding> building);
        void remove(std::shared_ptr<buildings::IBuilding> building);

        Iterator begin() { return Iterator(&buildings[0]); };
        Iterator end() { return Iterator(&buildings[buildings.size()]); };

    private:
        std::vector<std::shared_ptr<buildings::IBuilding>> buildings = {};
    };
} // namespace cs::game::map
