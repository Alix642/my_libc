#include "my_libc.h"

char *
my_strrchr(const char *s, int c)
{
	char target;
	const char *last;

	target = (char)c;
	last = NULL;
	while (*s != '\0') {
		if (*s == target)
			last = s;
		s++;
	}
	if (target == '\0')
		return ((char *)s);
	return ((char *)last);
}
