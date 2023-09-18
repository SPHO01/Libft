/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 01:21:38 by spho              #+#    #+#             */
/*   Updated: 2023/09/14 09:06:29 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	s1 = (char *)str1;
	s2 = (char *)str2;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char )s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str1[20];
	char	str2[20];
	int	ret;

	memcpy(str1, "Hopefulw", 20);
	memcpy(str2, "HopefulW", 20);

	ret = memcmp(str1, str2, 20);

	if(ret > 0)
	{
		printf("Str2 is less than Str1");
	}
	else if (ret < 0)
	{
		printf("Str1 is less than Str2");
	}
	else
	{
		printf("Str1 is equal to Str2");
	}
	return (0);
}*/
