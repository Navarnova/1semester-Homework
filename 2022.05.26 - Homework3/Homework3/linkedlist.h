#pragma once
#include <ostream>

struct Node {
	int data;
	Node* next;
	Node(int data = 0, Node* next = nullptr) : data(data), next(next) {}
	Node(const Node& node) : data(data), next(next) {}
	~Node() {
		data = 0;
		next = nullptr;
	}
	friend std::ostream& operator<<(std::ostream& stream, const Node& node);
};

class LinkedList {
private:
	Node* head;
	Node* tail;
	int count;

public:
	LinkedList() : head(nullptr), tail (nullptr), count(0) {}
	~LinkedList();

	void pushHead(int element);
	void pushTail(int element);
	void insert(int element, int index);
	void swap(int index1, int index2);

	int popHead();
	int popTail();
	int extract(int index);

	friend std::ostream& operator<<(std::ostream& stream, const LinkedList& list);
};