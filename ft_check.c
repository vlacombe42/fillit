/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <vlacombe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/16 19:36:29 by vlacombe          #+#    #+#             */
/*   Updated: 2021/01/26 15:42:11 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		init_empty_tab(int *tab, int size)
{
	int i;

	i = -1;
	while (++i < size)
		tab[i] = 0;
}

int			ft_check_block(char *line, int block[5])
{
	int i;
	int start;
	int blockincontact;

	i = -1;
	blockincontact = 0;
	start = block[0];
	while (line[++i])
	{
		if (line[i] == '#')
		{
			if (block[0] != start && line[i - 1] != '#')
				return (1);
			if (block[i + 1] == 1)
				blockincontact = 1;
			block[0]++;
			block[i + 1] = 1;
		}
		else
			block[i + 1] = 0;
		if (block[0] > 4)
			return (1);
	}
	return ((blockincontact != 1 && start > 0 && start < 4) ? 1 : 0);
}

int			ft_check_character(char *line, int *nbrline,
								int *nbrtetris, int block[5])
{
	int i;

	i = -1;
	while (line[++i])
		if (line[i] != '.' && line[i] != '#')
			return (1);
	(*nbrline)++;
	if (*nbrline % 5 == 0 && line[0] == '\0')
	{
		(*nbrtetris)++;
		if (block[0] < 4)
			return (1);
		init_empty_tab(block, 5);
		return (0);
	}
	else if (*nbrline % 5 != 0 && i == 4)
		return (ft_check_block(line, block));
	return (1);
}

int			ft_checker(char *file, t_tetriminos *tetri)
{
	int		fd;
	int		nbrline;
	int		nbrtetris;
	int		block[5];
	char	*line;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (-1);
	nbrline = 0;
	nbrtetris = 1;
	init_empty_tab(block, 5);
	while (get_next_line(fd, &line) > 0)
	{
		if (ft_check_character(line, &nbrline, &nbrtetris, block)
		|| nbrtetris > 26)
			return (-1);
		ft_data(tetri, nbrtetris, nbrline, block);
		free(line);
	}
	free(line);
	if (nbrtetris * 5 - 1 != nbrline)
		return (-1);
	else if (nbrtetris * 5 - 1 == nbrline && block[0] != 4)
		return (-1);
	return (close(fd) == -1 ? -1 : nbrtetris);
}
