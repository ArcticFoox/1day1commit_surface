#include<iostream>
using namespace std;

int main(){
    bool d_x[101] = { 0, };
    bool d_y[101] = { 0, };
    int x_cnt = 1, y_cnt = 1;
    int x_max = 0, y_max = 0;
    int x, y;
    int n;

    cin >> x >> y;

    cin >> n;

    for(int i = 0; i < n; i++){
        int d, num;

        cin >> d >> num;

        if(d == 0){
            d_y[num] = true;
        }
        else if(d == 1){
            d_x[num] = true;
        }
        else{
            cout << "error : d : 27line";
        }
    }

    for(int i = 1; i < x; i++){
        if(d_x[i]){
           x_cnt = 1;
        }
        else{
            x_cnt++;
        }

        if(x_cnt > x_max){
            x_max = x_cnt;
        }
    }

    for(int i = 1; i < y; i++){
        if(d_y[i]){
            y_cnt = 1;
        }
        else
            y_cnt++;

        if(y_cnt > y_max){
            y_max = y_cnt;
        }
    }

    cout << x_max << y_max;
    return 0;
}