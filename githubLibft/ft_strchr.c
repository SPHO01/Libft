/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:57:27 by spho              #+#    #+#             */
/*   Updated: 2023/09/19 02:34:12 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *) str);
		str++;
	}
	if ((char)c == '\0')
		return ((char *)str);
	return (0);
}
/*
int	main()
{
	const char str[] = "Hello, World!";
	const char ch = 'o';
	char *result;

	result = ft_strchr(str, ch);
	printf("String after %c is |%s|\n", ch, result);
	return (0);
}*/
