#pragma once

namespace cs::game
{
    namespace buildings
    {
        class IBuilding;
        class ABuilding;
        class Road;
        class House;
        namespace zones
        {
            class IZone;
            class AZone;
            class Habitable;
        } // namespace zones
    } // namespace buildings
    namespace map
    {
        class Map;
        class Infos;
        namespace infos {
            class Population;
        };
        class Buildings;
        class Actions;
    } // namespace map
    namespace geometry
    {
        class Point;
        class Area;
    } // namespace geometry
    class Name;
    class Entity;

    template <typename T>
    class MyIterator;
} // namespace cs::game
