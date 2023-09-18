/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 02:21:21 by spho              #+#    #+#             */
/*   Updated: 2023/09/19 02:43:34 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	if (*find == 0)
		return ((char *)(str));
	i = 0;
	while (i < n && str[i])
	{
		j = 0;
		while (find[j] == str[i + j] && (i + j < n)
			&& find[j] && str[i + j])
			j++;
		if (find[j] == 0)
			return ((char *)&str[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	str[] = "Welcome to this wonderful world";
	char	find[] = "to";
	char	*str_f = NULL;

	str_f = ft_strnstr(str, find, 20);
	if (str_f)
	{
		printf("String Found: %s\n", str_f);
	}
	else
	{
		printf("String not found\n");
	}
	return (0);
}*/
