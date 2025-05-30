/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pilelast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:35:24 by lscheupl          #+#    #+#             */
/*   Updated: 2025/04/23 17:33:05 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_pile	*ft_pilelast(t_pile *pile)
{
	t_pile	*cache;

	while (pile != NULL)
	{
		cache = pile->next;
		if (cache == NULL)
			return (pile);
		pile = cache;
	}
	return (pile);
}
