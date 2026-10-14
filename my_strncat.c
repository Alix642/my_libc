#include "my_libc.h"

char *
my_strncat(char *dst, const char *src, size_t n)
{
        char *original_dst;

        original_dst = dst;
        while (*dst != '\0')
                dst++;
        while (n > 0 && *src != '\0')
        {
                *dst = *src;
                dst++;
                src++;
                n--;
        }
        *dst = '\0';
        return (original_dst);
}
