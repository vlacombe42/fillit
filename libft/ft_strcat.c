/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:59:52 by vlacombe          #+#    #+#             */
/*   Updated: 2019/11/28 17:27:28 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int	i;
	int	size;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	size = 0;
	while (src[size] != '\0')
	{
		dest[i] = src[size];
		i++;
		size++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
**int main()
**{
**	char dest[120] = "edafbhc";
**	char src[] = "vapolur";
**	printf("%s\n", ft_strcat(dest, src));
**	return (0);
**}
*/
