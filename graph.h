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

	graph(uint32_t v);
	uint32_t v();
	uint32_t e();

	void add_edge(uint32_t src, uint32_t dst);
	linked_list adj(uint32_t node);

};

graph::graph(uint32_t v)
{
	num_vertices = v;
	for (size_t i = 0; i < num_vertices; i++)
	{
		linked_list temp_ll(i);
		adj_list.push_back(temp_ll);
	}
}

void graph::add_edge(uint32_t src, uint32_t dst)
{
	adj_list[src].add_node(dst);
	adj_list[dst].add_node(src);
	num_edges++;
}

linked_list graph::adj(uint32_t node)
{
	return(adj_list[node]);
}