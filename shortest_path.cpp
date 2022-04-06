#include<iostream>
#include<vector>
#include<queue>
using namespace std;

const int INF = 987654321;

vector<pair<int, int>> arr[20010];
int d[20010];

void dijkstra(int start){
    d[start] = 0;
    priority_queue<pair<int, int>> pq;
    pq.push(make_pair(start, 0));
    while(!pq.empty()){
        int current = pq.top().first;
        int distance = -pq.top().second;
        pq.pop();
        if(d[current] < distance) continue;
        for(int i = 0; i < arr[current].size(); i++){
            int next = arr[current][i].first;
            int nextDistance = distance + arr[current][i].second;
        
            if(nextDistance < d[next]){
                d[next] = nextDistance;
                pq.push(make_pair(next, -nextDistance));
            }
        }
    }
}

int main(){
    int V, E, begin;

    cin >> V >> E >> begin;

    for(int i = 1; i <= V; i++){
        d[i] = INF;
    }

    for(int i = 0; i < E; i++){
        int u, v, w;
        cin >> u >> v >> w;
        arr[u].push_back(make_pair(v, w));
    }

    dijkstra(1);

    for(int i = 1; i <= V; i++){
        if(d[i] == INF)
            cout << "INF\n";
        else
            cout << d[i] << "\n";
    }
    return 0;
}