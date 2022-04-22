/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:46:49 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/07 12:46:49 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* #include<stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int main(void)
{
	unsigned char s[] = "el diablo de 42";
	int	c = 0;
	size_t	n = 15;

	printf("%s \n", (char *)ft_memchr(s, c, n));
} */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;

	s1 = NULL;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			s1 = ((unsigned char *)s) + i;
			return (s1);
		}
		i++;
	}
	return (s1);
}
