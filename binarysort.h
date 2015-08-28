#ifndef BINARYSORT_H
#define BINARYSORT_H
void  binarysort(int a[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int  temp = a[i];                        //temp保存待要排序的数字
		int  low = 0, high = i - 1;
		while (low<=high)
		{
			int mid = (low + high) / 2;
			if (temp <= a[mid])
				high = mid - 1;
			else
				low = mid + 1;                          
		}                                                  //while循环中先找到a[i]将要插入到哪里  最后回定格到high+1处；
		for (int j = i - 1; j >= high + 1; j--)                   //从high+1到j-1处所有数据向后移动
		{
			a[j + 1] = a[j];
		}
		a[high + 1] = temp;
		//or   a[j+1]=temp;             the same to up;
	}
}
#endif

//二分插入排序