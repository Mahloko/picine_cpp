#include <iostream>

void	megaphone(char **av, int ac)
{
	int	i;
	if (!av[ac])
		return ;

	i = -1;
	while (av[ac][++i])
		if (av[ac][i] >= 'a' && av[ac][i] <= 'z')
			std::cout << (char)(av[ac][i] - 32);
		else
			std::cout << av[ac][i];
	megaphone(av, ac + 1);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		megaphone(av, 1);
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
}