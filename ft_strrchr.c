/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessamdi <oessamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:05:31 by oessamdi          #+#    #+#             */
/*   Updated: 2021/11/16 22:21:17 by oessamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*occurrence;

	occurrence = NULL;
	if (c == 0)
		return ((char *) s + ft_strlen(s));
	while (*s)
	{
		if (*s == (char) c)
			occurrence = (char *) s;
		s++;
	}
	return (occurrence);
}
