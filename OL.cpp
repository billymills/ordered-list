#include "Node.h"
#include "OL.h"
#include <iostream>

using std::cout;
using std::endl;

OL::OL(){
	front = 0;
}

OL::~OL(){

}

void OL::insert(int v){
	Node* newNode = new Node(v);
	if (front == 0){
		front = newNode;
	}
	else {
		Node* curr = front;
		Node* prev = 0;
		while (curr != 0 && curr->getValue() <= v){
			prev = curr;
			curr = curr->getNext();
		}	
		prev->setNext(newNode);
		newNode->setNext(curr);
	}
}

void OL::remove(int v){
	while(front->getValue() == v){
		cout << "in while" << endl;
		front = front->getNext();
	}
	Node* curr = front;
	Node* prev = 0;
	while (curr != 0 && curr->getValue() != v){
		prev = curr;
		curr = curr->getNext();
	}
	if (curr != 0){
		prev->setNext(curr->getNext());
		if (prev->getNext()->getValue() == v){
			remove(v);
		}
	}
	delete curr;
}

void OL::print(){
	/*Node* curr = front;
	while (curr != 0){
		cout << curr->getValue() << endl;
		curr = curr->getNext();
	}
	*/
	printList(front);
}

void OL::printList(Node* n){
	if (n != 0){
		printList(n->getNext());
		cout << n->getValue() << endl;
	}
}
