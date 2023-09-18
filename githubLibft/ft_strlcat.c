/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:34:48 by spho              #+#    #+#             */
/*   Updated: 2023/09/14 09:22:23 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < len)
		i++;
	while (src[j] && (i + j + 1) < len)
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < len)
		dest[i + j] = '\0';
	return (i + ft_strlen(src));
}
/*
int	main()
{
	char src[] = "World";
	char dest[] = "Hello";
	size_t len = 11;
	printf("Before : %s\n", dest);
	ft_strlcat(dest, src, len);
	printf("After : %s\n", dest);
	return (0);
}*/
