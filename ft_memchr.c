/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:27:29 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/12/01 20:27:29 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	dst;

	i = 0;
	src = (unsigned char *)s;
	dst = (unsigned char)c;
	while (n > i)
	{
		if (src[i] == dst)
			return (&src[i]);
		i++;
	}
	return (0);
}
