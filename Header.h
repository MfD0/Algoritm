#pragma once
#include <iostream>
#include <ctime>
using namespace std;


class STACK
{
private:

	int size, newElement;
	int* stack;
	bool empty;


public:

	STACK();
	~STACK();
	void Print();

	//**************
	
	void MAKENULL();
	int TOP();
	void POP();
	void PUSH();
	bool EMPTY();



};

STACK::STACK()
{
	size = 5;
	newElement = 0;
	stack = new int[size];
	empty = true;

	for (int i = 0; i <size; i++)
	{
		stack[i] = 1 + rand() % 25;
	}

}

STACK::~STACK()
{
	MAKENULL();
	delete[] stack;
}

void STACK::Print()
{
	for (int i = 0; i < size; i++)
	{
		cout << stack[i] << " ";
	}
	cout << endl;
}

//***********************

void STACK::MAKENULL()
{	
	for (int i = 0; i < size; i++)
	{
		stack[i] = 0;
	}
	size = 0;
	cout << "Steak devastated" << endl;
}

int STACK::TOP()
{
	cout << "First element: ";
	cout << stack[0] << endl;

	return stack[0];
}

void STACK::POP()
{
	for (int i = 0; i < size; i++)
	{
		stack[i] = stack[i + 1];
	}
	size--;
	cout << "Element removed" << endl;
}

void STACK::PUSH()
{
	cout << "Enter new element: ";
	cin >> newElement;
	cout << endl;
	for (int i = size; i > 0; i--)
	{
		stack[i] = stack[i - 1];
	}
	stack[0] = newElement;
	size++;
	cout << "Element added" << endl;
}

bool STACK::EMPTY()
{
	if (size>0)
	{
		empty = false;
		return false;
	}
	else
	{
		empty = true;
		return true;
	}
	

	return false;
}