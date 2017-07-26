/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 15:23:22 by exam              #+#    #+#             */
/*   Updated: 2016/04/15 15:51:13 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			c = ((((str[i] - 'A') + 13) % 26) + 'A');
			ft_putchar(c);
		}
		else if ((str[i] >= 91) && (str[i] <= 122))
		{
			c = ((((str[i] - 'a') + 13) % 26) + 'a');
			ft_putchar(c);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char *str;

	if (argc == 2)
	{
		str = argv[1];
		rot_13(str);
	}
	ft_putchar('\n');
	return (0);
}
