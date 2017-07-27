/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/24 08:21:24 by julekgwa          #+#    #+#             */
/*   Updated: 2016/06/24 08:21:26 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex(int value, int rem)
{
	const char *base = "0123456789abcdef";
	if (rem > 1)
		ft_print_hex(value >> 4, rem - 1);
	write(1, base + (value % 16), 1);
}

void	ft_print(unsigned const char *ptr)
{
	const char c = *ptr;
	if (' ' <= c && c <= '~')
		write(1, ptr, 1);
	else
		write(1, ".", 1);
}

void	print_memory(const void *addr, size_t size)
{
	size_t		i;
	size_t		a;
	unsigned const char	*ptr = addr;

	i = 0;
	while (i < size)
	{
		a = 0;
		while (a < 16 && a + i < size)
		{
			ft_print_hex(*(ptr + a + i), 2);
			if (a % 2)
				write(1, " ", 1);
			a++;
		}
		while (a < 16)
		{
			write(1, "  ", 2);
			if (a % 2)
				write(1, " ", 1);
			a++;
		}
		a = 0;
		while (a < 16 && a + i < size)
		{
			ft_print(ptr + a + i);
			a++;
		}
		write(1, "\n", 1);
		i += 16;
	}
}
