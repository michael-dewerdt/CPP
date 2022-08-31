#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Weapon
{
    public:
        Weapon(std::string type);
        ~Weapon(void);
        std::string& getType();
        bool    setType(std::string new_type);

    private:
        std::string type;
};

#endif