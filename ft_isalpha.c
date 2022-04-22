/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:43:47 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/03/28 16:29:05 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include<stdio.h>

int	ft_isalpha(int c);

int	main(void)
{
	printf("%d", ft_isalpha('a'));
} */

int	ft_isalpha(int c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z'))
		return (0);
	return (1);
}
