/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spho <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 02:06:11 by spho              #+#    #+#             */
/*   Updated: 2023/09/19 02:06:48 by spho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **result)
{
	int	i;

	i = 0;
	while (result[i] != (void *)0)
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	wordlen(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			count++;
		while (str[i] != c && str[i])
			i++;
	}
	return (count);
}

static char	*create(const char *str, char c)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	while (str[i] != c && str[i])
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (0);
	j = 0;
	while (j < i)
	{
		word[j] = str[j];
		j++;
	}
	word[j] = 0;
	return (word);
}

static char	**result(char const *s, char c, char **res)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			res[j] = create(&s[i], c);
			if (res[j] == 0)
			{
				ft_free(res);
				return (0);
			}
			j++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	res[j] = 0;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**res;

	if (!s)
		return (0);
	count = wordlen(s, c);
	res = malloc(sizeof(char *) * (count + 1));
	if (!res)
		return (0);
	res = result(s, c, res);
	return (res);
}
