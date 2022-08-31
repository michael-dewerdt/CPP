#include "sed.hpp"

int main(int argc, char **argv)
{
    Sed fileToUse;

    if (argc != 4)
        std::cout << "Wrong number of arguments." << std::endl;
    else
    {
        if (fileToUse.setFile(argv[1]))
            fileToUse.replace_str(argv[2], argv[3]);
        else
            std::cout << "Error with setFile() function." <<std::endl;
    }
    return (0);
}