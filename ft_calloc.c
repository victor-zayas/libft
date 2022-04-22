/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 12:46:16 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/07 12:46:16 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* #include<stdio.h>

void    *ft_calloc(size_t n, size_t size);

int main(void)
{
	size_t  n = 4;
	size_t  size = 6;

	printf("%p \n", ft_calloc(n, size));
} */

void	*ft_calloc(size_t n, size_t size)
{
	void	*p;

	p = malloc(size * n);
	if (p == NULL)
		return (p);
	ft_bzero(p, n * size);
	return (p);
}
