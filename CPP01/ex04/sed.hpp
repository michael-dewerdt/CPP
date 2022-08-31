#ifndef SED_HPP
#define SED_HPP

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class Sed
{
    public:

    Sed();
    ~Sed();

    bool    setFile(std::string new_file);
    bool    replace_str(std::string old_str, std::string new_str);
    void    write_on_file(std::string new_content);

    private:
        
        std::string old_str;
        std::string new_str;
        std::string fileName;
        std::ifstream   ifs;
};

#endif