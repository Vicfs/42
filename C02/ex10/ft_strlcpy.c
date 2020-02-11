/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:26:45 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/16 15:17:47 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int len;

	len = 0;
	while (src[len] != 0)
		len++;
	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (len);
}
