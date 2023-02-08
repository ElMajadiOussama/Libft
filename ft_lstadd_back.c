/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouel-maj <ouel-maj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 20:26:05 by ouel-maj          #+#    #+#             */
/*   Updated: 2022/12/01 20:33:54 by ouel-maj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstlast;

	if (lst == NULL || new == NULL)
		return ;
	if (*lst == NULL)
		ft_lstadd_front(lst, new);
	else
	{
		lstlast = ft_lstlast(*lst);
		if (lstlast)
			lstlast->next = new;
	}
}
