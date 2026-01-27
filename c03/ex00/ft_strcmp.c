/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 15:44:12 by saad              #+#    #+#             */
/*   Updated: 2026/01/07 19:15:17 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;
	while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return(s1[i] - s2[i]);
}
#include<stdio.h>
int main()
{
	char str1[] = "talam";
	char str2[] = "Salam";
	//ft_strcmp(str1 , str2);
	printf("%d\n", ft_strcmp(str1 , str2));
}
