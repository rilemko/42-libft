/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 11:35:29 by mconreau          #+#    #+#             */
/*   Updated: 2024/05/09 14:05:11 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcnt(const char *s, char sep)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != sep && (*(s + 1) == sep || !*(s + 1)))
			count++;
		s++;
	}
	return (count);
}
