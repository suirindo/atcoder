//ABC239B
//切り捨て除算

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long X;
    cin >> X;
    cout << X / 10 - (X % 10 < 0) << "\n";
}


/*
int main(){
    long long X;
    cin >> X;
    if (X < 0 and X % 10 != 0) {
        cout << X / 10 -1 << "\n";
    }else{
        cout << X / 10 << "\n";
    }
}
*/