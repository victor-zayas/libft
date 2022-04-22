/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:48:33 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/07 12:48:33 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

char	*ft_strrchr(const char *s, int c);

/* int	main(void)
{
	char s[] = "el diablo de a 42";
	int c = 'a';

	printf("%s \n", ft_strrchr(s, c));
} */

/* char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = NULL;
	while (*s)
	{
		if (*s == c)
			str = (char *)s;
		s++;
	}
	if (str == NULL && c == '\0')
		return ((char *)s);
	return (str);
} */

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	d;

	d = c;
	i = ft_strlen(str);
	while (i >= 0)
	{
		if (str[i] == d)
			return ((char *)&str[i]);
		--i;
	}
	return (0);
}
