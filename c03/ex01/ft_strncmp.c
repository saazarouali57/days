/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 16:50:31 by saad              #+#    #+#             */
/*   Updated: 2026/01/16 17:24:03 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int 	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	i = 0;
	if(n == 0)
	return 0;
	while(s1[i] && s2[i] && i < n && s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}
#include<stdio.h>
int main()
{
	char str1[] = "SALAM";
	char str2[] = "salam";
	int a = 0;
	printf("%d\n", ft_strncmp(str1 , str2, a));
}
