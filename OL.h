#ifndef __OL_H__
#define __OL_H__

#include "Node.h"

class OL {
	private:
		Node *front;
		void printList(Node* n);
	public:
		OL();
		~OL();
		void insert(int v);
		void remove(int v);
		void print();
};

#endif
