/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 15:03:10 by saad              #+#    #+#             */
/*   Updated: 2026/01/25 15:49:25 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
char	*ft_strcat(char	*dest, char *src)
{
	int i = 0;
	int j = 0;
	while(dest[i])
	i++;
	while(src[j])
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
	char d[] ="hello";
	char s[] =" world";
	ft_strcat(d , s);
	printf("%s\n", d);
}
