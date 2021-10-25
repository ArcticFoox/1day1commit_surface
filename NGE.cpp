#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

int main(){
    stack<int> st;
    long long result[100001];
    long long arr[100001];
    int n;
    cin >> n;

     stack<int> st;
    long long result[1000000];
    long long arr[1000000];
    int n;
    cin >> n;

    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }

    // for(int i = 0; i < n; i++){
    //     for(int j = n - 1; j >= i; j--){
    //         if(arr[i] < arr[j]){
    //         st.push(arr[j]);
    //         }
    //     }

    //     if(!st.empty()){
    //         result[i] = st.top();
    //         while (!st.empty()){
    //             st.pop();
    //         }        
    //     }

    //     else{
    //         result[i] = -1;
    //     }
    // }

    // for(int i = 0; i < n; i++){
    //     cout << result[i] << " ";
    // }

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

	for (int i = n - 1; i >= 0; i--)
	{
		while (!st.empty() && st.top() <= arr[i])
			st.pop();

		if (st.empty()) result[i] = -1;
		else result[i] = st.top();

		st.push(arr[i]);
	}
	// 정답 출력
	for (int i = 0; i < n; i++)
		cout << result[i] << " ";

    return 0;
} // 시간초과 이유 찾기

//https://cocoon1787.tistory.com/347