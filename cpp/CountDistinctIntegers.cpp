#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int d[1100];

    cin >> N;
    for (int i = 0; i < N; i++) cin >> d[i];

    int num[100] = {0};
    for (int i = 0; i < N; i++){
        num[d[i]]++;
    }
    int res = 0; 
    for (int i = 1; i <= 1000; i++){ 
        if (num[i]) { 
            res++;
        }
    }
    cout << res - 1 << endl;
}