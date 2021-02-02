/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:20:55 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/28 16:58:37 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*
**int	main(void)
**{
**	int c;
**	int result;
**	c = 31;
**	result = ft_isprint(c);
**	printf("%i\n", ft_isprint(c));
**	c = 97;
**	result = ft_isprint(c);
**	printf("%i\n", ft_isprint(c));
**}
*/
