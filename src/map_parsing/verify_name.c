/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_name.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leonel <leonel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 16:57:30 by lscheupl          #+#    #+#             */
/*   Updated: 2025/05/07 17:37:32 by leonel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/Cub.h"

bool	suffix_check(char *map_name)
{
	char	*str;
	int		len;

	len = ft_strlen(map_name);
	str = ft_substr(map_name, len - 4, len);
	if (!ft_strnstr(str, ".cub", 4))
		return (free(str), false);
	return (free(str), true);
}

bool	name_check(char *map_name)
{
	char	*str;

	str = ft_substr(map_name, 0, ft_strlen(map_name) - 4);
	if (ft_strlen(map_name) <= ft_strlen(".cub"))
		return (free(str), false);
	if (map_name[0] == '.' && map_name[1] != '/')
		return (free(str), false);
	if (ft_strnstr(str, ".cub", ft_strlen(str) + 1))
		return (free(str), false);
	return (free(str), true);
}

bool exist_check(char *map_name)
{
    int fd;
    
    fd = open(map_name, O_RDONLY, 0644);
    if (fd < 0)
        return (false);
    return (close(fd), true);
}

int	verify_name(char *map_name)
{
	if (!map_name)
		return (no_map);
	if (!suffix_check(map_name))
		return (suffix_error);
	if (!name_check(map_name))
		return (wrong_name);
    if (!exist_check(map_name))
    {
        return (wrong_access);
    }
	return (success);
}