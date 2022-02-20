#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    if( b - a == 1 || b - a == 9) cout << "Yes" << endl;
    else cout << "No" << endl;
}



/*
int main(){
    int a, b;
    cin >> a >> b;
    string ans = "";

    if ( a == b + 1){
        ans = "Yes";
    }
    else if( a == b - 1){
        ans = "Yes";
    }
    else if( a == 1 && b == 10){
        ans = "Yes";
    }
    else{
        ans = "No";
    }
    cout << ans << endl;
}
*/