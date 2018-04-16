#pragma once
#include "Node.h"

template <class T>
class Stack {
private:
	Node<T>* headNode;
	int size;
public:
	Stack();
	Stack(T firstNodeData);
	~Stack();
	void Push(T data);
	T Pop();
	void DisplayStackData();
	int GetSize();
	void ClearStack();
};

template<class T>
Stack<T>::Stack() : headNode(0), size(0)
{ }

template<class T>
Stack<T>::Stack(T firstNodeData)
{
	headNode = new Node<T>(firstNodeData);
	headNode->SetNextNode(0);
	size = 1;
}

template<class T>
Stack<T>::~Stack()
{
	ClearStack();
}

template<class T>
void Stack<T>::Push(T data)
{
	auto newNode = new Node<T>(data);

	if (size == 0) {
		headNode = newNode;
		headNode->SetNextNode(0);
	}
	else {
		newNode->SetNextNode(headNode);
		headNode = newNode;
	}
	size++;
}

template<class T>
T Stack<T>::Pop()
{
	if (size == 0)
	{
		cout << "The stack is empty." << endl;
		return 0;
	}
	else {
		T data = headNode->GetNodeData();
		auto temp = headNode;
		headNode = headNode->GetNextNode();
		temp->SetNextNode(0);
		delete temp;
		size--;
		return data;
	}
}

template<class T>
void Stack<T>::DisplayStackData()
{
	if (size == 0) {
		cout << "The stack is empty." << endl;
		return;
	}
	Node<T>* temp = headNode;
	for(int i = 0; i < size; i++){
		cout << temp->GetNodeData() << ", ";
		temp = temp->GetNextNode();
	}
	cout << "\n";
}

template<class T>
int Stack<T>::GetSize()
{
	return size;
}

template<class T>
void Stack<T>::ClearStack()
{
	while (size > 0) {
		Pop();
	}
	delete headNode;
}


