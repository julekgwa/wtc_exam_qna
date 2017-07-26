#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puts(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar(s[i]);
		i++;
	}
}

int	ft_atoi(const char *s)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*s == '\t' || *s == '\f' || *s == '\r' || *s == '\t' || *s == '\n' || *s == ' ')
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '-' || *s == '+')
		s++;
	while (*s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - '0');
		s++;
	}
	return (sign * res);
}

char	*print_hex(int x)
{
	static char rep[] = "0123456789abcdef";
	static char	buff[65];
	char		*ptr;

	ptr = &buff[64];
	*ptr = '\0';
	if (x == 0)
		*--ptr = rep[x % 16];
	while (x != 0)
	{
		*--ptr = rep[x % 16];
		x /= 16;
	}
	return (ptr);
}

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_puts(print_hex(ft_atoi(av[1])));
	ft_putchar('\n');
	return (0);
}
