#include "stdafx.h"
#include <iostream>
#include "bst.h"
#include <queue>

void print_bst_r(std::queue<tree_node*>& node_queue)
{
	std::queue<tree_node*> temp_node_queue;


	for (size_t i = 0; i < node_queue.size(); i++)
	{
		if (node_queue.front() == nullptr)
		{

		}
		std::cout << node_queue.front() << std::endl;
	}
}

void print_bst(tree_node * pHead)
{
	std::queue<tree_node*> node_queue;

	node_queue.push(pHead);

	print_bst_r(node_queue);
}
