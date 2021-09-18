#include <iostream>
#include <vector>
#include <queue>
using namespace std;

const int MAX = 20000 + 1;
const int INF = 987654321;

int v, e, k;
vector<pair<int, int>> graph[MAX];

vector<int> DA(int start, int vertex){
    vector<int> distance(vertex, INF);
    distance[start] = 0;

    priority_queue<pair<int, int>> pq;
    pq.push(make_pair(0, start));

    while(!pq.empty()){
        int cost = -pq.top().first;
        int curVertex = pq.top().second;
        pq.pop();

        if(distance[curVertex] < cost)
            continue;
        
        for(int i = 0; i < graph[curVertex].size(); i++){
            int neighbor = graph[curVertex][i].first;
            int neighborDistance = cost + graph[curVertex][i].second;

            if(distance[neighbor] > neighborDistance){
                distance[neighbor] = neighborDistance;
                pq.push(make_pair(-neighborDistance, neighbor));
            }
        }
    }

    return distance;
}

int main() {
    cin >> v >> e >> k;

    v++;

    for(int i = 0; i < e; i++){
        int source, destination, cost;
        cin >> source >> destination >> cost;

        graph[source].push_back(make_pair(destination, cost));
    }

    vector<int> result = DA(k, v);

    for(int i = 1; i < v; i++){
        if(result[i] == INF)
            cout << "INF\n";
        else
            cout << result[i] << "\n";
    }

    return 0;
}  
//https://jaimemin.tistory.com/555