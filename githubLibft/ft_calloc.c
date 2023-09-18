/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 08:17:51 by spho              #+#    #+#             */
/*   Updated: 2023/09/14 09:24:05 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t len)
{
	size_t	b;
	void	*p;

	if (count == 0 || len == 0)
	{
		count = 1;
		len = 1;
	}
	b = count * len;
	p = malloc(b);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, b);
	return (p);
}
/*
int	main()
{
		size_t	count = 5;
		size_t	len = sizeof(int);
		int	*arr = (int *)ft_calloc(count, len);

		if (arr == NULL)
		{
				return (1);
		}
		free(arr);
		return (0);
}*/
