/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 12:35:25 by vlacombe          #+#    #+#             */
/*   Updated: 2019/12/09 10:26:14 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*memoire;

	memoire = malloc(size);
	if (memoire)
	{
		ft_bzero(memoire, size);
		return (memoire);
	}
	return (NULL);
}

/*
**int		main(void)
**{
**	size_t	i;
**	char *str;
**
**	str = NULL;
**	i = 10;
**	str = ft_memalloc(i);
**	str[0] = 'A';
**	str[1] = 'b';
**	str[2] = '\0';
**	printf("res:%p, str=%s\n", str, str);
**}
*/
