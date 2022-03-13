#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int i;
	const unsigned char *s;
	unsigned char *d;
	unsigned int x;

	s = src;
	d = dest;
	i = 0;
	x = 0;
	if (s > d)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
		while (s[x])
			x++;
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	return (dest);
}

int main(void)
{
	char str[] = "Hello world";
	printf("before: %s\n", str);
	ft_memmove(str + 3, str, 6);
	printf("after: %s\n", str);
	return (0);
}
