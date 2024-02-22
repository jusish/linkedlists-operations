#include <bits/stdc++.h>
using namespace std;
class Node {
	public:
		int data;
		Node* next;
};

int countList (Node* head) {
	int count = 0;
	while(head) {
		count++;
		head = head->next;
	}
	return count;
}



int main() {
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	
	head = new Node;
	second = new Node;
	third = new Node;
	
	head->data = 1;
	head->next = second;
	
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = NULL;
	
	printList(head);
	return 0;
}
