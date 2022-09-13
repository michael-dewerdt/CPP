#include "Point.hpp"
#include "Fixed.hpp"

float crossProduct(Point &p1, Point &p2)
{
	// std::cout << (p1.getX() * p2.getY()) - (p2.getX() * p1.getY()) << std::endl;
	return ((p1.getX() * p2.getY()) - (p2.getX() * p1.getY()));
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Point ab = Point(b.getX() - a.getX(), b.getY() - a.getY());
	Point bc = Point(c.getX() - b.getX(), c.getY() - b.getY());
	Point ca = Point(a.getX() - c.getX(), a.getY() - c.getY());

	Point ap = Point(point.getX() - a.getX(), point.getY() - a.getY());
	Point bp = Point(point.getX() - b.getX(), point.getY() - b.getY());
	Point cp = Point(point.getX() - c.getX(), point.getY() - c.getY());

	float crossA = crossProduct(ap, ab);
	float crossB = crossProduct(bp, bc);
	float crossC = crossProduct(cp, ca);

    //on vérifie que ses coordonnées barycentriques par rapport à ABC sont positives,
    //si l'une d'entre elles est négative, alors le point est en dehors du triangle.

	if ((crossA > 0 && crossB > 0 && crossC > 0))
        {
            std::cout << "Le point est dans le triangle" << std::endl;
            return true;
        }
    else if ((crossA == 0 || crossB == 0 || crossC == 0))
        {
            std::cout << "Le point est sur le triangle ou sur un sommet" << std::endl;
            return false;
        }
    else
        {
            std::cout << "Le point est en dehors du triangle" << std::endl;
            return false;
        }
}

int main()
{
	Point const a(0.0f, 0.0f);
	Point const b(10.0f, 0.0f);
	Point const c(10.0f, 10.0f);

	std::cout << bsp(a, b, c, Point(5.0f, 2.0f)) << std::endl;

	return 0;
}