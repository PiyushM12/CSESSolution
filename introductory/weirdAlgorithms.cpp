#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
     long long n;
    cin>>n;
    vector<long long>v;
    v.push_back(n);
    while(n!=1){
     if(n%2==0){
        n/=2;
     }
     else{
        n= n*3+1;
     }
     v.push_back(n);
    }
    for(int i =0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}