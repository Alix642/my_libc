#include "my_libc.h"

void *
my_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	while (len > 0) {
		*d = *s;
		d++;
		s++;
		len--;
	}
	return (dst);
}
