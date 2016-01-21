
#include "nodes.h"

class bst
{
public:
	bst(tree_node* phead);
	~bst();


	tree_node* m_phead;
	void insert_node(int32_t node_val);
	void walk_tree();
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