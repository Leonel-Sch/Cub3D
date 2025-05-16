/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:54:51 by lscheupl          #+#    #+#             */
/*   Updated: 2025/05/16 16:12:45 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/Cub.h"

int parsing(char *map_name, t_map_data *data)
{
    int status;
    
    data->doc = NULL;
    status = verify_name(map_name);
    if (status != 0)
        return(error_name(status), status);
    
    return (printf("%d\n", status));
}