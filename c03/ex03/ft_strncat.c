/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 15:52:19 by saad              #+#    #+#             */
/*   Updated: 2026/01/25 16:23:01 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i = 0;
	int j = 0;
	while(dest[i])
	i++;
	while(src[j] && j < nb)
	{	
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return dest;
}
#include<stdio.h>
int main()
{
	char d[]= "hello";
	char s[]= " world";
	int a = 3;
	ft_strncat(d , s, 3);
	printf("%s\n", d);
}
