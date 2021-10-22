#include<iostream>
using namespace std;

int sum(int cnt){
    int t = 0;
    while(cnt){
        t += cnt;
        cnt--;
    }
    return t;
}

int main(){
    string name;
    int cnt = 0;
    int t = 0;
    cin >> name;

    for(int i = 0 ; i < name.size(); i++){
        if(name.at(i) == 'O'){
            cnt++;
        }
        else{
            t += sum(cnt);
            cnt = 0;
        }
    }

    cout << t << "\n";

    return 0;
}