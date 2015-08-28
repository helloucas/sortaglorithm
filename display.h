#ifndef _DISPLAY_H
#define _DISPLAY_H
#include<iostream>
using namespace std;
template<class T,class H>
T display(H a[], T n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
	return 0;
}
#endif