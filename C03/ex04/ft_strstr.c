/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vferrare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:26:54 by vferrare          #+#    #+#             */
/*   Updated: 2019/10/17 22:40:59 by vferrare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*n;
	char	*blank;
	int		i;
	int		j;

	blank = "";
	j = 0;
	if (*to_find == *blank && *str != '\0')
		return (str);
	if (*str == *blank && *to_find == *blank)
		return (blank);
	while (str[j] != '\0')
	{
		i = 0;
		if (to_find[i] == str[j])
		{
			n = str + j;
			while ((to_find[i] == str[j + i]) && (to_find[i] != '\0'))
				i++;
			if (to_find[i] == '\0')
				return (n);
		}
		j++;
	}
	return (0);
}
