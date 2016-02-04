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
	parent = nullptr;
	left = nullptr;
	right = nullptr;
}

tree_node::~tree_node()
{
	data = 0;

	assert(left != nullptr);
	assert(right != nullptr);

	delete left;
	left = nullptr;

	delete right;
	right = nullptr;
}

#endif

