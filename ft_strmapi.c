#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char			*result;

	a = 0;
	while (s[a] != 0)
		a++;
	result = malloc (a + 1);
	if (!result)
		return (NULL);
	result[a] = 0;
	if (s[0] == 0)
		return (result);
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
#include <stdio.h>

char	addOne(unsigned int i, char c) 
{
	return (i + c);
}

int	main()
{
	char *s;
	s = ft_strmapi("", addOne);
	printf(">> %d <<", strcmp(s, ""));
}
*/
