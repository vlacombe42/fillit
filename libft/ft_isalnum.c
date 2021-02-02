/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:13:02 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/25 16:51:15 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

/*
**int		main(void)
**{
**	int result;
**	char c;
**	c = '4';
**	result = ft_isalnum(c);
**	printf("When %c is passed, return value is %d\n", result, c);
**	c = 'L';
**	result = ft_isalnum(c);
**	printf("When %c is passed, return value is %d\n", result, c);
**	c = '+';
**	result = ft_isalnum(c);
**	printf("When %c is passed, return value is %d\n", result, c);
**	c = 't';
**	result = ft_isalnum(c);
**	printf("When %c is passed, return value is %d\n", result, c);
**}
*/
