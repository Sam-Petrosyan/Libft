#include <stdio.h>

void	*ft_memchr(const void *arr, int c, size_t n)
{
	char *a;
	unsigned int i;

	a = (void *)arr;
	i = 0;
	while (i < n)
	{
		if (a[i] == c)
		{	
			return (&a[i]);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	unsigned char src[15] = "1234567890";
	char *sym;
	
	printf("src old: %s\n", src);
	sym = ft_memchr(src, '8', 10);
	if (sym != NULL)
		sym[0] = '!';
	printf("src new: %s\n", src);
}
