#include "Circle.hpp"
#include <cmath>

namespace implicit
{

	Circle::Circle(double x, double y, double r) :
		x_(x), y_(y), r_(r)
	{ }
    bool Circle::inside(double x, double y) const
        {
            double dx = x - x_;
            double dy = y - y_;

            return dx * dx + dy * dy <= r_ * r_;
        }
} // namespace implicit
