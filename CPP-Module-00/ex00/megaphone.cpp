#include <iostream>

void	upper_case(char *str)
{
	int	idx;

	idx = -1;
	while (str[++idx])
		str[idx] = toupper(str[idx]);
}

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		int	idx;

		idx = 0;
		while (++idx < ac)
		{
			upper_case(av[idx]);
			std::cout << av[idx];
		}
		std::cout << std::endl;
	}
	return 0;
}
