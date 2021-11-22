#include<iostream>
using namespace std;

int main(){
    string name;
    bool button = false;
    cin >> name;

    for(int i = 0; i < name.size(); i++){
        if(name[i] == 'd'){
            if(name[i + 1] == 'r' && name[i + 2] == 'i' && name[i + 3] == 'i' && name[i + 4] == 'p' && i + 4 == name.size() - 1)
                button = true;
        }
    }

    if(button)
        cout << "cute";
    else
        cout << "not cute";
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;

// int main() {
// 	cin.tie(0) -> sync_with_stdio(false);

//     string S; cin >> S;
// 	if(S.size() >= 5 && S.substr(S.size() - 5, 5) == "driip") cout << "cute";
// 	else cout << "not cute";
// }
