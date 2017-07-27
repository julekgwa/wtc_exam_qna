/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/22 09:28:14 by exam              #+#    #+#             */
/*   Updated: 2016/06/22 09:28:22 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_pgcd(int n1, int n2)
{
	int	i;
	int	pgcd;

	i = 1;
	pgcd = 0;
	while (i <= n1 && i <= n2)
	{
		if (n1 % i == 0 && n2 % i == 0)
			pgcd = i;
		i++;
	}
	return (pgcd);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", ft_pgcd(atoi(av[1]), atoi(av[2])));
	printf("\n");
	return (0);
}
