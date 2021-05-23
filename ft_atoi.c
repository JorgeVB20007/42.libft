#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*text;
	int		a;
	int		neg;
	int		result;

	text = (char *)str;
	a = 0;
	neg = 1;
	result = 0;
	while (str[a] == ' ')
		a++;
	if (str[a] == '+')
		a++;
	else if (str[a] == '-')
	{
		neg = -1;
		a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		result = result * 10 + (str[a] - 48);
		a++;
	}
	return (result * neg);
}

/*
int main()
{
	char *str;

	str = "       -00000000214748f432";
	printf("Orig %d\n", atoi(str));
	printf("User %d\n", ft_atoi(str));
}
*/