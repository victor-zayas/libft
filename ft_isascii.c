/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:46:30 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/07 12:46:32 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h>

int	ft_isascii(int c);

int	main(void)
{
	printf("%d", ft_isascii(42));
} */

int	ft_isascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
