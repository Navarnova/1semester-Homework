#include<iostream>
#include"linkedlist.h"

using namespace std;

int main(int atgc, char*argv[])
{
	LinkedList list;
	cout << list << endl;
	list.pushHead(1);
	list.pushHead(3);
	list.pushTail(0);
	list.pushHead(0);
	list.pushTail(-1);
	cout << list << endl;
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << "poped : " << list.popHead() << endl;
	cout << "poped : " << list.popTail() << endl;
	cout << list << endl;
	list.pushHead(13);
	list.pushTail(-5);
	list.insert(-1, 2);
	cout << list << endl;
	cout << "extracted : " << list.extract(2) << endl;
	cout << "extracted : " << list.extract(1) << endl;
	list.pushHead(85);
	list.pushHead(7);
	list.pushTail(0);
	list.insert(3, 4);
	cout << list << endl;
	list.swap(2, 5);
	cout << list << endl;

	return EXIT_SUCCESS;
}