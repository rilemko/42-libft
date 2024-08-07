/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 16:39:33 by mconreau          #+#    #+#             */
/*   Updated: 2024/05/09 14:05:11 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	strlen;
	size_t	index;

	strlen = ft_strlen(needle);
	if (!strlen)
		return ((char *) haystack);
	index = 0;
	while (haystack[index] && (len - index) >= strlen)
		if (haystack[index++] == needle[0]
			&& !ft_strncmp(haystack + index - 1, needle, strlen))
			return ((char *) haystack + index - 1);
	return (NULL);
}
