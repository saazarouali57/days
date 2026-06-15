/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 21:09:54 by saad              #+#    #+#             */
/*   Updated: 2026/05/11 12:58:55 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int	total_lenght(int size , char **strs , char *sep)
{
	int i = 0;
	int j;
	int sep_len = 0;
	int total = 0;
	while(sep[sep_len])
	{
		sep_len++;
	}
	while(i < size)
	{
		int j = 0;
		while(strs[i][j])
		{
			total++;
			j++;
		}
		i++;
	}
	total += sep_len * ( size - 1);
	return total;
}
char *ft_strjoin(int size, char **strs, char *sep)
{
	int i = 0;
	int j ;
	char *res;
	int k = 0;

	int total = total_lenght(size , strs , sep);
	res = malloc((total + 1) * sizeof(char));
	if(!res)
	{
		return NULL;
	}
	if(size == 0)
	{
		res[0] = '\0';
		return res;
	}
	while(i < size)
	{
		j = 0;
		while(strs[i][j])
		{
			res[k] = strs[i][j];
			k++;
			j++;
		}
		if(i < size - 1)
		{
			j = 0;
			while(sep[j])
			{
				res[k] = sep[j];
				k++;
				j++;
			}
		}
		i++;
	}
	res[k] = '\0';
	return res;

}

int main()
{
	char *s[] = {"salam" , "labase" , "hwllo" , "world"};
	char sep[] = "&&";
	char *res = ft_strjoin(4 , s, sep);
	printf("%s\n" , res);
}
