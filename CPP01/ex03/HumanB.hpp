#include "Weapon.hpp"

using namespace std;

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void    attack(void) const;
        void    getWeapon(void);
        bool    setWeapon(Weapon& new_weapon);

    private:
        std::string name;
        Weapon  *weapon;

};