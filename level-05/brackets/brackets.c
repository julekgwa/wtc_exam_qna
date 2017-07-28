/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brackets.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 09:02:10 by exam              #+#    #+#             */
/*   Updated: 2017/07/26 09:09:25 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		cbra(char *s, char c)
{
	int i = 1;
	int b = 1;

	while (b && *(++s) && (i++))
		if (*s == c || *s == c + c % 2 + 1)
			*s == c ? b++ : b--;
	return (i);
}

int		bra(char *s, char c)
{
	if (*s == c)
		return (1);
	else if (!*s || *s == ']' || *s == '}' || *s == ')')
		return (0);
	else if (*s == '[' || *s == '{' || *s == '(')
		return (bra(s + 1, *s + *s % 2 + 1) * bra(s + cbra(s, *s), c));
	else
		return (bra(s + 1, c));
}

int main(int c, char **v)
{
	int  i = 1;
	if (c > 1)
		while (i < c)
			bra(v[i++], 0) ? write(1, "OK\n", 3) : write(1, "Error\n", 6);
	else
		write(1, "\n", 1);
	return (0);
}
