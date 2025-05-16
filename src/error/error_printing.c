/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_printing.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 17:39:24 by leonel            #+#    #+#             */
/*   Updated: 2025/05/16 16:27:21 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/Cub.h"

void error_name(int status)
{
    if (status == suffix_error)
        ft_putendl_fd("Wrong file extension", 2);
    else if (status == wrong_name)
        ft_putendl_fd("Wrong file syntax", 2);
    else if (status == wrong_access)
        ft_putendl_fd("Can't access file", 2);
}