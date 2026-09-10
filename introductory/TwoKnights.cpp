#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n ;
    cin>>n;
    vector<long long>v(n);
    for(int i =1;i<=n;i++){
        if(i==1){
            v[i-1]=0;
        }
        else if(i==2){
            v[i-1]=6;
        }
        else{
            long long moves = 1LL*i*i;
            moves = (moves*(moves-1))/2;
            long long remove =0;
            remove = (i-2)*(i-1)*4;
            moves-=remove;
            v[i-1]= moves;
        }
    }
    for(int i =0;i<n;i++){
        cout<<v[i]<<endl;
    }
}