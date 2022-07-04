/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessamdi <oessamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:28:56 by oessamdi          #+#    #+#             */
/*   Updated: 2021/11/10 22:08:18 by oessamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*x;
	size_t			i;

	x = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (x[i] == (unsigned char) c)
			return ((void *) s + i);
		i++;
	}
	return (NULL);
}
