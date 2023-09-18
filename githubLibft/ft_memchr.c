/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:33:52 by spho              #+#    #+#             */
/*   Updated: 2023/09/14 09:05:26 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t len)
{
	unsigned char		uc;
	const unsigned char	*ptr;
	size_t				i;

	uc = (unsigned char)c;
	ptr = str;
	i = 0;
	while (i < len)
	{
		if (ptr[i] == uc)
		{
			return ((void *)(ptr + i));
		}
		i++;
	}
	return (NULL);
}
/*
int	main()
{
	const char str[] = "Hello, World";
	const char ch = 'o';
	char *result;
	result = ft_memchr(str, ch, sizeof(str));
	printf("String after %c is |%s|\n",ch, result);
	return (0);
}*/
