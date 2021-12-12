#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i <= n; i++){
        string str;
        getline(cin, str, '\n');

        if(i == 0)
            continue;
            
        if(str[0] >= 'a'){
            str[0] -= 32;
        }

        cout << str << '\n';

    }
    return 0;
}