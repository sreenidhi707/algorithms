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
	class tree_node* parent;
	class tree_node* left;
	class tree_node* right;

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

#endif

