/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 01:04:37 by spho              #+#    #+#             */
/*   Updated: 2023/09/19 01:20:56 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_chars(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	front;
	size_t	end;

	if (!s1 || !set)
		return (0);
	front = 0;
	while (s1[front] && ft_chars(s1[front], set))
		front++;
	end = ft_strlen(s1) - 1;
	while (end >= front + 1 && ft_chars(s1[end], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - front + 2));
	if (!str)
		return (0);
	i = 0;
	while (i < (end - front + 1))
	{
		str[i] = s1[front + i];
		i++;
	}
	str[i] = 0;
	return (str);
}
