#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

typedef long long ll;

ll arr[5][5];
ll tmp[5][5];
ll ans[5][5];
int n;
ll b;

void print_arr(ll arr[5][5]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

void matrix_multi(ll x[5][5], ll y[5][5]){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            tmp[i][j] = 0;
            for(int k = 0; k < n; k++){
                tmp[i][j] += (x[i][k] * y[k][j]);
            }
            tmp[i][j] %= 1000;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            x[i][j] = tmp[i][j];
        }
    }
}

int main(){
    cin >> n >> b;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
        ans[i][i] = 1;
    }

    while(b > 0){
        if(b % 2 == 1){
            matrix_multi(ans, arr);
        }
        matrix_multi(arr, arr);
        b /= 2;
    }

    print_arr(ans);

    return 0;

}
//https://cocoon1787.tistory.com/293