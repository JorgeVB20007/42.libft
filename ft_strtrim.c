#include "libft.h"

int	beggining(char const *s1, char const *set)
{
	int	a;
	int	b;

	a = 0;
	while (s1[a] != 0)
	{
		b = 0;
		while (set[b] != 0)
		{
			if (s1[a] == set[b])
			{
				a++;
				break ;
			}
			else
				b++;
		}
		if (set[b] == 0)
			return (a);
	}
	return (-1);
}

int	ending(char const *s1, char const *set, int size)
{
	int	a;
	int	b;

	a = size - 1;
	while (s1[a] != 0)
	{
		b = 0;
		while (set[b] != 0)
		{
			if (s1[a] == set[b])
			{
				a--;
				break ;
			}
			else
				b++;
		}
		if (set[b] == 0)
			return (a + 1);
	}
	return (a + 1);
}

char	*strtrimproblemchecker(int a)
{
	char	*result;

	a = 0;
	result = malloc(1);
	if (!result)
		return (NULL);
	result[0] = '\0';
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		size;
	char	*result;
	int		loc;

	size = 0;
	loc = 0;
	if (beggining(s1, set) < 0)
		return (strtrimproblemchecker(0));
	while (s1[size] != 0)
		size++;
	result = malloc(ending(s1, set, size) - beggining(s1, set) + 1);
	if (!result)
		return (NULL);
	while (loc + beggining(s1, set) < ending(s1, set, size))
	{
		result[loc] = s1[loc + beggining(s1, set)];
		loc++;
	}
	result[loc] = 0;
	return (result);
}

/*
#include <stdio.h>
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}





int	main(void)
{
	char	*strtrim;

// =============== HERE ===============
	int arg = 6;
// =============== HERE ===============

	if (arg == 1)
	{
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		if (!(strtrim = ft_strtrim(s1, " ")))
			printf("NULL");
		else
			printf(" *%s*\n ", strtrim);
		if (strtrim == s1)
			printf("\nA new string was not returned");
	}
	else if (arg == 2)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "te")))
			printf("NULL");
		else
			printf(" *%s*\n ", strtrim);
		if (strtrim == s1)
			printf("\nA new string was not returned");
	}
	else if (arg == 3)
	{
		char s1[] = " lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "l ")))
			printf("NULL");
		else
			printf(" *%s*\n ", strtrim);
		if (strtrim == s1)
			printf("\nA new string was not returned");
	}
	else if (arg == 4)
	{
		char s1[] = "lorem ipsum dolor sit amet";
		if (!(strtrim = ft_strtrim(s1, "tel")))
			printf("NULL");
		else
			printf(" *%s*\n ", strtrim);
		if (strtrim == s1)
			printf("\nA new string was not returned");
	}
	else if (arg == 5)
	{
		char s1[] = "          ";
		if (!(strtrim = ft_strtrim(s1, " ")))
			printf("NULL");
		else
			printf(" *%s*\n ", strtrim);
		if (strtrim == s1)
			printf("\nA new string was not returned");
	}
	else if (arg == 6)
	{
		char s1[] = "1234567890987654321";
		if (!(strtrim = ft_strtrim(s1, "2431")))
			printf("NULL");
		else
			printf(" *%s*\n ", strtrim);
		if (strtrim == s1)
			printf("\nA new string was not returned");
	}
}
*/