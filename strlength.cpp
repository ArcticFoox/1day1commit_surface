#include<iostream>
#include<string>
using namespace std;

int main(){
    string a;
    int cnt = 0;
    cin >> a;

    for(int i = 0; i < a.size(); i++){
        cnt++;
    }
    cout << cnt;
    return 0;
}