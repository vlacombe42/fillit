/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <vlacombe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 19:35:21 by vlacombe          #+#    #+#             */
/*   Updated: 2021/01/13 14:29:51 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	place_tetri(t_tetriminos *tetri, char **map, int i, int j)
{
	int		d;

	d = 0;
	while (d < 7)
	{
		map[tetri->pos[d + 1] + i][tetri->pos[d] + j] = tetri->lettre;
		d += 2;
	}
}

int		verif(t_tetriminos *tetri, char **map, int x, int y)
{
	int		i;

	i = 0;
	while (i < 7)
	{
		if (x + tetri->pos[i] < 0 || y + tetri->pos[i + 1] < 0)
			return (0);
		if (map[tetri->pos[i + 1] + y][tetri->pos[i] + x] != '.')
			return (0);
		i += 2;
	}
	place_tetri(tetri, map, y, x);
	return (1);
}

void	tetri_del(t_tetriminos *tetri, char **map, int x, int y)
{
	char	c;

	c = tetri->lettre;
	tetri->lettre = '.';
	place_tetri(tetri, map, y, x);
	tetri->lettre = c;
}
