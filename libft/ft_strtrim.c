/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 14:47:44 by vlacombe          #+#    #+#             */
/*   Updated: 2020/05/19 14:11:34 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_check_first_blanks(char *s)
{
	int		i;
	char	*s_copy;

	i = 0;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	s_copy = &s[i];
	return (s_copy);
}

char			*ft_strtrim(char const *s)
{
	int		len;
	char	*s_copy;
	char	*resultat;

	if (!s)
		return (NULL);
	s_copy = ft_check_first_blanks((char *)s);
	len = ft_strlen(s_copy) - 1;
	if (len >= 0)
		while (s_copy[len] == ' ' || s_copy[len] == '\n' || s_copy[len] == '\t')
			len--;
	resultat = ft_strsub(s_copy, 0, len + 1);
	return (resultat);
}

/*
**int	main()
**{
**	printf("ft_strtrim1 :%s\n", ft_strtrim(" \n   \n\t\n lacombe       "));
**	printf("ft_strtrim2 :%s\n", ft_strtrim("    \n\tt       et\n\n\ne       "));
**	printf("ft_strtrim3 :%s\n", ft_strtrim("\tt et\ne "));
**	printf("ft_strtrim4 :%s\n", ft_strtrim("debut\t\tfin \t"));
**	printf("ft_strtrim5 :%s\n", ft_strtrim("\t\n   \tdebut\t\tfin"));
**	printf("ft_strtrim6 :%s\n", ft_strtrim(""));
**}
*/
