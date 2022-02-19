#include <bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    double H;
    cin >> H;
    double ans = 0;
    ans = sqrt(H * (12800000 + H));

    cout << fixed << setprecision(9) << ans << endl;
}