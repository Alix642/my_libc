#include "my_libc.h"

static int
is_delim(char c, const char *delim)
{
	while (*delim != '\0') {
		if (*delim == c)
			return (1);
		delim++;
	}
	return (0);
}

char *
my_strtok(char *str, const char *delim)
{
	static char *save = NULL;
	char *token;

	if (str != NULL)
		save = str;
	if (save == NULL)
		return (NULL);
	while (*save != '\0' && is_delim(*save, delim))
		save++;
	if (*save == '\0') {
		save = NULL;
		return (NULL);
	}
	token = save;
	while (*save != '\0' && !is_delim(*save, delim))
		save++;
	if (*save != '\0') {
		*save = '\0';
		save++;
	} else
		save = NULL;
	return (token);
}
