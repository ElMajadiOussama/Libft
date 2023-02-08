/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:29:58 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/12/01 20:29:58 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s11;
	unsigned char	*s22;

	i = 0;
	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while ((s11[i] != '\0' || s22[i] != '\0') && i < n)
	{
		if (s11[i] < s22[i])
			return (-1);
		else if (s11[i] > s22[i])
			return (1);
		i++;
	}
	return (0);
}
