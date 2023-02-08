/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:30:04 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/12/01 20:30:04 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	count;
	size_t	sizeneedle;

	count = 0;
	sizeneedle = ft_strlen((char *)needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[count] != '\0' && count + sizeneedle <= len)
	{
		if (ft_strncmp (&(haystack[count]), needle, sizeneedle) == 0)
		{
			return ((char *)haystack + count);
		}
		count++;
	}
	return (0);
}
