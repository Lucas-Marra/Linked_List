#ifndef LINKED
#define LINKED
#include "node.h"

class LinkedList {
	private:
		Node * head;
		Node * tail;
		int size;

	public:
		LinkedList();
		bool empty();
		void insertBegin(Node * x);
		void insertEnd(Node * x);
		void remove(int val);
		Node * createNode(int val);
		void print();
};

#endif