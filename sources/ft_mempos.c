/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mempos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:45:12 by mconreau          #+#    #+#             */
/*   Updated: 2024/05/09 14:05:11 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_mempos(const void *s, int c, size_t n)
{
	const unsigned char		*str;
	unsigned char			character;
	unsigned int			index;

	str = (const unsigned char *) s;
	character = (unsigned char) c;
	index = 0;
	while (n--)
		if (str[index++] == character)
			return (index - 1);
	return (-1);
}
