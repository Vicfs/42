/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 15:09:21 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/18 15:17:25 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				j;

	i = 0;
	j = 0;
	while (dest[j] != 0)
		j++;
	while (src[i] != 0 && i < nb)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = 0;
	return (dest);
}
