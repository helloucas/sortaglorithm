#include"stdafx.h"
#include"stack.h"
#include<iostream>

using std::cout;
using std::endl;

stack1::stack1(): top(NULL){}       //使用初始化列表进行构造函数初始化   因为有指针 最好初始化   


stack1::~stack1()
{
	item  *dele;
	while (top)
	{
		dele = top;
		top = top->next;
		delete  dele;
	}
}                //有指针的话必须要在析构函数里面去删除指针 否则会留下野指针

int stack1::isempty()
{
	if (top == NULL)
		return 1;
	else
		return 0;
}

void stack1::push(int x)
{
	item *a = new item;
	a->data = x;
	a->next = NULL;
	if (isempty())
	{
		top = a;
		top->next = NULL;
	}
	else
	{
		a->next = top;
		top = a;                          //注意头插法 和尾插法的区别
	}
}

int stack1::pop()
{
	if (isempty())
	{
		cout << "the stack is empty, so instruct deny" << endl;
		return 0;
	}
	else
	{
		
		int x = top->data;
		top = top->next;
		return x;
	}
}

int stack1::size()  const
{
	int length=0;
//	//if (isempty())
//	{
//		return x = 1;   //当成员函数为常成员函数的时候 不能随便引用其他的非常成员 否则会出现错误
//	}
	item  *tmp = top;
	while (tmp)
	{
		++length;
		tmp = tmp->next;
    }
	return  0;
}


void stack1::clear()
{
	item  *del;
	while (top)
	{
		del = top;
		top = top->next;
		delete  top;
	}
}