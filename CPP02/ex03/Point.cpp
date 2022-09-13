#include "Point.hpp"

Point(void): _x(0), _y(0)
{
}

~Point(void)
{
}

Point(const Point & rhs)
{
    *this = rhs;
}

Point &operator=(Point const & rhs)
{
    this->_x = rhs.getX();
    this->_y = rhs.getY();
    return *this;
}

Point(const float a, const float b) : a(Fixed(a)), b(Fixed(b))
{
}

float getX(void) const
{
    return this->_x;

}
float getY(void) const
{
    return this->_y;
}

std::ostream &operator<<(std::ostream &cout, const Point &instance)
{
    cout << "Point(" << instance.getX() << ", " << instance.getY() << ")";
    return cout;
}