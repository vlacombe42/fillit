/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:51:36 by vlacombe          #+#    #+#             */
/*   Updated: 2019/12/05 12:35:20 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				c;
	unsigned char		*buffer;
	const unsigned char	*source;

	c = 0;
	buffer = dest;
	source = src;
	if (!dest && !src)
		return (NULL);
	while (c < n)
	{
		buffer[c] = source[c];
		c++;
	}
	return (dest);
}

/*
** int main ()
**{
**  size_t p;
**  unsigned char src[]="abcdefgh";
**	unsigned char dest[]="123456789";
**	void *r;
**	p = 5;
**	printf("%s\n", src);
**	printf("%s\n", dest);
**	printf("Adresse de dest = %p\n", dest);
**	r = ft_memcpy(&dest, &src, p);
**	printf("Adresse de retour de la fonction = %p\n", r);
**	printf("%s\n", dest);
**	return (0);
**}
*/
