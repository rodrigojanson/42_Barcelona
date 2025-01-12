/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rojanson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 19:51:12 by rojanson          #+#    #+#             */
/*   Updated: 2025/01/04 21:31:03 by rojanson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	int		len;
	int		i;

	i = 0;
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
	{
		return (NULL);
	}
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[len] = '\0';
	return (dup);
}
