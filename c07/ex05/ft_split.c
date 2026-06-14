/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saad <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:25:42 by saad              #+#    #+#             */
/*   Updated: 2026/06/09 20:53:11 by saad             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
int     is_sep(char c, char *charset)
{
        int i = 0;
        while(charset[i])
        {
                if(charset[i] == c)
					return 1;
                i++;
        }
        return 0;
}
int     count_words(char *str, char *charset)
{
        int i = 0;
        int count = 0;
        while(str[i])
        {
                if(is_sep(str[i] , charset) == 0)
                {
                        count++;
                        while(str[i] && !is_sep(str[i] , charset))
                        i++;
                }
                else
				i++;
        }
        return count;
}
int     word_len(char *str , char *charset)
{
        int i = 0;
        while(str[i] && is_sep(str[i] , charset) == 0)
        {
                i++;
        }
        return i;
}
char    **ft_split(char *str, char *charset)
{
        int count_word = count_words(str , charset);
        char **res = malloc(sizeof(char *) *( count_word + 1));
        if(!res)
			return NULL;
        int i = 0;
        int j = 0;
        while(str[i])
        {
                while(str[i] && is_sep(str[i] , charset) == 1)
					i++;
                if(str[i])
                {
                        int len = word_len(&str[i] , charset);
                        res[j] = malloc(sizeof(char ) * (len + 1));
                        int k = 0;
                        while(str[i] && is_sep(str[i] , charset) == 0)
                                res[j][k++] = str[i++];
                        res[j][k] = '\0';
                        j++;
                }
        }
        res[j] = NULL;
        return res;
}
int main()
{
        char *str = "salam, .cv  bikhire  ,, hello   ,,,";
        char *charset = ", .";
        char **res = ft_split(str , charset);
        int i = 0;
        while(res[i])
        {
                printf("%s" , res[i]);
                i++;
        }
        free(res);
}
