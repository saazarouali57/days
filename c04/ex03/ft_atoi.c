/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:26:50 by saad              #+#    #+#             */
/*   Updated: 2026/01/31 23:41:54 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while(str[i] == ' ' ||  (str[i] >= 9 && str[i] <= 13))
	i++;
	while(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
		sign = -sign;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	 {
		 result = result * 10 + (str[i] - '0');
		 i++;
	 }
	 return result * sign;
}
#include<stdio.h>
int main()
{
	char str1[] = "   -1234abc";
	printf("%d\n", ft_atoi(str1));
}

