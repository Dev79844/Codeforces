#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin>>s;
    int cup; int cdow;
    for(int i=0; i<s.length(); i++){
        if(s[i] >= 'A' && s[i]<='Z') cup++;
        else cdow++;
    }

    if(cup>cdow){
        char ch;
        for(int i=0; i<s.length(); i++){
            ch = toupper(s[i]);
            cout<<ch;
        }
    }

    else{
        char ch;
        for(int i=0; i<s.length(); i++){
            ch = tolower(s[i]);
            cout<<ch;
        }
    }
}