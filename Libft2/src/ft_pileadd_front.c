/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pileadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:35:11 by lscheupl          #+#    #+#             */
/*   Updated: 2025/04/23 17:33:05 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_pileadd_front(t_pile **pile, t_pile *new)
{
	t_pile	*cache;

	cache = *pile;
	if (cache != NULL)
	{
		cache->prev = new;
		new->next = *pile;
	}
	else
		new->next = NULL;
	*pile = new;
	(*pile)->prev = NULL;
}
