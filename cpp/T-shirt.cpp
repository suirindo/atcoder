#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int A, B, C, X;
    cin >> A >> B >> C >> X;
    
    if ( X <= A ){
        printf("%.12lf\n", 1.0);} // 実数を小数点以下12桁出力 http://netsu-n.mep.titech.ac.jp/~Kawaguchi/cpp/conout.html
        else if (X <= B){
            double res = C;
            res /= (B - A);
            printf("%.12lf\n", res);
        }
        else{
            printf("%.12lf\n", 0.0);
        }
        return 0;
}

/*
int main(){
    double A, B, C;
    int X;
    cin >> A >> B >> C >> X;
    double ans = 0;

    if( X == 1000 ){
        ans = 0.0;
        }else if( X <= A) {
        ans = 1.0;
    }else if( A < X <= B ) {
        ans = C / (B - A);

    }else ans = 0;

    cout << ans << endl;
}

*/