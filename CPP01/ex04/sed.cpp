#include "sed.hpp"


Sed::Sed()
{

}

Sed::~Sed()
{

}

bool    Sed::setFile(std::string new_file)
{
    if (this->ifs.is_open())
        this->ifs.close();
    if (new_file == "")
    {
        std::cout << "Error : Empty name for the new file." <<std::endl;
        return (false);
    }
    else
    {
        this->ifs.open(new_file);
        this->fileName = new_file;
    }
    return (true);
}
bool    Sed::replace_str(std::string old_str, std::string new_str)
{
    std::string result;
    int  old_str_len = old_str.length();

    if (old_str == "" || new_str == "")
    {
        std::cout << "Error : One of the string is empty." << std::endl;
        return (false);
    }
    else
        result.assign(old_str);
    for (int pos = 0; pos < old_str_len; pos++)
    {
        if (result.compare(pos, old_str_len, new_str) == 0)
            {
                result.erase(pos, old_str_len);
                result.insert(pos, new_str);
            }
    }
    this->write_on_file(result);
    return (true);
}

void    Sed::write_on_file(std::string new_content)
{
    std::ofstream	new_file;
	std::string		new_filename = this->fileName;
	new_filename += ".replace";
	new_file.open(new_filename);
	new_file << new_content;
}