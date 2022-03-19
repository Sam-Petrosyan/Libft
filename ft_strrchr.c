#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *src, int c)
{
	int i;
	
	i = 0;
	while (src[i])
		i++;
	while (i >= 0)
	{
		if (src[i] == c)
			return ((char *)&src[i]);
		i--;
	}
	return (NULL);
}

int main (void)
{    
   char str []="barev chavd tane6m vonches im axper 6?";
   int ch = '6';
   char *ach;
   ach = ft_strrchr (str,ch);
   if (ach == NULL)
      printf ("Символ в строке не найден\n");
   else
      printf ("Искомый символ в строке на позиции # %ld\n", ach - str + 1);
   return 0;
}
