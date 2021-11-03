#include<iostream>
#include<algorithm>
using namespace std;

struct medal{
    int num;
    int gold;
    int silver;
    int bronze;
};

bool compare(const medal &a, const medal &b){
    if(a.gold == b.gold){
        if(a.silver == b.silver){
            return a.bronze > b.bronze;
        }
        else
            return a.silver > b.silver;
    }
    else
        return a.gold > b.gold;
}

int main(){
    medal arr[1001];
    int n, k;
    int cnt = 0;
    int val = 0;
    cin >> n >> k;

    for(int i = 0; i < n; i++){
        int num, gold, silver, bronze;
        cin >> num >> gold >> silver >> bronze;
        arr[i].num = num;
        arr[i].gold = gold;
        arr[i].silver = silver;
        arr[i].bronze = bronze;
   }

    sort(arr, arr+n, compare);

    for (int i = 0; i < n; i++) {
		if (arr[i].num == k) {
			cnt = i;
			break;
		}
	}
	for (int i = cnt - 1;; i--) {
		if (arr[i].gold != arr[cnt].gold || arr[i].silver != arr[cnt].silver || arr[i].bronze != arr[cnt].bronze) {
			break;
		}
		val++;
	}
	cout << cnt - val + 1 << endl;

    return 0;
}