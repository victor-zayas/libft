/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 18:09:47 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/13 18:33:48 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* #include <stdio.h>

void	f(unsigned int i, char *c);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

int	main(void)
{
	char	s[]= "hola";

	ft_striteri(s, f);
}

void	f(unsigned int i, char *c)
{
	printf("%d", i);
	printf("%s", c);
} */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			f(i, &s[i]);
			i++;
		}
	}
}
