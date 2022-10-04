/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fay <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 12:25:19 by fay               #+#    #+#             */
/*   Updated: 2022/10/04 12:27:49 by fay              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(const char *s)
{
	int	x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	return x;
}