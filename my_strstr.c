#include "my_libc.h"

char *
my_strstr(const char *haystack, const char *needle)
{
	size_t i;

	if (*needle == '\0')
		return ((char *)haystack);
	while (*haystack != '\0') {
		i = 0;
		while (needle[i] != '\0' && haystack[i] == needle[i])
			i++;
		if (needle[i] == '\0')
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
