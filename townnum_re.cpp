#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;

int arr[25][25] = { 0, };
bool visited[25][25] = { 0, };
int n;
int x[4] = {0, 0, -1, 1};
int y[4] = {-1, 1, 0, 0};
vector<int> v;
int cnt;

void BFS(int a, int b){
    queue<pair<int, int>> q;
    visited[a][b] = true;
    q.push(make_pair(a, b));
    cnt++;
    
    while(!q.empty()){
        int q_x = q.front().first;
        int q_y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int next_x = q_x + x[i];
            int next_y = q_y + y[i];

            if(next_x >= 0 && next_x < n && next_y >= 0 && next_y < n){
                if(visited[next_x][next_y] == false && arr[next_x][next_y] == 1){
                    q.push(make_pair(next_x, next_y));
                    visited[next_x][next_y] = true;
                    cnt++;
                }
            }
        }
    }
}

int main(){
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%1d", &arr[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 1 && visited[i][j] == false){
                BFS(i, j);
                v.push_back(cnt);
                cnt = 0;
            }
        }
    }

    cout << v.size() << "\n";
    sort(v.begin(), v.end());

    for(int i = 0; i < v.size(); i++){
        cout << v[i] << "\n";
    }
    return 0;
}   