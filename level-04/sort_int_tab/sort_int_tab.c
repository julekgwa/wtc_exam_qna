/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/22 09:42:06 by exam              #+#    #+#             */
/*   Updated: 2016/06/22 09:42:31 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	int				tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size && (j + 1) < size)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
