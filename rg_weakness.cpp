#include<iostream>
#include<queue>
using namespace std;

char arr[101][101];
bool visited[101][101];
int d_x[4] = {1, 0, -1, 0};
int d_y[4] = {0, 1, 0, -1};
int flag;
int n;

void BFS(int x, int y, char rgb){
    queue<pair<int, int>> q;
    visited[x][y] = true;
    q.push(make_pair(x, y));

    while(!q.empty()){
        int c_x = q.front().first;
        int c_y = q.front().second;
        q.pop();

        for(int i = 0; i < 4; i++){
            int n_x = c_x + d_x[i];
            int n_y = c_y + d_y[i];

            if(n_x >= 0 && n_y >= 0 && n_x < n && n_y < n){
                if(!visited[n_x][n_y] && arr[n_x][n_y] == rgb){
                    q.push(make_pair(n_x, n_y));
                    visited[n_x][n_y] = true;
                }
            }
        }
    }
}

int main(){
    int cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j]){
                BFS(i, j, arr[i][j]);
                cnt++;
            }
        }
    }

    cout << cnt << " ";

    cnt = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            visited[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] == 'G')
                arr[i][j] = 'R';
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(!visited[i][j]){
                BFS(i, j, arr[i][j]);
                cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}