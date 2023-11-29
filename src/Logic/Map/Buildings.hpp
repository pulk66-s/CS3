#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Building.hpp"
#include "Logic/Storage.hpp"
#include <vector>
#include <memory>

namespace cs::game::map
{
    class Buildings : public Storage<std::shared_ptr<buildings::IBuilding>> {

    };
} // namespace cs::game::map
