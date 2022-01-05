#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 0; cin >> n;
    while (n > 0) {
        if (n > 5) n -= 5;
        else n = 0;
        count++;
    }
    cout << count << '\n';

    return 0;
}