#include<iostream>
using namespace std;

int main(){
    int n;
    int start[100001];
    int end[100001];
    int count = 0, max = 0;
    int current;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> start[i] >> end[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(count == 0){
                current = end[j];
                count++;
            }

            if(current <= start[j]){
                current = end[j];
                count++;
            }
        }
        if(count > max){
            max = count;
        }
        count = 0;
    }

    cout << max;
    return 0;
}