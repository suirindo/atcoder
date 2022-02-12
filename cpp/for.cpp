#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A;
    cin >> N >> A;

    for (int i = 0; i < N; i++){
        int x;
        string op;
        cin >> op >> x;

        if ( op == "+"){
            A += x;
        }
        else if ( op == "-"){
            A -= x;
        }
        else if ( op == "*"){
            A *= x;
        }
        else if ( op == "/" && x !=0){
            A /= x;
        }
        else {
            cout << "error" << endl;
            break;
        }
        cout << i + 1 << ":" << A << endl;
        }
    }        
    // for (int i = 0; i < 3; i++){
    //     cout << "Hello for: " << i << endl;
    // }

    // for (int i = 0; i < 5; i++) {
    //     if(i == 3){
    //         cout << "nukeru" << endl;
    //         break;
    //     }
    //     cout << i << endl;
    // }
    // cout << "end" << endl;
    //     for (int i = 0; i < 5; i++) {
    //     if(i == 3){
    //         cout << "jump" << endl;
    //         continue;
    //     }
    //     cout << i << endl;
    // }
    //     cout << "end" << endl;

    //     //for文のネスト
    //     for (int i = 0; i < 2; i++){
    //         for (int j = 0; j < 2; j++) {
    //             cout << "i: " << i << ", j:" << j << endl;
    //         }
    //     }