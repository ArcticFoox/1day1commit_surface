#include<iostream>
using namespace std;

int main(){
    int n, x;
    int a, b;
    int cnt = 0;
    cin >> n >> x;

    for(int i = 0; i < n; i++){
        cin >> a >> b;

        if(a > b && x >= 5000){
            cnt += a;
            x -= 5000;
        }

        else if(a < b && x >= 1000){
            cnt += b;
            x -= 1000;
        }

        else{
            cnt += b;
            x -= 1000;
        }
    }

    cout << cnt;
    return 0;
}