#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n ; 
    cin>>n;
    long long num =5;
    long long ans =0;
    while(num<=n){
        ans+=n/num;
        num*=5;
    }
    cout<<ans<<endl;
}