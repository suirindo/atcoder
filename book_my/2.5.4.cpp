#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    for (int i = 2; i <= x - 1; i++){
        if ( x % i == 0) return false; //自分自身以外で割り切れる場合、素数ではない
    }
    return true;
}

int main(){
    int N;
    cin >> N;
    
    for (int i = 2; i <= N; i++){
        if (isPrime(i) == true) {
            if ( i >= 3) cout << " ";
            cout << i;
    }
    }
    cout << endl;
    return 0;
}
/*
bool isPrime(int num){
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int N, x;
    cin >> N;
    list <int> ans;

    for (int i = 1; i <= N; i++){
        x = isPrime(i);
        ans.push_back(x);
    }
    ans.sort();
    cout << ans << endl;
}
*/