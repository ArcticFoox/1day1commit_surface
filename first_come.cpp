#include<iostream>
using namespace std;

// int main(){
//     bool arr[501] = { 0, };
//     int cnt = 0;
//     int n;
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         int m, k;
//         cin >> m >> k;
//         for(int j = 0; j < m; j++){
//             int p;
//             cin >> p;
//             if(!arr[p]) arr[p] = true;

//             if(arr[p]) cnt++;
//         }
//         cout << cnt << "\n";
//         cnt = 0;
//         for(int j = 0; j < m; j++){
//             arr[j] = false;
//         }
//     }
//     return 0;
// }

int k,p,m,n;
int main() {
    cin >> k;
    while (k--)
    {
        cin >> p >> m;
        int *a = new int[m];
        for (int i = 0; i < m; i++)
            a[i] = 0;
        int ans = 0;
        for (int i = 1; i <= p; i++)
        {
            cin >> n;
            a[n-1]++;
        }
        for (int i = 0; i < m; i++)
        {
            if (a[i] > 1)
                ans += a[i] - 1;
        }
        cout << ans << '\n';
    }
    return 0;
}