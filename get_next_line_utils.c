/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:27:32 by marmonte          #+#    #+#             */
/*   Updated: 2023/02/10 16:45:16 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return(i + 1);
		i++;
	}
	return (i);
}

int ft_countline(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *str1, char *str2)
{
	int		i;
	int		j;
	char	*aux;

	aux = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!aux)
		return (NULL);
	i = 0;
	j = 0;
	while (str1 && str1[i])
		aux[j++] = str1[i++];
	i = 0;
	while (str2[i])
	{
		aux[j++] = str2[i];
		if (str2[i] == '\n')
			break ;
		i++;
	}
	aux[j] = '\0';
	free(str1);
	return (aux);
}

void	clean_buff(char *str)
{
	int	i;
	int	j;
	int nl;

	i = 0;
	j = 0;
	nl = 0;
	while (str[i])
	{
		if (nl)
			str[j++] = str[i];
		if (str[i] == '\n')
			nl = 1;
		str[i] = 0;
		i++;
	}
}
