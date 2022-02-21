#include <bits/stdc++.h>
using namespace std;
/*
和が xx になる 33 つの数の組み合わせの最後の数は xx から 22 つめまでの数の和を引けば計算できる」という考え方を使って
計算量を O(n^3)O(n3) から O(n^2)O(n2)に減らしました。
*/


int main(){
    int n, x;
    while(cin >> n >> x){
        if( n == 0 && x == 0)
        return 0;
    int cnt = 0;
    for(int i = 1; i <=n; ++i) {
        for(int j = i+1; j <= n; ++j) {
            int k = x -i -j;
            if(j < k && k <= n)
            ++cnt;
        }
    }
    cout << cnt << endl;
  }

}
/*
int main(){
    int n, x;
    while(cin >> n >> x){
        if (n == 0 && x == 0)
        return 0;
    int cnt = 0;

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++ ){
                if( i + j + k == x){
                    ++cnt;
                }
            }
        }
    }
    cout << cnt << endl;
}
}

*/
