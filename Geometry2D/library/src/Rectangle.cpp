#include "Rectangle.hpp"

namespace implicit
{
	Rectangle::Rectangle(double x1, double y1, double x2, double y2) :
		x1_(x1), x2_(x2), y1_(y1), y2_(y2)
	{ }
    bool Rectangle::inside(double x, double y) const
        {
            return x >= x1_ && x <= x2_ && y >= y1_ && y <= y2_;
        }
} // namespace implicit
