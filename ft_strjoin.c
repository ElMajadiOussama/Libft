/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:29:13 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/12/01 20:29:14 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		result;
	char	*str;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	result = ft_strlen ((char *)(s1)) + ft_strlen ((char *)(s2));
	str = malloc (sizeof(char) * (result + 1));
	if (str == 0)
		return (0);
	while (s1[i] != '\0')
	{
		str[i] = ((char)s1[i]);
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		str[ft_strlen ((char *)(s1)) + i] = s2[i];
		i++;
	}
	str[result] = '\0';
	return (str);
}
