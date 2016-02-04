#ifndef _BST_H_
#define _BST_H_

#include "nodes.h"
#include <queue>
#include <iostream>

class bst
{
public:
	bst(tree_node* phead);
	~bst();


	tree_node* m_phead;
	void insert_node(int32_t node_val);
	//void walk_tree();
private:
	void insert_node(tree_node* node, int32_t node_val);
};

bst::bst(tree_node* phead)
{
	m_phead = phead;

}

bst::~bst()
{
	m_phead = nullptr;
}

void bst::insert_node(int32_t node_val)
{
	insert_node(this->m_phead, node_val);
}

void bst::insert_node(tree_node* node, int32_t node_val)
{
	//assert(node == nullptr);

	if (node_val >= node->data) //Right Sub Tree
	{
		if (node->right == nullptr)
		{
			tree_node* new_node = new tree_node(node_val);
			new_node->parent = node;
			node->right = new_node;

			return;
		}
		else
		{
			insert_node(node->right, node_val);
		}
	}
	else //Left Sub Tree
	{
		if (node->left == nullptr)
		{
			tree_node* new_node = new tree_node(node_val);
			new_node->parent = node;
			node->left = new_node;

			return;
		}
		else
		{
			insert_node(node->left, node_val);
		}
	}
}


void print_bst_r(std::queue<tree_node*>& node_queue)
{
	if (node_queue.size() == 0) //Stop condition for recursion
	{
		return;
	}

	std::queue<tree_node*> temp_node_queue;

	while(node_queue.size() > 0)
	{
		if (node_queue.front() == nullptr)
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

void print_bst(tree_node * pHead)
{
	std::queue<tree_node*> node_queue;

	node_queue.push(pHead);

	print_bst_r(node_queue);
}


#endif
