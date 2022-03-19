#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

int main (void)
{
  	const char src[15] = "1234567890";

        printf("src: %s\n", src);
	char a = *ft_strchr(src, '6');
	printf("%s\n", &a);
	return (0);
}
