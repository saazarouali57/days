/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 15:19:50 by saad              #+#    #+#             */
/*   Updated: 2026/06/14 15:14:31 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}
char *ft_strdup(char *src)
{
	int i = 0;
	int len = ft_strlen(src) + 1 ;
	char *dest = malloc(len);
	if(!dest)
	{
		return NULL;
	}
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}
int main()
{
	char *s = "salam";
	char *d = ft_strdup(s);
	printf("%s\n" , d);
}
