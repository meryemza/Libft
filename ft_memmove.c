#include "libft.h"
void *ft_memmove(void *dest, const void *src, size_t n)
{
   size_t i; 
i = 0;
char *d ;
char *s ;

d = (char *)dest;
s =(char *)src ;

if (!d && !s)
		return (NULL);
if (d <= s)
	
	 return ft_memcpy(d, s, n);
	
else
{
  while (n)
		{
            n--;
			d[n] = s[n];
			
		}
return d;  
}
}