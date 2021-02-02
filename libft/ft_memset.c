/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:49:52 by vlacombe          #+#    #+#             */
/*   Updated: 2019/12/06 11:43:12 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)s;
	while (i < n)
		d[i++] = (unsigned char)c;
	s = (void *)d;
	return (s);
}

/*
**int		main(void)
**{
**	char d[50];
**
**	d[6] = '\0';
**	printf("%s\n", ft_memset(d,'@', 6));
**	return (0);
**}
*/
