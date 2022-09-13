#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Point
{
    public:
        Point(void);
        ~Point(void);
        Point(Point const & rhs);
        Point &operator=(Point const & rhs);
        Point(float const x, float const y);
        const Fixed getX(void) const;
        const Fixed getY(void) const;

    private:
        const Fixed _x;
        const Fixed _y;
}

std::ostream &operator<<(std::ostream &cout, const Point &instance);


