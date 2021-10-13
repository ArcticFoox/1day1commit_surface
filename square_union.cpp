#include<iostream>
using namespace std;


int main(){
    bool arr[101][101] = {};
    int x, y;
    int x2, y2;
    int cnt = 0;

    for(int i = 0; i < 4; i++){
        cin >> x >> y >> x2 >> y2;

        for(int j = y; j < y2; j++){
            for(int k = x; k < x2; k++){
                arr[k][j] = 1;
            }
        }
    }

    for(int j = 1; j <= 100; j++){
            for(int k = 1; k <= 100; k++){
                if(arr[k][j] == 1)
                   cnt++;
            }
    }
    cout << cnt << "\n";
    return 0;
}