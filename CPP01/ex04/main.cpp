#include <iostream>
#include <string>
#include <fstream>

std::string my_replace(std::string buffer, const std::string s1, const std::string s2)
{
	size_t	s1_length = s1.length();
	size_t	s2_length = s2.length();
	size_t	pos = 0;

	pos = buffer.find(s1);
	while (pos != std::string::npos) //while im not a the end of the string
	{
		buffer.erase(pos, s1_length); //erase from the pos, to the end of s1 occurence
		buffer.insert(pos, s2); // insert s2 instead of this s1 occurence
		pos = buffer.find(s1, pos + s2_length); //
	}
	return (buffer);
}

int main(int argc, char **argv)
{
	const std::string 	filename = argv[1];
	const std::string	s1 = argv[2];
	const std::string	s2 = argv[3];
	std::string			buffer;
	std::string			tmp;
	std::ifstream		infile;
	std::ofstream		outfile;

	if (argc != 4)
	{
		std::cout << "wrong number of arguments" << std::endl;
		return (0);
	}
	infile.open(argv[1]);
	if (infile.is_open() == true)
	{
		outfile.open(filename + ".replace", std::ios::out | std::ios::trunc ); //Any contents that existed in the file before it is open are discarded.
		if (outfile.is_open() == true)
		{
			while (std::getline(infile, buffer))
			{
				tmp += buffer;
				if (infile.peek() != EOF)
					break;
			}
			std::cout << tmp << std::endl;
			//buffer = my_replace(buffer, s1, s2);
			//outfile << buffer;
			outfile.close();
		}
		else
		{
			std::cout << "Can't open the output file stream" << std::endl;
			infile.close();
			return (EXIT_FAILURE);
		}
		infile.close();
	}
	else
		std::cout << "Outfile not created or truncated." << std::endl;
	return (0);
}