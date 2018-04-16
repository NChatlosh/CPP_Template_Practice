#pragma once

template <class T>
class Node {
private:
	T data;
	Node<T>* nextNode;
public:
	Node(T input);
	T GetNodeData();
	Node<T>* GetNextNode();
	void SetNextNode(Node<T>* nextNode);
};

template<class T>
Node<T>::Node(T input) : data(input)
{
	nextNode = nullptr;
}

template<class T>
T Node<T>::GetNodeData()
{
	return data;
}

template<class T>
Node<T>* Node<T>::GetNextNode()
{
	return nextNode;
}

template<class T>
void Node<T>::SetNextNode(Node<T>* node)
{
	nextNode = node;
}
