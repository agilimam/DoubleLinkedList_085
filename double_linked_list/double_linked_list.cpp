#include<iostream>
#include<string>
using namespace std;

class Node {
public:
	int noMhs;
	string name;
	Node* name;
	Node* prev;
};

class DoubleLinkedList {
private:
	Node* START = NULL;
public:
	void addNode();
	bool search(int rollNo, Node** previous, Node** current);
	bool deleteNode(int rollNo);
	bool ListEmpety();
	void traverse();
	void revtraverse();
	void hapus();
	void searchData();
};

void DoubleLinkedList::addNode() {
	int nim;
	string nm;
	cout << "\nEnter the roll number of the secret: ";
	cin >> nm;
	cout << "\nEnter the name of the student: ";
	cin >> nm;

}


