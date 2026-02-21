/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 13:58:26 by saad              #+#    #+#             */
/*   Updated: 2025/12/23 15:08:50 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
#include<stdio.h>
char	*ft_strcapitalize(char *str)
{
	int i = 0;
	int debu_mot = 1;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z' 
			|| str[i] >= '0' && str[i] <= '9')
		{
			if(debu_mot && str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
				debu_mot = 0;
			}
			else if(!debu_mot && str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] += 32;
				debu_mot = 0;
			}
			else if (str[i] >= '0' && str[i] <= '9')
				debu_mot = 0;
		}
		else
		debu_mot = 1;
		i++;
	}
	return str;
}
int main()
{
	char t[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(t);
	printf("%s\n", t);
}
