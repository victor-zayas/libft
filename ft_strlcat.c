/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 18:16:59 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/07 15:55:02 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* #include<stdio.h>
#include<string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int	main(void)
{
	char	src[] = "buenas";
	char	dest[] = "hola";
	int		size = (ft_strlen(dest) + ft_strlen(src) + 1);
	

	char dest[30]; memset(dest, 0, 30);
	char *src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	printf("%zu \n", ft_strlcat(dest, src, 0));
} */

/* size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	count;

	if (dest == NULL || src == NULL || !size)
		return (0);
	i = 0;
	count = 0;
	while (i < ft_strlen(dest))
	{
		count++;
		i++;
	}
	j = 0;
	while (i < (size - 1))
	{
		dest[i++] = src[j++];
		count++;
	}
	dest[i] = '\0';
	return (count);
} */

size_t	ft_strlcat(char *dest, const char *src, size_t	size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	count;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	count = 0;
	if (size < 1 || size <= dest_len)
		return (src_len + size);
	while (count < (size - dest_len - 1) && src[count])
	{
		dest[dest_len + count] = src[count];
		count++;
	}
	dest[dest_len + count] = '\0';
	return (dest_len + src_len);
}
