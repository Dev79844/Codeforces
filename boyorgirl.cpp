#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    set<char> name(begin(s), end(s));

    int len = name.size();

    if(len%2 == 0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
}