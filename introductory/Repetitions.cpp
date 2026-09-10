#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    string s;
    cin>>s;
    int n = s.size();
    int ans =1;
    int temp =1;
    for(int i =0;i<n;i++){
        if(s[i]==s[i-1]){
            temp++;
            ans = max(ans,temp);

        }
        else{
            temp=1;
        }
    }
    cout<<ans<<endl;
}