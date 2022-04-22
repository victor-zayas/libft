/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:52:10 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/03/28 16:29:08 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h>

int	ft_isdigit(int d);

int	main(void)
{
	printf("%d", ft_isdigit('a'));
} */

int	ft_isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (1);
	else
		return (0);
}
