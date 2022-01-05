#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int pos;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==1){
                pos=abs(i-2) + abs(j-2);
            }
        }
    }
    cout<<pos<<endl;

return 0;
}   