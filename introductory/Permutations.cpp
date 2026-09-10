#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    int n;
    cin>>n;
    if(n  ==1){
        cout<<1<<endl;
    }
    else if(n<4){
        cout<<"NO SOLUTION";
    }
    else{
        int temp =2;
        vector<int>v;
        while(temp<=n){
            v.push_back(temp);
            temp+=2;

        }
        temp=1;
        while(temp<=n){
            v.push_back(temp);
            temp+=2;   
             }
             for(int i =0;i<v.size();i++){
                cout<<v[i]<<" ";
             }
    }
}
