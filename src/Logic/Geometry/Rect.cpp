#include "Rect.hpp"
#include <vector>

namespace cs::game::geometry
{
    /**
     * @brief   Check if two rectangles collide
     * @details Two rectangles collide if one of the corner of a rectangle
     *          belongs to the other rectangle
    */
    bool Rect::collide(Rect r)
    {
        Point rul = r.position(), rur = rul + Point(r.size().x(), 0);
        Point rbl = rul + Point(0, r.size().y()), rbr = rul + r.size();
        std::vector<Point> rpoints = {rul, rur, rbl, rbr};

        for (Point p : rpoints) {
            if (this->contains(p))
                return true;
        }
        return false;
    }

    /**
     * @brief   Check if two rectangles are next to each other
     * @details Two rectangles are next to each other if one of the corner of a
     *          rectangle belongs to one of the lines of the other rectangle
    */
    bool Rect::isNext(Rect r)
    {
        Point rul = r.position(), rur = rul + Point(r.size().x(), 0);
        Point rbl = rul + Point(0, r.size().y()), rbr = rul + r.size();
        Point ul = _position, ur = ul + Point(_size.x(), 0);
        Point bl = ul + Point(0, _size.y()), br = ul + _size;
        Segment top(ul, ur), right(ur, br), bottom(br, bl), left(bl, ul);
        Segment rtop(rul, rur), rright(rur, rbr), rbottom(rbr, rbl), rleft(rbl, rul);
        std::vector<Point> rpoints = {rul, rur, rbl, rbr};
        std::vector<Point> points = {ul, ur, bl, br};
        std::vector<Segment> segments = {top, right, bottom, left};
        std::vector<Segment> rsegments = {rtop, rright, rbottom, rleft};

        for (Point p : rpoints) {
            for (Segment s : segments) {
                if (s.contains(p))
                    return true;
            }
        }
        for (Point p : points) {
            for (Segment s : rsegments) {
                if (s.contains(p))
                    return true;
            }
        }
        return false;
    }

    /**
     * @brief   Check if two rectangles overlap
     * @details Two rectangles overlap if one of the corner of a rectangle
     *          belongs to the other rectangle but not on the lines
    */
    bool Rect::overlap(Rect r)
    {
        return r == *this || (this->collide(r) && !this->isNext(r));
    }

    /**
     * @brief   Check if a point belongs to a rectangle
     * @details Formula: (0<AM . AB<AB . AB) && (0<AM . AD<AD . AD)
     *          M = (x, y) is the point,
     *          ABCD is the rectangle, A=TopLeft, B=TopRight, C=BottomLeft, D=BottomRight
    */
    bool Rect::contains(Point m)
    {
        Point a = _position, b = _position + Point(_size.x(), 0);
        Point d = _position + Point(0, _size.y()), c = _position + _size;
        Line ab(a, b), bc(b, c), cd(c, d), ad(a, d);
        Line am(a, m);
        int amab = am.scalarProduct(ab);
        int abab = ab.scalarProduct(ab);
        int amad = am.scalarProduct(ad);
        int adad = ad.scalarProduct(ad);

        return (0 <= amab && amab <= abab) && (0 <= amad && amad <= adad);
    }

    bool operator==(Rect const& a, Rect const& b) {
        return a.position() == b.position() && a.size() == b.size();
    }
} // namespace cs::game::geometry
