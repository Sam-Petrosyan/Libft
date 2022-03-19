#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[j])
		j++;
	return (j);
}

int main(void)
{
	char dest[] = "Hello world";
	char src[] = "Barev brats";

	printf("old dest: %s\n", dest);
	int i = ft_strlcpy(dest, src, 6);
	printf("new dest: %s\n", dest);
	printf("%d\n", i); 
}
