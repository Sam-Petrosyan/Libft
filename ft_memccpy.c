#include <stdio.h>
void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *s;
	const unsigned char *a;
	unsigned int i;

	s = dest;
	a = src;
	i = 0;
	while (a[i] && i < n)
	{
		s[i] = a[i];
		if (a[i] == c)
			break;
		i++;
	}
	return (s);
}

int main(void)
{
	unsigned char dest[15] = "";
	unsigned char src[15] = "1234567890";

	ft_memccpy(dest, src, '7', 10);
	printf("dest: %s\n", dest);
	return (0);
}
