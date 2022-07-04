/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessamdi <oessamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:28:36 by oessamdi          #+#    #+#             */
/*   Updated: 2021/11/22 19:10:25 by oessamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strln(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static char	**ft_putwords(char **strs, const char *s, char c, int nb_word)
{
	int	i;
	int	j;
	int	strln;

	i = 0;
	j = 0;
	while (i < nb_word)
	{
		while (s[j] == c)
			j++;
		strln = ft_strln(&s[j], c);
		strs[i] = (char *)ft_calloc(sizeof(char), (strln + 1));
		if (!strs[i])
			return (NULL);
		ft_strlcpy(strs[i], &s[j], strln + 1);
		j += strln;
		i++;
	}
	strs[i] = NULL;
	return (strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		nb_word;

	if (!s)
		return (NULL);
	nb_word = 0;
	i = 0;
	if (s[i] != c && s[i] != '\0')
	{
		nb_word++;
		i = 1;
	}
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			nb_word++;
		i++;
	}
	strs = (char **)malloc((nb_word + 1) * sizeof(char *));
	if (!strs)
		return (NULL);
	return (ft_putwords(strs, s, c, nb_word));
}
