/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pilenew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 14:24:09 by lscheupl          #+#    #+#             */
/*   Updated: 2025/04/23 17:33:05 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_pile	*ft_pilenew(int content)
{
	t_pile	*pile;

	pile = (t_pile *)malloc(sizeof(t_pile));
	if (pile == NULL)
	{
		return (pile);
	}
	pile->content = content;
	pile->next = NULL;
	pile->prev = NULL;
	return (pile);
}
