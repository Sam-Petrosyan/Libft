#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int x;
	
	x = 0;
	i = 0;
	while (s1[i] && i < n)
	{
		while (s1[i + x] == s2[x])
		{
			x++;
		}
			if (s2[x] == '\0')
				return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}

int main(void)
{
	const char dest[] = "Hello world. How are you?";
	const char src[] = "world";
	printf("%s\n", ft_strnstr(dest, src, 25));
	return (0);
	
}
