//#include<iostream>
//using namespace std;
#ifndef _SWAP1_H
#define _SWAP1_H
template < class T > 
T  swap1(T &a, T&b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
	return 0;
}
#endif