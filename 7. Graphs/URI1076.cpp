#include <iostream>
#include <vector>
#include <sstream>
#include <stack>
#include <algorithm>
#include <deque>
#include <map>
#include <cmath>
#include <cstdio>
#include <cstring>
#include<bits/stdc++.h>
#include <fstream>
#include<bits/stdc++.h>

#define BRANCO 0
#define CINZA 1
#define PRETO 2

using namespace std;

// Graph class represents a directed graph
// using adjacency list representation
int tempo=-1;


class Graph
{
    int V;    // Número de vertices
    list<int> *adj; // lista de adjacencia
    void DFSUtil(int v, bool visited[]); // função de DFS
public:
    Graph(int V);   // Construtor
    void addEdge(int v, int w); // função para adicionar a aresta
    void DFS(int v);
};

Graph::Graph(int V) //definir a função do grafo
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w) // definir a função para aresta
{
    adj[v].push_back(w); // Adicona a lista
}

void Graph::DFSUtil(int v, bool visited[])
{
    tempo++;
    visited[v] = true;

    list<int>::iterator it;
    for (it = adj[v].begin(); it != adj[v].end(); ++it)
        if (!visited[*it]) {
            DFSUtil(*it, visited);
        }
}

void Graph::DFS(int v)
{
    // marcar todos os vertices como nãovisitados
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;

    DFSUtil(v, visited);
}



int main()
{

    int t=0, n=0, vv=0, aa=0, v=0, a=0;
    cin>>t;

    for (int i = 0; i < t; ++i) {
        cin>>n;
        cin>>vv>>aa;
        Graph g(vv);

        for (int j = 0; j < aa; ++j) {
            cin>>v>>a;
            g.addEdge(v, a);
            g.addEdge(a, v);
        }
        g.DFS(n);
        cout <<tempo*2 << endl;
        tempo = -1;
    }

    return 0;
}
