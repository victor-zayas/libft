/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:46:59 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/07 12:46:59 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include<stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
	unsigned char s1[] = "el diablo de 42";
	unsigned char s2[] = "el diablo de 8";
	size_t n = 34;

	printf("%d \n", memcmp(s1, s2, n));
} */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*h;
	unsigned char	*j;

	h = (unsigned char *)s1;
	j = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if (h[i] != j[i])
			return (h[i] - j[i]);
		i++;
	}
	return (h[i] - j[i]);
}
