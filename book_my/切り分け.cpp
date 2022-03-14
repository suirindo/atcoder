#include <bits/stdc++.h>
using namespace std;

int A, B, ans = 0;

// 小問題tを解く関数
bool shou_mondai(int t){
    int cl = (A + t - 1) / t; // A/tの小数点以下切り下げ
    int cr = B / t; // B / tの小数点以下切り捨て
    if(cr - cl >= 1) return true;
    return false;
}

int main(){
    cin >> A >> B;
    for(int i = 1; i <= B; i++) {
        if(shou_mondai(i) == true) ans = i;
    }
    cout << ans << endl;
    return 0;
}
