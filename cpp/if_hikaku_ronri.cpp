#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    if(x < 10) {
        cout << "xは10より小さい" << endl;
    }
    else if ((10 < x) && (x < 20) ) {
        cout << "xは20より小さい" << endl;
    }
    else {
        cout << "xは20より大きい" << endl;
    }
}