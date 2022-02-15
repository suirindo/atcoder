#include <bits/stdc++.h>
using namespace std;

int main(){
    int N ,S;
    cin >> N >> S;
    vector<int> A(N), P(N);
    for (int i = 0; i < N; i++){
        cin >> A.at(i);
    }
    for (int i = 0; i < N; i++){
        cin >> P.at(i);
    }
    //りんご・パイナップルをそれぞれ１つずつ購入するとき合計S円になるような買い方が何通りあるか
    int count = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++){
            if(A.at(i) + P.at(j) == S){
                count++;
            }
        }
    }
    cout << count << endl;
}




/*
//多重ループの関数化
void func() {
    int sum = 0;
    for ( int i = 0; i < 10; i++){
        for ( int j = 0; j < 10; j++){

            sum += i * j;

            if (sum > 1000){
                cout << i << "," << j << endl;
                cout << sum << endl;
                return;
            }
        }
    }
}
int main(){
    func();
}
*/




/*
int main(){
    vector<int> A(3), B(3);
    for (int i = 0; i < 3; i++){
        cin >> A.at(i);
    }
    for (int i = 0; i < 3; i++){
        cin >> B.at(i);
    }

    // 答えを保持する変数
    bool answer = false;

    //プログラムを追記
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (A.at(i) == B.at(j)){
                answer = true;
            }
        }
    }
    if (answer) {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}





int main(){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "i:" << i << "j;" << j << endl;
        }
    }
}

*/