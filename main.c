/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <vlacombe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:27:24 by vlacombe          #+#    #+#             */
/*   Updated: 2020/12/28 15:28:23 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int ac, char *av[])
{
	int				nbrtetris;
	t_tetriminos	tetri[26];

	if (ac != 2)
	{
		ft_putstr("usage: fillit input_file\n");
		return (1);
	}
	nbrtetris = ft_checker(av[1], tetri);
	if (nbrtetris == -1)
	{
		ft_putstr("error\n");
		return (1);
	}
	ft_rightformat(tetri, nbrtetris);
	fillit(tetri, nbrtetris);
	return (0);
}
