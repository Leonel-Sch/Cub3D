/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:54:51 by lscheupl          #+#    #+#             */
/*   Updated: 2025/05/06 17:36:00 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/Cub.h"

int parsing(char *map_name, t_map_data *data)
{
    int status;

    status = verify_name(map_name);
    (void)data;
    return (printf("%d\n", status));
}