#include <vector>
#include <list>
class Graph_BFS {
	std::vector<std::list<int>> vertices_vector;
	int vertex_count;
public:
	Graph_BFS(int vertex_count);
	void addEdge(int vertex1, int vertex2);
	void BFS(int root);
};
Graph_BFS::Graph_BFS(int vertex_count){
	this->vertex_count=vertex_count;
	vertices_vector.resize(vertex_count);
}
void Graph_BFS::addEdge(int vertex1, int vertex2){
	vertices_vector[vertex1].push_back(vertex2);
}
void Graph_BFS::BFS(int root) {
	std::vector<bool> visited;
	std::list<int> queue;
	visited.resize(vertex_count);
	queue.push_back(root);

	while(!queue.empty()){
		root = queue.front();
		queue.pop_front();
		std::cout << root << " ";
		for(auto vertex: vertices_vector[root]){
			if(!visited[vertex])
			{
				visited[vertex] = true;
				queue.push_back(vertex);
			}
		}
	}
}