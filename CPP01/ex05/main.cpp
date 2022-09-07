#include "harl.hpp"

int main()
{
	Harl harltest;

	harltest.complain("INFO");
	harltest.complain("DEBUG");
	harltest.complain("ERROR");
	harltest.complain("WARNING");
	return (0);
}