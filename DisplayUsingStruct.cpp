#include <bits/stdc++.h>
using namespace std;
struct Node {
	public:
		int data;
		Node* next;
};

void printList (Node* n) {
	while(n != NULL) {
		cout << n->data <<  " ";
		n = n->next;
	}
}



int main() {
	Node* root = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	root = new Node;
	second = new Node;
	third = new Node;
	
	root->data = 1;
	root->next = second;
	
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	printList(root);
	return 0;
}
