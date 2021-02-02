/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlacombe <vlacombe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 15:18:27 by vlacombe          #+#    #+#             */
/*   Updated: 2021/01/12 14:05:06 by vlacombe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <unistd.h>
# include <fcntl.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/stat.h>

# include "libft.h"

typedef	struct	s_tetriminos
{
	char	lettre;
	int		height;
	int		width;
	int		pos[8];
}				t_tetriminos;

void			init_empty_tab(int *tab, int size);
void			place_tetri(t_tetriminos *tetri, char **map, int i, int j);
void			tetri_del(t_tetriminos *tetri, char **map, int x, int y);
void			ft_data(t_tetriminos *tetri, int nbrtetris,
				int nbrline, int block[5]);
void			ft_rightformat(t_tetriminos *tetri, int nbrtetris);
void			print_map(char **map, int size);
void			free_map(char **map, int size);
void			fillit(t_tetriminos *tetri, int nbrtetris);

int				ft_check_block(char *line, int block[5]);
int				ft_check_character(char *line, int *nbrline,
				int *nbrtetris, int block[5]);
int				ft_checker(char *file, t_tetriminos *tetri);
int				get_next_line(const int fd, char **line);
int				verif(t_tetriminos *tetri, char **map, int x, int y);
char			**create_map(int size);

#endif
