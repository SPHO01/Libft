/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:43:43 by spho              #+#    #+#             */
/*   Updated: 2023/09/19 02:37:31 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return ((void *)(0));
}
/*
int	main()
{
	const char str[] = "Hello World!";
	const char ch = 'o';
	char *result;
	result = ft_strrchr(str, ch);
	printf("String after last %c is |%s|\n", ch, result);
	return (0);
}*/
