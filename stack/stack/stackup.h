#pragma once
#include <cstdio>
const int MAX_STACK_SIZE = 20; 
class ArrayStack
{
	int top;
	int data[MAX_STACK_SIZE];
public:
	ArrayStack() { top = -1; }
	~ArrayStack() {}
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE - 1; }

	void push(int e) {
		if (isFull()) printf("���� ��ȭ ����");
		data[++top] = e;
	}


	int pop() {
		if (isEmpty()) printf("���� ���� ����");
		return data[top--];
	}
	int peek() {
		if (isEmpty()) printf("���� ���� ����");
		return data[top];
	}
	void display() {
		printf("[���� �׸��� �� =%2d] ==> ", top + 1);
		for (int i = 0; i <= top; i++)
			printf("<%2d>", data[i]);
		printf("\n");
	}
};