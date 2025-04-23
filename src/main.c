/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 15:40:20 by lscheupl          #+#    #+#             */
/*   Updated: 2025/04/23 18:27:41 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cub.h"

int cub3D(char *file)
{
    
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        return (cub3D(argv[1]));
    else
        dprintf(2, "Wrong Numbers of Arguments");
    return (1);
}