/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/15 16:47:13 by exam              #+#    #+#             */
/*   Updated: 2016/04/15 17:51:08 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_find_big(char c)
{
	int		index;
	char	alpha;
	
	index = 0;
	alpha = 'A';
	while (alpha <= 'Z')
	{
		if (alpha == c)
			return (index + 1);
		index++;
		alpha++;
	}
	return (index);
}

int		ft_find_small(char c)
{
	int 	index;
	char	alpha;

	index = 0;
	alpha = 'a';
	while (alpha <= 'z')
	{
		if(alpha == c)
			return (index + 1);
		alpha++;
		index++;
	}
	return (index);
}

void	ft_alpha_mirror(char *str)
{
	int 	i;
	int		c;
	char	SMALL[] = "abcdefghijklmnopqrstuvwxyz";
	char	BIG[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	i = 0;
	while ( str[i] != '\0')
	{
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			c = ft_find_big(str[i]);
			c = 26 - c;
			ft_putchar(BIG[c]);
		}
		else if ((str[i] >= 91) && (str[i] <= 122))
		{
			c = ft_find_small(str[i]);
			c = 26 - c;
			ft_putchar(SMALL[c]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_alpha_mirror(argv[1]);
	
	ft_putchar('\n');
	return (0);
}
