// ABC 086C
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int N[110], X[11000], a[110], b[110];
    cin >> N, X;
    for (int i = 0; i < N; i++) cin >> a[i+1] >> b[i+1];

    bool can = true;
    


    for (int i = 0; i < N; i++){
        int dt = t[i+1] - t[i];
        int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        if (dt < dist) can = false;
        if (dist % 2 != dt % 2) can = false; // dist と dt の偶奇は一致する必要がある
    }

    if(can) cout << "Yes" << endl;
    else cout << "No" << endl;
}