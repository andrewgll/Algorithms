#include <iostream>
#include <map>
#include <vector>
#include <list>
//works for connected edges only
class Graph_DFS{
public:
	std::map<int, bool> visited;
	std::map<int, std::list<int>> vertex_map;
	void addEdge(int vertex1, int vertex2);
	void DFS(int root);
};
void Graph_DFS::addEdge(int vertex1,int vertex2) {
	vertex_map[vertex1].push_back(vertex2);
}
void Graph_DFS::DFS(int root){
	visited[root] = true;
	std::cout << root << " ";
	std::list<int>::iterator i;
	for(i = vertex_map[root].begin(); i != vertex_map[root].end();++i){
		if(!visited[*i]){
			DFS(*i);
		}
	}
}
