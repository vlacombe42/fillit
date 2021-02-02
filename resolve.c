/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <vlacombe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 19:38:28 by vlacombe          #+#    #+#             */
/*   Updated: 2021/01/28 14:57:26 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	resolve(char **map, t_tetriminos *tetri, int size, int nbrtetris)
{
	int		x;
	int		y;

	y = 0;
	if (tetri->lettre < 'A' || tetri->lettre > 'Z')
		return (1);
	while (y <= size - tetri->height)
	{
		x = 0;
		while (x < size)
		{
			if (verif(tetri, map, x, y))
			{
				if (resolve(map, tetri + 1, size, nbrtetris))
					return (1);
				else
					tetri_del(tetri, map, x, y);
			}
			x++;
		}
		y++;
	}
	return (0);
}

void		fillit(t_tetriminos *tetri, int nbrtetris)
{
	char		**map;
	int			size;

	size = 2;
	while (size * size < 4 * nbrtetris)
		size++;
	map = create_map(size);
	while (!resolve(map, tetri, size, nbrtetris))
	{
		free_map(map, size);
		size++;
		map = create_map(size);
	}
	print_map(map, size);
	free_map(map, size);
}
