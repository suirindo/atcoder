// C++で用意されている、関数等がまとまっているもののことをSTLという
// StandardTemplateLibrary

#include <bits/stdc++.h>
using namespace std;

int main(){

    // int a, b, c;
    // cin >> a >> b >> c;

    // int maximum = max(max(a, b), c);
    // int minimum = min(min(a, b), c);

    // cout << maximum - minimum << endl;

    //min関数
    int a = 10, b = 5;
    int answer = min(a, b);

    cout << answer << endl;
    //reverse関数
    vector<int> vec = {1,5,3};
    reverse(vec.begin(), vec.end());

    for (int i = 0; i < vec.size(); i++){
        cout << vec.at(i) << endl;
    }

}