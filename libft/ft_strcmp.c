/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:07:43 by vlacombe          #+#    #+#             */
/*   Updated: 2020/05/25 11:54:27 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			if ((unsigned char)s1[i] > (unsigned char)s2[i])
				return (1);
			if ((unsigned char)s1[i] < (unsigned char)s2[i])
				return (-1);
		}
		i++;
	}
	return (0);
}

/*
**int main()
**{
**	char s1;
**	char s2;
**	printf("%i\n", ft_strcmp("snch", "bacde"));
**	printf("%i\n", ft_strcmp("a", "bacde"));
**	printf("%i\n", ft_strcmp("a", "a"));
**	return (0);
**}
*/
