//快排要从两端开始比较  不是从一边开始比较
//要想理解递归 必须先理解递归
#ifndef _QKSORT_H
#define _QKSORT_H
#include<iostream>
#include"swap1.h"
#include"display.h"
using namespace std;
// 这是快速排序第一种方法
int qksort(int a[], int left, int right)
{
	if (left > right)
		return 1;                             //因为就在原来的数组上进行排序所以 return语句不需要做什么
	int i = left;
	int j = right;
	int temp = a[left];
	while (i != j)
	{
		while (a[j]>=temp&&j>i)
			j--;
		while (a[i]<=temp&&i<j)
		{
			i++;
        }
		swap1(a[i], a[j]);
	
	}
	swap1(a[left], a[i]);

	//if (left == right)
	//	return  1;
	//else
	//{
		qksort(a, left, i - 1);
		qksort(a, i + 1, right);
	//}
	return 0;
	/*qksort(a, left, i - 1);
	qksort(a, i + 1, right);*/ 
	// 想用递归  但是递归的时候没有结束值， 就会无限运算占用内存 ， 递归必须有返回值。
}
//----------------------------------------------------------------------//
//这是快速排序第二种方法

//int partition(int a[], int p, int r)
//{
//	int i,j;
//	int x = a[r];
//	for ( i = p - 1, j = p; j < r; j++)
//	{
//		if (a[j] <= x)
//		{
//			i++;
//			swap1(a[i], a[j]);
//		}
//	}
//	swap1(a[i+1], a[r]);
//	return i + 1;
//}
//int qksort(int a[], int p, int r)
//{
//	int q;
//	if (p < r)
//	{
//		q = partition(a, p, r);
//		qksort(a, p, q - 1);
//		qksort(a, q + 1, r);
//	}
//	return 0;
//}
#endif