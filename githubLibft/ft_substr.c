/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 09:31:37 by spho              #+#    #+#             */
/*   Updated: 2023/09/19 01:18:43 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const*s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	s_len;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		sub = (char *)malloc(1);
		if (sub)
			sub[0] = 0;
		return (sub);
	}
	if (start + len > s_len)
		len = s_len - start;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}
/*
int	main()
{
		char	ins[] = "REO, Speedwagon";
		unsigned int	starin = 7;
		size_t	sublen = 5;
		char *substr = ft_substr(ins, starin, sublen);
		if (substr == NULL)
		{
				printf("Failed");
				return (1);
		}
		printf("Substring: %s\n", substr);
		free(substr);
		return (0);
}*/
