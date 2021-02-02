/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:52:23 by vlacombe          #+#    #+#             */
/*   Updated: 2019/12/05 14:55:36 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*s;
	unsigned char		*d;

	i = 0;
	s = (unsigned char*)src;
	d = (unsigned char *)dst;
	if (d == NULL && s == NULL)
	{
		return (NULL);
	}
	if (d > s)
		while (len-- != 0)
		{
			d[len] = s[len];
		}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (d);
}

/*
**int		main(void)
**{
**	unsigned char	dst[] = "123aaaaaaa";
**	unsigned char	src[] = "542zzzzzzzz";
**	printf("Avant memmove dst = %s, src = %s\n", dst, src);
**	ft_memmove(dst, src, 3);
**	printf("Apres memmove dst = %s, src = %s\n", dst, src);
**	return (0);
**}
*/
