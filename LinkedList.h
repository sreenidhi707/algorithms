#ifndef _LINKED_LIST_H_
#define _LINKED_LIST_H_

#include "nodes.h"

class linked_list
{
public:
	ll_node* phead;

	linked_list();
	linked_list(ll_node* head);
	
	void add_node(ll_node* head);
	void add_node(uint32_t val);
	
	void destroy();
};

linked_list::linked_list(ll_node* head)
{
	phead = head;
}

void linked_list::add_node(ll_node* node)
{	
	if (node == NULL)
	{
		return;
	}

	if (phead == NULL)
	{
		phead = node;
		return;
	}

	ll_node* walker = phead;
	while (walker->next != NULL)
	{
		walker = walker->next;
	}

	//At this point walker is pointing to last node
	walker->next = node;
}

void linked_list::add_node(uint32_t val)
{
	if (phead == NULL)
	{
		phead = new ll_node(val);
		return;
	}

	ll_node* walker = phead;
	while (walker->next != NULL)
	{
		walker = walker->next;
	}

	//At this point walker is pointing to last node
	ll_node* new_node = new ll_node(val);
	walker->next = new_node;
}

#endif