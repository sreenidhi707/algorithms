#pragma once

#include <stdint.h>
#include <vector>
#include "LinkedList.h"

using namespace std;

class graph
{
	uint32_t num_vertices;
	uint32_t num_edges;
	vector<linked_list> adj_list;

	graph(uint32_t V);
	uint32_t V();
	uint32_t E();

	void add_edge(uint32_t src, uint32_t dst);

};

graph::graph(uint32_t v)
{
	num_vertices = v;
	for (size_t i = 0; i < num_vertices; i++)
	{
		linked_list temp_ll;
		adj_list.push_back(temp_ll);
	}
}

void graph::add_edge(uint32_t src, uint32_t dst)
{
	/*adj_list[src].val = src;
	graph_node* temp = new graph_node(dst);
	adj_list[src].next = temp;

	adj_list[dst].val = dst;
	graph_node* temp = new graph_node(src);
	adj_list[dst].next = temp;*/
}