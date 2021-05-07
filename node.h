#ifndef NODE
#define NODE

class Node {
	private:
		int value;
		Node * next;
		
	public:
		Node();
		int getValue();
		Node * getNext();														
		void setNext(Node * y);														
		void setValue(int x);														
		void printNode();															
};

#endif