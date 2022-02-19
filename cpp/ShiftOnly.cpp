#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    vector<int> data(N);
    cin >> N;
    int counter = 0;
    for (int i = 0; i < N; i++){
        cin >> data.at(i);
    }
    for (int i = 0; i < N; i++){
        if (data.at(i) % 2 == 0){
            counter++;
        }else{
            break;
        }
    }
    cout << counter << endl;
}
