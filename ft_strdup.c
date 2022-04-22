/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:47:41 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/07 12:47:41 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* #include<stdio.h>
#include<string.h>

char    *ft_strdup(const char *s);

int main(void)
{
	printf("%s \n", ft_strdup("Hola buenas tardes"));
	printf("%s \n", strdup("Hola buenas tardes"));
} */

char	*ft_strdup(const char *s)
{
	char	*p;

	p = malloc(ft_strlen(s) + 1);
	if (p == NULL)
		return (p);
	ft_strlcpy(p, s, ft_strlen(s) + 1);
	return (p);
}
