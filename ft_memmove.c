/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edbeknaz <edbeknaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 22:21:28 by edbeknaz          #+#    #+#             */
/*   Updated: 2019/03/24 14:42:52 by edbeknaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *tmp;

	tmp = ft_strnew(len);
	if (tmp)
	{
		tmp = ft_memcpy(tmp, src, len);
		dst = ft_memcpy(dst, tmp, len);
	}
	free(tmp);
	return (dst);
}
