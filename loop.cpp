#include<iostream>
using namespace std;

int main(){
    int n;
    int k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || i == n - 1 || j == 0 || j == n - 1){
                cout << "*";
            }

            else if((i + j) % k == 0){
                cout << "*";
            }

            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
}