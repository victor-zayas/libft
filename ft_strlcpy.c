/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:47:57 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/07 12:47:58 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* #include<stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

int	main(void)
{
	char	src[] = "asdfghjkl";
	char	dest[6];

	printf("%zu", ft_strlcpy(dest, src, 6));
} */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int		count;
	size_t	i;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}
