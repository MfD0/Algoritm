#pragma once
#include <iostream>
#include <string>
#include <ctime>
using namespace std;


class QUEUE
{
private:
	
	int size, newElement, first;
	int* queue;
	bool empty;


public:


	void create();
	void Print();

	void MAKENULL();
	bool EMPTY();
	int FRONT();
	void ENQUEUE();
	void DEQUEUE();

	QUEUE();
	~QUEUE();

};

QUEUE::QUEUE()
{
	newElement = 0;
	empty = false;
	size = 5;
	srand(time(NULL));
	first = 0;
	queue = new int[size];

	for (int i = 0; i < size; i++)
	{
		queue[i] = 1 + rand() % 20;
	}

}

QUEUE::~QUEUE()
{
}


void QUEUE::Print()
{
	cout << "Queue: ";
	for (int i = 0; i < size; i++)
	{
		cout << queue[i] << " ";
	}
	cout << endl;	
}

//****************************

void QUEUE::MAKENULL()
{
	for (int i = 0; i < size; i++)
	{
		queue[i] = 0;
	}
	size = 0;
	cout << "Queue deleted" << endl;
}

bool QUEUE::EMPTY()
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
}

int QUEUE::FRONT()
{

	for (int i = 0; i < size; i++)
	{
		first++;
	}
	first--;
	cout << "First element: " << queue[first] << endl;
	first = 0;
	
	return queue[first];
}

void QUEUE::ENQUEUE()
{

	cout << "Enter new element: ";
	cin >> newElement;
	cout << endl;
	for (int i = size; i > 0; i--)
	{
		queue[i] = queue[i - 1];
	}
	queue[0] = newElement;
	size++;
	cout << "Element added" << endl;
}

void QUEUE::DEQUEUE()
{
	size--;
}