#include "my_libc.h"

char *
my_strcat(char *dst, const char *src)
{
	char *original_dst;

	original_dst = dst;
	while (*dst != '\0')
		dst++;
	while (*src != '\0') {
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0';
	return (original_dst);
}
