#include "libft.h"
#include <stdio.h>
int countrows(char const *s, char c)
{
	int a;
	int rows;

	a = 0;
	rows = 0;
	while (s[a] != 0)
	{
		if (s[a] == c)
			rows++;
		a++;
	}
	rows++;
	printf("%d\n", rows);
	return (rows);
}

char **createcolumns(char const *s, char c, char **result)
{
	int a;
	int v;
	int h;

	a = 0;
	v = 0;
	h = 0;
	while (s[a] != 0)
	{
		if (s[a] == c)
		{
			result[v] = malloc(h + 1);
			v++;
			h = -1;
			printf("%d\n", v-1);
		}
		h++;
		a++;
	}
	result[v] = NULL;
	return (result);
}

char **fillcolumns(char const *s, char c, char **result)
{
	int a;
	int v;
	int h;

	a = 0;
	v = 0;
	h = 0;
	while (s[a] != 0)
	{
		if (s[a] == c)
		{
			result[v][h] = 0;
			v++;
			h = -1;
		}
		else
		{
			printf("\n %d %d %c", v, h, s[a]);
			result[v][h] = s[a];
		}
		a++;
		h++;
	}
	return (result);
}



char **ft_split(char const *s, char c)
{
	int rows;
	char **result;

	if (s[0] == 0)
		return (NULL);
	if (c == 0)
		return (NULL);
	rows = countrows(s, c);
	result = malloc(rows + 1);
	printf("%s / %s / %s / %s\n", result[0], result[1], result[2], result[3]);
	result = createcolumns(s, c, result);
	result = fillcolumns(s, c, result);
	return (result);

}



#include <unistd.h>
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
	char	**tabstr;
	int		i = 0;

	if (!(tabstr = ft_split("aaaa.bbbb.cccc", '.')))
		ft_print_result("NULL");
	else
	{
		while (tabstr[i] != NULL)
		{
			ft_print_result(tabstr[i]);
			write(1, "\n", 1);
			i++;
		}
	}

}