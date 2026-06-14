/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 13:06:06 by saad              #+#    #+#             */
/*   Updated: 2026/05/21 17:05:47 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}
int ft_check_base(char *base)
{
	if(ft_strlen(base) < 2)
	{
		return 0;
	}
	int i = 0;
	int j;
	while(base[i])
	{
		if(base[i] == ' ' || base[i] == '+' || base[i] == '-'|| (base [i] >= 9 && base[i]<= 13))
		{
			return 0;
		}
		j = i + 1;
		while(base[j])
		{
			if(base[i] == base[j])
			return 0;
			j++;
		}
		i++;
	}
	return i;
}
int get_index(char c , char *base)
{
	int i = 0;
	while(base[i])
	{
		if(base[i] == c)
		{
			return i;
		}
		i++;
	}
	return -1;
}
int	ft_atoi_base(char *str, char *base)
{
	int base_len = ft_check_base(base);
	int i = 0;
	int signe = 1;
	int result = 0;
	if(base_len == 0)
	{
		return 0;
	}
	while(str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
		i++;
	while(str[i] == '+' || str[i] == '-')
	{
		if(str[i] == '-')
		signe = -signe;
		i++;
	}
	while(str[i])
	{
		int index = get_index(str[i] , base);
		if(index == -1)
		break ;
		result = (result * base_len) + index;
		i++;
	}
	return result * signe ;
}
int get_nbrlen(int nb , char *base)
{
	int base_len = ft_check_base(base);
	long num = nb;
	int len = 0;
	if(num <= 0)
	{
		len = 1;
	}
	while(num != 0)
	{
		num = num / base_len;
		len++;
	}
	return len;
}
char *ft_putnbr_base(int nb , char *base_to)
{
	int base_len = ft_check_base(base_to);
	int len = get_nbrlen(nb , base_to);
	long num = nb;
	char *str = malloc(sizeof(char) * len +1);
	if(!str)
	{
		return NULL;
	}
	str[len] = '\0';
	if(num == 0)
	{
		str[0] = base_to[0];
	}
	if(num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while(num > 0)
	{
		len--; 
		str[len] = base_to[num % base_len];
		num /= 10;
	}
	return str;
}
char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int number = ft_atoi_base(nbr , base_from);
	char *result = ft_putnbr_base(number , base_to);
	return result;
}

int main()
{
	char *result = ft_convert_base("2A" , "0123456789ABCDEF" , "0123456789");
	printf("%s\n" , result);
	free(result);
}
