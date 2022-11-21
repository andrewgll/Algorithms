#include <limits.h>
//vertices count
#define VCOUNT 9 

int minDistance(int dist[], bool sptSet[]){
	//init min value 
	int min = INT_MAX, min_index;

	for(int v = 0; v < VCOUNT; v++){
		if(sptSet[v] == false && dist[v] <= min)
		{
			min = dist[v], min_index = v;
		}
	}
	return min_index;
}

void printSolution(int dist[]){
	std::cout << "Vertex \t Distance from Source" << "\n";
	for(int i = 0; i < VCOUNT; ++i){
		std::cout << i << "\t\t\t\t" << dist[i] <<  "\n"; 
	}
}

void dijkstra(int graph[VCOUNT][VCOUNT], int src){
	int dist[VCOUNT];

	//shortest path tree set, sptSet[i] will be true if 
	//vertex i is is included in sptSet or shortest distance from
	//src to i is finalized 
	bool sptSet[VCOUNT];

	//initialize all distances to INFINITE and sptSet[] as false
	for (int i = 0; i < VCOUNT; ++i)
	{
		dist[i] = INT_MAX, sptSet[i] = false;
	}

	//distance from source is 0
	dist[src] = 0;


	//find shortest path for all vertices
	for (int count = 0; count < VCOUNT - 1; ++count)
	{
		//pick minimum distance from vertices not yet processed
		int min_distance = minDistance(dist, sptSet);

		//mark visited vertex as processed
		sptSet[min_distance] = true;

		//update dist value of adjacent vertices
		for(int v = 0; v < VCOUNT; v++){
			if(!sptSet[v] 
				&& graph[min_distance][v]
				&& dist[min_distance] != INT_MAX
				&& dist[min_distance] + graph[min_distance][v] < dist[v])
				dist[v] = dist[min_distance] + graph[min_distance][v];
		}
	}
	printSolution(dist);
}