/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:35:09 by spho              #+#    #+#             */
/*   Updated: 2023/09/14 09:23:41 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	ft_memset(b, 0, len);
}
/*
int	main()
{
	char str[] = "Hello, World";
	size_t length = 5;

	printf("Src String: %s\n", str);
	ft_bzero(str, length);
	printf("Dest String: %s\n", str);
	return (0);
}*/
