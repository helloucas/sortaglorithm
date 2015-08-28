#ifndef SORT_H
#define SORT_H
#include<iostream>
#include"swap1.h"
using  namespace std;

void  sort(int *a,int n)
{
	for (int i = 1; i <= n; i++)
	{
		swap1(a[a[i]],a[i]);
	}
}

// 将一个n个数并且值为1-n都不相等的数组排序  时间复杂度为0（n） 空间复杂度为0（1）

#endif