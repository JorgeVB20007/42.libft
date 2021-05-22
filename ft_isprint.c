#include <stdio.h>
#include <ctype.h>
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
int main()
{
	int a = 0;
	int b = 0;
	while (a < 256)
	{
		if (isprint(a) == ft_isprint(a))
		{
			printf("%d", ft_isprint(a));
		}
		else
		{
			printf("ERROR at %d - %d / %d\n", a, isprint(a), ft_isprint(a));
			b = 1;
		}
		a++;
	}
	if (!b)
		printf("\n\nAll Good here ^_^\n\n");
	else
		printf("Something went wrong.");
}
*/