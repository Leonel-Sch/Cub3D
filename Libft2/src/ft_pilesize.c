/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pilesize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:35:34 by lscheupl          #+#    #+#             */
/*   Updated: 2025/04/23 17:33:05 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_pilesize(t_pile *pile)
{
	int	i;

	i = 0;
	pile = ft_pilefirst(pile);
	while (pile != NULL)
	{
		pile = pile->next;
		i++;
	}
	return (i);
}
