/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:36:51 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/07 12:36:36 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* #include<stdio.h>
#include<string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	printf("%d \n", ft_strncmp("test\200", "test\0", 5));
	printf("%d \n", strncmp("test\200", "test\0", 5));
} */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((a[i] || b[i]) && (i < n - 1))
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	return (a[i] - b[i]);
}
