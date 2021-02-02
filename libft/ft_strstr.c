/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 17:05:14 by vlacombe          #+#    #+#             */
/*   Updated: 2020/03/12 15:59:43 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	unsigned int c;
	unsigned int d;

	c = 0;
	if (needle[0] == '\0')
	{
		return ((char*)haystack);
	}
	while (haystack[c] != '\0')
	{
		d = 0;
		while (haystack[c + d] == needle[d])
		{
			d++;
			if (needle[d] == '\0')
			{
				return ((char*)&haystack[c]);
			}
		}
		c++;
	}
	return (0);
}

/*
** int	main()
**{
**const char meule_de_foin[] = "fais toi plaisir";
**const char aiguille[] = "toi";
**printf("%s\n", ft_strstr(meule_de_foin, aiguille));
**}
*/
