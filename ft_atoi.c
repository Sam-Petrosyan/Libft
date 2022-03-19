#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int i;
	int nb;
	int a;
	
	a = 1;
	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] == '\n' || str[i] == '\t'
		|| str[i] == '\f' || str[i] == '\r'
		|| str[i] == '\v' || str[i] == ' ')
			i++;
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				a = -1;
			i++;
		}
		while  (str[i] >= 48 && str[i] <= 57)
		{	
			nb = nb * 10 + (int)str[i] - 48;
			i++;
		}
		return (nb * a);
		i++;
	}
	return (0);
}

int main(void)
{
	char src[] = "12345a6789a";
	printf("%d\n" , ft_atoi(src));
	return (0);
}
