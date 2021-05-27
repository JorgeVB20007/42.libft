#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char			*result;

	a = 0;
	while (s[a] != 0)
		a++;
	result = malloc (a + 1);
	result[a] = 0;
	a--;
	while (a > 0)
	{
		result[a] = s[a];
		a--;
	}
	result[a] = s[a];
	while (s[a] != 0)
	{
		result[a] = (f)(a, s[a]);
		a++;
	}
	return (result);
}

/*
#include <unistd.h>
#include <string.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

char	mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

int		main()
{
	char	*str;
	char	*strmapi;

	alarm(5);
	str = (char *)malloc(sizeof(*str) * 12);
	strcpy(str, "LoReM iPsUm");
	strmapi = ft_strmapi(str, &mapi);
	ft_print_result(strmapi);
	if (strmapi == str)
		ft_print_result("\nA new string was not returned");
	if (strmapi[11] != '\0')
		ft_print_result("\nString is not null terminated");
}

*/