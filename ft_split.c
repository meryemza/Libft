/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mezahir <mezahir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:41:38 by mezahir           #+#    #+#             */
/*   Updated: 2025/10/21 14:22:01 by mezahir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

  static unsigned int ft_count_word( char const *s, char c)
{
    unsigned int i;
    unsigned int count;
    
    i = 0;
    count = 0;
    
    while(s[i])
    {
         while(s[i] == c && s[i])
            i++;
        if(s[i] != c && s[i]) 
            count++;
        while(s[i] != c && s[i])  
            i++;
    }
    return (count);
}

 static char *ft_fill_word(unsigned int len_w , char *p,int i, char const *s)
 {
     unsigned int j;
    
    j = 0;
    while(j < len_w)
    {
     p[j] = s[i - len_w];
     len_w--;
     j++;
        
    }
    p[j] = '\0';
    return p;
 }
 static char **ft_free(char **p,unsigned int word)
 {
    unsigned int i ;
    i = 0;
    while(i < word)
    {
        free(p[i]);
        i++;
    }
    free(p);
    return NULL;
    
 }
 static char **ft_div_word( char const *s,unsigned int count_w ,char **p,char c)
{
    unsigned int i;
    unsigned  int len_w;
    unsigned int word ;
    word = 0;
     i = 0;
    len_w = 0;
    while(word < count_w)
    {
        while(s[i] == c && s[i])
            i++;
        while(s[i] != c && s[i])
        {
            len_w++;
            i++;
        }
    p[word] = malloc(sizeof(char *) * (len_w + 1));
    if(p[word] == NULL)
    return (ft_free(p,word));
    p[word] = ft_fill_word(len_w ,p[word],i,s);
    len_w = 0;
    word++;
    }
    p[word] = NULL;
    return p;
}

char **ft_split(char const *s, char c)
{
unsigned int  count_w ;
char **p;

count_w = ft_count_word(s, c);
p = malloc(sizeof(char *) * (count_w + 1));
if(!p)
return NULL;
p = ft_div_word(s,count_w ,p,c);
return p;
}
int main()
{
    int i = 0;
    char *p = "hi meryem zahir     ";
    char c = ' ';
    char **pr;
    pr = ft_split(p,c);
    int ln = ft_count_word(p,c);
    while(i < ln)
    {
            printf("%s",pr[i]);
            printf("\n");
            i++;
    }

    
    
    
    
}
