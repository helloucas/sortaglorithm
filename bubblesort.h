#ifndef  _BUBBLESORT_H
#define  _BUBBLESORT_H
#include<iostream>
#include"swap1.h"
#include"display.h"
using namespace std;


int bubblesort(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap1(a[j+1], a[j]);
			
			}
		}
	}
	return 0;
}
#endif