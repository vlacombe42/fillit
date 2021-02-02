/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:13:44 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/28 17:49:23 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

/*
**int		main()
**{
**	int result;
**	int c;
**	c = 129;
**	c = '~';
**	result = ft_isascii(c);
**	printf("%d\n", ft_isascii(129));
**	printf("%d\n", ft_isascii('~'));
**	printf("%d\n", isascii(129));
**	printf("%d\n", isascii('~'));
**	printf("\n");
**	c = 15;
**	result = ft_isascii(c);
**	printf("%d\n", ft_isascii(15));
**	printf("%d\n", ft_isascii(15));
**	printf("%d\n", isascii(15));
**	printf("%d\n", isascii(15));
**}
*/
