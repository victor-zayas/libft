/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:47:30 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/07 12:47:30 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* #include<stdio.h>

char	*ft_strchr(const char *s, int c);

int	main(void)
{
	char	s[] = "el diablo de 42";
	int	c = 'a';

	printf("%s \n", (char *)ft_strchr(s, c));
} */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	d;

	d = c;
	while (*s != '\0' && *s != d)
		s++;
	if (*s == d)
		return ((char *)s);
	return (NULL);
}
