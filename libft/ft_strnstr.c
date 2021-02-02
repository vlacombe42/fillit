/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:06:17 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/29 17:10:48 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	c;
	size_t	d;

	c = 0;
	if (!s2[0])
		return ((char*)s1);
	while (s1[c] != '\0' && c < len)
	{
		d = 0;
		while (s2[d] != '\0')
		{
			if (c + d >= len || s1[c + d] != s2[d])
				break ;
			d++;
		}
		if (s2[d] == '\0')
			return ((char*)(s1 + c));
		c++;
	}
	return (0);
}
