#include "my_libc.h"

int
my_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *u1;
	const unsigned char *u2;

	if (n == 0)
		return (0);
	u1 = (const unsigned char *)s1;
	u2 = (const unsigned char *)s2;
	while (n > 1 && *u1 != '\0' && *u1 == *u2) {
		u1++;
		u2++;
		n--;
	}
	return (*u1 - *u2);
}
