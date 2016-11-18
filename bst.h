#ifndef _BST_H_
#define _BST_H_

#include "nodes.h"
#include <queue>
#include <iostream>

class bst
{
public:
	bst();
	bst(tree_node* phead);
	~bst();

	tree_node* m_phead;
	void insert_node(int32_t node_val);
	void print_bst();

private:
	void insert_node_r(tree_node* node, int32_t node_val);
	void print_bst_r(std::queue<tree_node*>& node_queue);
};

bst::bst()
{
	m_phead = NULL;
}

bst::bst(tree_node* phead)
{
	m_phead = phead;
}

bst::~bst()
{
	m_phead = NULL;
}

void bst::insert_node(int32_t node_val)
{
	insert_node_r(m_phead, node_val);

	std::cout << "Inserted " << node_val << " into the Binary Search Tree" << std::endl;
	
	std::cout << "Current tree is " << std::endl;
	print_bst();

}

void bst::insert_node_r(tree_node* node, int32_t node_val)
{
	//assert(node == nullptr);

	if (node_val >= node->data) //Right Sub Tree
	{
		if (node->right == NULL)
		{
			tree_node* new_node = new tree_node(node_val);
			new_node->parent = node;
			node->right = new_node;

			return;
		}
		else
		{
			insert_node_r(node->right, node_val);
		}
	}
	else //Left Sub Tree
	{
		if (node->left == NULL)
		{
			tree_node* new_node = new tree_node(node_val);
			new_node->parent = node;
			node->left = new_node;

			return;
		}
		else
		{
			insert_node_r(node->left, node_val);
		}
	}
}


void bst::print_bst()
{
	std::queue<tree_node*> node_queue;

	node_queue.push(m_phead);

	print_bst_r(node_queue);
}

void bst::print_bst_r(std::queue<tree_node*>& node_queue)
{
	if (node_queue.size() == 0) //Stop condition for recursion
	{
		return;
	}

	std::queue<tree_node*> temp_node_queue;

	while(node_queue.size() > 0)
	{
		if (node_queue.front() == NULL)
		{
			node_queue.pop();
			continue;
		}
		std::cout << node_queue.front()->data << " " ;
		
		temp_node_queue.push(node_queue.front()->left);
		temp_node_queue.push(node_queue.front()->right);

		node_queue.pop();
	}

	std::cout << std::endl;
	print_bst_r(temp_node_queue);
}




#endif
