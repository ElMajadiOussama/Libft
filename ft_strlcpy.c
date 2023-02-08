/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:29:35 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/12/01 20:29:36 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t len)
{
	size_t			i;
	unsigned char	*src1;

src1 = (unsigned char *)src;
i = 0;
	if (len > 0)
	{
		while (src1[i] && i < len - 1)
		{
			dst[i] = src1[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}
