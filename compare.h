#ifndef COMPARE_H
#define COMPARE_H

template<class T>
T max(T &a, T &b)
{
	return  (a > b) ? a : b;
}

template<class T, class H>
H min(T &a, T& b)
{
	return (a > b) ? b : a;
}

template<class T, class H>
H  max1(T &a, T& b)
{
	return  (a > b) ? 1 : 0;
}

template<class T, class H>
H min1(T &a, T &b)
{
	return (a > b) ? 0 : 1;
}


#endif