#include <iostream>
#include <stdlib.h>
#include "linkedlist.h"
#include "node.h"
using namespace std;

LinkedList :: LinkedList(){
	this->head = NULL;
	this->tail = NULL;
	this->size = 0;
}

bool LinkedList :: empty(){
	return head == NULL && tail == NULL;	
}

void LinkedList :: insertBegin(Node * x){
	if (empty()){
		this->head = x;
		this->tail = x;
		this->size ++;
	}
	else {
		x->setNext(head);
		this->head = x;
		this->size ++;
	}
}

void LinkedList :: insertEnd(Node * x){
	
	if (empty()){
		this->head = x;
		this->tail = x;
		this->size ++;
	}
	else {
		this->tail->setNext(x);
		this->tail = x;
		this->size++;
	}
}

void LinkedList :: remove(int val){
	Node * cursor = this->head;
	if(val == head->getValue() && size == 1){
		this->size --;
		this->head = NULL;
		this->tail = NULL;
		delete cursor;                                                         
	}
	else if(val == head->getValue() && size != 1){
		this->head = cursor->getNext();
		this->size --;
		delete cursor;
	}
	else {
		while(cursor->getNext() != NULL && cursor->getNext()->getValue() != val){
			cursor = cursor->getNext();
		}
		if(cursor->getNext() == NULL){
			cout << "\nO valor informado nao se encontra na lista !";	
		}
		else if(cursor->getNext() == this->tail){
			this->tail = cursor;
			Node * aux = cursor->getNext();
			this->tail->setNext(NULL);
			delete aux;
			this->size --;
		}
		else{
			Node * aux = cursor->getNext();
			cursor->setNext(cursor->getNext()->getNext());
			delete aux;
			this->size --;
		}
	}
}
	
Node * LinkedList :: createNode(int val){
	Node * no = new Node();
	no->setValue(val);
	return no;
}

void LinkedList :: print(){
	Node * cursor = this->head;
	cout << "\nLista:\nTamanho: "<< this->size << "\n[ ";
	
	if(!empty()){
		for (int i = 0; i<this->size; i++){
			cout << cursor->getValue() << " -> ";
			cursor = cursor->getNext();
		}
		cout << "NULL ]\n\n";
	}
	else{
		cout << "NULL ]\n\n";
	}
}