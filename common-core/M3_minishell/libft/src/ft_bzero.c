/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguy <mguy@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:56 by mguy              #+#    #+#             */
/*   Updated: 2024/01/17 08:44:02 by mguy             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	s2 = s;
	i = 0;
	while (i < n)
	{
		s2[i] = 0;
		i++;
	}
}