/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:34:11 by spho              #+#    #+#             */
/*   Updated: 2023/09/19 02:27:25 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	size_t			i;

	if (!dest && !src)
		return (0);
	i = 0;
	while (i < len)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	src[] = "World";
	char	dest[20];

	strcpy(dest, "Hello");
	printf("Before = %s\n", dest);
	ft_memcpy(dest, src, strlen(src));
	printf("After = %s\n", dest);
	return (0);
}*/
