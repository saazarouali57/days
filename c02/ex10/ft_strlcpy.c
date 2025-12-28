/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <saad@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 16:10:32 by saad              #+#    #+#             */
/*   Updated: 2025/12/23 16:54:12 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;
	unsigned int src_len = 0;
	while(src[src_len])
	src_len++;
	if(size == 0)
	return src_len;
	while(src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return src_len;
}
#include<stdio.h>
int main()
{
	char source[] = "salam";
	char dest [10];
	unsigned int a = 0;
	int len;
	len = ft_strlcpy(dest , source , a);
	printf("%d\n", len);

}
