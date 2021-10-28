#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef long long ll;

const ll MOD = 1000000007LL;
int n, k;

ll pow(ll a, ll b) {
    if(b == 0) return 1;
    if(b % 2 > 0) return (pow(a, b - 1) * a) % MOD;
    ll half = pow(a, b / 2) % MOD;
    return(half * half) % MOD;
}

int main(){

    scanf("%d %d", &n, &k);
    ll A = 1, B = 1;
    for(ll i = 1; i <= n; i++){
        A *= i;
        A %= MOD;
    }
    for(ll i = 1; i <= k; i++){
        B *= i;
        B %= MOD;
    }
    for(ll i = 1; i <= n - k; i++){
        B *= i;
        B %= MOD;
    }

    ll B2 = pow(B, MOD - 2);
    ll ans = A * B2;
    ans %= MOD;
    printf("%ll", ans);

    return 0;
}
//https://m.blog.naver.com/hongjg3229/221650178981