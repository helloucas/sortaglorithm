//首先生成一个文件， 用随机函数随机导入n个整数值，之后再调用排序算法，对文件里面的数字进行排序，
//之后再生成新的文件，将排序之后的数字导入新生成的文件中

#ifndef _FILE_H
#define _FILE_H
#include"stdafx.h"
#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<fstream>
#include"qksort.h"
#include"heapsort.h"
#include"bubblesort.h"
#include"binarysort.h"
#include"shellsort.h"
#include"straighinsert.h"
#include"mergesort.h"
//#define  MAX  20000

using namespace std;
int a[MAX];
int file()
{
	ofstream outfile("notorder.txt", ios::out);
	if (!outfile)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	srand((unsigned)time(NULL));
	for (int i = 0; i < MAX; i++)
	{
		outfile << rand()%MAX << "\t";
	}
	outfile.close();
	//--------------------input file----------------------------//
	ifstream infile("notorder.txt", ios::in | ios::_Nocreate);
	if (!infile)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	for (int i = 0; i < MAX; i++)
	{
		infile >> a[i];
	}





	//采用20000个随机数排序 测试各个排序算法性能 每个算法测试5次取其平均数 得到结果如下
	// 希尔排序>=堆排序>二分查找排序>直接插入排序>直接插入排序>冒泡排序
	mergesort(a, 0, MAX - 1);          //归并排序          0.713s
	//shellsort(a, MAX);      //希尔排序                        0.312s
	//binarysort(a, MAX);    //二分查找排序              0.634s
	//insertsort(a, MAX);     //直接插入排序              0.755s
	//qksort(a, 0, MAX);   //调用快速排序算法；       0.359s
	//bubblesort(a, MAX);  //调用冒泡排序              4.195s
	//heapsort(a, MAX - 1);   //堆排序                      0.325s





	infile.close();
	
	//--------------------------------------------------------//
	ofstream  out("order.txt", ios::out);
	if (!out)
	{
		cerr << "open error" << endl;
		exit(1);
	}
	for (int i = 0; i < MAX; i++)
	{
		out << a[i] << "\t";
	}
	out.close();
	return 0;
}
#endif