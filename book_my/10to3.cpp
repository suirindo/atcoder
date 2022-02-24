#include <bits/stdc++.h>
using namespace std;

int a;
string ans = "";

int main(){
    cin >> a;   
    while( a >= 1){
        if( a % 3 == 0) ans = "0" + ans;
        if( a % 3 == 1) ans = "1" + ans;
        if( a % 3 == 2) ans = "2" + ans;
        a = a / 3;
    }
cout << ans << endl;
return 0;
}