#include<iostream>
using namespace std;

int arr[1000001] = { 0, 1, 2 };

int find(int n){
    int &result = arr[n];

    if(n <= 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else if(result){
        return result;
    }
    else{
       return result = (find(n - 1) + find(n - 2)) % 15746;
    }
}

int main(){
    int n;

    cin >> n;

    cout << find(n);

    return 0;
}