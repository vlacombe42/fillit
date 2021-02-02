/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 12:21:21 by vlacombe          #+#    #+#             */
/*   Updated: 2020/05/26 10:48:26 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static		size_t	ft_ncomptword(const char *s, char c)
{
	size_t	i;
	size_t	comptword;

	comptword = 0;
	if (!s || s[0] == '\0')
		return (comptword);
	i = 0;
	while (i < ft_strlen(s) + 1)
	{
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[i - 1] != c)
			comptword++;
		i++;
	}
	return (comptword);
}

static		char	*ft_strsplitdup(const char *s, char c)
{
	size_t	i;
	char	*copy;
	size_t	len;

	len = 0;
	i = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	if (!(copy = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (s[i] && i < len && s[i] != c)
	{
		copy[i] = s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char				**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**tab;

	i = 0;
	j = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_ncomptword(s, c) + 1))))
		return (NULL);
	while (j < ft_ncomptword(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		while (s[i] != c && s[i] != '\0')
		{
			tab[j] = ft_strsplitdup(s + i, c);
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		j++;
	}
	tab[j] = 0;
	return (tab);
}

/*
** int	main(void)
** {
**	char	**tab;
**	int	i;
**	char	c;
**	tab = NULL;
** Test 1
** tab = ft_strsplit("", 0);
** i = 0;
** printf("Debut Test 1\n");
** while (tab != 0 && tab[i] != 0)
** {
** printf("%s\n", tab[i]);
** i++;
** }
** printf("----------------------\n");
** Test 2
** tab = ft_strsplit(NULL, 'a');
** i = 0;
** printf("Debut Test 2\n");
** while (tab != 0 && tab[i] != 0)
** {
** printf("%s\n", tab[i]);
** i++;
** }
** printf("----------------------\n");
** Test 3
** tab = ft_strsplit("", '*');
** i = 0;
** printf("Debut Test 3\n");
** while (tab != 0 && tab[i] != 0)
** {
** printf("%s\n", tab[i]);
** i++;
** }
** printf("----------------------\n");
** Test 4
** tab = ft_strsplit("aaaaaaaaaaa", 'a');
** i = 0;
** printf("Debut Test 4\n");
** while (tab != 0 && tab[i] != 0)
** {
** printf("%s\n", tab[i]);
** i++;
** }
** printf("----------------------\n");
** Test 5
** tab = ft_strsplit("hgiguyfeuyfufeee", 'e');
** i = 0;
** printf("Debut Test 5\n");
** while (tab != 0 && tab[i] != 0)
** {
** printf("%s\n", tab[i]);
** i++;
** }
** printf("----------------------\n");
** }
*/
