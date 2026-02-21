/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 18:41:55 by saad              #+#    #+#             */
/*   Updated: 2025/12/22 18:49:51 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
int	ft_str_is_uppercase(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(!(str[i] >= 'A' && str[i] <= 'Z'))
		return 0;
		i++;
	}
	return 1;
}
int main()
{
	printf("%d\n", ft_str_is_uppercase("SALAM"));
	printf("%d\n", ft_str_is_uppercase("salam"));
	printf("%d\n", ft_str_is_uppercase(""));
}
