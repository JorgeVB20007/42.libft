/*#include <stdlib.h>
#include <stdio.h>

char	**fillcolumns(char **result, int verti, char c, char const *s)
{
	int	cntr;
	int	hcntr;
	int	horiz;

	cntr = 0;
	hcntr = 0;
	horiz = 0;
	printf("Verti = %d\n", verti);
	while (hcntr <= verti)
	{
		while (s[cntr] != c && s[cntr] != 0)
		{
			printf("/%c/", s[cntr]);
			horiz++;
			cntr++;
		}
		result[hcntr] = malloc(horiz + 1);
		result[hcntr][horiz] = 0;
		printf(" *%d.%d* ", hcntr, horiz);
		cntr++;
		hcntr++;
		horiz = 0;
	}
	result[hcntr] = malloc(1);
	return (result);
}

char	**fillcontent(char **result, char c, char const *s)
{
	int	verti;
	int	horiz;
	int	cntr;

	verti = 0;
	horiz = 0;
	cntr = 0;
	while (s[cntr] != 0)
	{
		printf(".");
		if (s[cntr] == c)
		{
			printf(" +v%d h%d", verti, horiz);
//			result[verti][horiz] = '\0';
			printf(":D");
			printf("\n---> %s ", result[verti]);
			verti++;
			horiz = 0;
			printf("\nVerti: %i, Horiz: %i, Cntr: %i\n", verti, horiz, cntr);
		}
		else
		{
			result[verti][horiz] = s[cntr];
			printf("\n - %c ", result[verti][horiz]);
			horiz++;
		}
		printf("  v%d h%d", verti, horiz);
		cntr++;
		printf("^^");
	}
	return (result);
}

char	**ft_split(char const *s, char c)
{
	int		verti;
	int		horiz;
	int		cntr;
	int		hcntr;
	char	**result;

	verti = 0;
	horiz = 0;
	cntr = 0;
	hcntr = 0;
	while (s[cntr] != '\0')
	{
		if (s[cntr] == c)
			verti++;
		cntr++;
	}
	result = malloc(verti + 2);
	result = fillcolumns(result, verti, c, s);
	result = fillcontent(result, c, s);
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
{/*
	char	**a;

	a = ft_split("uno.dos.tres.cuatro", '.');
	printf("0 -  %s\n", a[0]);
	printf("1 -  %s\n", a[1]);
	printf("2 -  %s\n", a[2]);
	printf("3 -  %s\n", a[3]);*/
	char	**tabstr;
	int		i = 0;

	if (!(tabstr = ft_split("aaaa.bbbb.cccc.dddd", '.')))
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
*/