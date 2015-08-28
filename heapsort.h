#ifndef HEAP_SORT_H
#define HEAP_SORT_H
#include"swap1.h"
//二叉堆满足二个特性：
//1 父结点的键值总是大于或等于（小于或等于）任何一个子节点的键值。
//2 每个结点的左子树和右子树都是一个二叉堆（都是最大堆或最小堆）

//-------------------------堆的存储  ----------------------------------//
// 一般都用数组来表示堆，i结点的父结点下标就为(i – 1) / 2。
//它的左右子结点下标分别为2 * i + 1和2 * i + 2。如第0个结点左右子结点下标分别为1和2


//int parent(int i)
//{
//	return (i - 1) / 2;
//}
//int rightson(int i)
//{
//	return  2 * i + 2;
//}
//int  leftson(int i)
//{
//	return 2 * i + 1;
//}

void heapadjust(int a[], int s, int m)
{
	int j = s;
	int t = a[j];
	for (int k = 2 * j ; k <= m; k = k * 2 )                   //j为父节点  k为j的左孩子节点 从孩子节点开始建立小跟堆
	{
		if (k == m)                            //这是如果最后一个父节点只有一个左孩子的情况下
		{
			if (a[k] < t)                   //如果父节点比孩子几点大  
			{
				a[j] = a[k];                  //将孩子节点的值放到父节点中   其中父节点已经被保存到变量t中
				j = k;
			}
			else
				break;
		}
		else
		{
			if (a[k] > a[k + 1])                    //如果有右孩子的话  选出两个孩子最小的值
				k++;
			if (a[k] < t)
			{
				a[j] = a[k];
				j = k;
				//	k = 2 * j + 1;
			}
			else
			{
				break;
			}
		}
	}
	a[j] = t;
}

void heapbuild(int a[],int m)    //从最后一个节点的父亲开始建立堆 
{
	for (int j = m / 2; j >= 1; j--)  
		heapadjust(a, j, m);
}

void  heapsort(int a[], int m)
{
	heapbuild(a, m);
	for (int i = m ; i >= 1; i--)                    //从最后一个节点开始 把最后一个值和第一个值交换 然后 调节（1->i-1）的堆
	{
		swap1(a[1], a[i]);
		heapadjust(a, 1, i - 1);
	}
}


#endif