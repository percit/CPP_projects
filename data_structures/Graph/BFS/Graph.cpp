#include <iostream>
#include <vector>
#include <queue>
#include "Graph.hpp"
//https://www.programiz.com/dsa/graph-bfs
void Graph::add_edge(int a_first, int a_second) { //tak dodajemy nowe linie miedzy node'ami, first to element parent, drugie to child
    m_adj_edges[a_first].push_back(a_second);
}

void Graph::BFS(int a_start) { // jak zaczynam to zawsze od a_start  = 0
    std::vector<bool> visited(m_vertices, false); //zaznaczamy ze wszystkie verticies jest false

    std::queue<int> queue;
    visited[a_start] = true;
    queue.push(a_start);

    while(!queue.empty()){
        a_start = queue.front(); //laduje do kolejki elementy, ktore moge dostac z danego node i usuwam ciagle head
        std::cout << a_start << " ";
        queue.pop();

        for(auto it = m_adj_edges[a_start].begin(); it != m_adj_edges[a_start].end(); ++it){ //tutaj zalatwiam, ze wszystkie po kolei odwiedzilem
            if(!visited[*it]){
                visited[*it] = true;
                queue.push(*it);
            }
        }
    }
}
