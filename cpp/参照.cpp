#include <bits/stdc++.h>
using namespace std;

void min_and_max(int a, int b, int c, int &minimum, int &maximum) {
    minimum = min(a, min(b, c)); // 最小値をminimumの参照先に代入
    maximum = max(a, max(b, c));
}

int main() {
    int minimum, maximum;
    min_and_max(3, 1, 5, minimum, maximum);
    cout << "minimum: " << minimum << endl;
    cout << "maximum: " << maximum << endl;
}


/*
*/
/*
int g(int &x){
    x = x * 2;
    return x;
}

int main(){
    int a = 3;
    int b = g(a);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

int f(int x){
        x = x * 2;
        return x;
    }
int main(){
        int a = 3;
        int b = f(a);

        cout << a << endl;
        cout << b << endl;
}

int main(){
    int a = 3;
    int &b = a;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    b = 5;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

*/