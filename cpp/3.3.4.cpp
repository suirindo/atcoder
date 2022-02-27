#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

 ll N;
 ll A[200009];
 ll a = 0, b = 0, c = 0, d = 0;

int main(){
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    for(int i = 1; i <= N; i++){
    if (A[i] == 100) a += 1;
    if (A[i] == 200) b += 1;
    if (A[i] == 300) c += 1;
    if (A[i] == 400) d += 1;
}

    cout << a * d + b * c << endl;
    
}