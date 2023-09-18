/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:36:34 by spho              #+#    #+#             */
/*   Updated: 2023/09/14 09:12:26 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)b;
	while (len -- > 0)
		*(ptr++) = (unsigned char)c;
	return (b);
}
/*
int	main()
{
	char str[] = "Hello, World!";
	int value = 'X';
	size_t length = 5;

	printf("Src String: %s\n", str);
	ft_memset(str, value, length);
	printf("Dest String: %s\n", str);
	return (0);
}*/
