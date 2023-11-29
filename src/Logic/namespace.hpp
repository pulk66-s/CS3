#pragma once

namespace cs::game
{
    namespace buildings
    {
        class IBuilding;
        class ABuilding;
        class SpecialBuilding;
        class NearRoad;
        class Road;
        class House;
        namespace zones
        {
            class IZone;
            class AZone;
            class Habitable;
            class Industrial;
            class Commercial;
        } // namespace zones
    } // namespace buildings
    namespace map
    {
        class Map;
        class Infos;
        namespace infos {
            class Population;
            class Colliders;
            class Zones;
            class Buildings;
        };
        class Actions;
    } // namespace map
    namespace geometry
    {
        class Point;
        class Area;
        class Line;
        class Segment;
    } // namespace geometry
    class Name;
    class Entity;

    template <typename T>
    class MyIterator;
    template <typename T>
    class Storage;
} // namespace cs::game
