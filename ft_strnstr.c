/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessamdi <oessamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:01:01 by oessamdi          #+#    #+#             */
/*   Updated: 2021/11/21 14:53:36 by oessamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;

	i = 0;
	if (len == 0 && !haystack && needle)
		return (NULL);
	h = (char *) haystack;
	if (needle[i] == 0)
		return (h);
	while (h[i] && i < len)
	{
		j = 0;
		while (needle[j] && needle[j] == h[i + j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return (&h[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
