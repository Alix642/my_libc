#include "my_libc.h"

char *
my_strchr(const char *s, int c)
{
	char target;

	target = (char)c;
	while (*s != '\0') {
		if (*s == target)
			return ((char *)s);
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return (NULL);
}
