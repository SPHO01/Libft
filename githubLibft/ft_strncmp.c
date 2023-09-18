/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:35:47 by spho              #+#    #+#             */
/*   Updated: 2023/09/14 09:36:53 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, char *s2, size_t n)
{
	size_t	count;
	int		diff;

	count = 1;
	if (n == 0)
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2 && count++ < n)
	{
		s1++;
		s2++;
	}
	diff = ((unsigned char)*s1 - (unsigned char)*s2);
	return (diff);
}
/*
int	main()
{
	char str[][5] = { "R2D2" , "C3P0" , "R2A6"};
	int	n;
	puts ("Looking for R2 astromech droids...");
	for (n = 0 ; n < 3 ; n++)
		if (strncmp (str[n],"R2xx", 2) == 0)
		{
			printf ("found %s\n", str[n]);
		}
	return (0);
}*/
