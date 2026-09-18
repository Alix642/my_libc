#include "my_libc.h"

char *
my_strcpy(char *dst, const char *src)
{
	char *original_dst = dst;

	while (*src != '\0') {
		*dst = *src;
		dst++;
		src++;
	}

	*dst = '\0';

	return original_dst;
}
