/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 14:57:07 by vlacombe          #+#    #+#             */
/*   Updated: 2020/03/10 16:02:20 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int			len;
	unsigned int			i;
	char					*str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(str = malloc((sizeof(char) * len + 1))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
** char	toto(unsigned int i, char c)
**{
**	i = i + 4;
**	c = 25 + c - i;
**	return (c);
**}
**
** char	titi(unsigned int i, char c)
**{
**	c = c + i;
**	return (c);
**}
**
**int		main(void)
**{
**	char *str;
**
**	str = NULL;
**	str = ft_strmapi("ABCDE", &toto);
**	printf("str=%s\n", str);
**	str = ft_strmapi("ABCDE", &titi);
**	printf("str=%s\n", str);
**}
*/
