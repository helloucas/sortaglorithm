#ifndef _STACK_H
#define _STACK_H

struct item
{
	int  data;                   //存储数据
	item  *next;            //栈的指针
};                                 //栈的数据结构
class stack1
{
public:
	stack1();
	~stack1();
	void push(int x);
	int  pop();
	int  isempty();
	int  size()  const;
	void  clear();

private:
	item  *top;   //栈顶
};


#endif

