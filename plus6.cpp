#include<iostream>
using namespace std;

int main(){
    int n;
    int m, k;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d,%d", &m, &k);
        printf("%d\n", m + k);
    }
    return 0;
}