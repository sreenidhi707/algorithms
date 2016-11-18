// Algorithms.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "test_functions.h"
#include "nodes.h"
#include "bst.h"


int main(int argc, char* argv[])
{

	tree_node node(8);

	bst bst_obj(&node);

	bst_obj.insert_node(3);
	bst_obj.insert_node(1);
	bst_obj.insert_node(6);
	bst_obj.insert_node(4);
	bst_obj.insert_node(7);
	bst_obj.insert_node(10);
	bst_obj.insert_node(14);
	bst_obj.insert_node(13);

	bst_obj.print_bst();
	return 0;
}

