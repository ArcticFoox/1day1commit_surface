#include<iostream>
#include<vector>
using namespace std;

int main(){
    int dp[11] = { 0, };
    int n, t;

    cin >> n;

    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for(int i = 0; i < n; i++){
        cin >> t;
        for(int j = 3; j < t; j++){
            dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3]; 
        }
        cout <<dp[t - 1] << "\n";
    }
    return 0;
}
//https://blog.naver.com/PostView.nhn?blogId=vjhh0712v&logNo=221470862600