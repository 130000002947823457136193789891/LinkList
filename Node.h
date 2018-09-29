#include<iostream>

struct Node
{
	int data;
	Node *next;

	Node();
	Node(const int &e,Node *p=NULL);
};

Node::Node()
{
	next=NULL;
}

Node::Node(const int &e,Node *p=NULL)
{
	data=e;
	next=p;
}

