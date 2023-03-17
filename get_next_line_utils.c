/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmonte <marmonte@student.42lisboa.com >  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:27:32 by marmonte          #+#    #+#             */
/*   Updated: 2023/02/27 16:40:43 by marmonte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
	{
		i++;
		if (str[i] == '\n')
		i++;
	}
	return (i);
}


char	*ft_strjoin(char *str1, char *str2)
{
	char	*aux;
	int		i;
	int		j;

	i = 0;
	aux = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!aux)
		return (NULL);
	while (str1 && str1[i])
	{
		aux[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2[j])
	{
		if (str2[j] == '\n')
			break ;
		aux[i++] = str2[j];
		j++;
	}
	aux[i] = 0;
	free(str1);
	return (aux);
}

int	clean_buff(char *str)
{
	int	i;
	int	j;
	int	nl;

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
	return (nl);
}
