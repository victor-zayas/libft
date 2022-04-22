/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 13:19:57 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/14 13:33:01 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new);

int	main(void)
{
} */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*final;

	if (!(*lst))
		*lst = new;
	else
	{
		final = ft_lstlast(*lst);
		final->next = new;
	}
}
