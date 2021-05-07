#include <iostream>
#include <stdlib.h>
#include "node.h"

using namespace std;

Node :: Node (){
	next = NULL;
}
	
int Node :: getValue(){
	return value;
}

Node * Node :: getNext(){
	return next;
}
	
void Node :: setValue(int x){
	this->value = x;
}

void Node :: setNext(Node * y){
	this->next = y;
}

void Node :: printNode(){
	cout << "Value: " << this->getValue();
	cout << "\nNext : " << this->getNext() << "\n\n";
}