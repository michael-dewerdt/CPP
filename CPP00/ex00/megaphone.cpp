#include <iostream>

int main(int argc; char **argv)
{
	char *tmp;

	tmp = malloc(sizeof(char) * ft_strlen(str));
	while (str[i])
	{
		tmp[i] = str[i] + 42;
	}
	ft_putstr(tmp);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (--argc)
	{
		argv++;
		for (int i = 0; i < strlen(*argv); i++)
			(*argv)[i] = std::toupper((*argv)[i]);
		std::cout << *argv << " ";
	}
	std::cout << std::endl;
	return (0);
}