#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Storage.hpp"
#include <vector>
#include <memory>

namespace cs::game::buildings
{
    class IBuilding;
} // namespace cs::game::buildings

namespace cs::game::map
{
    class Buildings : public Storage<std::shared_ptr<buildings::IBuilding>> {

    };
} // namespace cs::game::map
