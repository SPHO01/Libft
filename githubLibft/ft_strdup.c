/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 08:36:17 by spho              #+#    #+#             */
/*   Updated: 2023/09/19 02:46:39 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	j = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (j + 1));
	if (!str)
		return (0);
	i = 0;
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main()
{
		const char	*os = "Hello, World";
		char	*ds = strdup(os);

		if (ds == NULL)
		{
				perror("Strdup");
				return (1);
		}
		printf("Origin String: %s\n", os);
		printf("Dupe String: %s\n", ds);
		free(ds);
		return (0);
}*/
