#include<iostream>
using namespace std;

int main(){
    int v, a, b;
    int day;
    cin >> a >> b >> v;
    day = (v - b - 1) / (a - b) + 1;
    //도달해야 하는 거리는 결국 v - b 까지지만 b를 계산하지 않으니 -1 day를 해주는것
    //하지만 나눠 떨어지지 않는 경우를 위해서 뒤에 +1 day를 해줌
    cout << day;
    return 0;
}