#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ll w; ll k; ll n;
    cin>>k>>n>>w;
    ll sum = 0; ll mon;
    for(int i=1; i<=w; i++){
        sum += k*i;
    }
    if(sum>n) cout<<sum-n<<endl;
    else cout<<"0"<<endl;


}