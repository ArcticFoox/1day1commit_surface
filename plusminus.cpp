#include<iostream>
using namespace std;

int main(){
    int absolutes[1000];
    bool signs[1000];
    int n;
    string str;
    int sum = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> absolutes[i];
    }

    for(int i = 0; i < n; i++){
        cin >> str;
        if(str == "true"){
            signs[i] = 1;
        }
        else{
            signs[i] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        if(signs[i] == 1){
            sum += absolutes[i];
        }
        else{
            sum -= absolutes[i];
        }
    }

    cout << sum;
    return 0;
}