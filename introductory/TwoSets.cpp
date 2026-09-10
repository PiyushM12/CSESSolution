#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a,b;
    long long sum = (1LL*(n)*(n+1))/2;
    if(sum%2!=0) {
        cout<<"NO"<<endl;
    }
    else{
         sum/= 2;
        for(int i =n;i>0;i--){
            if(sum-i>=0){
                sum-=i;
                a.push_back(i);
            }
            else{
                b.push_back(i);
            }
        }
        if(sum!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<a.size()<<endl;;
            for(int i =0;i<a.size();i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            cout<<b.size()<<endl;
            for(int i =0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
        }
    }
}