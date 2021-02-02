/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 16:30:39 by vlacombe          #+#    #+#             */
/*   Updated: 2020/02/26 12:23:55 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	int c;

	c = 0;
	if (s)
		while (s[c] != '\0')
		{
			write(1, &s[c], 1);
			c++;
		}
}

/*
**int		main(void)
**{
**	ft_putstr("Hello world");
**	printf("\n");
**	printf("Hello world\n");
**}
*/
