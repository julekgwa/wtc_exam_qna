/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/23 09:25:29 by exam              #+#    #+#             */
/*   Updated: 2016/04/23 09:26:46 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	char	rot;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		rot = str[i];
		if (rot >= 97 && rot <= 122)
		{
			rot = str[i] - 97;
			rot = ((rot + 1) % 26) + 97;
		}
		else if (rot >= 65 && rot <= 90)
		{
			rot = str[i] - 65;
			rot = ((rot + 1) % 26) + 65;
		}
		ft_put(rot);
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_put('\n');
	return (0);
}
