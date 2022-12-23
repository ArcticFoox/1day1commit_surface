#include<string>
#include<vector>
#include<algorithm>

using namespace std;

string solution(string s){
    string answer = "";

    string str = "";
    vector<int> v;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            v.push_back(stoi(str));
            str.clear();
        }
        else{
            str += s[i];
        }
    }
    if(str != ""){
        v.push_back(stoi(str));
    }

    sort(v.begin(), v.end());
    answer += to_string(v.front()) + " ";
    answer += to_string(v.back());
    return answer;
}