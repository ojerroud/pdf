/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojerroud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 16:54:17 by ojerroud          #+#    #+#             */
/*   Updated: 2017/09/26 17:16:41 by ojerroud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <stdio.h>
# include <stdlib.h>
# include "mlx.h"
# include "libft/includes/libft.h"
# define WIN_WIDTH	800 /* largeur >*/
# define WIN_HEIGHT	800 /* taille /\*/
# define EDGE_DIST	200 /* distance du bord*/
# define POINT_DIST	40	/* distance entre deux cellule de base en 2D*/

typedef struct 		s_coord
{
	size_t				x;
	size_t				y;
	struct	s_coord		*next;
}					t_coord;

typedef struct		s_fdf
{
	void			*mlx;
	void			*win;
}					t_fdf;


#endif