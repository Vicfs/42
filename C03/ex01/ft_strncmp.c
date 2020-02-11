/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:01:41 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/18 15:17:50 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				j;

	i = 1;
	j = 0;
	if (n == 0)
		return (0);
	while (s1[j] == s2[j] && i < n && s1[j] != 0)
	{
		j++;
		i++;
	}
	return ((int)s1[j] - s2[j]);
}
