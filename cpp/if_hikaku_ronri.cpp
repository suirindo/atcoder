#include <bits/stdc++.h>
using namespace std;

int main() {
        int A, B;
        string op;
        cin >> A >> op >> B;

        if ( op == "+") {
            cout << A + B << endl;
        }
        else if ( op == "-") {
            cout << A - B << endl;
        }
        else if ( op == "*") {
            cout << A * B << endl;
        }
        else if ( op == "/" && B != 0) {
            cout << A / B << endl;
            // if ( B == 0){
            //     cout << "error" << endl;
            // }
        }
        else {
            cout << "error" << endl;
        }

    // int x;
    // cin >> x;
    // if(x < 10) {
    //     cout << "xは10より小さい" << endl;
    // }
    // else if ((10 < x) && (x < 20) ) {
    //     cout << "xは20より小さい" << endl;
    // }
    // else {
    //     cout << "xは20より大きい" << endl;
    // }
    

    }
