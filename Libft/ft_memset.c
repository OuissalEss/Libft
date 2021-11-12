/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oessamdi <oessamdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:13:09 by oessamdi          #+#    #+#             */
/*   Updated: 2021/11/09 17:07:28 by oessamdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*x;

	x = b;
	i = 0;
	while (i < len)
	{
		x[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
/*
void	print_uc(unsigned char x)
{
	printf("x = %d", x);
}

int	main()
{
	unsigned char x = -1;
	print_uc(x);
	int a = 5, b = 2;
	float res;
	res = (float) a / b;
	printf("res = %.2f", res);
}

*/