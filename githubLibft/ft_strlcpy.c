/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:34:42 by spho              #+#    #+#             */
/*   Updated: 2023/09/14 09:20:38 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (i < len - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (i < len)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int	main()
{
	char src[] = "World";
	char dest[] = "Hello";
	size_t len = 7;

	printf("Before : %s\n", dest);
	ft_strlcpy(dest, src, len);
	printf("After : %s\n", dest);
	return (0);
}*/
