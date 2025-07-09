#include <iostream>
using namespace std;

class node {
	public:
		int value;
		node* next;
};
void display(node*n) {
	while (n!=NULL) {
		cout << n->value << endl;
		n = n->next;
	}
}
void freelist(node* first) {
	node* current = first;
	node* nextnode;
	while (current != NULL) {
		nextnode = current->next;
		delete current;
		current = nextnode;
	}
}
int main(void) {
	node* first = new node();
	node* second = new node();
	node* third = new node();

	first->value = 1;
	second->value = 2;
	third->value = 3;
	first->next = second;
	second->next = third;
	third->next = NULL;

	display(first);

	freelist(first);

}