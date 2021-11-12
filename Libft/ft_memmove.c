/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessamdi <oessamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:44:29 by oessamdi          #+#    #+#             */
/*   Updated: 2021/11/11 03:08:19 by oessamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if (d > s)
	{
		while (i < len)
		{
			d[len - 1 - i] = s[len - 1 - i];
			i++;
		}
	}
	else if (d < s)
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int main()
{
	char s[] = "abcdefjh";
	char s2[] = "abcdefjh";
	//char *res1 = (char *) memmove(s1+2, s1, 2);
	//char *res2 = (char *) ft_memmove(s2+2, s2, 2);
	 
 	printf("%s\n", memmove(s+2, s, 7));
 	printf("%s\n", ft_memmove(s2+2, s2, 7));
}
*/