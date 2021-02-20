#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 6

int stack[MAXSIZE];
int top = -1;

int isfull()
{
	printf("value of top = %d & MAXSIZE = %d\n", top, MAXSIZE);
	if (top == MAXSIZE-1 || !MAXSIZE)
	{
		return 1;
	} else {
		return 0;
	}
}

int isempty()
{
	if (top == -1)
	{
		return 1;
	} else {
		return 0;
	}
}

int peek()
{
	if(!isempty())
	{
		return stack[top];
	} else {
		printf("Stack is empty, nothing to peek\n");
	i//	return;
	}
}

void pop()
{
	if (!isempty())
	{
		printf("top value = %d\n", top);
		printf("Pop value = %d\n" stack[top--]);
	} else {
		printf("Stack is empty, nothing to pop\n");
//                return;
        }
}

void push(int data)
{
	if (!isfull())
	{
		stack[++top] = data;
	} else {
		printf("Stack is full, cannot push the data\n");
	}
	return;
}

int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);
	push(6);
	push(7);
	push(7);
	push(7);

	printf("Number of elements in the stack = %ld\n", sizeof(stack)/sizeof(stack[0]));

	printf("Peek the stack = %d\n", peek());

	while (!isempty())
	{
		printf("Popped values = %d\n", pop());
	}
	printf("value of top = %d\n", top);
	printf("Popped after while = %d\n", pop());

	return 0;
}
