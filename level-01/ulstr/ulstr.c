#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_rev(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 65 && c <= 90)
			c += 32;
		else if (c >= 97 && c <= 122)
			c -= 32;
		ft_putchar(c);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_rev(av[1]);
	ft_putchar('\n');
	return (0);
}
