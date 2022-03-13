#include <stdio.h>
#include <string.h>

void	ft_bzero(void *str, size_t n)
{
	char *s;
	int i;

	s = str;
	i = 0;
	while (s[i])
	{
		while (n > 0)
		{
			s[i] = '\0';
			n--;
		}
		i++;
	}	
}

int main()
{
	char str[10] = "1234567890";
	
	printf("str old: %s\n", str);
	ft_bzero(str + 5, 4);
	printf("str new: %s.\n", str);

	return (0);
}
