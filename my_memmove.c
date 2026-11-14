#include "my_libc.h"

void *
my_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s) {
		while (len > 0) {
			*d = *s;
			d++;
			s++;
			len--;
		}
	} else if (d > s) {
		while (len > 0) {
			len--;
			d[len] = s[len];
		}
	}
	return (dst);
}
