/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 16:53:46 by vlacombe          #+#    #+#             */
/*   Updated: 2019/12/05 11:30:47 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	a;
	unsigned char	*sdest;
	unsigned char	*ssrc;

	a = 0;
	sdest = (unsigned char *)dest;
	ssrc = (unsigned char *)src;
	while (a < n)
	{
		sdest[a] = ssrc[a];
		if (ssrc[a] == (unsigned char)c)
			return ((void *)&sdest[a + 1]);
		a++;
	}
	return (NULL);
}

/*
**int	main(void)
**{
**	char	ssrc[50] = "agvmCddk";
** 	char	sdst[100] = "aaaaaaaaaa";
** 	char	ft_ssrc[50] = "agvmCddk";
** 	char	ft_sdst[100] = "aaaaaaaaaa";
** 	printf("ft_memccpy : %s\nmemccpy : %s\n",
** 			(char *)memccpy(sdst, ssrc, 'C', 10),
** 			(char *)ft_memccpy(ft_sdst, ft_ssrc, 'C', 10));
** 	printf("sdst : %s\nssrc : %s\n", ft_sdst, ft_ssrc);
** 	printf("sdst : %s\nssrc : %s\n", sdst, ssrc);
** 	return (0);
**}
*/
