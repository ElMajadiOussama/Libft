/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:28:53 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/12/01 20:28:54 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)s;
	while (str[i] != (char)c)
	{
		if (str[i] == '\0')
		{
			return (NULL);
		}
		i++;
	}
	return (&str[i]);
}
