#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		a;
	char	*l;
	int		b;

	a = 0;
	l = (char *)s;
	b = 0;
	if (s[0] == '\0')
		return (&l[0]);
	while (l[a] != 0)
		a++;
	if (c == 0)
		return (&l[a]);
	a--;
	while (l[a] != c)
	{
		if (a <= 0)
		{
			return (NULL);
		}
		a--;
	}
	return (&l[a]);
}
/*
#include <stdio.h>
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


int main()
{
	char *str;
	char str2[] = "bonjour";
	if (!(str = strrchr(str2, 'o')))
		ft_print_result("NULL");
	else
	{
		if (!(str = ft_strrchr(str2, 's')))
			ft_print_result("NULL");
		else
			ft_print_result(str);
	}

}
*/