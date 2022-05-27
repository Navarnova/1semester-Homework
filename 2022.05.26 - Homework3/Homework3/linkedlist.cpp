#include "linkedlist.h"

LinkedList::~LinkedList()
{
	while (head != nullptr)
	{
		popHead();
	}
}

void LinkedList::pushHead(int element)
{
	head = new Node(element, head);
	if (tail == nullptr)
	{
		tail = head;
	}
	++count;
}

void LinkedList::pushTail(int element)
{
	if (tail == nullptr)
	{
		return pushHead(element);
	}
	tail->next = new Node(element);
	tail = tail->next;
	++count;
}

int LinkedList::popHead()
{
	if (head == nullptr)
	{
		return 0;
	}
	--count;
	Node* temp = head;
	int value = head->data;
	head = head->next;
	delete temp;
	if (head == nullptr)
	{
		tail = nullptr;
	}
	return value;
}

int LinkedList::popTail()
{
	if (tail == nullptr)
	{
		return 0;
	}
	if (head == tail)
	{
		return popHead();
	}
	Node* temp = head;
	while (temp->next != tail)
	{
		temp = temp->next;
	}
	--count;
	int value = tail->data;
	delete tail;
	tail = temp;
	temp->next = nullptr;
	return value;
}

void LinkedList::insert(int element, int index)
{
	Node* temp = head;
	for (int i = 0; i < index - 1; ++i)
	{
		temp = temp->next;
	}
	Node* bef;
	temp->next = new Node(element, bef);
	++count;
}

int LinkedList::extract(int index)
{
	Node* temp = head;
	if (head == nullptr)
	{
		return 0;
	}
	for (int i = 0; i < index - 1; ++i) 
	{
		temp = temp->next;
	}
	--count;
	Node* bef = temp->next;
	temp->next = bef->next;
	delete bef;
}

void LinkedList::swap(int index1, int index2)
{
	Node* temp1 = head;
	Node* temp2 = head;
	for (int i = 0; i < index1 - 1; ++i)
	{
		temp1 = temp1->next;
	}
	for (int i = 0; i < index2 - 1; ++i)
	{
		temp2 = temp2->next;
	}
	Node* element1 = temp1->next;
	Node* element2 = temp2->next;
	temp1->next = element2;
	temp2->next = element1;
}

std::ostream& operator<<(std::ostream& stream, const Node& node)
{
	stream << node.data;
	return stream;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
	stream << "[" << list.count << "] : { ";
	Node* temp = list.head;
	while (temp != nullptr)
	{
		stream << *temp << " ";
		temp = temp->next;
	}
	stream << "}";
	return stream;
}