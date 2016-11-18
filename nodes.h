#ifndef _NODES_H_
#define _NODES_H_

#include <stdint.h>
#include <assert.h>


class tree_node
{
public:
	tree_node(int32_t node_val);
	~tree_node();

	int32_t data;
	tree_node* parent;
	tree_node* left;
	tree_node* right;

};

tree_node::tree_node(int32_t node_val)
{
	data = node_val;
	parent = NULL;
	left = NULL;
	right = NULL;
}

tree_node::~tree_node()
{
	data = 0;

	assert(left != NULL);
	assert(right != NULL);

	delete left;
	left = NULL;

	delete right;
	right = NULL;
}


class ll_node
{
public:
	~ll_node();
	uint32_t data;
	ll_node(uint32_t node_val);
	ll_node* next;
};

ll_node::ll_node(uint32_t node_val)
{
	data = node_val;
	next = NULL;
}
#endif

