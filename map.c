/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <vlacombe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 19:37:55 by vlacombe          #+#    #+#             */
/*   Updated: 2021/01/07 15:46:32 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**create_map(int size)
{
	int		i;
	int		j;
	char	**map;

	i = -1;
	if (!(map = (char**)ft_memalloc(sizeof(*map) * (size + 1))))
		return (NULL);
	while (++i < size)
	{
		if (!(map[i] = (char*)ft_strnew(sizeof(**map) * (size + 1))))
			return (NULL);
		j = -1;
		while (++j < size)
			map[i][j] = '.';
	}
	return (map);
}

void	free_map(char **map, int size)
{
	int		i;

	i = -1;
	while (++i < size)
		ft_memdel((void **)&(map[i]));
	ft_memdel((void **)&map);
}

void	print_map(char **map, int size)
{
	int		i;

	i = 0;
	while (i < size)
		ft_putendl(map[i++]);
}
