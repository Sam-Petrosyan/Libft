#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int i;
	
	i = 0;
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i] > str2[i])
			return (1);
		else if (str1[i] < str2[i])
			return (-1);
		i++;
	}
	return (0);
}

int main(void)
{
	char dest[] = "Hello world";
	char src[] = "Hello worle";
	printf("%d\n", ft_strncmp(dest, src, 10));
	return (0);
}
