#include "my_libc.h"

char *
my_strncpy(char *dst, const char *src, size_t n)
{
	char *original_dst;

	original_dst = dst;
	while (n > 0 && *src != '\0') {
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	while (n > 0) {
		*dst = '\0';
		dst++;
		n--;
	}
	return (original_dst);
}
