#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector<int> arr;
    vector<int> com_arr;
    int cnt = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        arr.push_back(a);
        com_arr.push_back(a);
    }

    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());

    for (int i = 0; i < n; i++){
        auto it = lower_bound(arr.begin(), arr.end(), com_arr[i]);
        cout << it - arr.begin() << ' ';
    }
    

    return 0;
}
//https://donggoolosori.github.io/2020/09/26/boj-18870/