#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int x;
	unsigned int i;	
	
	x = 0;
	i = 0;
	while (dest[i])
		i++;
	while (src[x] && i + x < dstsize)
	{
		dest[i + x] = src[x];
		x++;
	}
	dest[i + x] = '\0';
	return (i + x);
}

int main(void)
{
	char dest[42] = "Hello world";
	char src[] = "Barev brats";
	printf("old dest: %s\n", dest);
	int i = ft_strlcat(dest, src, 40);
	printf("%d\n", i);
	printf("new dest: %s\n", dest);
	return (0);
}
