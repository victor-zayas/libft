/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:50:48 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/07 16:33:53 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* #include<stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	src[] = "String";
	char	dest[6];
	int n = 4;

	printf("%s", ft_memcpy(dest, src, n));
	return (0);
} */

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst || src)
	{
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((const char *)src)[i];
			i++;
		}
		return (dst);
	}
	return (NULL);
}
