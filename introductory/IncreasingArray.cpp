#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    long long ans =0;
    for(int i =1;i<n;i++){
        if(v[i]>=v[i-1])continue;
        else{
            ans+=(v[i-1]-v[i]);
            v[i]=v[i-1];
        }
    }
    cout<<ans<<endl;
}