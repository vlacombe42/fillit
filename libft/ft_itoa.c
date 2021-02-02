/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 14:49:04 by vlacombe          #+#    #+#             */
/*   Updated: 2020/05/21 14:47:46 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_len_nombre(long n)
{
	long	i;

	i = 0;
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		i = i + 1;
		n = (-1) * n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	long	len;
	long	j;
	char	*str;
	int		i;

	i = 0;
	j = n;
	len = ft_len_nombre(j);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	len--;
	if (n < 0)
	{
		str[i++] = '-';
		j = -j;
	}
	while (len >= i)
	{
		str[len] = j % 10 + '0';
		j /= 10;
		len--;
	}
	return (str);
}
/*
** int			main(void)
**{
**	int		i;
**	i = 16;
**	printf("%s\n", ft_itoa(i));
**	i = 2147483645;
**	printf("%s\n", ft_itoa(i));
**	i = i + 1;
**	printf("%s\n", ft_itoa(i));
**	i = i + 1;
**	printf("%s\n", ft_itoa(i));
**	i = i + 1;
**	printf("%s\n", ft_itoa(i));
**	i = i + 1;
**	printf("%s\n", ft_itoa(i));
**	i = i + 1;
**	printf("%s\n", ft_itoa(i));
**	i = i + 1;
**}
*/
