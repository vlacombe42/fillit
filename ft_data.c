/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_data.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <vlacombe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 19:36:57 by vlacombe          #+#    #+#             */
/*   Updated: 2021/01/12 16:17:29 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_size_width(t_tetriminos *tetri, int nbrtetris)
{
	int		i;
	int		j;
	int		diff[2];

	i = -1;
	j = -1;
	while (++i < nbrtetris)
	{
		diff[0] = tetri[i].pos[0];
		diff[1] = tetri[i].pos[0];
		while (++j < 8)
		{
			if (j % 2 == 0)
			{
				if (tetri[i].pos[j] < diff[0])
					diff[0] = tetri[i].pos[j];
				if (tetri[i].pos[j] > diff[1])
					diff[1] = tetri[i].pos[j];
			}
		}
		tetri[i].width = diff[1] - diff[0] + 1;
		j = -1;
	}
}

static void		ft_size_height(t_tetriminos *tetri, int nbrtetris)
{
	int		i;
	int		j;
	int		diff[2];

	i = -1;
	j = -1;
	while (++i < nbrtetris)
	{
		diff[0] = tetri[i].pos[1];
		diff[1] = tetri[i].pos[1];
		while (++j < 8)
		{
			if (j % 2 != 0)
			{
				if (tetri[i].pos[j] < diff[0])
					diff[0] = tetri[i].pos[j];
				if (tetri[i].pos[j] > diff[1])
					diff[1] = tetri[i].pos[j];
			}
		}
		tetri[i].height = diff[1] - diff[0] + 1;
		j = -1;
	}
}

void			ft_rightformat(t_tetriminos *tetri, int nbrtetris)
{
	int		i;
	int		j;
	int		x;
	int		y;

	i = -1;
	while (++i < nbrtetris)
	{
		j = -1;
		x = tetri[i].pos[0];
		y = tetri[i].pos[1];
		while (++j < 8)
		{
			if (j % 2 == 0)
				tetri[i].pos[j] = tetri[i].pos[j] - x;
			else
				tetri[i].pos[j] = tetri[i].pos[j] - y;
		}
	}
	ft_size_height(tetri, nbrtetris);
	ft_size_width(tetri, nbrtetris);
}

void			ft_data(t_tetriminos *tetri, int nbrtetris,
							int nbrline, int block[5])
{
	int		i;
	int		j;

	i = 5;
	j = 0;
	while (--i > 0)
	{
		if (block[i])
		{
			j++;
			tetri[nbrtetris - 1].pos[2 * (block[0] - j)] = i;
			tetri[nbrtetris - 1].pos[2 * (block[0] - j) + 1] = nbrline % 5;
			tetri[nbrtetris - 1].lettre = 'A' + nbrtetris - 1;
		}
	}
}
