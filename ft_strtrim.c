/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessamdi <oessamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:12:31 by oessamdi          #+#    #+#             */
/*   Updated: 2021/11/21 16:15:17 by oessamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_initvar(int x, char const *s)
{
	if (x == 1)
		return (0);
	return (ft_strlen(s) - 1);
}

static int	ft_getindex(char const *str, char const *sub, int x)
{
	int	i;
	int	j;

	i = ft_initvar(x, str);
	if (*sub == '\0')
		return (i);
	while (str[i])
	{
		j = 0;
		while (sub[j])
		{
			if (str[i] != sub[j] && sub[j + 1] == '\0')
				return (i);
			if (str[i] == sub[j])
				break ;
			j++;
		}
		if (x == 1)
			i++;
		else
			i--;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		i;
	char		*str;

	if (!s1 || !set)
		return (NULL);
	start = ft_getindex(s1, set, 1);
	if (start == ft_strlen(s1))
		end = start;
	else
		end = ft_getindex(s1, set, 0);
	str = malloc(sizeof(char) * (end - start + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
// int main()
// {
// 	char s1[] = "          ";
// 	printf("%ss1 = %s\n", ft_strtrim(s1, " "), s1);
// }