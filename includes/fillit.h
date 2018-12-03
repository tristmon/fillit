#ifndef FILLIT_H
# define FILLIT_H

# include "libft.h"

int		fillit(int fd);
int		check_tetri(char *buffer);

typedef struct		s_piece
{
	unsigned short	shape;
	int		wide;
	int		length;
	char	letter;
}			t_piece;

#endif