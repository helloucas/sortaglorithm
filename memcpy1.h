#ifndef _MEMCPY_H
#define  _MEMCPY_H

#include<string>
#include<assert.h>
char *memcpy1(char *dest, char *src, int count)
{
	assert((dest!=NULL)&&(src!=NULL));
	if (dest == src)
		return src;
	char *d = dest;
	char *s = src;
	while (count-->0)
	{
		*d++ = *s++;
	}
	return dest;
}

#endif