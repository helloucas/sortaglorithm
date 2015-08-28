#ifndef SHELL_H
#define SHELL_H
#include"swap1.h"
void  shellsort(int a[],int n)
{
	for (int gap = n / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < n; i++)
		{
			for (int j = i - gap; j >= 0 && (a[j] > a[j + gap]); j -= gap)
			{
				swap1(a[j], a[j + gap]);
			}
		}
	}

}
#endif