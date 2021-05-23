#include <stdlib.h>
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*memcpy(void *dst, const void *src, size_t n);
void	*memccpy(void *dst, const void *src, int c, size_t n);
void	*memmove(void *dst, const void *src, size_t len);
void	*memchr(const void *s, int c, size_t n);
int		memcmp(const void *s1, const void *s2, size_t n);
size_t	strlen(const char *s);
size_t	strlcpy(char *dst, const char *src, size_t dstsize);
size_t	strlcat(char *dst, const char *src, size_t dstsize);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
char	*strnstr(const char *haystack, const char *needle, size_t len);
int		strncmp(const char *s1, const char *s2, size_t n);
int		atoi(const char *str);
int		isalpha(int c);
int		isdigit(int c);
int		isalnum(int c);
int		isascii(int c);
int		isprint(int c);
int		toupper(int c);
int		tolower(int c);
void	*calloc(size_t count, size_t size);
char	*strdup(const char *s1);


