#include <stdio.h>
#include <stdlib.h>

int	ft_do_op(int n1, char op, int n2)
{
	int res;

	res = 0;
	if (op == '+')
		res = n1 + n2;
	else if (op == '-')
		res = n1 - n2;
	else if (op == '*')
		res = n1 * n2;
	else if (op == '/')
		res = n1 / n2;
	else if (op == '%')
		res  = n1 % n2;
	return (res);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		printf("%d", ft_do_op(atoi(av[1]), av[2][0], atoi(av[3])));
	printf("\n");
	return (0);
}
