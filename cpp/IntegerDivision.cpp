#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;

    if(x>0){
        ansX = long(x / 10);
        cout << ansX << endl;
    }else if (x<0)    
    {
        ansY = float(floor(x / 10));
        cout << floor(x / 10) << endl;
    }
}


//long にすると、ラストいける