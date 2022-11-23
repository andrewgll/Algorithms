#include <iostream>
#include <string.h>

#include "dfs.h" 
#include "bfs.h"
#include "dijkstra.h"
#include "bubble_sort.h"
#include "binary_search.h"
#include "insertion_sort.h"
#include "heap_sort.h"
#include "lcs.h"
void DFS(){
	Graph_DFS g;
	g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    std::cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
 
    // Function call
    g.DFS(2);
 
}
void BFS() {
	  // Create a graph given in the above diagram
    Graph_BFS g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    std::cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2) \n";
    g.BFS(2);
 
}
void dijkstra()
{
    int graph[VCOUNT][VCOUNT] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                      { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };
 

    dijkstra(graph, 0);
 
}
void binSearch(){

    std::vector<int> v = { 1, 3, 4, 5, 6 };
    std::cout << "Vector for findings: \n";
    for(int i = 0; i<v.size();i++){
        std::cout << v[i] << " ";
    }
    int To_Find = 1;
    std::cout << "\nItem to be found: " << To_Find << "\n";
    binary_search(v, To_Find);
    To_Find = 6;
    std::cout << "\nItem to be found: " << To_Find << "\n";
    binary_search(v, To_Find);
    To_Find = 10;
    std::cout << "\nItem to be found: " << To_Find << "\n";
    binary_search(v, To_Find);
}
void bubbleSort(){
    int arr[] = { 5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr);
    std::cout << "Sorted array: \n";
    printArray(arr);
}
void insertionSort(){
     int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, N);
    print_array(arr, N);

}
void heapSort(){
      int arr[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    heapify(arr, N, 0);
 
    std::cout << "Sorted array is \n";
    print_array(arr, N);
}
void lcs_fun(){
    char X[] = "AGGTAB";
    char Y[] = "GXTXAYB";

    int m = strlen(X);
    int n = strlen(Y);

    std::cout << "Length of LCS is " <<  lcs( X, Y, m, n);
}
int main() {
    lcs_fun();
    //BFS();
    //DFS();
    //dijkstra();
    //binSearch();
	//bubbleSort();
    //insertionSort();
    return 0;
}