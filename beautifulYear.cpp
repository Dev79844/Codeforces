#include<bits/stdc++.h>
using namespace std;

bool iBeautifulyear(int y){
    set<int> year;
    while(y>0){
        year.insert(y%10);
        y /= 10;
    }
    return year.size() == 4;
}


int main(){
    int y; cin>>y;
    while(true){
        y++;
        if(iBeautifulyear(y)){
            cout<<y<<endl;
            break;
        }
    }
    
}