#ifndef STRCPY_H
#define STRCPY_H
#include<string>
#include<assert.h>
char *strcpy1(char *dest, char *src)
{
	assert((dest != NULL) && (src != NULL));
	char *a = dest;     //指针a是为了保存目标的指针 防止目标指针丢失
	while ((*a != '\0') && (*src != '\0'))
	{
		*a++ = *src++;
	}
	return  dest;
}


////(A)循环写成while (*dst++=*src++);明显是错误的。
//
//(B)循环写成while(*src != '\0') *dst++ = *src++;
//
//循环体结束后，dst字符串的末尾没有正确地加上'\0

//strcpy和memcpy主要有以下3方面的区别。
//1、复制的内容不同。strcpy只能复制字符串，而memcpy可以复制任意内容，例如字符数组、整型、结构体、类等。
//2、复制的方法不同。strcpy不需要指定长度，它遇到被复制字符的串结束符"\0"才结束，所以容易溢出。memcpy则是根据其第3个参数决定复制的长度。
//3、用途不同。通常在复制字符串时用strcpy，而需要复制其他类型数据时则一般用memcpy
#endif