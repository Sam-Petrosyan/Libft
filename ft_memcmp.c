#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *a;
	char *b;
	unsigned int i;

	a = (void *)s1;
	b = (void *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] > b[i])
			return (1);
		if (a[i] < b[i])
			return (-1);
		i++;
	}
	return (0);
}

int main(void)
{
	unsigned char src[15] = "1234567891";
	unsigned char dst[15] = "1234567892";
	
	if (ft_memcmp(src, dst, 10) == 0)
		printf("Tarberutyun chka\n");
	else if (ft_memcmp(src, dst, 10) > 0)
		printf("Arajin toxi tarberutyuny mec e erkrrordic\n");
	else
		printf("Arajin toxi tarberutyuny poqr e erkrordic\n");
	return (0);
}
