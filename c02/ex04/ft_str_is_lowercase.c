/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:28:31 by saad              #+#    #+#             */
/*   Updated: 2025/12/22 18:34:53 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int 	ft_str_is_lowercase(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(!(str[i] >= 'a' && str[i] <= 'z'))
		return 0;
		i++;
	}
	return 1;
}
int main()
{
	printf("%d\n", ft_str_is_lowercase("salam"));
	printf("%d\n", ft_str_is_lowercase("SALAM"));
	printf("%d\n", ft_str_is_lowercase("1234"));
	printf("%d\n", ft_str_is_lowercase(""));
}
