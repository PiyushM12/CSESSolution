#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    vector<int>v(n-1);
    long long temp=0;
    for(int i =0;i<n-1;i++){
        cin>>v[i];
        temp+=v[i];
    }
    long long sum = (1LL*n*(n+1))/2;
    cout<<sum-temp<<endl;
}