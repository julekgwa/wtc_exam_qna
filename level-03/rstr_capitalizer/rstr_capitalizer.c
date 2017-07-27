/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktshikot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/21 13:42:31 by ktshikot          #+#    #+#             */
/*   Updated: 2016/06/21 14:18:33 by ktshikot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

static int		ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*s++)
		i++;
	return (i);
}

static char		*capitalize(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		if ((s[i] >= 'a' && s[i] <= 'z') && ((s[i + 1] == ' '
					|| s[i + 1] == '\t') || !(s[i + 1])))
			s[i] -= 32;
		i++;
	}
	return (s);
}

int				main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac > 1)
	{
		while (++i < ac)
		{
			write(1, capitalize(av[i]), ft_strlen(av[i]));
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
