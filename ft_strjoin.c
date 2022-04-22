/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzayas-s <vzayas-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:19:54 by vzayas-s          #+#    #+#             */
/*   Updated: 2022/04/21 16:36:08 by vzayas-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
/* #include<stdio.h>

char	*ft_strjoin(const char *s1, const char *s2);

int	main(void)
{
	char	*s1 = "papu papu papu";
	char	*s2 = " bicho blanco -2022";

	printf("%s \n", ft_strjoin(s1, s2));
} */

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*result;

	if (!s1 || !s2)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (result == NULL)
		return (NULL);
	ft_strlcpy(result, s1, (ft_strlen(s1) + 1));
	ft_strlcat(result, s2, (ft_strlen(s2) + ft_strlen(s1) + 1));
	result[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (result);
}
