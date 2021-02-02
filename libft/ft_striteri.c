/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 12:21:36 by vlacombe          #+#    #+#             */
/*   Updated: 2020/03/03 16:26:54 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int i;

	i = 0;
	if (!s || !f)
	{
		return ;
	}
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

/*
**void	ft_add_index(unsigned int index, char *s)
**{
** ft_putchar(*s);
** ft_putchar('[');
** ft_putnbr(index);
** ft_putchar(']');
**}
**
**int main()
**{
** char s[] = "bonjour";
** unsigned int i;
**
** i = 0;
** ft_striteri(s, ft_add_index);
** printf("%s\n",s);
**}
*/
