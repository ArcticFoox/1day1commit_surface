#include<iostream>
using namespace std;

int Rev(int n){
    int r = 0;
    while (n) r *= 10, r += n % 10, n /= 10;
    return r;
}

int main(){
    int a, b;

    cin >> a >> b;

    cout << Rev(Rev(a) + Rev(b));
    return 0;
}