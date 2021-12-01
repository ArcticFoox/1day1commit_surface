#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        int arr[50];
        int m, min, max;
        int gap = 0;
        cin >> m;
        for(int j = 0; j < m; j++){
            cin >> arr[j];
        }

        sort(arr, arr + m, greater<>());
        min = arr[m - 1];
        max = arr[0];
        for(int j = 0; j < m - 1; j++){
            if(arr[j] - arr[j + 1] > gap){
                gap = arr[j] - arr[j + 1];
            }
        }

        cout << "Class " << i + 1 << "\n";
        cout << "Max " << max << ", Min " << min << ", Largest gap " << gap << "\n";
    }
}