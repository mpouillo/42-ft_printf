/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpouillo <mpouillo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 11:12:02 by mpouillo          #+#    #+#             */
/*   Updated: 2025/11/15 15:54:22 by mpouillo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	buf;

	if (nmemb == 0 || size == 0)
	{
		mem = malloc(1);
		if (!mem)
			return (NULL);
		return (mem);
	}
	buf = nmemb * size;
	if (buf / nmemb != size)
		return (NULL);
	mem = malloc(buf);
	if (!mem)
		return (NULL);
	ft_bzero(mem, buf);
	return (mem);
}
