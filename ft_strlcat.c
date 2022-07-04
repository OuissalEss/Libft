/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessamdi <oessamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:01:51 by oessamdi          #+#    #+#             */
/*   Updated: 2021/11/21 20:36:55 by oessamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	dstlen = ft_strlen(dst);
	i = 0;
	j = dstlen;
	if (dstsize == 0 || dstlen >= dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] && j < dstsize - 1)
		dst[j++] = src[i++];
	dst[j] = 0;
	return (dstlen + ft_strlen(src));
}
