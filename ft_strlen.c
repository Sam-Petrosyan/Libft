#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	int i;
	
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int main(void)
{
	char a[] = "Hello world";
	int x = ft_strlen(a);
	
	printf("%d\n", x);
	return (0);
}
