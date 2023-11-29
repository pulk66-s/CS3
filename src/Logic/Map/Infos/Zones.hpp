#pragma once

#include "Logic/namespace.hpp"
#include "Logic/Storage.hpp"
#include <vector>

namespace cs::game::buildings::zones
{
    class IZone;    
} // namespace cs::game::buildings::zones

namespace cs::game::map::infos
{
    class Zones : public Storage<std::shared_ptr<buildings::zones::IZone>> {
    };
} // namespace cs::game::map::infos
