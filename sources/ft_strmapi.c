/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconreau <mconreau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 18:50:14 by mconreau          #+#    #+#             */
/*   Updated: 2024/05/09 14:05:11 by mconreau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*memory;
	unsigned int	index;

	if (!s || !f)
		return (NULL);
	memory = ft_strdup(s);
	if (!memory)
		return (NULL);
	index = 0;
	while (s[index])
	{
		ft_memset(&memory[index], (*f)(index, s[index]), 1);
		index++;
	}
	return (memory);
}
