/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julekgwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/27 08:09:12 by julekgwa          #+#    #+#             */
/*   Updated: 2016/06/27 08:09:15 by julekgwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa_base(int value, int base)
{
	static char	rep[] = "0123456789ABCDEF";
	static char buff[65];
	char		*ptr;
	long long	num;

	ptr = &buff[64];
	if (base < 2 || base > 16)
		return (0);
	*ptr = '\0';
	num = value;
	if (num < 0)
		num *= -1;
	if (num == 0)
		*--ptr = rep[num % base];
	while (num != 0)
	{
		*--ptr = rep[num % base];
		num /= base;
	}
	if (value < 0 && base == 10)
		*--ptr = '-';
	return (ptr);
}
