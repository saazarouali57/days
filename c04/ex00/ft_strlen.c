/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 16:39:05 by saad              #+#    #+#             */
/*   Updated: 2026/01/28 16:41:44 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	i++;
	return i;
}
int main()
{
	char str[]= "salam";
	int len = ft_strlen(str);
	printf("%d\n", len);
}
