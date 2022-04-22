/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 17:45:37 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/07 19:39:14 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* #include<stdio.h>
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	main(void)
{
	char	haystack[] = "Hola, buenas tardes";
	char	needle[] = "buenas";
	int		len = 15;

	printf("%s \n", ft_strnstr(haystack, needle, len));
} */

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == 0)
				return ((char *)&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
