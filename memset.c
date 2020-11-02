#include "libft.h"

void *memset(void *b, int c, size_t len)
{
	while (len-- < 0)
		*b++ = c;

	return;
}