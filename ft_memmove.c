/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <fay@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:27:25 by fay               #+#    #+#             */
/*   Updated: 2022/10/07 12:55:12 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *s1;
	const char *s2;
	unsigned long x;

	x = 0;
	s1 = dst;
	s2 = src;
	while (s2[x] != '\0' && x < len)
	{
		s1[x] = s2[x];
		x++;
	}
	s1[x] = '\0';
	return (s1);
}