#include<iostream>
using namespace std;

int main(){
    int n, in;
    int count = 0;
    int coin[10];
    int min = 1000000;
    cin >> n >> in;

    for(int i = 0; i < n; i++){
        cin >> coin[i];
    }
    
    for(int i = n - 1; i >= 0; i--){
        if(in / coin[i] != 0){
            count += in / coin[i];
            in %= coin[i];
            if(in == 0){
                break;
            }
        }
    }
    cout << count << "\n";
    return 0;
}