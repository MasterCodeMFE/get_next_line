/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manufern <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:40:07 by manufern          #+#    #+#             */
/*   Updated: 2023/10/26 13:41:52 by manufern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i ++;
	}
	while (s2[j] != '\0')
	{
		str[i ++] = s2[j ++];
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strdup(char *s1)
{
	char	*dupl;
	int		i;

	i = 0;
	dupl = NULL;
	dupl = malloc(ft_strlen(s1) + 1);
	if (!dupl)
		return (NULL);
	while (s1[i] != '\0')
	{
		dupl[i] = s1[i];
		i ++;
	}
	dupl[i] = '\0';
	return (dupl);
}

char	*ft_strchr(char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

char	*ft_substr(char *s)
{
	int		count;
	char	*str;
	int		i;

	i = 0;
	count = 0;
	while (s[count] != '\n' && s[count] != '\0')
		count++;
	str = NULL;
	str = malloc(count + 2);
	if (!str)
		return (NULL);
	while (s[i] != '\n')
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\n';
	i++;
	str[i] = '\0';
	return (str);
}
