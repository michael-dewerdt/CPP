#include "Weapon.hpp"

using namespace std;

class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA(void);
        void    attack(void) const;
        std::string getType(void);

    private:
        std::string name;
        Weapon  &weapon;

};