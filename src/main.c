/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonel <leonel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:40:20 by lscheupl          #+#    #+#             */
/*   Updated: 2025/05/07 15:59:55 by leonel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cub.h"

int cub3D(char *map_name)
{
    t_map_data data;
    int status;

    status = parsing(map_name, &data);
    return (status);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        return (cub3D(argv[1]));
    else
        dprintf(2, "Wrong Numbers of Arguments");
    return (1);
}