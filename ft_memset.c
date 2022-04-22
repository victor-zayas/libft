/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 18:47:56 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/09 10:58:03 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* #include<stdio.h>

void	*ft_memset(void *str, int c, size_t len);

int	main(void)
{
	char	str[] = "macarrones";
	int		c = 'A';
	int		len = 4;

	printf("%s", ft_memset(str, c, len));
} */

void	*ft_memset(void *str, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)str)[i] = (unsigned char)c;
		i++;
	}
	return ((unsigned char *)str);
}
