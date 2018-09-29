#include "Node.h"
#include <iostream>

class LinkList
{
public:
	LinkList();
	LinkList(const int *elems,int n);
	~LinkList();
	LinkList(const LinkList &other);
	LinkList & operator=(const LinkList &other);
	void Clear();
	void Traverse(const (*visit)(int & e));
	int GetLength();
	int InsertElem(const int &e);
	int InsertElem(int i,const int &e);
	int DeleteElem(int i,int &e);
	int LocateElem(const int &e);
	int GetElem(int i,int &e);
	int SetElem(int i,const int &e);

protected:
	Node *head;
	int length;
};

LinkList::LinkList()
{
	head=new Node;
	length=0;
}

LinkList::LinkList(const int *elems,int n)
{
	head=new Node;
	Node *p=head;
	for(int i=0;i<n;i++)
	{
		p->next=new Node;
		p=p->next ;
	}
	length=n;
}

LinkList::Clear ()
{
	length=0;
	p=new Node;
	while(p)
	{
		head->next=p->next;
		delete p;
		head->next =NULL;
	}
}

void LinkList::Traverse(const (*visit)( int &e ))
{
		
}