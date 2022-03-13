#include <stdio.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int i;
	unsigned char *s;
	const unsigned char *c;

	s = dest;
	c = src;
	i = 0;
	while (c[i] && i < n)
	{
		s[i] = c[i];
		i++;
	}
	return (s);
}

int main(void)
{
	unsigned char dest[10] = "87654";
	unsigned char src[10] = "123456";

	ft_memcpy(dest, src, 5);
	printf("dest: %s\n", dest);
	return (0);
}
