/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 12:01:56 by vlacombe          #+#    #+#             */
/*   Updated: 2019/12/05 11:03:53 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	unsigned int	i;

	b = (unsigned char*)s;
	i = 0;
	while (i < n)
	{
		if (b[i] == (unsigned char)c)
			return (b + i);
		i++;
	}
	return (NULL);
}
