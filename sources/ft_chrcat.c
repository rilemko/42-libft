/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 13:51:13 by mconreau          #+#    #+#             */
/*   Updated: 2024/05/09 14:05:11 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_chrcat(char *dst, char c, size_t dstsize)
{
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	if (dstsize > dstlen + 1)
	{
		ft_memset(dst + dstlen, c, 1);
		ft_bzero(dst + dstlen + 1, 1);
	}
	return (dstsize + 1);
}
