/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:45:31 by vlacombe          #+#    #+#             */
/*   Updated: 2020/02/27 17:54:51 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*new;
	size_t		i;

	i = 0;
	if (!(new = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (i < size)
	{
		new[i] = '\0';
		i++;
	}
	new[i] = '\0';
	return (new);
}
/*
**int		main(void)
**{
**	char	*str;
**	str = ft_strnew(5);
**	printf("%p\n", str);
**	str[0] = 'v';
**	str[1] = 'a';
**	str[2] = 'l';
**	str[3] = 'e';
**	str[4] = 'r';
**	printf("%s\n", str);
**}
*/
