// 字符串倒置。。

#ifndef  REVERSE_WORD_H
#define REVERSE_WORD_H
#include<iostream>
#include"swap1.h"
using namespace std;
//char* reverseword(char *src)
//{
//	char *dest = NULL;
//	int len = strlen(src);
//	dest = (char *)malloc(len);
//	char *d = dest;   //保护目标指针不被改变  好传送回去
//	char  *s = &src[len-1];    //从源字符串的最后一位地址开始 
//	while (len--!=0)
//	{
//		*d++ = *s--;
//	}
//	return  dest;
//}



//-------------------另一种方法原地反转----------------------------//
void revese2(char a[], int n)
{
	for (int i = 0, j = n-2; i < j; i++, j--)    //为什么j=n-2  因为字符串数组最后一个符号为'\0' 要保留这个符号  也要忽略这个符号
	{
		swap1(a[i],a[j]);
	}
}
#endif