#include "my_libc.h"

int
my_strcmp(const char *s1, const char *s2)
{
	const unsigned char *u1;
	const unsigned char *u2;

	u1 = (const unsigned char *)s1;
	u2 = (const unsigned char *)s2;
	while (*u1 != '\0' && *u1 == *u2) {
		u1++;
		u2++;
	}
	return (*u1 - *u2);
}
