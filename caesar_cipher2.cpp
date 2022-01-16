#include<iostream>
using namespace std;

int main(){
    string str;
    int n;
    cin >> str;
    cin >> n;
    for(int i = 0; i < str.size(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(str[i] + n > 'z'){
                str[i] -= 26;
            }
            str[i] += n;
        }
        else{
            if(str[i] + n > 'Z'){
                str[i] -= 26;
            }
            str[i] += n;
        }
    }
    cout << str;
    return 0;
}