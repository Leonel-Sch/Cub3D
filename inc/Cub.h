/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cub.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:40:42 by lscheupl          #+#    #+#             */
/*   Updated: 2025/05/16 16:03:50 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB_H
# define CUB_H

# include "../Libft2/libft.h"
# include <stdbool.h>
# include <stdio.h>

typedef struct s_map_data
{
	char	**doc;
	char	**map;

}			t_map_data;

typedef enum s_parse_error
{
	success,
	no_map,
	suffix_error,
	wrong_name,
	wrong_access,
}			t_parse_error;

/*parsing*/

int			parsing(char *map_name, t_map_data *data);
int			verify_name(char *map_name);
void		error_name(int status);

/**/

#endif