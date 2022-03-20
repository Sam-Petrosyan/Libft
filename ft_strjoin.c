#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2)
{
	int i;
	int j;
	char *src = (char *) malloc(sizeof(src));
	i = 0;
	j = 0;
	if (src)
	{
		while (s1[i])
		{
			src[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			src[i + j] = s2[j];
			j++;
		}
		return (src);
	}
	return (NULL);
}

int main(void)
{
	char dest[] = "Hello world.";
	char string[] = "How are you?";
	char *idest = ft_strjoin(dest, string);
	printf("%s\n", idest);
	return (0);
}
