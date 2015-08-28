#ifndef _QUEUE_H
#define _QUEUE_H
#include"stdafx.h"
//#define   MAX  1000
//#include<iostream>
//using namespace  std;

class queue
{
public:
	int initqueue();       //队列初始化
	int pop();                  //出队操作
	int  push(int a);             //入队操作
	int isempty();          //判断队列是否为空
	int  isfull();              //判断队列是否为满
private:
	int   data[MAX];
	int  head;
	int  tail;
};



#endif